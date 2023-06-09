// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from battery_interfaces:srv/BatteryStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "battery_interfaces/srv/detail/battery_status__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace battery_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatteryStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatteryStatus_Request_type_support_ids_t;

static const _BatteryStatus_Request_type_support_ids_t _BatteryStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatteryStatus_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatteryStatus_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatteryStatus_Request_type_support_symbol_names_t _BatteryStatus_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_interfaces, srv, BatteryStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, battery_interfaces, srv, BatteryStatus_Request)),
  }
};

typedef struct _BatteryStatus_Request_type_support_data_t
{
  void * data[2];
} _BatteryStatus_Request_type_support_data_t;

static _BatteryStatus_Request_type_support_data_t _BatteryStatus_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatteryStatus_Request_message_typesupport_map = {
  2,
  "battery_interfaces",
  &_BatteryStatus_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BatteryStatus_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BatteryStatus_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatteryStatus_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatteryStatus_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace battery_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_interfaces::srv::BatteryStatus_Request>()
{
  return &::battery_interfaces::srv::rosidl_typesupport_cpp::BatteryStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, battery_interfaces, srv, BatteryStatus_Request)() {
  return get_message_type_support_handle<battery_interfaces::srv::BatteryStatus_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "battery_interfaces/srv/detail/battery_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace battery_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatteryStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatteryStatus_Response_type_support_ids_t;

static const _BatteryStatus_Response_type_support_ids_t _BatteryStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatteryStatus_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatteryStatus_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatteryStatus_Response_type_support_symbol_names_t _BatteryStatus_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_interfaces, srv, BatteryStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, battery_interfaces, srv, BatteryStatus_Response)),
  }
};

typedef struct _BatteryStatus_Response_type_support_data_t
{
  void * data[2];
} _BatteryStatus_Response_type_support_data_t;

static _BatteryStatus_Response_type_support_data_t _BatteryStatus_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatteryStatus_Response_message_typesupport_map = {
  2,
  "battery_interfaces",
  &_BatteryStatus_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BatteryStatus_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BatteryStatus_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatteryStatus_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatteryStatus_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace battery_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_interfaces::srv::BatteryStatus_Response>()
{
  return &::battery_interfaces::srv::rosidl_typesupport_cpp::BatteryStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, battery_interfaces, srv, BatteryStatus_Response)() {
  return get_message_type_support_handle<battery_interfaces::srv::BatteryStatus_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "battery_interfaces/srv/detail/battery_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace battery_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatteryStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatteryStatus_type_support_ids_t;

static const _BatteryStatus_type_support_ids_t _BatteryStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatteryStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatteryStatus_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatteryStatus_type_support_symbol_names_t _BatteryStatus_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_interfaces, srv, BatteryStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, battery_interfaces, srv, BatteryStatus)),
  }
};

typedef struct _BatteryStatus_type_support_data_t
{
  void * data[2];
} _BatteryStatus_type_support_data_t;

static _BatteryStatus_type_support_data_t _BatteryStatus_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatteryStatus_service_typesupport_map = {
  2,
  "battery_interfaces",
  &_BatteryStatus_service_typesupport_ids.typesupport_identifier[0],
  &_BatteryStatus_service_typesupport_symbol_names.symbol_name[0],
  &_BatteryStatus_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BatteryStatus_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatteryStatus_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace battery_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<battery_interfaces::srv::BatteryStatus>()
{
  return &::battery_interfaces::srv::rosidl_typesupport_cpp::BatteryStatus_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
