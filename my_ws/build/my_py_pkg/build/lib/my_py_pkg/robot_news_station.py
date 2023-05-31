import rclpy
from rclpy.node import Node
from std_msgs.msg import String
class my_node(Node):
    
    def __init__(self):
        self.count = 0
        super().__init__("robot_news_station")
        self.publisher = self.create_publisher(String, "robot_news", 10)
        self.timer = self.create_timer(0.5, self.pub_fun)
        self.get_logger().info("Robot news station active->")
    
    def pub_fun(self):
        self.count += 1
        msg = String()
        msg.data = "latest news " + str(self.count)
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = my_node()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()