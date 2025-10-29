// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_interface:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_interface/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_interface
{

namespace msg
{

namespace builder
{

class Init_Detection_center
{
public:
  explicit Init_Detection_center(::global_interface::msg::Detection & msg)
  : msg_(msg)
  {}
  ::global_interface::msg::Detection center(::global_interface::msg::Detection::_center_type arg)
  {
    msg_.center = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_interface::msg::Detection msg_;
};

class Init_Detection_type
{
public:
  explicit Init_Detection_type(::global_interface::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_center type(::global_interface::msg::Detection::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Detection_center(msg_);
  }

private:
  ::global_interface::msg::Detection msg_;
};

class Init_Detection_conf
{
public:
  explicit Init_Detection_conf(::global_interface::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_type conf(::global_interface::msg::Detection::_conf_type arg)
  {
    msg_.conf = std::move(arg);
    return Init_Detection_type(msg_);
  }

private:
  ::global_interface::msg::Detection msg_;
};

class Init_Detection_header
{
public:
  Init_Detection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_conf header(::global_interface::msg::Detection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Detection_conf(msg_);
  }

private:
  ::global_interface::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_interface::msg::Detection>()
{
  return global_interface::msg::builder::Init_Detection_header();
}

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__DETECTION__BUILDER_HPP_
