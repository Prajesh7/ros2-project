#include <iostream>
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"
#include "/opt/ros/humble/include/std_msgs/std_msgs/msg/int64.hpp"
#include <string>

class Generator: public rclcpp::Node
{
    private:
        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr pub;
        int count = 0;
    public:

        void pub_fun()
        {
            count ++;
            auto msg = std_msgs::msg::Int64();
            msg.data = count;
            pub->publish(msg);
        }

        Generator(): Node("Number_generator")
        {
            RCLCPP_INFO(this->get_logger(), "number_generator active->");
            pub = this->create_publisher<std_msgs::msg::Int64>("number", 10);
            timer_ = this->create_wall_timer(std::chrono::milliseconds(500),
            std::bind(&Generator::pub_fun, this));
        }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Generator>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}