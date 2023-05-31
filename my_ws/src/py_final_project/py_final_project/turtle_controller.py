import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
import math
from my_robot_interfaces.msg import Turtle, TurtleArray
from my_robot_interfaces.srv import CatchTurtle
from functools import partial

class TurtleController(Node):
    def __init__(self):
        super().__init__("turtle_coltroller_node")
        # self.target_x = 11.0
        # self.target_y = 7.0
        self.target_turtle_ = None
        self.pose_ = None
        self.vel_pub = self.create_publisher(Twist, "turtle1/cmd_vel", 10)
        self.pose_sub = self.create_subscription(Pose, "turtle1/pose", self.callback_turtle_pose, 10)
        self.alive_turtle_sub = self.create_subscription(TurtleArray, "alive_turtles", self.callback_alive_turtles, 10)
        self.control_loop_timer_ = self.create_timer(0.01, self.control_loop)

    def callback_alive_turtles(self, msg):
        if len(msg.turtles) > 0:
            closest_turtle = None
            closest_turtle_distance = None
            # self.target_turtle_ = msg.turtles[0]
            for t in msg.turtles:
                dx = t.x - self.pose_.x
                dy = t.y - self.pose_.y
                dist = math.sqrt(dx**2 + dy**2)
                if closest_turtle ==None or dist < closest_turtle_distance:
                    closest_turtle = t
                    closest_turtle_distance = dist
            self.target_turtle_ = closest_turtle

    def callback_turtle_pose(self, msg):
        self.pose_ = msg

    def control_loop(self):
        if self.pose_ == None or self.target_turtle_ == None:
            return

        # dist_x = self.target_x - self.pose_.x
        # dist_y = self.target_y - self.pose_.y
        dist_x = self.target_turtle_.x - self.pose_.x
        dist_y = self.target_turtle_.y - self.pose_.y
        distance = math.sqrt(dist_x**2 + dist_y**2)

        msg = Twist()
        if distance > 0.5:
            # position
            msg.linear.x = 1 * dist_x
            msg.linear.y = 1 * dist_y

            # orientation
            goal_theta = math.atan(dist_y/dist_x)
            angle_diff = goal_theta - self.pose_.theta
            if angle_diff > math.pi:
                angle_diff -= 2*math.pi
            elif angle_diff < -math.pi:
                angle_diff += 2*math.pi

            msg.angular.z = 1 * angle_diff

        else:
            msg.linear.x = 0.0
            msg.angular.z = 0.0
            self.call_catch_turtle_server(self.target_turtle_.name)

        self.vel_pub.publish(msg)
    # -----
    def call_catch_turtle_server(self, turtle_name):
        client = self.create_client(CatchTurtle, "catch_turtle")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for /kill server")
        req = CatchTurtle.Request()
        req.name = turtle_name
        future = client.call_async(req)
        future.add_done_callback(partial(self.callback_call_catch_turtle, 
                                         turtle_name = turtle_name))

    def callback_call_catch_turtle(self, future, turtle_name):
        try:
            resp = future.result()
            if not resp.success:
                self.get_logger().info("turtle " + resp.name + " escaped")
        except Exception as e:
            self.get_logger().error("service call failed! %r" % (e))

def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()