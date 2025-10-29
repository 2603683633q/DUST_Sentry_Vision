// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_interface:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__GAME_INFO__STRUCT_H_
#define GLOBAL_INTERFACE__MSG__DETAIL__GAME_INFO__STRUCT_H_

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

/// Struct defined in msg/GameInfo in the package global_interface.
typedef struct global_interface__msg__GameInfo
{
  std_msgs__msg__Header header;
  uint16_t timestamp;
  uint16_t game_stage;
} global_interface__msg__GameInfo;

// Struct for a sequence of global_interface__msg__GameInfo.
typedef struct global_interface__msg__GameInfo__Sequence
{
  global_interface__msg__GameInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_interface__msg__GameInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__GAME_INFO__STRUCT_H_
