// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from global_interface:msg/Autoaim.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "global_interface/msg/detail/autoaim__rosidl_typesupport_introspection_c.h"
#include "global_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "global_interface/msg/detail/autoaim__functions.h"
#include "global_interface/msg/detail/autoaim__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `key`
#include "rosidl_runtime_c/string_functions.h"
// Member `point2d`
#include "global_interface/msg/point2f.h"
// Member `point2d`
#include "global_interface/msg/detail/point2f__rosidl_typesupport_introspection_c.h"
// Member `quat_imu`
#include "geometry_msgs/msg/quaternion.h"
// Member `quat_imu`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `aiming_point_world`
// Member `aiming_point_cam`
#include "geometry_msgs/msg/point.h"
// Member `aiming_point_world`
// Member `aiming_point_cam`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  global_interface__msg__Autoaim__init(message_memory);
}

void global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_fini_function(void * message_memory)
{
  global_interface__msg__Autoaim__fini(message_memory);
}

size_t global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__size_function__Autoaim__point2d(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__get_const_function__Autoaim__point2d(
  const void * untyped_member, size_t index)
{
  const global_interface__msg__Point2f * member =
    (const global_interface__msg__Point2f *)(untyped_member);
  return &member[index];
}

void * global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__get_function__Autoaim__point2d(
  void * untyped_member, size_t index)
{
  global_interface__msg__Point2f * member =
    (global_interface__msg__Point2f *)(untyped_member);
  return &member[index];
}

void global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__fetch_function__Autoaim__point2d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const global_interface__msg__Point2f * item =
    ((const global_interface__msg__Point2f *)
    global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__get_const_function__Autoaim__point2d(untyped_member, index));
  global_interface__msg__Point2f * value =
    (global_interface__msg__Point2f *)(untyped_value);
  *value = *item;
}

void global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__assign_function__Autoaim__point2d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  global_interface__msg__Point2f * item =
    ((global_interface__msg__Point2f *)
    global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__get_function__Autoaim__point2d(untyped_member, index));
  const global_interface__msg__Point2f * value =
    (const global_interface__msg__Point2f *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_member_array[18] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, hp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "period",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, period),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bullet_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, bullet_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point2d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, point2d),  // bytes offset in struct
    NULL,  // default value
    global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__size_function__Autoaim__point2d,  // size() function pointer
    global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__get_const_function__Autoaim__point2d,  // get_const(index) function pointer
    global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__get_function__Autoaim__point2d,  // get(index) function pointer
    global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__fetch_function__Autoaim__point2d,  // fetch(index, &value) function pointer
    global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__assign_function__Autoaim__point2d,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clockwise",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, clockwise),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_spinning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, is_spinning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_controlled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, is_controlled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_target_lost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, is_target_lost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_switched",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, target_switched),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spinning_switched",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, spinning_switched),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_still_spinning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, is_still_spinning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quat_imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, quat_imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aiming_point_world",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, aiming_point_world),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aiming_point_cam",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__Autoaim, aiming_point_cam),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_members = {
  "global_interface__msg",  // message namespace
  "Autoaim",  // message name
  18,  // number of fields
  sizeof(global_interface__msg__Autoaim),
  global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_member_array,  // message members
  global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_init_function,  // function to initialize message memory (memory has to be allocated)
  global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_type_support_handle = {
  0,
  &global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_global_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, global_interface, msg, Autoaim)() {
  global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, global_interface, msg, Point2f)();
  global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_type_support_handle.typesupport_identifier) {
    global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &global_interface__msg__Autoaim__rosidl_typesupport_introspection_c__Autoaim_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
