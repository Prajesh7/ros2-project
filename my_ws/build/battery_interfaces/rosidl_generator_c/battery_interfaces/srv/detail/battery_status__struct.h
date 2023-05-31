// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_interfaces:srv/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACES__SRV__DETAIL__BATTERY_STATUS__STRUCT_H_
#define BATTERY_INTERFACES__SRV__DETAIL__BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/BatteryStatus in the package battery_interfaces.
typedef struct battery_interfaces__srv__BatteryStatus_Request
{
  int64_t led_number;
  bool state;
} battery_interfaces__srv__BatteryStatus_Request;

// Struct for a sequence of battery_interfaces__srv__BatteryStatus_Request.
typedef struct battery_interfaces__srv__BatteryStatus_Request__Sequence
{
  battery_interfaces__srv__BatteryStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_interfaces__srv__BatteryStatus_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BatteryStatus in the package battery_interfaces.
typedef struct battery_interfaces__srv__BatteryStatus_Response
{
  bool success;
} battery_interfaces__srv__BatteryStatus_Response;

// Struct for a sequence of battery_interfaces__srv__BatteryStatus_Response.
typedef struct battery_interfaces__srv__BatteryStatus_Response__Sequence
{
  battery_interfaces__srv__BatteryStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_interfaces__srv__BatteryStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_INTERFACES__SRV__DETAIL__BATTERY_STATUS__STRUCT_H_
