// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_interface:msg/ObjHP.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__BUILDER_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_interface/msg/detail/obj_hp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_interface
{

namespace msg
{

namespace builder
{

class Init_ObjHP_hp
{
public:
  explicit Init_ObjHP_hp(::global_interface::msg::ObjHP & msg)
  : msg_(msg)
  {}
  ::global_interface::msg::ObjHP hp(::global_interface::msg::ObjHP::_hp_type arg)
  {
    msg_.hp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_interface::msg::ObjHP msg_;
};

class Init_ObjHP_header
{
public:
  Init_ObjHP_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjHP_hp header(::global_interface::msg::ObjHP::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjHP_hp(msg_);
  }

private:
  ::global_interface::msg::ObjHP msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_interface::msg::ObjHP>()
{
  return global_interface::msg::builder::Init_ObjHP_header();
}

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__BUILDER_HPP_
