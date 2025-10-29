// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from global_interface:msg/Decision.idl
// generated code does not contain a copyright notice
#include "global_interface/msg/detail/decision__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
global_interface__msg__Decision__init(global_interface__msg__Decision * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    global_interface__msg__Decision__fini(msg);
    return false;
  }
  // decision_id
  // x
  // y
  // theta
  // mode
  return true;
}

void
global_interface__msg__Decision__fini(global_interface__msg__Decision * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // decision_id
  // x
  // y
  // theta
  // mode
}

bool
global_interface__msg__Decision__are_equal(const global_interface__msg__Decision * lhs, const global_interface__msg__Decision * rhs)
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
  // decision_id
  if (lhs->decision_id != rhs->decision_id) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
global_interface__msg__Decision__copy(
  const global_interface__msg__Decision * input,
  global_interface__msg__Decision * output)
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
  // decision_id
  output->decision_id = input->decision_id;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  // mode
  output->mode = input->mode;
  return true;
}

global_interface__msg__Decision *
global_interface__msg__Decision__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__Decision * msg = (global_interface__msg__Decision *)allocator.allocate(sizeof(global_interface__msg__Decision), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(global_interface__msg__Decision));
  bool success = global_interface__msg__Decision__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
global_interface__msg__Decision__destroy(global_interface__msg__Decision * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    global_interface__msg__Decision__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
global_interface__msg__Decision__Sequence__init(global_interface__msg__Decision__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__Decision * data = NULL;

  if (size) {
    data = (global_interface__msg__Decision *)allocator.zero_allocate(size, sizeof(global_interface__msg__Decision), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = global_interface__msg__Decision__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        global_interface__msg__Decision__fini(&data[i - 1]);
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
global_interface__msg__Decision__Sequence__fini(global_interface__msg__Decision__Sequence * array)
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
      global_interface__msg__Decision__fini(&array->data[i]);
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

global_interface__msg__Decision__Sequence *
global_interface__msg__Decision__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__Decision__Sequence * array = (global_interface__msg__Decision__Sequence *)allocator.allocate(sizeof(global_interface__msg__Decision__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = global_interface__msg__Decision__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
global_interface__msg__Decision__Sequence__destroy(global_interface__msg__Decision__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    global_interface__msg__Decision__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
global_interface__msg__Decision__Sequence__are_equal(const global_interface__msg__Decision__Sequence * lhs, const global_interface__msg__Decision__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!global_interface__msg__Decision__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
global_interface__msg__Decision__Sequence__copy(
  const global_interface__msg__Decision__Sequence * input,
  global_interface__msg__Decision__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(global_interface__msg__Decision);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    global_interface__msg__Decision * data =
      (global_interface__msg__Decision *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!global_interface__msg__Decision__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          global_interface__msg__Decision__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!global_interface__msg__Decision__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
