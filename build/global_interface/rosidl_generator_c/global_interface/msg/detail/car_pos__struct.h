// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_interface:msg/CarPos.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__STRUCT_H_
#define GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__STRUCT_H_

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
// Member 'pos'
#include "global_interface/msg/detail/point2f__struct.h"

/// Struct defined in msg/CarPos in the package global_interface.
typedef struct global_interface__msg__CarPos
{
  std_msgs__msg__Header header;
  global_interface__msg__Point2f pos[12];
} global_interface__msg__CarPos;

// Struct for a sequence of global_interface__msg__CarPos.
typedef struct global_interface__msg__CarPos__Sequence
{
  global_interface__msg__CarPos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_interface__msg__CarPos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__STRUCT_H_
