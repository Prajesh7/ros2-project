// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from battery_interfaces:srv/BatteryStatus.idl
// generated code does not contain a copyright notice
#include "battery_interfaces/srv/detail/battery_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
battery_interfaces__srv__BatteryStatus_Request__init(battery_interfaces__srv__BatteryStatus_Request * msg)
{
  if (!msg) {
    return false;
  }
  // led_number
  // state
  return true;
}

void
battery_interfaces__srv__BatteryStatus_Request__fini(battery_interfaces__srv__BatteryStatus_Request * msg)
{
  if (!msg) {
    return;
  }
  // led_number
  // state
}

bool
battery_interfaces__srv__BatteryStatus_Request__are_equal(const battery_interfaces__srv__BatteryStatus_Request * lhs, const battery_interfaces__srv__BatteryStatus_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_number
  if (lhs->led_number != rhs->led_number) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
battery_interfaces__srv__BatteryStatus_Request__copy(
  const battery_interfaces__srv__BatteryStatus_Request * input,
  battery_interfaces__srv__BatteryStatus_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // led_number
  output->led_number = input->led_number;
  // state
  output->state = input->state;
  return true;
}

battery_interfaces__srv__BatteryStatus_Request *
battery_interfaces__srv__BatteryStatus_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_interfaces__srv__BatteryStatus_Request * msg = (battery_interfaces__srv__BatteryStatus_Request *)allocator.allocate(sizeof(battery_interfaces__srv__BatteryStatus_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_interfaces__srv__BatteryStatus_Request));
  bool success = battery_interfaces__srv__BatteryStatus_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_interfaces__srv__BatteryStatus_Request__destroy(battery_interfaces__srv__BatteryStatus_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_interfaces__srv__BatteryStatus_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_interfaces__srv__BatteryStatus_Request__Sequence__init(battery_interfaces__srv__BatteryStatus_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_interfaces__srv__BatteryStatus_Request * data = NULL;

  if (size) {
    data = (battery_interfaces__srv__BatteryStatus_Request *)allocator.zero_allocate(size, sizeof(battery_interfaces__srv__BatteryStatus_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_interfaces__srv__BatteryStatus_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_interfaces__srv__BatteryStatus_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_interfaces__srv__BatteryStatus_Request__Sequence__fini(battery_interfaces__srv__BatteryStatus_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_interfaces__srv__BatteryStatus_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_interfaces__srv__BatteryStatus_Request__Sequence *
battery_interfaces__srv__BatteryStatus_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_interfaces__srv__BatteryStatus_Request__Sequence * array = (battery_interfaces__srv__BatteryStatus_Request__Sequence *)allocator.allocate(sizeof(battery_interfaces__srv__BatteryStatus_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_interfaces__srv__BatteryStatus_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_interfaces__srv__BatteryStatus_Request__Sequence__destroy(battery_interfaces__srv__BatteryStatus_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_interfaces__srv__BatteryStatus_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_interfaces__srv__BatteryStatus_Request__Sequence__are_equal(const battery_interfaces__srv__BatteryStatus_Request__Sequence * lhs, const battery_interfaces__srv__BatteryStatus_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_interfaces__srv__BatteryStatus_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_interfaces__srv__BatteryStatus_Request__Sequence__copy(
  const battery_interfaces__srv__BatteryStatus_Request__Sequence * input,
  battery_interfaces__srv__BatteryStatus_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_interfaces__srv__BatteryStatus_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_interfaces__srv__BatteryStatus_Request * data =
      (battery_interfaces__srv__BatteryStatus_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_interfaces__srv__BatteryStatus_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_interfaces__srv__BatteryStatus_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_interfaces__srv__BatteryStatus_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
battery_interfaces__srv__BatteryStatus_Response__init(battery_interfaces__srv__BatteryStatus_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
battery_interfaces__srv__BatteryStatus_Response__fini(battery_interfaces__srv__BatteryStatus_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
battery_interfaces__srv__BatteryStatus_Response__are_equal(const battery_interfaces__srv__BatteryStatus_Response * lhs, const battery_interfaces__srv__BatteryStatus_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
battery_interfaces__srv__BatteryStatus_Response__copy(
  const battery_interfaces__srv__BatteryStatus_Response * input,
  battery_interfaces__srv__BatteryStatus_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

battery_interfaces__srv__BatteryStatus_Response *
battery_interfaces__srv__BatteryStatus_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_interfaces__srv__BatteryStatus_Response * msg = (battery_interfaces__srv__BatteryStatus_Response *)allocator.allocate(sizeof(battery_interfaces__srv__BatteryStatus_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_interfaces__srv__BatteryStatus_Response));
  bool success = battery_interfaces__srv__BatteryStatus_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_interfaces__srv__BatteryStatus_Response__destroy(battery_interfaces__srv__BatteryStatus_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_interfaces__srv__BatteryStatus_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_interfaces__srv__BatteryStatus_Response__Sequence__init(battery_interfaces__srv__BatteryStatus_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_interfaces__srv__BatteryStatus_Response * data = NULL;

  if (size) {
    data = (battery_interfaces__srv__BatteryStatus_Response *)allocator.zero_allocate(size, sizeof(battery_interfaces__srv__BatteryStatus_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_interfaces__srv__BatteryStatus_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_interfaces__srv__BatteryStatus_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_interfaces__srv__BatteryStatus_Response__Sequence__fini(battery_interfaces__srv__BatteryStatus_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_interfaces__srv__BatteryStatus_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_interfaces__srv__BatteryStatus_Response__Sequence *
battery_interfaces__srv__BatteryStatus_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_interfaces__srv__BatteryStatus_Response__Sequence * array = (battery_interfaces__srv__BatteryStatus_Response__Sequence *)allocator.allocate(sizeof(battery_interfaces__srv__BatteryStatus_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_interfaces__srv__BatteryStatus_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_interfaces__srv__BatteryStatus_Response__Sequence__destroy(battery_interfaces__srv__BatteryStatus_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_interfaces__srv__BatteryStatus_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_interfaces__srv__BatteryStatus_Response__Sequence__are_equal(const battery_interfaces__srv__BatteryStatus_Response__Sequence * lhs, const battery_interfaces__srv__BatteryStatus_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_interfaces__srv__BatteryStatus_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_interfaces__srv__BatteryStatus_Response__Sequence__copy(
  const battery_interfaces__srv__BatteryStatus_Response__Sequence * input,
  battery_interfaces__srv__BatteryStatus_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_interfaces__srv__BatteryStatus_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_interfaces__srv__BatteryStatus_Response * data =
      (battery_interfaces__srv__BatteryStatus_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_interfaces__srv__BatteryStatus_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_interfaces__srv__BatteryStatus_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_interfaces__srv__BatteryStatus_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
