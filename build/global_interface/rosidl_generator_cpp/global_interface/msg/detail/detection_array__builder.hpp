// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_interface:msg/DetectionArray.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__DETECTION_ARRAY__BUILDER_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__DETECTION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_interface/msg/detail/detection_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_interface
{

namespace msg
{

namespace builder
{

class Init_DetectionArray_detections
{
public:
  explicit Init_DetectionArray_detections(::global_interface::msg::DetectionArray & msg)
  : msg_(msg)
  {}
  ::global_interface::msg::DetectionArray detections(::global_interface::msg::DetectionArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_interface::msg::DetectionArray msg_;
};

class Init_DetectionArray_header
{
public:
  Init_DetectionArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionArray_detections header(::global_interface::msg::DetectionArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectionArray_detections(msg_);
  }

private:
  ::global_interface::msg::DetectionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_interface::msg::DetectionArray>()
{
  return global_interface::msg::builder::Init_DetectionArray_header();
}

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__DETECTION_ARRAY__BUILDER_HPP_
