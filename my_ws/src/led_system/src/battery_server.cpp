#include <iostream>
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"
#include "/home/prajesh/my_ws/install/battery_interfaces/include/battery_interfaces/battery_interfaces/srv/battery_status.hpp"
#include "/home/prajesh/my_ws/install/battery_interfaces/include/battery_interfaces/battery_interfaces/msg/led_state.hpp"
#include <string>


using namespace std;
using std::placeholders::_1;
using std::placeholders::_2;

class BatteryController: public rclcpp::Node
{
    private:
        rclcpp::Service<battery_interfaces::srv::BatteryStatus>::SharedPtr server;
        rclcpp::Publisher<battery_interfaces::msg::LedState>::SharedPtr pub;
    public:
        BatteryController(): Node("LED_panel_node")
        {
            server = this->create_service<battery_interfaces::srv::BatteryStatus>("battery_status", 
                            std::bind(&BatteryController::server_callback, this, _1, _2));
            pub = this->create_publisher<battery_interfaces::msg::LedState>("led_panel_state", 10);
            RCLCPP_INFO(this->get_logger(), "LED panel active->");
        }

        void server_callback(const battery_interfaces::srv::BatteryStatus::Request::SharedPtr req,
                             const battery_interfaces::srv::BatteryStatus::Response::SharedPtr resp)
        {
            auto msg = battery_interfaces::msg::LedState();
            if(req->state == true)
            {
                if(req->led_number == 0)
                {
                    msg.a = 1;
                    msg.b = 0;
                    msg.c = 0;
                }
                if(req->led_number == 1)
                {
                    msg.a = 0;
                    msg.b = 1;
                    msg.c = 0;
                }
                if(req->led_number == 2)
                {
                    msg.a = 0;
                    msg.b = 0;
                    msg.c = 1;
                }

            }
            else
            {
                msg.a = 0;
                msg.b = 0;
                msg.c = 0;
            }
            resp->success = true;
            pub->publish(msg);
        }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<BatteryController>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}