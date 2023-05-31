#include <iostream>
#include "/opt/ros/humble/include/std_msgs/std_msgs/msg/int64.hpp"
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"
#include <string>


class MyNode: public rclcpp::Node
{
    private:

        rclcpp::TimerBase::SharedPtr timer_;
        int count;
        rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr pub;
        void pub_fun()
        {
            count ++;
            auto msg = std_msgs::msg::Int64();
            msg.data = count;
            pub->publish(msg);
        }

    public:
        MyNode(): Node("number_publisher")
        {
            RCLCPP_INFO(this->get_logger(), "number_publisher active->");
            timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&MyNode::pub_fun, this));
            pub = this->create_publisher<std_msgs::msg::Int64>("number", 10);
            
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