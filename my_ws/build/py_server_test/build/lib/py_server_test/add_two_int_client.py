import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
from functools import partial

class AddIntsClient(Node):
    def __init__(self):
        super().__init__("add_two_ints_client")
        self.call_add_int_service(6, 7)

    def call_add_int_service(self, a, b):
        print("c1")
        client = self.create_client(AddTwoInts, "add_two_ints")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for add_two_ints service")
        
        request = AddTwoInts.Request()
        request.a = a
        request.b = b

        future = client.call_async(request)
        future.add_done_callback(partial(self.future_callback, a=a, b=b))

    def future_callback(self, future, a, b):
        try:
            response = future.result()
            self.get_logger().info("recieved response for " + str(a) + " + " + str(b) + " = " + str(response.sum))
        except Exception as e:
            self.get_logger().error("service call error->" + str(e))

def main(args=None):
    # rclpy.init(args=args)
    # node = Node("add_tow_int_client")
    # client = node.create_client(AddTwoInts, "add_two_ints")
    # while not client.wait_for_service(1.0):
    #     node.get_logger().warn("waiting for service")
    # request = AddTwoInts.Request()
    # request.a = 3
    # request.b = 5

    # future = client.call_async(request)
    # rclpy.spin_until_future_complete(node, future)
    # try:
    #     response = future.result()
    #     node.get_logger().info("recieved response -> " + str(response.sum))
    # except Exception as e:
    #     node.get_logger().info("response error-> " + str(e))
    # # rclpy.spin(node)
    # rclpy.shutdown()
    rclpy.init(args=args)
    node = AddIntsClient()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()