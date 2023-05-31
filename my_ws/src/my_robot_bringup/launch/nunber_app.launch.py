from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    # remap_number_topic = ("robot_news", "my_munber")
    
    robot_news_station_node0 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="C3PO",
        # remappings=[
        #     remap_number_topic
        # ]
        # parameters=[
        #     {"num_to_publish": 4},
        #     {"publish_rate": 5}
        # ]
    )

    robot_news_station_node1 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="R2D2",
        # remappings=[
        #     remap_number_topic
        # ]
        # parameters=[
        #     {"num_to_publish": 4},
        #     {"publish_rate": 5}
        # ]
    )

    robot_news_station_node2 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="Terminator",
        # remappings=[
        #     remap_number_topic
        # ]
        # parameters=[
        #     {"num_to_publish": 4},
        #     {"publish_rate": 5}
        # ]
    )

    robot_news_station_node3 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="Eva",
        # remappings=[
        #     remap_number_topic
        # ]
        # parameters=[
        #     {"num_to_publish": 4},
        #     {"publish_rate": 5}
        # ]
    )

    robot_news_station_node4 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="WallE",
        # remappings=[
        #     remap_number_topic
        # ]
        # parameters=[
        #     {"num_to_publish": 4},
        #     {"publish_rate": 5}
        # ]
    )

    smartphone_node = Node(
        package="my_py_pkg",
        executable="smartphone",
        name="robot_finder",
        # remappings=[
        #     remap_number_topic
        # ]
    )

    ld.add_action(robot_news_station_node0)
    ld.add_action(robot_news_station_node1)
    ld.add_action(robot_news_station_node2)
    ld.add_action(robot_news_station_node3)
    ld.add_action(robot_news_station_node4)
    ld.add_action(smartphone_node)

    return ld