// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_interface:msg/Serial.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__SERIAL__BUILDER_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__SERIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_interface/msg/detail/serial__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_interface
{

namespace msg
{

namespace builder
{

class Init_Serial_bullet_speed
{
public:
  explicit Init_Serial_bullet_speed(::global_interface::msg::Serial & msg)
  : msg_(msg)
  {}
  ::global_interface::msg::Serial bullet_speed(::global_interface::msg::Serial::_bullet_speed_type arg)
  {
    msg_.bullet_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_interface::msg::Serial msg_;
};

class Init_Serial_theta
{
public:
  explicit Init_Serial_theta(::global_interface::msg::Serial & msg)
  : msg_(msg)
  {}
  Init_Serial_bullet_speed theta(::global_interface::msg::Serial::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Serial_bullet_speed(msg_);
  }

private:
  ::global_interface::msg::Serial msg_;
};

class Init_Serial_mode
{
public:
  explicit Init_Serial_mode(::global_interface::msg::Serial & msg)
  : msg_(msg)
  {}
  Init_Serial_theta mode(::global_interface::msg::Serial::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Serial_theta(msg_);
  }

private:
  ::global_interface::msg::Serial msg_;
};

class Init_Serial_imu
{
public:
  explicit Init_Serial_imu(::global_interface::msg::Serial & msg)
  : msg_(msg)
  {}
  Init_Serial_mode imu(::global_interface::msg::Serial::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_Serial_mode(msg_);
  }

private:
  ::global_interface::msg::Serial msg_;
};

class Init_Serial_header
{
public:
  Init_Serial_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Serial_imu header(::global_interface::msg::Serial::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Serial_imu(msg_);
  }

private:
  ::global_interface::msg::Serial msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_interface::msg::Serial>()
{
  return global_interface::msg::builder::Init_Serial_header();
}

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__SERIAL__BUILDER_HPP_
