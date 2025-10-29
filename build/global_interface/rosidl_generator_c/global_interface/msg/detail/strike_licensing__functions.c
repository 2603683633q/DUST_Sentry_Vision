// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from global_interface:msg/StrikeLicensing.idl
// generated code does not contain a copyright notice
#include "global_interface/msg/detail/strike_licensing__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
global_interface__msg__StrikeLicensing__init(global_interface__msg__StrikeLicensing * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    global_interface__msg__StrikeLicensing__fini(msg);
    return false;
  }
  // weights
  return true;
}

void
global_interface__msg__StrikeLicensing__fini(global_interface__msg__StrikeLicensing * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // weights
}

bool
global_interface__msg__StrikeLicensing__are_equal(const global_interface__msg__StrikeLicensing * lhs, const global_interface__msg__StrikeLicensing * rhs)
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
  // weights
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->weights[i] != rhs->weights[i]) {
      return false;
    }
  }
  return true;
}

bool
global_interface__msg__StrikeLicensing__copy(
  const global_interface__msg__StrikeLicensing * input,
  global_interface__msg__StrikeLicensing * output)
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
  // weights
  for (size_t i = 0; i < 6; ++i) {
    output->weights[i] = input->weights[i];
  }
  return true;
}

global_interface__msg__StrikeLicensing *
global_interface__msg__StrikeLicensing__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__StrikeLicensing * msg = (global_interface__msg__StrikeLicensing *)allocator.allocate(sizeof(global_interface__msg__StrikeLicensing), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(global_interface__msg__StrikeLicensing));
  bool success = global_interface__msg__StrikeLicensing__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
global_interface__msg__StrikeLicensing__destroy(global_interface__msg__StrikeLicensing * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    global_interface__msg__StrikeLicensing__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
global_interface__msg__StrikeLicensing__Sequence__init(global_interface__msg__StrikeLicensing__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__StrikeLicensing * data = NULL;

  if (size) {
    data = (global_interface__msg__StrikeLicensing *)allocator.zero_allocate(size, sizeof(global_interface__msg__StrikeLicensing), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = global_interface__msg__StrikeLicensing__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        global_interface__msg__StrikeLicensing__fini(&data[i - 1]);
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
global_interface__msg__StrikeLicensing__Sequence__fini(global_interface__msg__StrikeLicensing__Sequence * array)
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
      global_interface__msg__StrikeLicensing__fini(&array->data[i]);
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

global_interface__msg__StrikeLicensing__Sequence *
global_interface__msg__StrikeLicensing__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  global_interface__msg__StrikeLicensing__Sequence * array = (global_interface__msg__StrikeLicensing__Sequence *)allocator.allocate(sizeof(global_interface__msg__StrikeLicensing__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = global_interface__msg__StrikeLicensing__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
global_interface__msg__StrikeLicensing__Sequence__destroy(global_interface__msg__StrikeLicensing__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    global_interface__msg__StrikeLicensing__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
global_interface__msg__StrikeLicensing__Sequence__are_equal(const global_interface__msg__StrikeLicensing__Sequence * lhs, const global_interface__msg__StrikeLicensing__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!global_interface__msg__StrikeLicensing__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
global_interface__msg__StrikeLicensing__Sequence__copy(
  const global_interface__msg__StrikeLicensing__Sequence * input,
  global_interface__msg__StrikeLicensing__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(global_interface__msg__StrikeLicensing);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    global_interface__msg__StrikeLicensing * data =
      (global_interface__msg__StrikeLicensing *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!global_interface__msg__StrikeLicensing__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          global_interface__msg__StrikeLicensing__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!global_interface__msg__StrikeLicensing__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
