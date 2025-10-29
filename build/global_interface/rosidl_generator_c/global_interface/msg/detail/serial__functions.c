// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from global_interface:msg/Serial.idl
// generated code does not contain a copyright notice
#include "global_interface/msg/detail/serial__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `imu`
#include "sensor_msgs/msg/detail/imu__functions.h"

bool
global_interface__msg__Serial__init(global_interface__msg__Serial * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    global_interface__msg__Serial__fini(msg);
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__init(&msg->imu)) {
    global_interface__msg__Serial__fini(msg);
    return false;
  }
  // mode
  // theta
  // bullet_speed
  return true;
}

void
global_interface__msg__Serial__fini(global_interface__msg__Serial * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // imu
  sensor_msgs__msg__Imu__fini(&msg->imu);
  // mode
  // theta
  // bullet_speed
}

bool
global_interface__msg__Serial__are_equal(const global_interface__msg__Serial * lhs, const global_interface__msg__Serial * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__are_equal(
      &(lhs->imu), &(rhs->imu)))
  {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // bullet_speed
  if (lhs->bullet_speed != rhs->bullet_speed) {
    return false;
  }
  return true;
}

bool
global_interface__msg__Serial__copy(
  const global_interface__msg__Serial * input,
  global_interface__msg__Serial * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // imu
  if (!sensor_msgs__msg__Imu__copy(
      &(input->imu), &(output->imu)))
  {
    return false;
  }
  // mode
  output->mode = input->mode;
  // theta
  output->theta = input->theta;
  // bullet_speed
  output->bullet_speed = input->bullet_speed;
  return true;
}

global_interface__msg__Serial *
global_interface__msg__Serial__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__Serial * msg = (global_interface__msg__Serial *)allocator.allocate(sizeof(global_interface__msg__Serial), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(global_interface__msg__Serial));
  bool success = global_interface__msg__Serial__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
global_interface__msg__Serial__destroy(global_interface__msg__Serial * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    global_interface__msg__Serial__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
global_interface__msg__Serial__Sequence__init(global_interface__msg__Serial__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__Serial * data = NULL;

  if (size) {
    data = (global_interface__msg__Serial *)allocator.zero_allocate(size, sizeof(global_interface__msg__Serial), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = global_interface__msg__Serial__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        global_interface__msg__Serial__fini(&data[i - 1]);
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
global_interface__msg__Serial__Sequence__fini(global_interface__msg__Serial__Sequence * array)
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
      global_interface__msg__Serial__fini(&array->data[i]);
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

global_interface__msg__Serial__Sequence *
global_interface__msg__Serial__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__Serial__Sequence * array = (global_interface__msg__Serial__Sequence *)allocator.allocate(sizeof(global_interface__msg__Serial__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = global_interface__msg__Serial__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
global_interface__msg__Serial__Sequence__destroy(global_interface__msg__Serial__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    global_interface__msg__Serial__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
global_interface__msg__Serial__Sequence__are_equal(const global_interface__msg__Serial__Sequence * lhs, const global_interface__msg__Serial__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!global_interface__msg__Serial__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
global_interface__msg__Serial__Sequence__copy(
  const global_interface__msg__Serial__Sequence * input,
  global_interface__msg__Serial__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(global_interface__msg__Serial);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    global_interface__msg__Serial * data =
      (global_interface__msg__Serial *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!global_interface__msg__Serial__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          global_interface__msg__Serial__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!global_interface__msg__Serial__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
