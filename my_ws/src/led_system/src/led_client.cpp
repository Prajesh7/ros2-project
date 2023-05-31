#include <iostream>
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"
#include "/home/prajesh/my_ws/install/battery_interfaces/include/battery_interfaces/battery_interfaces/srv/battery_status.hpp"
#include <string>

using namespace std;

class BatteryStateClass: public rclcpp::Node
{
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Client<battery_interfaces::srv::BatteryStatus>::SharedPtr client;
    int count;
    int battery_flag = 0;
    
    public:
        BatteryStateClass(): Node("Battery_client")
        {
            RCLCPP_INFO(this->get_logger(), "Battery_status client active->");
            client = this->create_client<battery_interfaces::srv::BatteryStatus>("battery_status");
            while(!client->wait_for_service(std::chrono::seconds(1)))
            {
                RCLCPP_WARN(this->get_logger(), "Waiting for battery_status service");
            }
            timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&BatteryStateClass::client_callback, this));
            RCLCPP_INFO(this->get_logger(), "c1");
        }

        void client_callback()
        {
            count ++;
            RCLCPP_INFO(this->get_logger(), "in callback");
            if(count >= 4 && battery_flag == 0)
            {
                auto srv = std::make_shared<battery_interfaces::srv::BatteryStatus::Request>();
                srv->led_number = 2;
                srv->state = true;
                count = 0;
                battery_flag = 1;
                RCLCPP_INFO(this->get_logger(), "Battery Empty!");
                client->async_send_request(srv);
                // auto future = client->async_send_request(srv);
                // try
                // {
                //     auto resp = future.get();
                //     RCLCPP_INFO(this->get_logger(), "%d", resp->success);
                // }
                // catch(const std::exception& e)
                // {
                //     // std::cerr << e.what() << '\n';
                //     RCLCPP_ERROR(this->get_logger(), "Service call failed!");
                // }
            }
            if(count >= 6)
            {
                auto srv = std::make_shared<battery_interfaces::srv::BatteryStatus::Request>();
                srv->led_number = 2;
                srv->state = false;
                count = 0;
                battery_flag = 0;
                RCLCPP_INFO(this->get_logger(), "Battery full!");
                client->async_send_request(srv);
                // auto future = client->async_send_request(srv);
                // try
                // {
                //     auto resp = future.get();
                //     RCLCPP_INFO(this->get_logger(), "%d", resp->success);
                // }
                // catch(const std::exception& e)
                // {
                //     // std::cerr << e.what() << '\n';
                //     RCLCPP_ERROR(this->get_logger(), "Service call failed!");
                // }
            } 
        }
};


int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<BatteryStateClass>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}