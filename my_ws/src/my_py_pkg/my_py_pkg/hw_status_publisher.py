import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from my_robot_interfaces.msg import HardwareStatus

class my_node(Node):
    
    def __init__(self):
        self.count = 0
        super().__init__("HardwareStatus_pub")
        self.publisher = self.create_publisher(HardwareStatus, "robot_news", 10)
        self.timer = self.create_timer(0.5, self.pub_fun)
        self.get_logger().info("HardwareStatus_pub active->")
    
    def pub_fun(self):
        self.count += 1
        msg = HardwareStatus()
        msg.temperature = 45
        msg.motor_status = True
        msg.debug_message = "Nothing to debug"
        # msg.data = "latest news " + str(self.count)
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = my_node()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()