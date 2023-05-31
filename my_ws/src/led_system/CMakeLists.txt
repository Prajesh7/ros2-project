cmake_minimum_required(VERSION 3.8)
project(led_system)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(battery_interfaces REQUIRED)

add_executable(led_client src/led_client.cpp)
ament_target_dependencies(led_client rclcpp std_msgs example_interfaces battery_interfaces)

add_executable(battery_server src/battery_server.cpp)
ament_target_dependencies(battery_server rclcpp std_msgs example_interfaces battery_interfaces)


install(TARGETS
  led_client
  battery_server
  DESTINATION lib/${PROJECT_NAME})

ament_package()
