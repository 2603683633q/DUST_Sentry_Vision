// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_interface:msg/DetectionArray.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__DETECTION_ARRAY__STRUCT_H_
#define GLOBAL_INTERFACE__MSG__DETAIL__DETECTION_ARRAY__STRUCT_H_

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
// Member 'detections'
#include "global_interface/msg/detail/detection__struct.h"

/// Struct defined in msg/DetectionArray in the package global_interface.
typedef struct global_interface__msg__DetectionArray
{
  std_msgs__msg__Header header;
  global_interface__msg__Detection__Sequence detections;
} global_interface__msg__DetectionArray;

// Struct for a sequence of global_interface__msg__DetectionArray.
typedef struct global_interface__msg__DetectionArray__Sequence
{
  global_interface__msg__DetectionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_interface__msg__DetectionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__DETECTION_ARRAY__STRUCT_H_
