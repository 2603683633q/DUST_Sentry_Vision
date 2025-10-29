// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_interface:msg/Decision.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__DECISION__BUILDER_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__DECISION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_interface/msg/detail/decision__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_interface
{

namespace msg
{

namespace builder
{

class Init_Decision_mode
{
public:
  explicit Init_Decision_mode(::global_interface::msg::Decision & msg)
  : msg_(msg)
  {}
  ::global_interface::msg::Decision mode(::global_interface::msg::Decision::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_interface::msg::Decision msg_;
};

class Init_Decision_theta
{
public:
  explicit Init_Decision_theta(::global_interface::msg::Decision & msg)
  : msg_(msg)
  {}
  Init_Decision_mode theta(::global_interface::msg::Decision::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Decision_mode(msg_);
  }

private:
  ::global_interface::msg::Decision msg_;
};

class Init_Decision_y
{
public:
  explicit Init_Decision_y(::global_interface::msg::Decision & msg)
  : msg_(msg)
  {}
  Init_Decision_theta y(::global_interface::msg::Decision::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Decision_theta(msg_);
  }

private:
  ::global_interface::msg::Decision msg_;
};

class Init_Decision_x
{
public:
  explicit Init_Decision_x(::global_interface::msg::Decision & msg)
  : msg_(msg)
  {}
  Init_Decision_y x(::global_interface::msg::Decision::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Decision_y(msg_);
  }

private:
  ::global_interface::msg::Decision msg_;
};

class Init_Decision_decision_id
{
public:
  explicit Init_Decision_decision_id(::global_interface::msg::Decision & msg)
  : msg_(msg)
  {}
  Init_Decision_x decision_id(::global_interface::msg::Decision::_decision_id_type arg)
  {
    msg_.decision_id = std::move(arg);
    return Init_Decision_x(msg_);
  }

private:
  ::global_interface::msg::Decision msg_;
};

class Init_Decision_header
{
public:
  Init_Decision_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Decision_decision_id header(::global_interface::msg::Decision::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Decision_decision_id(msg_);
  }

private:
  ::global_interface::msg::Decision msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_interface::msg::Decision>()
{
  return global_interface::msg::builder::Init_Decision_header();
}

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__DECISION__BUILDER_HPP_
