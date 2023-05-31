from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    # remap_number_topic = ("robot_news", "my_munber")
    
    robot_news_station_node0 = Node(
        package="turtlesim",
        executable="turtlesim_node"
    )

    robot_news_station_node1 = Node(
        package="py_final_project",
        executable="turtle_controller_node"
    )

    robot_news_station_node2 = Node(
        package="py_final_project",
        executable="turtle_generator_node"
    )

    ld.add_action(robot_news_station_node0)
    ld.add_action(robot_news_station_node1)
    ld.add_action(robot_news_station_node2)

    return ld