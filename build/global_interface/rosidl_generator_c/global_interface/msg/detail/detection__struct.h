// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_interface:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__DETECTION__STRUCT_H_
#define GLOBAL_INTERFACE__MSG__DETAIL__DETECTION__STRUCT_H_

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
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'center'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Detection in the package global_interface.
typedef struct global_interface__msg__Detection
{
  std_msgs__msg__Header header;
  float conf;
  rosidl_runtime_c__String type;
  geometry_msgs__msg__Pose center;
} global_interface__msg__Detection;

// Struct for a sequence of global_interface__msg__Detection.
typedef struct global_interface__msg__Detection__Sequence
{
  global_interface__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_interface__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__DETECTION__STRUCT_H_
