// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from global_interface:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__GAME_INFO__BUILDER_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__GAME_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "global_interface/msg/detail/game_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace global_interface
{

namespace msg
{

namespace builder
{

class Init_GameInfo_game_stage
{
public:
  explicit Init_GameInfo_game_stage(::global_interface::msg::GameInfo & msg)
  : msg_(msg)
  {}
  ::global_interface::msg::GameInfo game_stage(::global_interface::msg::GameInfo::_game_stage_type arg)
  {
    msg_.game_stage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::global_interface::msg::GameInfo msg_;
};

class Init_GameInfo_timestamp
{
public:
  explicit Init_GameInfo_timestamp(::global_interface::msg::GameInfo & msg)
  : msg_(msg)
  {}
  Init_GameInfo_game_stage timestamp(::global_interface::msg::GameInfo::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GameInfo_game_stage(msg_);
  }

private:
  ::global_interface::msg::GameInfo msg_;
};

class Init_GameInfo_header
{
public:
  Init_GameInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameInfo_timestamp header(::global_interface::msg::GameInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GameInfo_timestamp(msg_);
  }

private:
  ::global_interface::msg::GameInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::global_interface::msg::GameInfo>()
{
  return global_interface::msg::builder::Init_GameInfo_header();
}

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__GAME_INFO__BUILDER_HPP_
