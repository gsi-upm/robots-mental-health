#!/usr/bin/env python
# -*- coding: utf-8 -*-

import json
import os
import rclpy

from rclpy.action import ActionServer, GoalResponse
from rclpy.lifecycle import Node
from rclpy.lifecycle import State
from ament_index_python.packages import get_package_share_directory

from rclpy.lifecycle import LifecycleNode, TransitionCallbackReturn

from task_msgs.action import TaskControl
from ui_msgs.srv import SetUiFragment
from chatbot_msgs.srv import GetResponse
from hri_actions_msgs.msg import Intent
from hri_msgs.msg import LiveSpeech
from std_msgs.msg import String
from tts_msgs.action import TTS
from rclpy.action import ActionClient

PLANNER_KEYWORDS = [
    "quiero organizar mi semana",
    "planifica mi semana",
    "necesito un plan de estudio",
    "hazme un planning",
    "organizar el estudio",
    "ayúdame a estudiar"
]

class TaskImpl(LifecycleNode):
    def __init__(self) -> None:
        super().__init__('task_chat_task')
        self.get_logger().info("Inicializando chat_task...")

        self.task_server = None
        self.ui_client = None
        self.llm_client = None
        self.tts_client = None

        self.user_input = ""
        self.waiting_for_input = True

        self.get_logger().info('chat_task iniciado, pero sin configurar todavía.')

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

        self.set_ui("ChatUI {}")

        self.get_logger().info("chat_task activo y esperando entrada")
        return super().on_activate(state)

    def on_configure(self, state) -> TransitionCallbackReturn:
        self.get_logger().info("Configurando chat_task...")

        try:
            
            self.llm_client = self.create_client(GetResponse, "/chatbot/get_response")

            self.speech_sub = self.create_subscription(
                LiveSpeech,
                "/humans/voices/anonymous_speaker/speech",
                self.on_received_speech,
                10
            )

            self.intent_pub = self.create_publisher(Intent, "/intents", 10)
            
            self.cc_pub = self.create_publisher(String, "/communication_hub/closed_captions", 10)

            self.tts_client = ActionClient(self, TTS, "/tts_engine/tts")
            self.tts_client.wait_for_server(timeout_sec=2.0)

            self.task_server = ActionServer(
                self, TaskControl, "/chat_task/control",
                goal_callback=self.on_request_goal,
                execute_callback=self.on_request_exec)

            self.get_logger().info("chat_task configurado correctamente")
            return TransitionCallbackReturn.SUCCESS

        except Exception as e:
            self.get_logger().error(f"[on_configure] Error durante configuración: {e}")
            return TransitionCallbackReturn.FAILURE

    def on_received_speech(self, msg: LiveSpeech):
        if not msg.final:
            return

        if not self.waiting_for_input:
            self.get_logger().info("No se esperaba entrada de voz, ignorando...")
            return

        spoken = msg.final.strip()
        if not spoken:
            self.get_logger().warn("Entrada de voz vacía, ignorada.")
            return

        self.user_input = spoken
        self.get_logger().info(f"Entrada recibida: {spoken}")

        if any(kw in self.user_input.lower() for kw in PLANNER_KEYWORDS):
            self.get_logger().info("Detectada intención de cambio a modo planificación. Enviando intent.")
            # Publicar intent de cambio de modo a planner
            change_mode_intent = Intent()
            change_mode_intent.intent = "__intent_change_mode__"
            change_mode_intent.data = json.dumps({"target": "planner"})
            change_mode_intent.source = Intent.UNKNOWN_AGENT
            change_mode_intent.modality = Intent.MODALITY_SPEECH
            change_mode_intent.priority = 200
            change_mode_intent.confidence = 1.0
            self.intent_pub.publish(change_mode_intent)
            
            return  # NO llamamos al LLM en este modo, cambiamos de tarea
        else:
            self.get_logger().info("Entrada de voz válida, procesando...")
        self.waiting_for_input = False
        self.call_llm_if_ready()

    def call_llm_if_ready(self):
        if not self.user_input:
            return

        # Llamada al servicio LLM para obtener respuesta
        request = GetResponse.Request()
        request.user_id = "user"
        request.model = "chat"
        request.input = self.user_input

        if not self.llm_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().error("Servicio LLM no disponible")
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


        future = self.llm_client.call_async(request) # Objeto futuro para guardar la respuesta asíncrona

        def on_llm_response(fut):
            try:
                result = fut.result()
                if not result:
                    raise RuntimeError("Respuesta vacía del LLM")

                llm_output = result.output
                
                self.get_logger().info(f"Respuesta del LLM recibida: {llm_output}")

                # Intent de feedback de final del diálogo
                if not hasattr(self, 'cc_pub'):
                    self.cc_pub = self.create_publisher(String, "/communication_hub/closed_captions", 10)

                caption = String()
                caption.data = llm_output
                self.cc_pub.publish(caption)
                self.get_logger().info(f"Información de cierre publicada: {caption.data}")

                if not hasattr(self, 'tts_client'):
                    self.tts_client = ActionClient(self, TTS, "/tts_engine/tts")
                    self.tts_client.wait_for_server(timeout_sec=2.0)

                if self.tts_client.server_is_ready():
                        goal = TTS.Goal()
                        goal.input = llm_output
                        goal.locale = "es_ES"
                        goal.voice = ""
                        self.tts_client.send_goal_async(goal)
                        self.get_logger().info(f"TTS enviado con mensaje: {goal.input}")

                else:
                    self.get_logger().warn("Servidor de TTS no disponible")


                self.waiting_for_input = True  # Esperar siguiente turno
                self.user_input = ""  # Limpiar entrada

                # Publicar intent de respuesta del chat a la UI
                intent_msg = Intent()
                intent_msg.intent = "__intent_chat_response__"
                intent_msg.data = json.dumps({"response": llm_output}, ensure_ascii=False)
                self.intent_pub.publish(intent_msg)
                self.get_logger().info("Intent __intent_chat_response__ publicado.")

            except Exception as e:
                self.get_logger().error(f"Error al procesar respuesta del LLM: {e}")
                self.waiting_for_input = True

        future.add_done_callback(on_llm_response) # Cuando esté disponible la respuesta se ejecuta el callback a on_llm_response

    def on_request_goal(self, goal_handle):
        if self._state_machine.current_state[1] != "active":
            self.get_logger().error("chat_task is not active; rejecting goal")
            return GoalResponse.REJECT
        self.get_logger().info("Accepted new chat goal")
        return GoalResponse.ACCEPT

    def on_request_exec(self, goal_handle):
        self.get_logger().warn("on_request_exec no implementado todavía.")
        goal_handle.abort()
        return TaskControl.Result(result="not implemented")

    def on_deactivate(self, state) -> TransitionCallbackReturn:
        self.get_logger().info("chat_task detenido (inactivo)")
        return super().on_deactivate(state)

    def on_shutdown(self, state) -> TransitionCallbackReturn:
        self.get_logger().info('chat_task finalizado.')
        return super().on_shutdown(state)


def main(args=None):
    rclpy.init(args=args)
    node = TaskImpl()
    rclpy.spin(node)
    rclpy.shutdown()

