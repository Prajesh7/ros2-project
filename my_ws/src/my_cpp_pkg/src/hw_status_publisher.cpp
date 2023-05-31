
#include <iostream>
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"
#include "/opt/ros/humble/include/std_msgs/std_msgs/msg/string.hpp"
// #include "my_robot_interfaces/msg.HardwareStatus.hpp"
#include "/home/prajesh/my_ws/install/my_robot_interfaces/include/my_robot_interfaces/my_robot_interfaces/msg/hardware_status.hpp"
#include <string>

using namespace std;

class MyNode: public rclcpp::Node
{
    private:
        rclcpp::TimerBase::SharedPtr timer_;
        int count;
        // rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub;
        rclcpp::Publisher<my_robot_interfaces::msg::HardwareStatus>::SharedPtr pub;
        void pub_fun()
        {
            count ++;
            auto msg = my_robot_interfaces::msg::HardwareStatus();
            // msg.data = std::string("robot cpp news ") + std::to_string(count);
            msg.temperature = 57;
            msg.motor_status = true;
            msg.debug_message = "nothign to debug cpp";
            pub->publish(msg);
        }
        

    public:
        MyNode(): Node("Robot_news_station")
        {
            RCLCPP_INFO(this->get_logger(), "Robot cpp news station active-> ");
            pub = this->create_publisher<my_robot_interfaces::msg::HardwareStatus>("robot_news", 10);
            timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&MyNode::pub_fun, this));
        }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}