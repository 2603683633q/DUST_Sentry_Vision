// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_interface:msg/ModeSet.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__MODE_SET__BUILDER_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__MODE_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_interface/msg/detail/mode_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_interface
{

namespace msg
{

namespace builder
{

class Init_ModeSet_y
{
public:
  explicit Init_ModeSet_y(::global_interface::msg::ModeSet & msg)
  : msg_(msg)
  {}
  ::global_interface::msg::ModeSet y(::global_interface::msg::ModeSet::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_interface::msg::ModeSet msg_;
};

class Init_ModeSet_x
{
public:
  explicit Init_ModeSet_x(::global_interface::msg::ModeSet & msg)
  : msg_(msg)
  {}
  Init_ModeSet_y x(::global_interface::msg::ModeSet::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ModeSet_y(msg_);
  }

private:
  ::global_interface::msg::ModeSet msg_;
};

class Init_ModeSet_mode
{
public:
  explicit Init_ModeSet_mode(::global_interface::msg::ModeSet & msg)
  : msg_(msg)
  {}
  Init_ModeSet_x mode(::global_interface::msg::ModeSet::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ModeSet_x(msg_);
  }

private:
  ::global_interface::msg::ModeSet msg_;
};

class Init_ModeSet_header
{
public:
  Init_ModeSet_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModeSet_mode header(::global_interface::msg::ModeSet::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ModeSet_mode(msg_);
  }

private:
  ::global_interface::msg::ModeSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_interface::msg::ModeSet>()
{
  return global_interface::msg::builder::Init_ModeSet_header();
}

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__MODE_SET__BUILDER_HPP_
