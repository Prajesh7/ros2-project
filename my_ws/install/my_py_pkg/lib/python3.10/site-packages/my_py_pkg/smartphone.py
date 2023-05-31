import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class my_node(Node):
    def __init__(self):
        super().__init__("smartphone")
        self.subscriber = self.create_subscription(String, "robot_news", self.sub_fun, 10)
        self.get_logger().info("smartphone sub active->")
        

    def sub_fun(self, msg):
        # self.get_logger().info("recieved msg-> " + str(msg.data))
        pass

def main(args=None):
    rclpy.init(args=args)
    node = my_node()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()