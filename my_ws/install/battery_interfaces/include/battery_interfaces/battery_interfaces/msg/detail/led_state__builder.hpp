// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from battery_interfaces:msg/LedState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__BUILDER_HPP_
#define BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "battery_interfaces/msg/detail/led_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace battery_interfaces
{

namespace msg
{

namespace builder
{

class Init_LedState_c
{
public:
  explicit Init_LedState_c(::battery_interfaces::msg::LedState & msg)
  : msg_(msg)
  {}
  ::battery_interfaces::msg::LedState c(::battery_interfaces::msg::LedState::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_interfaces::msg::LedState msg_;
};

class Init_LedState_b
{
public:
  explicit Init_LedState_b(::battery_interfaces::msg::LedState & msg)
  : msg_(msg)
  {}
  Init_LedState_c b(::battery_interfaces::msg::LedState::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_LedState_c(msg_);
  }

private:
  ::battery_interfaces::msg::LedState msg_;
};

class Init_LedState_a
{
public:
  Init_LedState_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedState_b a(::battery_interfaces::msg::LedState::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_LedState_b(msg_);
  }

private:
  ::battery_interfaces::msg::LedState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_interfaces::msg::LedState>()
{
  return battery_interfaces::msg::builder::Init_LedState_a();
}

}  // namespace battery_interfaces

#endif  // BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__BUILDER_HPP_
