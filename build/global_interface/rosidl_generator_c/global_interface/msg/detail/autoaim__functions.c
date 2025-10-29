// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from global_interface:msg/Autoaim.idl
// generated code does not contain a copyright notice
#include "global_interface/msg/detail/autoaim__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `key`
#include "rosidl_runtime_c/string_functions.h"
// Member `point2d`
#include "global_interface/msg/detail/point2f__functions.h"
// Member `quat_imu`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `aiming_point_world`
// Member `aiming_point_cam`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
global_interface__msg__Autoaim__init(global_interface__msg__Autoaim * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    global_interface__msg__Autoaim__fini(msg);
    return false;
  }
  // mode
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    global_interface__msg__Autoaim__fini(msg);
    return false;
  }
  // hp
  // period
  // bullet_speed
  // timestamp
  // point2d
  for (size_t i = 0; i < 4; ++i) {
    if (!global_interface__msg__Point2f__init(&msg->point2d[i])) {
      global_interface__msg__Autoaim__fini(msg);
      return false;
    }
  }
  // clockwise
  // is_spinning
  // is_controlled
  // is_target_lost
  // target_switched
  // spinning_switched
  // is_still_spinning
  // quat_imu
  if (!geometry_msgs__msg__Quaternion__init(&msg->quat_imu)) {
    global_interface__msg__Autoaim__fini(msg);
    return false;
  }
  // aiming_point_world
  if (!geometry_msgs__msg__Point__init(&msg->aiming_point_world)) {
    global_interface__msg__Autoaim__fini(msg);
    return false;
  }
  // aiming_point_cam
  if (!geometry_msgs__msg__Point__init(&msg->aiming_point_cam)) {
    global_interface__msg__Autoaim__fini(msg);
    return false;
  }
  return true;
}

void
global_interface__msg__Autoaim__fini(global_interface__msg__Autoaim * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mode
  // key
  rosidl_runtime_c__String__fini(&msg->key);
  // hp
  // period
  // bullet_speed
  // timestamp
  // point2d
  for (size_t i = 0; i < 4; ++i) {
    global_interface__msg__Point2f__fini(&msg->point2d[i]);
  }
  // clockwise
  // is_spinning
  // is_controlled
  // is_target_lost
  // target_switched
  // spinning_switched
  // is_still_spinning
  // quat_imu
  geometry_msgs__msg__Quaternion__fini(&msg->quat_imu);
  // aiming_point_world
  geometry_msgs__msg__Point__fini(&msg->aiming_point_world);
  // aiming_point_cam
  geometry_msgs__msg__Point__fini(&msg->aiming_point_cam);
}

bool
global_interface__msg__Autoaim__are_equal(const global_interface__msg__Autoaim * lhs, const global_interface__msg__Autoaim * rhs)
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
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  // hp
  if (lhs->hp != rhs->hp) {
    return false;
  }
  // period
  if (lhs->period != rhs->period) {
    return false;
  }
  // bullet_speed
  if (lhs->bullet_speed != rhs->bullet_speed) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // point2d
  for (size_t i = 0; i < 4; ++i) {
    if (!global_interface__msg__Point2f__are_equal(
        &(lhs->point2d[i]), &(rhs->point2d[i])))
    {
      return false;
    }
  }
  // clockwise
  if (lhs->clockwise != rhs->clockwise) {
    return false;
  }
  // is_spinning
  if (lhs->is_spinning != rhs->is_spinning) {
    return false;
  }
  // is_controlled
  if (lhs->is_controlled != rhs->is_controlled) {
    return false;
  }
  // is_target_lost
  if (lhs->is_target_lost != rhs->is_target_lost) {
    return false;
  }
  // target_switched
  if (lhs->target_switched != rhs->target_switched) {
    return false;
  }
  // spinning_switched
  if (lhs->spinning_switched != rhs->spinning_switched) {
    return false;
  }
  // is_still_spinning
  if (lhs->is_still_spinning != rhs->is_still_spinning) {
    return false;
  }
  // quat_imu
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->quat_imu), &(rhs->quat_imu)))
  {
    return false;
  }
  // aiming_point_world
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->aiming_point_world), &(rhs->aiming_point_world)))
  {
    return false;
  }
  // aiming_point_cam
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->aiming_point_cam), &(rhs->aiming_point_cam)))
  {
    return false;
  }
  return true;
}

bool
global_interface__msg__Autoaim__copy(
  const global_interface__msg__Autoaim * input,
  global_interface__msg__Autoaim * output)
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
  // mode
  output->mode = input->mode;
  // key
  if (!rosidl_runtime_c__String__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  // hp
  output->hp = input->hp;
  // period
  output->period = input->period;
  // bullet_speed
  output->bullet_speed = input->bullet_speed;
  // timestamp
  output->timestamp = input->timestamp;
  // point2d
  for (size_t i = 0; i < 4; ++i) {
    if (!global_interface__msg__Point2f__copy(
        &(input->point2d[i]), &(output->point2d[i])))
    {
      return false;
    }
  }
  // clockwise
  output->clockwise = input->clockwise;
  // is_spinning
  output->is_spinning = input->is_spinning;
  // is_controlled
  output->is_controlled = input->is_controlled;
  // is_target_lost
  output->is_target_lost = input->is_target_lost;
  // target_switched
  output->target_switched = input->target_switched;
  // spinning_switched
  output->spinning_switched = input->spinning_switched;
  // is_still_spinning
  output->is_still_spinning = input->is_still_spinning;
  // quat_imu
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->quat_imu), &(output->quat_imu)))
  {
    return false;
  }
  // aiming_point_world
  if (!geometry_msgs__msg__Point__copy(
      &(input->aiming_point_world), &(output->aiming_point_world)))
  {
    return false;
  }
  // aiming_point_cam
  if (!geometry_msgs__msg__Point__copy(
      &(input->aiming_point_cam), &(output->aiming_point_cam)))
  {
    return false;
  }
  return true;
}

global_interface__msg__Autoaim *
global_interface__msg__Autoaim__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__Autoaim * msg = (global_interface__msg__Autoaim *)allocator.allocate(sizeof(global_interface__msg__Autoaim), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(global_interface__msg__Autoaim));
  bool success = global_interface__msg__Autoaim__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
global_interface__msg__Autoaim__destroy(global_interface__msg__Autoaim * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    global_interface__msg__Autoaim__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
global_interface__msg__Autoaim__Sequence__init(global_interface__msg__Autoaim__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__Autoaim * data = NULL;

  if (size) {
    data = (global_interface__msg__Autoaim *)allocator.zero_allocate(size, sizeof(global_interface__msg__Autoaim), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = global_interface__msg__Autoaim__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        global_interface__msg__Autoaim__fini(&data[i - 1]);
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
global_interface__msg__Autoaim__Sequence__fini(global_interface__msg__Autoaim__Sequence * array)
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
      global_interface__msg__Autoaim__fini(&array->data[i]);
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

global_interface__msg__Autoaim__Sequence *
global_interface__msg__Autoaim__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__Autoaim__Sequence * array = (global_interface__msg__Autoaim__Sequence *)allocator.allocate(sizeof(global_interface__msg__Autoaim__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = global_interface__msg__Autoaim__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
global_interface__msg__Autoaim__Sequence__destroy(global_interface__msg__Autoaim__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    global_interface__msg__Autoaim__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
global_interface__msg__Autoaim__Sequence__are_equal(const global_interface__msg__Autoaim__Sequence * lhs, const global_interface__msg__Autoaim__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!global_interface__msg__Autoaim__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
global_interface__msg__Autoaim__Sequence__copy(
  const global_interface__msg__Autoaim__Sequence * input,
  global_interface__msg__Autoaim__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(global_interface__msg__Autoaim);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    global_interface__msg__Autoaim * data =
      (global_interface__msg__Autoaim *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!global_interface__msg__Autoaim__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          global_interface__msg__Autoaim__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!global_interface__msg__Autoaim__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
