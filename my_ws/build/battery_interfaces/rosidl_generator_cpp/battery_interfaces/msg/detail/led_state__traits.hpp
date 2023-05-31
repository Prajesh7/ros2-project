// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_interfaces:msg/LedState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__TRAITS_HPP_
#define BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "battery_interfaces/msg/detail/led_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace battery_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedState & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace battery_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use battery_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_interfaces::msg::LedState & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const battery_interfaces::msg::LedState & msg)
{
  return battery_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<battery_interfaces::msg::LedState>()
{
  return "battery_interfaces::msg::LedState";
}

template<>
inline const char * name<battery_interfaces::msg::LedState>()
{
  return "battery_interfaces/msg/LedState";
}

template<>
struct has_fixed_size<battery_interfaces::msg::LedState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_interfaces::msg::LedState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_interfaces::msg::LedState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__TRAITS_HPP_
