cmake_minimum_required(VERSION 3.8)
project(cpp_service_test)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(example_interfaces REQUIRED)

add_executable(add_int_server src/add_int_server.cpp)
ament_target_dependencies(add_int_server rclcpp example_interfaces std_msgs)

add_executable(add_int_client src/add_int_client.cpp)
ament_target_dependencies(add_int_client rclcpp example_interfaces std_msgs)

install(TARGETS
  add_int_server
  add_int_client
  DESTINATION lib/${PROJECT_NAME})

ament_package()
