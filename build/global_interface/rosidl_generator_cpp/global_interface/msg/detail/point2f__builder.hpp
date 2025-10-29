// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_interface:msg/Point2f.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__POINT2F__BUILDER_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__POINT2F__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_interface/msg/detail/point2f__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_interface
{

namespace msg
{

namespace builder
{

class Init_Point2f_y
{
public:
  explicit Init_Point2f_y(::global_interface::msg::Point2f & msg)
  : msg_(msg)
  {}
  ::global_interface::msg::Point2f y(::global_interface::msg::Point2f::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_interface::msg::Point2f msg_;
};

class Init_Point2f_x
{
public:
  Init_Point2f_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point2f_y x(::global_interface::msg::Point2f::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point2f_y(msg_);
  }

private:
  ::global_interface::msg::Point2f msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_interface::msg::Point2f>()
{
  return global_interface::msg::builder::Init_Point2f_x();
}

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__POINT2F__BUILDER_HPP_
