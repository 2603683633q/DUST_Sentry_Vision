// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from global_interface:msg/ModeSet.idl
// generated code does not contain a copyright notice
#include "global_interface/msg/detail/mode_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
global_interface__msg__ModeSet__init(global_interface__msg__ModeSet * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    global_interface__msg__ModeSet__fini(msg);
    return false;
  }
  // mode
  // x
  // y
  return true;
}

void
global_interface__msg__ModeSet__fini(global_interface__msg__ModeSet * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mode
  // x
  // y
}

bool
global_interface__msg__ModeSet__are_equal(const global_interface__msg__ModeSet * lhs, const global_interface__msg__ModeSet * rhs)
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
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
global_interface__msg__ModeSet__copy(
  const global_interface__msg__ModeSet * input,
  global_interface__msg__ModeSet * output)
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
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

global_interface__msg__ModeSet *
global_interface__msg__ModeSet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__ModeSet * msg = (global_interface__msg__ModeSet *)allocator.allocate(sizeof(global_interface__msg__ModeSet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(global_interface__msg__ModeSet));
  bool success = global_interface__msg__ModeSet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
global_interface__msg__ModeSet__destroy(global_interface__msg__ModeSet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    global_interface__msg__ModeSet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
global_interface__msg__ModeSet__Sequence__init(global_interface__msg__ModeSet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__ModeSet * data = NULL;

  if (size) {
    data = (global_interface__msg__ModeSet *)allocator.zero_allocate(size, sizeof(global_interface__msg__ModeSet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = global_interface__msg__ModeSet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        global_interface__msg__ModeSet__fini(&data[i - 1]);
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
global_interface__msg__ModeSet__Sequence__fini(global_interface__msg__ModeSet__Sequence * array)
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
      global_interface__msg__ModeSet__fini(&array->data[i]);
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

global_interface__msg__ModeSet__Sequence *
global_interface__msg__ModeSet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__ModeSet__Sequence * array = (global_interface__msg__ModeSet__Sequence *)allocator.allocate(sizeof(global_interface__msg__ModeSet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = global_interface__msg__ModeSet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
global_interface__msg__ModeSet__Sequence__destroy(global_interface__msg__ModeSet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    global_interface__msg__ModeSet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
global_interface__msg__ModeSet__Sequence__are_equal(const global_interface__msg__ModeSet__Sequence * lhs, const global_interface__msg__ModeSet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!global_interface__msg__ModeSet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
global_interface__msg__ModeSet__Sequence__copy(
  const global_interface__msg__ModeSet__Sequence * input,
  global_interface__msg__ModeSet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(global_interface__msg__ModeSet);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    global_interface__msg__ModeSet * data =
      (global_interface__msg__ModeSet *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!global_interface__msg__ModeSet__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          global_interface__msg__ModeSet__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!global_interface__msg__ModeSet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
