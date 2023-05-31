import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from turtlesim.srv import Spawn, Kill
import math
import future
from functools import partial
import random 
from my_robot_interfaces.msg import Turtle, TurtleArray
from my_robot_interfaces.srv import CatchTurtle
from std_srvs.srv import Empty

class TurtleGenerator(Node):
    def __init__(self):
        super().__init__("turtle_generator_node")
        self.turtle_name_prefix_ = "turtle"
        self.turtle_counter_ = 1 
        self.alive_turtles_ = []
        self.spawn_client = self.create_client(Spawn, "spawn")
        self.spawn_rate = self.create_timer(2.0, self.spawn_new_turtle)
        self.turtle_pub = self.create_publisher(TurtleArray, "alive_turtles", 10)
        self.catch_turtle_service = self.create_service(CatchTurtle, "catch_turtle", self.callback_catch_turtle)
    
    def callback_catch_turtle(self, request, response):
        self.call_kill_server(request.name)
        response.success = True
        return response  

    def pub_alive_turtles(self):
        msg = TurtleArray()
        msg.turtles = self.alive_turtles_
        self.turtle_pub.publish(msg)

    def spawn_new_turtle(self):
        self.turtle_counter_ += 1
        name = self.turtle_name_prefix_ + str(self.turtle_counter_)
        x = random.uniform(0.0, 10.0)
        y = random.uniform(0.0, 10.0)
        theta = random.uniform(0.0, 2*math.pi)
        self.call_spawn_server(name, x, y, theta)
  
    def call_spawn_server(self, turtle_name, x, y, theta):
        while not self.spawn_client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for /spawn server")
        req = Spawn.Request()
        req.x = x
        req.y = y
        req.theta = theta
        req.name = turtle_name
        
        future = self.spawn_client.call_async(req)
        future.add_done_callback(partial(self.callback_call_spawn, 
                                         turtle_name = turtle_name, x = x, y = y, theta = theta))

    def callback_call_spawn(self, future, turtle_name, x, y, theta):
        try:
            resp = future.result()
            if resp.name != "":
                self.get_logger().info("turtle " + resp.name + " is now alive")
                new_turtle = Turtle()
                new_turtle.name = resp.name
                new_turtle.x = x
                new_turtle.y = y
                new_turtle.theta = theta
                self.alive_turtles_.append(new_turtle)
                self.pub_alive_turtles()
        except Exception as e:
            self.get_logger().error("service call failed! %r" % (e))

    # ------
    def call_kill_server(self, turtle_name):
        client = self.create_client(Kill, "kill")
        clear_client = self.create_client(Empty, "clear")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for /kill server")
        req = Kill.Request()
        req.name = turtle_name

        clear_req = Empty.Request()
        
        future = client.call_async(req)
        future.add_done_callback(partial(self.callback_call_kill, 
                                         turtle_name = turtle_name))
        clear_client.call_async(clear_req)

    def callback_call_kill(self, future, turtle_name):
        try:
            future.result()
            for(i, turtle) in enumerate(self.alive_turtles_):
                if turtle.name == turtle_name:
                    del self.alive_turtles_[i]
                    self.pub_alive_turtles()
                    break
            self.get_logger().info("turtle " + turtle.name + " is now dead")
        except Exception as e:
            self.get_logger().error("service call failed! %r" % (e))

def main(args=None):
    rclpy.init(args=args)
    node = TurtleGenerator()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()