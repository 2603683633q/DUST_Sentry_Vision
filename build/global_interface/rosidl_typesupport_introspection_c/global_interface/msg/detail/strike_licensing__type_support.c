// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from global_interface:msg/StrikeLicensing.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "global_interface/msg/detail/strike_licensing__rosidl_typesupport_introspection_c.h"
#include "global_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "global_interface/msg/detail/strike_licensing__functions.h"
#include "global_interface/msg/detail/strike_licensing__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  global_interface__msg__StrikeLicensing__init(message_memory);
}

void global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_fini_function(void * message_memory)
{
  global_interface__msg__StrikeLicensing__fini(message_memory);
}

size_t global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__size_function__StrikeLicensing__weights(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__get_const_function__StrikeLicensing__weights(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__get_function__StrikeLicensing__weights(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__fetch_function__StrikeLicensing__weights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__get_const_function__StrikeLicensing__weights(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__assign_function__StrikeLicensing__weights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__get_function__StrikeLicensing__weights(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__StrikeLicensing, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__StrikeLicensing, weights),  // bytes offset in struct
    NULL,  // default value
    global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__size_function__StrikeLicensing__weights,  // size() function pointer
    global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__get_const_function__StrikeLicensing__weights,  // get_const(index) function pointer
    global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__get_function__StrikeLicensing__weights,  // get(index) function pointer
    global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__fetch_function__StrikeLicensing__weights,  // fetch(index, &value) function pointer
    global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__assign_function__StrikeLicensing__weights,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_message_members = {
  "global_interface__msg",  // message namespace
  "StrikeLicensing",  // message name
  2,  // number of fields
  sizeof(global_interface__msg__StrikeLicensing),
  global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_message_member_array,  // message members
  global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_init_function,  // function to initialize message memory (memory has to be allocated)
  global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_message_type_support_handle = {
  0,
  &global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_global_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, global_interface, msg, StrikeLicensing)() {
  global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_message_type_support_handle.typesupport_identifier) {
    global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &global_interface__msg__StrikeLicensing__rosidl_typesupport_introspection_c__StrikeLicensing_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
