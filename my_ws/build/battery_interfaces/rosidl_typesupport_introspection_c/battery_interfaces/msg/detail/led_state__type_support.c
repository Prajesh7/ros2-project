// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from battery_interfaces:msg/LedState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "battery_interfaces/msg/detail/led_state__rosidl_typesupport_introspection_c.h"
#include "battery_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "battery_interfaces/msg/detail/led_state__functions.h"
#include "battery_interfaces/msg/detail/led_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  battery_interfaces__msg__LedState__init(message_memory);
}

void battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_fini_function(void * message_memory)
{
  battery_interfaces__msg__LedState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_interfaces__msg__LedState, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_interfaces__msg__LedState, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_interfaces__msg__LedState, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_members = {
  "battery_interfaces__msg",  // message namespace
  "LedState",  // message name
  3,  // number of fields
  sizeof(battery_interfaces__msg__LedState),
  battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_member_array,  // message members
  battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_init_function,  // function to initialize message memory (memory has to be allocated)
  battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_type_support_handle = {
  0,
  &battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_battery_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_interfaces, msg, LedState)() {
  if (!battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_type_support_handle.typesupport_identifier) {
    battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &battery_interfaces__msg__LedState__rosidl_typesupport_introspection_c__LedState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
