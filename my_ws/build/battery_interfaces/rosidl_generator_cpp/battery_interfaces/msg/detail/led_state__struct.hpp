// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from battery_interfaces:msg/LedState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_
#define BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__battery_interfaces__msg__LedState __attribute__((deprecated))
#else
# define DEPRECATED__battery_interfaces__msg__LedState __declspec(deprecated)
#endif

namespace battery_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedState_
{
  using Type = LedState_<ContainerAllocator>;

  explicit LedState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
    }
  }

  explicit LedState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;
  using _c_type =
    int64_t;
  _c_type c;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const int64_t & _arg)
  {
    this->c = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_interfaces::msg::LedState_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_interfaces::msg::LedState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_interfaces::msg::LedState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_interfaces::msg::LedState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_interfaces::msg::LedState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_interfaces::msg::LedState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_interfaces::msg::LedState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_interfaces::msg::LedState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_interfaces::msg::LedState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_interfaces::msg::LedState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_interfaces__msg__LedState
    std::shared_ptr<battery_interfaces::msg::LedState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_interfaces__msg__LedState
    std::shared_ptr<battery_interfaces::msg::LedState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedState_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedState_

// alias to use template instance with default allocator
using LedState =
  battery_interfaces::msg::LedState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace battery_interfaces

#endif  // BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_HPP_
