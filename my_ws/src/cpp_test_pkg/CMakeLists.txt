cmake_minimum_required(VERSION 3.8)
project(cpp_test_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(number_publisher src/number_pub.cpp)
ament_target_dependencies(number_publisher rclcpp std_msgs)

add_executable(number_counter src/number_counter.cpp)
ament_target_dependencies(number_counter rclcpp std_msgs)

install(TARGETS
  number_publisher
  number_counter
  DESTINATION lib/${PROJECT_NAME})

ament_package()
