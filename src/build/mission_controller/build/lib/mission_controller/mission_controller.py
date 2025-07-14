# Copyright (c) 2025 TODO. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import json

from rclpy.lifecycle import Node
from rclpy.lifecycle import State
from rclpy.lifecycle import TransitionCallbackReturn

from ament_index_python.packages import get_package_share_directory
from task_msgs.action import TaskControl
from ui_msgs.srv import SetUiFragment

from rclpy.action import ActionClient
from communication_skills.action import Say

from std_msgs.msg import Int16
from hri_actions_msgs.msg import Intent
from mission_controller.i18n import I18nSupport


# set by I18Support in on_configure()
def _(s): return s


class MissionController(Node):

    def __init__(self) -> None:
        """Construct the node."""
        super().__init__('app_mission_controller')

        self.get_logger().info("Initialising...")
        self._intents_sub = None
        self._timer = None

        # helper class to handle locale changes
        self.i18n = I18nSupport(self, 'mission_controller')

        self.ui_client = None  # service client to set the UI
        self.ui_update_client = None  # service client to update the UI state

        #######################################
        #
        # TODO: Add here any other variables
        # that you need in your node
        # Initialisation should happen in the
        # on_configure state.
        #

        self._counter_sub = None
        self.counter = None

        self.get_logger().info('Mission controller initialized, but not yet configured.')

    def set_ui(self, qml: str) -> None:
        """Set the UI interface."""
        ui_fragment = SetUiFragment.Request()
        ui_fragment.qml_import_path = get_package_share_directory("mission_controller") + "/.."
        ui_fragment.qml_fragment = "import mission_controller.ui 1.0\n" + qml

        self.ui_client.call_async(ui_fragment)

    def update_ui(self, qml: str) -> None:
        """Update the UI interface."""
        ui_fragment = SetUiFragment.Request()
        ui_fragment.qml_fragment = qml
        self.ui_update_client.call_async(ui_fragment)

    def on_intent(self, msg):

        self.get_logger().info("Received an intent: %s" % msg.intent)

        #######################################
        #
        # TODO: Define here how your application
        # should react when receiving an user
        # intent.
        #

        data = json.loads(msg.data) if msg.data else {}  # noqa: F841
        source = msg.source  # noqa: F841
        modality = msg.modality  # noqa: F841
        confidence = msg.confidence  # noqa: F841
        priority_hint = msg.priority  # noqa: F841

        #######################################
        #
        # If you do not need to process specific
        # intents, simply remove the corresponding
        # line(s)
        #

        if msg.intent == Intent.GREET:
            # Handle intents to greet, customised by the user
            # Refer to:
            # https://docs.pal-robotics.com/sdk-dev/speech/skills_list
            say = ActionClient(self, Say, 'say')
            say.wait_for_server()
            say_goal = Say.Goal(input=_("Hello. Nice to meet you!"))
            say.send_goal_async(say_goal)

        elif msg.intent == Intent.SAY:
            # Handle intents to say a specific text
            # Refer to:
            # https://docs.pal-robotics.com/sdk-dev/speech/skills_list
            say = ActionClient(self, Say, 'say')
            say.wait_for_server()
            say_goal = Say.Goal(input=data['object'])
            say.send_goal_async(say_goal)

        elif msg.intent == Intent.PRESENT_CONTENT:
            if "object" in data and data["object"] == "__back__":
                # An actual implementation might want to:
                # - check if a task is running, and if so, interrupt it
                # - implement a complete 'stack management' to navigate the history
                self.get_logger().info("Received intent to go back to main menu")
                self.set_ui("AppUI {}")
            else:
                # Implement content presentation: information
                # about a product, a service, etc.
                self.get_logger().error("Received intent to present unknown content")

        elif msg.intent == Intent.START_ACTIVITY:
            if "object" in data:
                task = data["object"]
                self.start_task(task)
            else:
                self.get_logger().error("Received intent to start activity without object")

        elif msg.intent == Intent.STOP_ACTIVITY:
            if "object" in data:
                self.get_logger().info("Received intent to stop activity: %s" % data["object"])
            else:
                self.get_logger().error("Received intent to stop activity without object")

        elif msg.intent == Intent.WAKEUP:
            # Handle intents to wakeup the robot
            pass

        elif msg.intent == Intent.SUSPEND:
            # Handle intents to suspend the robot
            pass

        # custom intent?
        else:
            self.get_logger().warning("I don't know how to process intent "
                                      "<%s>!" % msg.intent)

    def on_counter_reset(self, msg):
        """
        Reset the counter to a value set by the user interface.

        This illustrates how to receive a message from the UI.
        """
        self.counter = msg.data
        self.get_logger().info(f"Counter reset to {self.counter}")

    def start_task(self, task: str) -> None:
        if task == "chat":
            self.get_logger().info("Starting task: chat")
            self.launch_task('/chat_task/control', "chat_start")
        elif task == "planner":
            self.get_logger().info("Starting task: planner")
            self.launch_task('/planner_task/control', "planner_start")
        else:
            self.get_logger().warn("Task %s not implemented" % task)
            self.get_logger().warn(f"No handler for task '{task}' — ignored.")


    def launch_task(self, action_name: str, task_data: str) -> None:
        self.current_task_client = ActionClient(self, TaskControl, action_name)
        task_ok = self.current_task_client.wait_for_server(timeout_sec=1)
        if not task_ok:
            self.get_logger().error(f"Task server {action_name} not available")
            return

        goal = TaskControl.Goal()
        goal.task_data = task_data
        self.ongoing_task_goal = self.current_task_client.send_goal_async(goal)
        self.ongoing_task_goal.add_done_callback(self.goal_response_callback)


    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('task rejected the goal :(')
            return

        self.get_logger().info('Task accepted the goal :)')

        self.ongoing_task_result_future = goal_handle.get_result_async()
        self.ongoing_task_result_future.add_done_callback(self.task_finished)

    def task_finished(self, future):
        # restore the main UI
        self.set_ui("AppUI {}")

        result = future.result()
        self.get_logger().info("Task finished with status: %d" % result.status)
        self.get_logger().info("Task result: %s" % dir(result))
        if result.status == 4:
            self.get_logger().info("Task finished successfully")
            self.update_ui(
                "this.alert('Task finished successfully');")
        else:
            self.get_logger().warn("Task failed")
            self.update_ui(
                "this.alert('Task failed (canceled?)');")

    #################################
    #
    # Lifecycle transitions callbacks
    #
    def on_configure(self, state: State) -> TransitionCallbackReturn:
        """
        Configure the node.

        :return: The state machine either invokes a transition to the
            "inactive" state or stays in "unconfigured" depending on the
            return value.
            TransitionCallbackReturn.SUCCESS transitions to "inactive".
            TransitionCallbackReturn.FAILURE transitions to "unconfigured".
            TransitionCallbackReturn.ERROR or any uncaught exceptions to
            "errorprocessing"
        """
        # set the global '_' function to the translation function
        global _
        self.i18n.configure()
        _ = self.i18n.tr

        self.counter = 0
        self.get_logger().info('Mission controller configured, but not yet active.')
        return TransitionCallbackReturn.SUCCESS

    def on_activate(self, state: State) -> TransitionCallbackReturn:
        """
        Activate the node.

        Subscribe to topic and start listening to /intents topic.
        """
        self._intents_sub = self.create_subscription(
            Intent,
            '/intents',
            self.on_intent,
            10)
        self.get_logger().info("Listening for intents on %s topic" %
                               self._intents_sub.topic_name)

        self._counter_sub = self.create_subscription(
            Int16,
            '/mission_controller/my_counter',
            self.on_counter_reset,
            10)
        self.get_logger().info("Listening for counter reset on %s topic" %
                               self._counter_sub.topic_name)

        ui_service = "/ui/set_fragment"
        self.ui_client = self.create_client(SetUiFragment, ui_service)
        ui_ok = self.ui_client.wait_for_service(timeout_sec=1)
        if not ui_ok:
            self.get_logger().error(f"The UI server is not available (service {ui_service}).")
        else:
            ui_update_service = "/ui/update_state"
            self.ui_update_client = self.create_client(SetUiFragment, ui_update_service)
            ui_ok = self.ui_update_client.wait_for_service(timeout_sec=1)

            self.set_ui("AppUI {}")

        # Define a timer that fires every second to call the run function
        timer_period = 1  # in sec
        self._timer = self.create_timer(timer_period, self.run)

        self.get_logger().info('Mission controller active.')
        return super().on_activate(state)

    def on_deactivate(self, state: State) -> TransitionCallbackReturn:
        """Stop the timer to stop calling the `run` function (main task of your application)."""
        self.get_logger().info("Stopping application")

        self.destroy_client(self.ui_client)
        self.destroy_client(self.ui_update_client)
        self.destroy_timer(self._timer)
        self.destroy_subscription(self._intents_sub)
        self.destroy_subscription(self._counter_sub)

        self.get_logger().info('Mission controller deactivated.')
        return super().on_deactivate(state)

    def on_shutdown(self, state: State) -> TransitionCallbackReturn:
        """
        Shutdown the node, after a shutting-down transition is requested.

        :return: The state machine either invokes a transition to the
            "finalized" state or stays in the current state depending on the
            return value.
            TransitionCallbackReturn.SUCCESS transitions to "finalized".
            TransitionCallbackReturn.FAILURE remains in current state.
            TransitionCallbackReturn.ERROR or any uncaught exceptions to
            "errorprocessing"
        """
        self.i18n.shutdown()

        self.get_logger().info('Mission controller shutting down now.')
        return TransitionCallbackReturn.SUCCESS

    def run(self) -> None:
        """
        Background processing of your applcation.

        The main task of your application. This function will be triggered by
        the timer in the class, and only when the timer is active.
        """
        #######################################
        #
        # TODO: Implement here any background
        # task required by your mission controller
        # If application has been stopped,
        # this function will not be called
        #

        if self.counter == 0:
            return

        self.counter = max(0, self.counter - 1)
        self.get_logger().info(f"Counting down: {self.counter}")

        if self.counter == 0:
            self.get_logger().info("Counter reached 0! Reset it to resume the counting.")
