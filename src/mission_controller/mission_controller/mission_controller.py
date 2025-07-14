import json

from rclpy.lifecycle import Node
from rclpy.lifecycle import State
from rclpy.lifecycle import TransitionCallbackReturn

from launch.launch_description_sources import PythonLaunchDescriptionSource
# from launch_ros.utilities import get_launch_file_directory

from ament_index_python.packages import get_package_share_directory

from ui_msgs.srv import SetUiFragment

from hri_actions_msgs.msg import Intent
from mission_controller.i18n import I18nSupport

import threading
import os
from launch import LaunchService
from launch.launch_description_sources import PythonLaunchDescriptionSource
import subprocess

# set by I18Support in on_configure()
def _(s): return s


class MissionController(Node):

    def __init__(self) -> None:
        """Construct the node."""
        super().__init__('app_mission_controller')

        self.get_logger().info("Inicializando mission_controller...")
        self._intents_sub = None

        # helper class to handle locale changes
        self.i18n = I18nSupport(self, 'mission_controller')

        self.ui_server_run = None

        self.chat_launch = None
        self.planner_launch = None
        self.llm_launch = None

        self.get_logger().info('Mission controller inicializado, pero sin configurar todavía.')

    def on_activate(self, state: State) -> TransitionCallbackReturn:
        self._intents_sub = self.create_subscription(
            Intent, '/intents', self.on_intent, 10)

        self.ui_client = self.create_client(SetUiFragment, "/ui/set_fragment")

        self.run_ui_server()

        if self.ui_client.wait_for_service(timeout_sec=1):
            self.set_ui("AppUI {}")

        self.get_logger().info('Mission controller active.')
        return super().on_activate(state)

    def on_configure(self, state: State) -> TransitionCallbackReturn:
        global _
        self.i18n.configure()
        _ = self.i18n.tr

        self.get_logger().info('Mission controller configured.')
        return TransitionCallbackReturn.SUCCESS

    def set_ui(self, qml: str) -> None:
        """Set the UI interface."""
        ui_fragment = SetUiFragment.Request()
        ui_fragment.qml_import_path = get_package_share_directory("mission_controller") + "/.."
        ui_fragment.qml_fragment = "import mission_controller.ui 1.0\n" + qml

        self.ui_client.call_async(ui_fragment)    

    def launch_component(self, package, launch_file, attr_name):
        launch_path = os.path.join(get_package_share_directory(package), 'launch', launch_file)

        if not os.path.isfile(launch_path):
            self.get_logger().error(f"No se encontró el archivo: {launch_path}")
            return

        self.get_logger().info(f"Lanzando {package}/{launch_file} con ros2 launch...")
        process = subprocess.Popen(["ros2", "launch", package, launch_file])
        setattr(self, attr_name, process)

    def run_ui_server(self):
        if self.ui_server_run is None:
            self.get_logger().info("Lanzando ui_server con ros2 run...")
            self.ui_server_run = subprocess.Popen(["ros2", "run", "ui_server", "ui_server"])

    def launch_task(self, task: str):
        self.get_logger().info("Preparando entorno para nueva tarea...")
        self.stop_tasks()

        self.run_ui_server()

        if not self.llm_launch:
            self.launch_component('llm_bridge', 'llm_bridge.launch.py', 'llm_launch')

        if task == "chat":
            self.launch_component('chat_task', 'chat_task.launch.py', 'chat_launch')
        elif task == "planner":
            self.launch_component('planner_task', 'planner_task.launch.py', 'planner_launch')
        else:
            self.get_logger().warn(f"Tarea '{task}' no reconocida.")

    def stop_ui_server(self):
        os.system("pkill -f ui_server")
        self.ui_server_run = None

    def stop_tasks(self):
        self.get_logger().info("Apagando tareas previas si las hay...")
        os.system("pkill -f chat_task")
        os.system("pkill -f planner_task")

    def shutdown_system(self):
        self.get_logger().info("Apagando todos los nodos...")
        self.stop_ui_server()
        os.system("pkill -f chat_task")
        os.system("pkill -f planner_task")
        os.system("pkill -f llm_bridge")
        os._exit(0)

    def on_intent(self, msg):
        self.get_logger().info("Intent recibido: %s" % msg.intent)
        data = json.loads(msg.data) if msg.data else {}

        if msg.intent == Intent.START_ACTIVITY:
            if "object" in data:
                self.launch_task(data["object"])
            else:
                self.get_logger().error("Intent START_ACTIVITY recibido sin objeto")

        elif msg.intent == Intent.PRESENT_CONTENT:
            if "object" in data and data["object"] == "__back__":
                self.get_logger().info("Volviendo a la pantalla principal (estado inicial)")
                self.set_ui("AppUI {}")
            else:
                self.get_logger().error("Solicitud desconocida (con contenido desconocido)")

        elif msg.intent == "__intent_change_mode__":
            target = data.get("target", "")
            if target:
                self.get_logger().info(f"Cambiando al modo: {target}")
                self.launch_task(target)
            else:
                self.get_logger().error("Intent de cambio de modo recibido sin destino")

        elif msg.intent == "__intent_shutdown__":
            self.get_logger().info("Intent de apagado recibido, cerrando aplicación")
            self.shutdown_system()

        else:
            self.get_logger().warning(f"Intent no reconocido: {msg.intent}")

    def on_deactivate(self, state: State) -> TransitionCallbackReturn:
        self.get_logger().info("Deactivating mission controller.")
        self.destroy_client(self.ui_client)
        self.destroy_subscription(self._intents_sub)
        return super().on_deactivate(state)

    def on_shutdown(self, state: State) -> TransitionCallbackReturn:
        self.i18n.shutdown()
        self.get_logger().info('Mission controller shutting down.')
        return TransitionCallbackReturn.SUCCESS
