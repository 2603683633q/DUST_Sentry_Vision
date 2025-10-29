// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_interface:msg/CarPos.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__BUILDER_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_interface/msg/detail/car_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_interface
{

namespace msg
{

namespace builder
{

class Init_CarPos_pos
{
public:
  explicit Init_CarPos_pos(::global_interface::msg::CarPos & msg)
  : msg_(msg)
  {}
  ::global_interface::msg::CarPos pos(::global_interface::msg::CarPos::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_interface::msg::CarPos msg_;
};

class Init_CarPos_header
{
public:
  Init_CarPos_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarPos_pos header(::global_interface::msg::CarPos::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CarPos_pos(msg_);
  }

private:
  ::global_interface::msg::CarPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_interface::msg::CarPos>()
{
  return global_interface::msg::builder::Init_CarPos_header();
}

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__BUILDER_HPP_
