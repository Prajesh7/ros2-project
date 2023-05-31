// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_interfaces:srv/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACES__SRV__DETAIL__BATTERY_STATUS__TRAITS_HPP_
#define BATTERY_INTERFACES__SRV__DETAIL__BATTERY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "battery_interfaces/srv/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace battery_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BatteryStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_number
  {
    out << "led_number: ";
    rosidl_generator_traits::value_to_yaml(msg.led_number, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_number: ";
    rosidl_generator_traits::value_to_yaml(msg.led_number, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryStatus_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace battery_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use battery_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_interfaces::srv::BatteryStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_interfaces::srv::BatteryStatus_Request & msg)
{
  return battery_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_interfaces::srv::BatteryStatus_Request>()
{
  return "battery_interfaces::srv::BatteryStatus_Request";
}

template<>
inline const char * name<battery_interfaces::srv::BatteryStatus_Request>()
{
  return "battery_interfaces/srv/BatteryStatus_Request";
}

template<>
struct has_fixed_size<battery_interfaces::srv::BatteryStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_interfaces::srv::BatteryStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_interfaces::srv::BatteryStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace battery_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BatteryStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryStatus_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace battery_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use battery_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_interfaces::srv::BatteryStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_interfaces::srv::BatteryStatus_Response & msg)
{
  return battery_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_interfaces::srv::BatteryStatus_Response>()
{
  return "battery_interfaces::srv::BatteryStatus_Response";
}

template<>
inline const char * name<battery_interfaces::srv::BatteryStatus_Response>()
{
  return "battery_interfaces/srv/BatteryStatus_Response";
}

template<>
struct has_fixed_size<battery_interfaces::srv::BatteryStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_interfaces::srv::BatteryStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_interfaces::srv::BatteryStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_interfaces::srv::BatteryStatus>()
{
  return "battery_interfaces::srv::BatteryStatus";
}

template<>
inline const char * name<battery_interfaces::srv::BatteryStatus>()
{
  return "battery_interfaces/srv/BatteryStatus";
}

template<>
struct has_fixed_size<battery_interfaces::srv::BatteryStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<battery_interfaces::srv::BatteryStatus_Request>::value &&
    has_fixed_size<battery_interfaces::srv::BatteryStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<battery_interfaces::srv::BatteryStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<battery_interfaces::srv::BatteryStatus_Request>::value &&
    has_bounded_size<battery_interfaces::srv::BatteryStatus_Response>::value
  >
{
};

template<>
struct is_service<battery_interfaces::srv::BatteryStatus>
  : std::true_type
{
};

template<>
struct is_service_request<battery_interfaces::srv::BatteryStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<battery_interfaces::srv::BatteryStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_INTERFACES__SRV__DETAIL__BATTERY_STATUS__TRAITS_HPP_
