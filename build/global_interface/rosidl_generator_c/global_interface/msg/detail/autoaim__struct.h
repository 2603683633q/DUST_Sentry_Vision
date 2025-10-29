// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from global_interface:msg/Autoaim.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__STRUCT_H_
#define GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__STRUCT_H_

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
// Member 'key'
#include "rosidl_runtime_c/string.h"
// Member 'point2d'
#include "global_interface/msg/detail/point2f__struct.h"
// Member 'quat_imu'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'aiming_point_world'
// Member 'aiming_point_cam'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Autoaim in the package global_interface.
typedef struct global_interface__msg__Autoaim
{
  std_msgs__msg__Header header;
  uint8_t mode;
  rosidl_runtime_c__String key;
  uint16_t hp;
  double period;
  double bullet_speed;
  int64_t timestamp;
  global_interface__msg__Point2f point2d[4];
  /// float64 w
  bool clockwise;
  bool is_spinning;
  bool is_controlled;
  bool is_target_lost;
  bool target_switched;
  bool spinning_switched;
  bool is_still_spinning;
  geometry_msgs__msg__Quaternion quat_imu;
  geometry_msgs__msg__Point aiming_point_world;
  geometry_msgs__msg__Point aiming_point_cam;
} global_interface__msg__Autoaim;

// Struct for a sequence of global_interface__msg__Autoaim.
typedef struct global_interface__msg__Autoaim__Sequence
{
  global_interface__msg__Autoaim * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} global_interface__msg__Autoaim__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__STRUCT_H_
