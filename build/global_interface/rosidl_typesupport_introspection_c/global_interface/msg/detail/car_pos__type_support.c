// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from global_interface:msg/CarPos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "global_interface/msg/detail/car_pos__rosidl_typesupport_introspection_c.h"
#include "global_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "global_interface/msg/detail/car_pos__functions.h"
#include "global_interface/msg/detail/car_pos__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pos`
#include "global_interface/msg/point2f.h"
// Member `pos`
#include "global_interface/msg/detail/point2f__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  global_interface__msg__CarPos__init(message_memory);
}

void global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_fini_function(void * message_memory)
{
  global_interface__msg__CarPos__fini(message_memory);
}

size_t global_interface__msg__CarPos__rosidl_typesupport_introspection_c__size_function__CarPos__pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * global_interface__msg__CarPos__rosidl_typesupport_introspection_c__get_const_function__CarPos__pos(
  const void * untyped_member, size_t index)
{
  const global_interface__msg__Point2f * member =
    (const global_interface__msg__Point2f *)(untyped_member);
  return &member[index];
}

void * global_interface__msg__CarPos__rosidl_typesupport_introspection_c__get_function__CarPos__pos(
  void * untyped_member, size_t index)
{
  global_interface__msg__Point2f * member =
    (global_interface__msg__Point2f *)(untyped_member);
  return &member[index];
}

void global_interface__msg__CarPos__rosidl_typesupport_introspection_c__fetch_function__CarPos__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const global_interface__msg__Point2f * item =
    ((const global_interface__msg__Point2f *)
    global_interface__msg__CarPos__rosidl_typesupport_introspection_c__get_const_function__CarPos__pos(untyped_member, index));
  global_interface__msg__Point2f * value =
    (global_interface__msg__Point2f *)(untyped_value);
  *value = *item;
}

void global_interface__msg__CarPos__rosidl_typesupport_introspection_c__assign_function__CarPos__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  global_interface__msg__Point2f * item =
    ((global_interface__msg__Point2f *)
    global_interface__msg__CarPos__rosidl_typesupport_introspection_c__get_function__CarPos__pos(untyped_member, index));
  const global_interface__msg__Point2f * value =
    (const global_interface__msg__Point2f *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__CarPos, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__CarPos, pos),  // bytes offset in struct
    NULL,  // default value
    global_interface__msg__CarPos__rosidl_typesupport_introspection_c__size_function__CarPos__pos,  // size() function pointer
    global_interface__msg__CarPos__rosidl_typesupport_introspection_c__get_const_function__CarPos__pos,  // get_const(index) function pointer
    global_interface__msg__CarPos__rosidl_typesupport_introspection_c__get_function__CarPos__pos,  // get(index) function pointer
    global_interface__msg__CarPos__rosidl_typesupport_introspection_c__fetch_function__CarPos__pos,  // fetch(index, &value) function pointer
    global_interface__msg__CarPos__rosidl_typesupport_introspection_c__assign_function__CarPos__pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_message_members = {
  "global_interface__msg",  // message namespace
  "CarPos",  // message name
  2,  // number of fields
  sizeof(global_interface__msg__CarPos),
  global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_message_member_array,  // message members
  global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_init_function,  // function to initialize message memory (memory has to be allocated)
  global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_message_type_support_handle = {
  0,
  &global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_global_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, global_interface, msg, CarPos)() {
  global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, global_interface, msg, Point2f)();
  if (!global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_message_type_support_handle.typesupport_identifier) {
    global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &global_interface__msg__CarPos__rosidl_typesupport_introspection_c__CarPos_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
