// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_interfaces:msg/LedState.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_H_
#define BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LedState in the package battery_interfaces.
typedef struct battery_interfaces__msg__LedState
{
  int64_t a;
  int64_t b;
  int64_t c;
} battery_interfaces__msg__LedState;

// Struct for a sequence of battery_interfaces__msg__LedState.
typedef struct battery_interfaces__msg__LedState__Sequence
{
  battery_interfaces__msg__LedState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_interfaces__msg__LedState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_H_
