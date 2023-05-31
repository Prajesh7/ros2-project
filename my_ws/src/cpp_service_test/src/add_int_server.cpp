#include <iostream>
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"
#include "/opt/ros/humble/include/example_interfaces/example_interfaces/srv/add_two_ints.hpp"
#include <string>


using namespace std;
using std::placeholders::_1;
using std::placeholders::_2;


class AddInts: public rclcpp::Node
{
    private:
        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr server;

        void request_callback(const example_interfaces::srv::AddTwoInts::Request::SharedPtr req, 
                              const example_interfaces::srv::AddTwoInts::Response::SharedPtr resp)
        {
            resp->sum = req->a + req->b;
            RCLCPP_INFO(this->get_logger(), "%d + %d = %d", req->a, req->b, resp->sum);
        }

    public:
        AddInts(): Node("add_two_int_server")
        {
            server = this->create_service<example_interfaces::srv::AddTwoInts>("add_two_ints", std::bind(&AddInts::request_callback, this, _1, _2));
            RCLCPP_INFO(this->get_logger(), "add two ints server active->");
        }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AddInts>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}