import json
import os
import rclpy

from rclpy.action import ActionServer, GoalResponse
from rclpy.lifecycle import Node
from rclpy.lifecycle import State
from rclpy.lifecycle import TransitionCallbackReturn

from ament_index_python.packages import get_package_share_directory

from task_msgs.action import TaskControl
from ui_msgs.srv import SetUiFragment
from chatbot_msgs.srv import GetResponse
from hri_actions_msgs.msg import Intent
from hri_msgs.msg import LiveSpeech
from std_msgs.msg import String
from tts_msgs.action import TTS
from rclpy.action import ActionClient

from chat_logic.planner import generate_study_plan_with_deadlines

class TaskImpl(Node):
    def __init__(self) -> None:
        super().__init__('task_planner_task')

        self.get_logger().info("Inicializando planner_task...")

        self.task_server = None
        self.ui_client = None
        self.llm_client = None
        self.last_generated_plan = None

        self.user_input = ""
        self.waiting_for_input = False
        self.generate_plan = False
        self.awaiting_clarification = False

        self.clarification_count = 0

        self.get_logger().info('planner_task iniciado, pero sin configurar todavía.')

    def set_ui(self, qml: str) -> None:
       """Set the UI interface."""
       ui_fragment = SetUiFragment.Request()
       ui_fragment.qml_import_path = get_package_share_directory("ui_task") + "/.."
       ui_fragment.qml_fragment = "import ui_task.ui 1.0\n" + qml

       self.ui_client.call_async(ui_fragment)   

    def on_activate(self, state: State) -> TransitionCallbackReturn:
        ui_service = "/ui/set_fragment"
        self.ui_client = self.create_client(SetUiFragment, ui_service)
        ui_ok = self.ui_client.wait_for_service(timeout_sec=1)
        if not ui_ok:
            self.get_logger().error(f"UI server no disponible: {ui_service}")

        self.set_ui("PlannerUI {}")

        self.get_logger().info("planner_task activo y esperando entrada")
        return super().on_activate(state)

    def on_configure(self, state: State) -> TransitionCallbackReturn:
        self.get_logger().info("Configurando planner_task...")

        try:
            self.llm_client = self.create_client(GetResponse, "/chatbot/get_response")

            self.intent_sub = self.create_subscription(
                Intent, "/intents", self.on_intent_received, 10)
            
            self.speech_sub = self.create_subscription(
                LiveSpeech,
                "/humans/voices/anonymous_speaker/speech",
                self.on_received_speech,
                10
            )
            
            self.intent_pub = self.create_publisher(Intent, "/intents", 10)
            
            self.cc_pub = self.create_publisher(String, "/communication_hub/closed_captions", 10)

            self.task_server = ActionServer(
                self, TaskControl, "/planner_task/control",
                goal_callback=self.on_request_goal,
                execute_callback=self.on_request_exec)

            self.get_logger().info("planner_task configurado correctamente")
            return TransitionCallbackReturn.SUCCESS

        except Exception as e:
            self.get_logger().error(f"[on_configure] Error durante configuración: {e}")
            return TransitionCallbackReturn.FAILURE

    def on_intent_received(self, msg: Intent):
        self.get_logger().info("Received an intent: %s" % msg.intent)

        if msg.intent != "__intent_generate_plan__":
            return

        try:
            self.get_logger().info(f"Intent recibido: {msg.data}")
            data = json.loads(msg.data)
            user_input = data.get("input", "")
            if not user_input:
                self.get_logger().info("Intent sin input: esperando entrada oral...")
                self.waiting_for_input = True
                return

        except Exception as e:
            self.get_logger().error(f"Error al parsear intent: {e}")

    def on_received_speech(self, msg: LiveSpeech):
        if not msg.final:
            return

        if not self.awaiting_clarification and not self.waiting_for_input:
            self.get_logger().info("No se esperaba entrada de voz, ignorando...")
            return

        spoken = msg.final.strip()
        if not spoken:
            self.get_logger().warn("Entrada de voz vacía, ignorada.")
            return

        if self.awaiting_clarification:

            if self.clarification_count > 3:

                if not hasattr(self, 'tts_client'):
                    self.tts_client = ActionClient(self, TTS, "/tts_engine/tts")
                    self.tts_client.wait_for_server(timeout_sec=2.0)

                self.get_logger().warn("Demasiadas aclaraciones. Abandonando diálogo.")

                if self.tts_client.server_is_ready():
                    goal = TTS.Goal()
                    goal.input = "Demasiadas aclaraciones. Abandonando diálogo."
                    goal.locale = "es_ES"
                    goal.voice = ""
                    self.tts_client.send_goal_async(goal)

                    # Enviar intent para volver al menú principal
                    intent = Intent()
                    intent.intent = "__intent_present_content__"
                    intent.data = json.dumps({"object": "__back__"})
                    intent.source = Intent.UNKNOWN_AGENT
                    intent.modality = Intent.MODALITY_INTERNAL
                    intent.confidence = 1.0
                    intent.priority = 100
                    self.intent_pub.publish(intent)
                    self.get_logger().info("Finalizando planner_task tras múltiples aclaraciones.")
                else:
                    self.get_logger().warn("Servidor de TTS no disponible.")
                self.awaiting_clarification = False
                self.generate_plan = False
                return

            self.user_input = spoken
            self.get_logger().info(f"Recibida aclaración del usuario: {spoken}")
            self.awaiting_clarification = False
            self.generate_plan = True
            self.call_llm_if_ready()
            return

        if self.waiting_for_input:
            self.get_logger().info(f"Entrada recibida: {spoken}")
            self.user_input = spoken
            self.waiting_for_input = False
            self.generate_plan = True
            self.call_llm_if_ready()


    def call_llm_if_ready(self):
        if not self.generate_plan:
            return

        # Llamada al LLM para generar el plan
        self.get_logger().info("Llamando al LLM para generar el plan con input: %s" % self.user_input)
        request = GetResponse.Request()
        request.user_id = "user"
        request.model = "plan"
        request.input = self.user_input

        if not self.llm_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().error("Servicio de LLM no disponible")
            return

        # Publicar feedback textual de inicio de diálogo
        if not hasattr(self, 'intent_pub'):
            self.intent_pub = self.create_publisher(Intent, "/intents", 10)
        
        raw_input_msg = Intent()
        raw_input_msg.intent = "__raw_user_input__"
        raw_input_msg.data = json.dumps({"input": self.user_input})
        raw_input_msg.source = Intent.UNKNOWN_AGENT
        raw_input_msg.modality = Intent.MODALITY_SPEECH
        raw_input_msg.priority = 128
        raw_input_msg.confidence = 1.0
        self.intent_pub.publish(raw_input_msg)
        self.get_logger().info("Intent __raw_user_input__ publicado: " + self.user_input)


        future_llm = self.llm_client.call_async(request) # Objeto futuro para guardar la respuesta asíncrona

        def on_llm_response(fut):
            try:
                result = fut.result()
                if not result:
                    raise RuntimeError("Respuesta vacía del LLM")
                
                llm_output = json.loads(result.output)
                study_data = llm_output.get("parsed", {})
                clarification_text = llm_output.get("clarification", "")

                self.get_logger().info("Respuesta JSON del LLM recibida:")
                self.get_logger().info(json.dumps(study_data, indent=2, ensure_ascii=False))

                # Intent de feedback de final del diálogo
                if not hasattr(self, 'cc_pub'):
                    self.cc_pub = self.create_publisher(String, "/communication_hub/closed_captions", 10)

                caption = String()
                caption.data = clarification_text or "Planificación generada correctamente."
                self.cc_pub.publish(caption)
                self.get_logger().info(f"Información de cierre publicada: {caption.data}")

                # Generar el plan usando el planner
                generated = generate_study_plan_with_deadlines(study_data)
                self.last_generated_plan = generated
                self.get_logger().info("Plan generado: " + json.dumps(generated))

                # Publicar el intent con el plan generado a la UI
                intent_msg = Intent()
                intent_msg.intent = "__intent_study_plan__"
                intent_msg.data = json.dumps(generated, ensure_ascii=False)
                self.intent_pub.publish(intent_msg)
                self.get_logger().info("Intent __intent_study_plan__ publicado.")

                self.generate_plan = False # Resetear el flag

                if not hasattr(self, 'tts_client'):
                    self.tts_client = ActionClient(self, TTS, "/tts_engine/tts")
                    self.tts_client.wait_for_server(timeout_sec=2.0)

                if clarification_text:

                    self.awaiting_clarification = True

                    if self.tts_client.server_is_ready():
                        goal = TTS.Goal()
                        goal.input = clarification_text
                        goal.locale = "es_ES"
                        goal.voice = ""
                        self.tts_client.send_goal_async(goal)
                        self.get_logger().info("TTS enviado con aclaraciones: " + goal.input)
                        self.clarification_count += 1
                        self.get_logger().info(f"Aclaración #{self.clarification_count}: {goal.input}")
                    else:
                        self.get_logger().warn("Servidor de TTS no disponible.")

                else:

                    if self.tts_client.server_is_ready():
                        goal = TTS.Goal()
                        goal.input = "Plan generado con éxito. Puedes consultarlo en la interfaz. No hay necesidad de aclaraciones adicionales."
                        goal.locale = "es_ES"
                        goal.voice = ""
                        self.tts_client.send_goal_async(goal)
                        self.get_logger().info(goal.input)
                        self.clarification_count = 0
                    else:
                        self.get_logger().warn("Servidor de TTS no disponible")

                self.user_input = ""  # Limpiar entrada

            except Exception as e:
                self.get_logger().error(f"Error procesando respuesta del LLM o generando el plan: {e}")
                self.generate_plan = False

        future_llm.add_done_callback(on_llm_response) # Cuando esté disponible la respuesta se ejecuta el callback a on_llm_response

    def on_request_goal(self, goal_handle):
        if self._state_machine.current_state[1] != "active":
            self.get_logger().error("planner_task is not active, rejecting goal")
            return GoalResponse.REJECT
        self.get_logger().info("Accepted a new goal")
        return GoalResponse.ACCEPT
    

    def on_request_exec(self, goal_handle):
        self.get_logger().warn("on_request_exec no implementado todavía.")
        goal_handle.abort()
        return TaskControl.Result(result="not implemented")

    def on_deactivate(self, state: State) -> TransitionCallbackReturn:
        self.get_logger().info("planner_task detenido (inactivo)")
        self.destroy_client(self.ui_client)
        return super().on_deactivate(state)

    def on_shutdown(self, state: State) -> TransitionCallbackReturn:
        self.get_logger().info('planner_task finalizado.')
        return TransitionCallbackReturn.SUCCESS
    
