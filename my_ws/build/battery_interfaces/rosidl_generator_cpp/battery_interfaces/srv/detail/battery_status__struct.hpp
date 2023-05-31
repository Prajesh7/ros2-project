// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from battery_interfaces:srv/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACES__SRV__DETAIL__BATTERY_STATUS__STRUCT_HPP_
#define BATTERY_INTERFACES__SRV__DETAIL__BATTERY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__battery_interfaces__srv__BatteryStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__battery_interfaces__srv__BatteryStatus_Request __declspec(deprecated)
#endif

namespace battery_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryStatus_Request_
{
  using Type = BatteryStatus_Request_<ContainerAllocator>;

  explicit BatteryStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_number = 0ll;
      this->state = false;
    }
  }

  explicit BatteryStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_number = 0ll;
      this->state = false;
    }
  }

  // field types and members
  using _led_number_type =
    int64_t;
  _led_number_type led_number;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__led_number(
    const int64_t & _arg)
  {
    this->led_number = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_interfaces__srv__BatteryStatus_Request
    std::shared_ptr<battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_interfaces__srv__BatteryStatus_Request
    std::shared_ptr<battery_interfaces::srv::BatteryStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryStatus_Request_ & other) const
  {
    if (this->led_number != other.led_number) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryStatus_Request_

// alias to use template instance with default allocator
using BatteryStatus_Request =
  battery_interfaces::srv::BatteryStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace battery_interfaces


#ifndef _WIN32
# define DEPRECATED__battery_interfaces__srv__BatteryStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__battery_interfaces__srv__BatteryStatus_Response __declspec(deprecated)
#endif

namespace battery_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryStatus_Response_
{
  using Type = BatteryStatus_Response_<ContainerAllocator>;

  explicit BatteryStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit BatteryStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_interfaces__srv__BatteryStatus_Response
    std::shared_ptr<battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_interfaces__srv__BatteryStatus_Response
    std::shared_ptr<battery_interfaces::srv::BatteryStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryStatus_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryStatus_Response_

// alias to use template instance with default allocator
using BatteryStatus_Response =
  battery_interfaces::srv::BatteryStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace battery_interfaces

namespace battery_interfaces
{

namespace srv
{

struct BatteryStatus
{
  using Request = battery_interfaces::srv::BatteryStatus_Request;
  using Response = battery_interfaces::srv::BatteryStatus_Response;
};

}  // namespace srv

}  // namespace battery_interfaces

#endif  // BATTERY_INTERFACES__SRV__DETAIL__BATTERY_STATUS__STRUCT_HPP_
