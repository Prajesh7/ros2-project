#include <iostream>
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"
#include "/opt/ros/humble/include/std_msgs/std_msgs/msg/int64.hpp"
// #include "/opt/ros/humble/include/example_interfaces/example_interfaces/srv/set_bool.hpp"
#include <string>

using namespace std;
// using std::placeholder::_p1;

class Addition: public rclcpp::Node
{
    private:
        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr pub;
        rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr sub;
        // rclcpp::Service<example_interfaces::srv::SetBool>::SharedPtr server;
        int count = 0;
    public:
        void sub_callback(std_msgs::msg::Int64 msg)
        {
            auto data = std_msgs::msg::Int64();
            count = count + msg.data;
            data.data = count;
            pub->publish(data);
        }
        // void server_callback(const example_interfaces::srv::SetBool::Request::SharedPtr req,
        //                      const example_interfaces::srv::SetBool::Response::SharedPtr resp,)
        // {
        //     if(req->data == true)
        //     {
        //         RCLCPP_INFO(this->get_logger(), "Resetting the count!");
        //         count = 0;
        //     }
            
        // }

        Addition(): Node("add_cpp")
        {
            RCLCPP_INFO(this->get_logger(), "number add active->");
            pub = this->create_publisher<std_msgs::msg::Int64>("number_sum", 10);
            sub = this->create_subscription<std_msgs::msg::Int64>("number", 10, 
            std::bind(&Addition::sub_callback, this, std::placeholders::_1));
            // server = this->create_service<example_interfaces::srv::SetBool>("reset_counter", std::bind(&Addition::server_callback, this, _p1))
            // RCLCPP_INFO(this->get_logger(), "reset_counter server active->");
        }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Addition>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}