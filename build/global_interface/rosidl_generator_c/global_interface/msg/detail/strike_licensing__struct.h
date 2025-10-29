// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_interface:msg/StrikeLicensing.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__STRUCT_H_
#define GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/StrikeLicensing in the package global_interface.
typedef struct global_interface__msg__StrikeLicensing
{
  std_msgs__msg__Header header;
  float weights[6];
} global_interface__msg__StrikeLicensing;

// Struct for a sequence of global_interface__msg__StrikeLicensing.
typedef struct global_interface__msg__StrikeLicensing__Sequence
{
  global_interface__msg__StrikeLicensing * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_interface__msg__StrikeLicensing__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__STRUCT_H_
