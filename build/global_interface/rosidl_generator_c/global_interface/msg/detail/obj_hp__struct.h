// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_interface:msg/ObjHP.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__STRUCT_H_
#define GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__STRUCT_H_

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

/// Struct defined in msg/ObjHP in the package global_interface.
typedef struct global_interface__msg__ObjHP
{
  std_msgs__msg__Header header;
  uint16_t hp[16];
} global_interface__msg__ObjHP;

// Struct for a sequence of global_interface__msg__ObjHP.
typedef struct global_interface__msg__ObjHP__Sequence
{
  global_interface__msg__ObjHP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_interface__msg__ObjHP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__STRUCT_H_
