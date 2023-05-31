#include <iostream>
#include "/opt/ros/humble/include/rclcpp/rclcpp/rclcpp.hpp"
#include "/opt/ros/humble/include/example_interfaces/example_interfaces/srv/add_two_ints.hpp"
#include <string>


using namespace std;

class AddIntsClient: public rclcpp::Node
{
    private:
        rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr client;
        // std::thread t1;
        std::vector<std::thread> threads_;

    public:
        AddIntsClient(): Node("add_ints_client")
        {
            RCLCPP_INFO(this->get_logger(), "add two ints client running");
            client = this->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");
            while(!client->wait_for_service(std::chrono::seconds(1)))
            {
                RCLCPP_WARN(this->get_logger(), "c++ waiting for add_two_ints service");
            }
            // call_service(6, 7);
            // t1 = std::thread(std::bind(&AddIntsClient::call_service, this, 6, 7));
            threads_.push_back(std::thread(std::bind(&AddIntsClient::call_service, this, 6, 7)));
            threads_.push_back(std::thread(std::bind(&AddIntsClient::call_service, this, 1, 4)));
        }

        void call_service(int a, int b)
        {
            auto req = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
            req->a = a;
            req->b = b;
            auto future = client->async_send_request(req);
            try
            {
                auto resp = future.get();
                RCLCPP_INFO(this->get_logger(), "%d + %d = %d", a, b, resp->sum);
            }
            catch(const std::exception& e)
            {
                // std::cerr << e.what() << '\n';
                RCLCPP_ERROR(this->get_logger(), "Service call failed!");
            }
            
            
        }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AddIntsClient>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}