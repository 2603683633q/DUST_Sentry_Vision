// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_interface:msg/Point2f.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__POINT2F__STRUCT_H_
#define GLOBAL_INTERFACE__MSG__DETAIL__POINT2F__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point2f in the package global_interface.
typedef struct global_interface__msg__Point2f
{
  float x;
  float y;
} global_interface__msg__Point2f;

// Struct for a sequence of global_interface__msg__Point2f.
typedef struct global_interface__msg__Point2f__Sequence
{
  global_interface__msg__Point2f * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_interface__msg__Point2f__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__POINT2F__STRUCT_H_
