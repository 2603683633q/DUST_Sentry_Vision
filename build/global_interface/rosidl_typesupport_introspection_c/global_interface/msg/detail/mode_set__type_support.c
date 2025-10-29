// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from global_interface:msg/ModeSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "global_interface/msg/detail/mode_set__rosidl_typesupport_introspection_c.h"
#include "global_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "global_interface/msg/detail/mode_set__functions.h"
#include "global_interface/msg/detail/mode_set__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  global_interface__msg__ModeSet__init(message_memory);
}

void global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_fini_function(void * message_memory)
{
  global_interface__msg__ModeSet__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__ModeSet, header),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__ModeSet, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__ModeSet, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface__msg__ModeSet, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_message_members = {
  "global_interface__msg",  // message namespace
  "ModeSet",  // message name
  4,  // number of fields
  sizeof(global_interface__msg__ModeSet),
  global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_message_member_array,  // message members
  global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_init_function,  // function to initialize message memory (memory has to be allocated)
  global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_message_type_support_handle = {
  0,
  &global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_global_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, global_interface, msg, ModeSet)() {
  global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_message_type_support_handle.typesupport_identifier) {
    global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &global_interface__msg__ModeSet__rosidl_typesupport_introspection_c__ModeSet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
