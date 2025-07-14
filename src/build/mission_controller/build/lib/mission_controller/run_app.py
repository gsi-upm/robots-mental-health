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

####################################################################
####################################################################
#
# AUTO-GENERATED Application
#
# you should not need to modify this file.
#
####################################################################

import rclpy

from rclpy.executors import MultiThreadedExecutor

import mission_controller.mission_controller


def main():
    rclpy.init()

    node = mission_controller.mission_controller.MissionController()
    executor = MultiThreadedExecutor()
    executor.add_node(node)

    try:
        executor.spin()
    except (KeyboardInterrupt, rclpy.executors.ExternalShutdownException):
        print("Goodbye!")
        node.destroy_node()


if __name__ == '__main__':
    main()
