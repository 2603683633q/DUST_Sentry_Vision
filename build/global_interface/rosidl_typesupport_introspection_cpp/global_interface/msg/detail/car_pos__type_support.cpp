// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from global_interface:msg/CarPos.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "global_interface/msg/detail/car_pos__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace global_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CarPos_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) global_interface::msg::CarPos(_init);
}

void CarPos_fini_function(void * message_memory)
{
  auto typed_message = static_cast<global_interface::msg::CarPos *>(message_memory);
  typed_message->~CarPos();
}

size_t size_function__CarPos__pos(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__CarPos__pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<global_interface::msg::Point2f, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__CarPos__pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<global_interface::msg::Point2f, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__CarPos__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const global_interface::msg::Point2f *>(
    get_const_function__CarPos__pos(untyped_member, index));
  auto & value = *reinterpret_cast<global_interface::msg::Point2f *>(untyped_value);
  value = item;
}

void assign_function__CarPos__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<global_interface::msg::Point2f *>(
    get_function__CarPos__pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const global_interface::msg::Point2f *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CarPos_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(global_interface::msg::CarPos, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<global_interface::msg::Point2f>(),  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(global_interface::msg::CarPos, pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__CarPos__pos,  // size() function pointer
    get_const_function__CarPos__pos,  // get_const(index) function pointer
    get_function__CarPos__pos,  // get(index) function pointer
    fetch_function__CarPos__pos,  // fetch(index, &value) function pointer
    assign_function__CarPos__pos,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CarPos_message_members = {
  "global_interface::msg",  // message namespace
  "CarPos",  // message name
  2,  // number of fields
  sizeof(global_interface::msg::CarPos),
  CarPos_message_member_array,  // message members
  CarPos_init_function,  // function to initialize message memory (memory has to be allocated)
  CarPos_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CarPos_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CarPos_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace global_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<global_interface::msg::CarPos>()
{
  return &::global_interface::msg::rosidl_typesupport_introspection_cpp::CarPos_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, global_interface, msg, CarPos)() {
  return &::global_interface::msg::rosidl_typesupport_introspection_cpp::CarPos_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
