#include <iostream>
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"
#include "/opt/ros/humble/include/std_msgs/std_msgs/msg/int64.hpp"
#include <string>



class MyNode: public rclcpp::Node
{
    private:
        // rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr pub;
        rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr sub;
        int count;

        void sub_callback(std_msgs::msg::Int64 msg)
        {
            count ++;
            auto data = std_msgs::msg::Int64();
            data.data = count;
            pub->publish(data);
        }

    public:
        MyNode(): Node("number_counter")
        {
            RCLCPP_INFO(this->get_logger(), "number counter active ->");
            pub = this->create_publisher<std_msgs::msg::Int64>("number_count", 10);
            sub = this->create_subscription<std_msgs::msg::Int64>("number", 10,
            std::bind(&MyNode::sub_callback, this, std::placeholders::_1));
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