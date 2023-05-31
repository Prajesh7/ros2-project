
#include <iostream>
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"

using namespace std;

class MyNode: public rclcpp::Node
{
    private:
        rclcpp::TimerBase::SharedPtr timer_;
        int count;
        void timerCallBack()
        {
            count ++;
            RCLCPP_INFO(this->get_logger(), "cpp oop %d", count);
        }
        

    public:
        MyNode(): Node("cpp_test")
        {
            RCLCPP_INFO(this->get_logger(), "Hello Cpp Oop Node");
            timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&MyNode::timerCallBack, this));
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