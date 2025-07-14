from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    # Rutas a los launch files individuales
    planner_task_launch = PythonLaunchDescriptionSource([
        get_package_share_directory('planner_task'), '/launch/planner_task.launch.py'
    ])
    llm_bridge_launch = PythonLaunchDescriptionSource([
        get_package_share_directory('llm_bridge'), '/launch/llm_bridge.launch.py'
    ])

    # Nodo UI Server
    ui_server_node = Node(
        package='ui_server',
        executable='ui_server',
        name='ui_server',
        output='screen'
    )

    return LaunchDescription([
        IncludeLaunchDescription(planner_task_launch),
        IncludeLaunchDescription(llm_bridge_launch),
        ui_server_node
    ])

