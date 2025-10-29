// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_interface:msg/StrikeLicensing.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__BUILDER_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_interface/msg/detail/strike_licensing__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_interface
{

namespace msg
{

namespace builder
{

class Init_StrikeLicensing_weights
{
public:
  explicit Init_StrikeLicensing_weights(::global_interface::msg::StrikeLicensing & msg)
  : msg_(msg)
  {}
  ::global_interface::msg::StrikeLicensing weights(::global_interface::msg::StrikeLicensing::_weights_type arg)
  {
    msg_.weights = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_interface::msg::StrikeLicensing msg_;
};

class Init_StrikeLicensing_header
{
public:
  Init_StrikeLicensing_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StrikeLicensing_weights header(::global_interface::msg::StrikeLicensing::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StrikeLicensing_weights(msg_);
  }

private:
  ::global_interface::msg::StrikeLicensing msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_interface::msg::StrikeLicensing>()
{
  return global_interface::msg::builder::Init_StrikeLicensing_header();
}

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__BUILDER_HPP_
