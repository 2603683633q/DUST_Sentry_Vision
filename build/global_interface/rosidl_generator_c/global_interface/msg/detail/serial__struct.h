// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_interface:msg/Serial.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__SERIAL__STRUCT_H_
#define GLOBAL_INTERFACE__MSG__DETAIL__SERIAL__STRUCT_H_

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
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.h"

/// Struct defined in msg/Serial in the package global_interface.
typedef struct global_interface__msg__Serial
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Imu imu;
  uint8_t mode;
  float theta;
  float bullet_speed;
} global_interface__msg__Serial;

// Struct for a sequence of global_interface__msg__Serial.
typedef struct global_interface__msg__Serial__Sequence
{
  global_interface__msg__Serial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_interface__msg__Serial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__SERIAL__STRUCT_H_
