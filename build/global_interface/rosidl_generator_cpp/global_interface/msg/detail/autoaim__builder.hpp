// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_interface:msg/Autoaim.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__BUILDER_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_interface/msg/detail/autoaim__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_interface
{

namespace msg
{

namespace builder
{

class Init_Autoaim_aiming_point_cam
{
public:
  explicit Init_Autoaim_aiming_point_cam(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  ::global_interface::msg::Autoaim aiming_point_cam(::global_interface::msg::Autoaim::_aiming_point_cam_type arg)
  {
    msg_.aiming_point_cam = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_aiming_point_world
{
public:
  explicit Init_Autoaim_aiming_point_world(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_aiming_point_cam aiming_point_world(::global_interface::msg::Autoaim::_aiming_point_world_type arg)
  {
    msg_.aiming_point_world = std::move(arg);
    return Init_Autoaim_aiming_point_cam(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_quat_imu
{
public:
  explicit Init_Autoaim_quat_imu(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_aiming_point_world quat_imu(::global_interface::msg::Autoaim::_quat_imu_type arg)
  {
    msg_.quat_imu = std::move(arg);
    return Init_Autoaim_aiming_point_world(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_is_still_spinning
{
public:
  explicit Init_Autoaim_is_still_spinning(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_quat_imu is_still_spinning(::global_interface::msg::Autoaim::_is_still_spinning_type arg)
  {
    msg_.is_still_spinning = std::move(arg);
    return Init_Autoaim_quat_imu(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_spinning_switched
{
public:
  explicit Init_Autoaim_spinning_switched(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_is_still_spinning spinning_switched(::global_interface::msg::Autoaim::_spinning_switched_type arg)
  {
    msg_.spinning_switched = std::move(arg);
    return Init_Autoaim_is_still_spinning(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_target_switched
{
public:
  explicit Init_Autoaim_target_switched(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_spinning_switched target_switched(::global_interface::msg::Autoaim::_target_switched_type arg)
  {
    msg_.target_switched = std::move(arg);
    return Init_Autoaim_spinning_switched(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_is_target_lost
{
public:
  explicit Init_Autoaim_is_target_lost(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_target_switched is_target_lost(::global_interface::msg::Autoaim::_is_target_lost_type arg)
  {
    msg_.is_target_lost = std::move(arg);
    return Init_Autoaim_target_switched(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_is_controlled
{
public:
  explicit Init_Autoaim_is_controlled(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_is_target_lost is_controlled(::global_interface::msg::Autoaim::_is_controlled_type arg)
  {
    msg_.is_controlled = std::move(arg);
    return Init_Autoaim_is_target_lost(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_is_spinning
{
public:
  explicit Init_Autoaim_is_spinning(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_is_controlled is_spinning(::global_interface::msg::Autoaim::_is_spinning_type arg)
  {
    msg_.is_spinning = std::move(arg);
    return Init_Autoaim_is_controlled(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_clockwise
{
public:
  explicit Init_Autoaim_clockwise(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_is_spinning clockwise(::global_interface::msg::Autoaim::_clockwise_type arg)
  {
    msg_.clockwise = std::move(arg);
    return Init_Autoaim_is_spinning(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_point2d
{
public:
  explicit Init_Autoaim_point2d(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_clockwise point2d(::global_interface::msg::Autoaim::_point2d_type arg)
  {
    msg_.point2d = std::move(arg);
    return Init_Autoaim_clockwise(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_timestamp
{
public:
  explicit Init_Autoaim_timestamp(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_point2d timestamp(::global_interface::msg::Autoaim::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Autoaim_point2d(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_bullet_speed
{
public:
  explicit Init_Autoaim_bullet_speed(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_timestamp bullet_speed(::global_interface::msg::Autoaim::_bullet_speed_type arg)
  {
    msg_.bullet_speed = std::move(arg);
    return Init_Autoaim_timestamp(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_period
{
public:
  explicit Init_Autoaim_period(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_bullet_speed period(::global_interface::msg::Autoaim::_period_type arg)
  {
    msg_.period = std::move(arg);
    return Init_Autoaim_bullet_speed(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_hp
{
public:
  explicit Init_Autoaim_hp(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_period hp(::global_interface::msg::Autoaim::_hp_type arg)
  {
    msg_.hp = std::move(arg);
    return Init_Autoaim_period(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_key
{
public:
  explicit Init_Autoaim_key(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_hp key(::global_interface::msg::Autoaim::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_Autoaim_hp(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_mode
{
public:
  explicit Init_Autoaim_mode(::global_interface::msg::Autoaim & msg)
  : msg_(msg)
  {}
  Init_Autoaim_key mode(::global_interface::msg::Autoaim::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Autoaim_key(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

class Init_Autoaim_header
{
public:
  Init_Autoaim_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Autoaim_mode header(::global_interface::msg::Autoaim::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Autoaim_mode(msg_);
  }

private:
  ::global_interface::msg::Autoaim msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_interface::msg::Autoaim>()
{
  return global_interface::msg::builder::Init_Autoaim_header();
}

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__BUILDER_HPP_
