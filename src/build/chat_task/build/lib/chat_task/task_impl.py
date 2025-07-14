#!/usr/bin/env python
# -*- coding: utf-8 -*-

import time

import rclpy
from rclpy.action import ActionServer, GoalResponse, ActionClient
from rcl_interfaces.msg import ParameterDescriptor
from ui_msgs.srv import SetUiFragment
from ament_index_python.packages import get_package_share_directory

from rclpy.lifecycle import LifecycleNode, TransitionCallbackReturn

from task_msgs.action import TaskControl
from sample_skill_msgs.action import SkillControl
from chatbot_msgs.srv import GetResponse


class TaskImpl(LifecycleNode):
    def __init__(self) -> None:
        super().__init__('task_chat_task')
        self.get_logger().info("Initialising chat_task...")

        self.task_server = None
        self.ui_client = None
        self.llm_client = None
        self.say_client = None

        self.get_logger().info('Task chat_task started, but not yet configured.')

    def set_ui(self, qml: str) -> None:
        req = SetUiFragment.Request()
        req.qml_import_path = get_package_share_directory("chat_task") + "/res/ui"
        req.qml_fragment = qml
        self.ui_client.call_async(req)

    def on_request_goal(self, goal_handle):
        if self._state_machine.current_state[1] != "active":
            self.get_logger().error("Task not active; rejecting goal")
            return GoalResponse.REJECT
        self.get_logger().info("Accepted new chat goal")
        return GoalResponse.ACCEPT

    def on_request_exec(self, goal_handle):
        self.get_logger().info("Starting chat task")

        self.set_ui("""
import QtQuick 2.15
import Ros 2.0
Item {
  Text { text: "Conversación activa con el robot"; anchors.centerIn: parent }
}
""")

        self.call_llm_and_say("Hola, ¿cómo estás?", "test_user")

        time.sleep(3)  # tiempo estimado de interacción
        goal_handle.succeed()
        result = TaskControl.Result()
        result.result = "chat completed"
        return result

    def call_llm_and_say(self, user_input, user_id):
        if not self.llm_client.service_is_ready():
            self.get_logger().error("LLM service not available")
            return

        request = GetResponse.Request()
        request.user_id = user_id
        request.input = user_input
        request.model = "chat" # Ponemos el modo a chat
        
        future = self.llm_client.call_async(request)

        def on_llm_response(future):
            if future.result():
                reply = future.result().output
                self.say_text(reply)
            else:
                self.get_logger().error("LLM service call failed")

        future.add_done_callback(on_llm_response)

    def say_text(self, text):
        goal = SkillControl.Goal()
        goal.skill_data = text
        self.say_client.send_goal_async(goal)

    def on_configure(self, state) -> TransitionCallbackReturn:
        self.task_server = ActionServer(
            self, TaskControl, "/chat_task/control",
            goal_callback=self.on_request_goal,
            execute_callback=self.on_request_exec)

        self.ui_client = self.create_client(SetUiFragment, "/ui/set_fragment")
        self.llm_client = self.create_client(GetResponse, "/chatbot/get_response")
        self.say_client = ActionClient(self, SkillControl, "/say_skill/control")

        self.get_logger().info("Task chat_task configured")
        return TransitionCallbackReturn.SUCCESS

    def on_activate(self, state) -> TransitionCallbackReturn:
        self.get_logger().info("Task chat_task is active")
        return super().on_activate(state)

    def on_deactivate(self, state) -> TransitionCallbackReturn:
        self.get_logger().info("Deactivating chat_task")
        return super().on_deactivate(state)

    def on_shutdown(self, state) -> TransitionCallbackReturn:
        self.get_logger().info("Shutting down chat_task")
        return super().on_shutdown(state)


def main(args=None):
    rclpy.init(args=args)
    node = TaskImpl()
    rclpy.spin(node)
    rclpy.shutdown()

