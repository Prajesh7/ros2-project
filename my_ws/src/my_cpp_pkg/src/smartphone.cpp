#include <iostream>
#include <string>
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"
#include "/opt/ros/humble/include/std_msgs/std_msgs/msg/string.hpp"


class Smartphone: public rclcpp::Node
{
    private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub;
    int count = 0;
    void sub_fun(const std_msgs::msg::String::SharedPtr msg)
    {
        count ++;
        std::string st = "recieved msg-> " + msg->data + std::to_string(count);
        RCLCPP_INFO(this->get_logger(), "%s", msg->data.c_str());
    }

    public:
        Smartphone(): Node("smartphone")
        {
            RCLCPP_INFO(this->get_logger(), "Smartphone cpp active->");
            sub = this->create_subscription<std_msgs::msg::String>("robot_news", 10,
            std::bind(&Smartphone::sub_fun, this, std::placeholders::_1));
        }        
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Smartphone>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
