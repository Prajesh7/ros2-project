
#include <iostream>
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"
#include "/opt/ros/humble/include/std_msgs/std_msgs/msg/string.hpp"
#include <string>

using namespace std;

class MyNode: public rclcpp::Node
{
    private:
        rclcpp::TimerBase::SharedPtr timer_;
        int count;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub;
        void pub_fun()
        {
            count ++;
            auto msg = std_msgs::msg::String();
            msg.data = std::string("robot cpp news ") + std::to_string(count);
            pub->publish(msg);
        }
        

    public:
        MyNode(): Node("Robot_news_station")
        {
            RCLCPP_INFO(this->get_logger(), "Robot cpp news station active-> ");
            pub = this->create_publisher<std_msgs::msg::String>("robot_news", 10);
            timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&MyNode::pub_fun, this));
        }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    // auto node = std::make_shared<rclcpp::Node>("cpp_test");
    auto node = std::make_shared<MyNode>();
    // RCLCPP_INFO(node->get_logger(), "Hello cpp node");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}