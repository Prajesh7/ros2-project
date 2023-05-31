cmake_minimum_required(VERSION 3.8)
project(cpp_practice)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(number_generator src/number_generator.cpp)
ament_target_dependencies(number_generator rclcpp std_msgs)

add_executable(add_cpp src/add_cpp.cpp)
ament_target_dependencies(add_cpp rclcpp std_msgs)

install(TARGETS
  number_generator
  add_cpp
  DESTINATION lib/${PROJECT_NAME})

ament_package()
