// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_decision_interfaces:msg/Refree.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__REFREE__BUILDER_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__REFREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_decision_interfaces/msg/detail/refree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_decision_interfaces
{

namespace msg
{

namespace builder
{

class Init_Refree_color
{
public:
  explicit Init_Refree_color(::rm_decision_interfaces::msg::Refree & msg)
  : msg_(msg)
  {}
  ::rm_decision_interfaces::msg::Refree color(::rm_decision_interfaces::msg::Refree::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_decision_interfaces::msg::Refree msg_;
};

class Init_Refree_base_hp
{
public:
  explicit Init_Refree_base_hp(::rm_decision_interfaces::msg::Refree & msg)
  : msg_(msg)
  {}
  Init_Refree_color base_hp(::rm_decision_interfaces::msg::Refree::_base_hp_type arg)
  {
    msg_.base_hp = std::move(arg);
    return Init_Refree_color(msg_);
  }

private:
  ::rm_decision_interfaces::msg::Refree msg_;
};

class Init_Refree_robot_hp
{
public:
  Init_Refree_robot_hp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Refree_base_hp robot_hp(::rm_decision_interfaces::msg::Refree::_robot_hp_type arg)
  {
    msg_.robot_hp = std::move(arg);
    return Init_Refree_base_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::Refree msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_decision_interfaces::msg::Refree>()
{
  return rm_decision_interfaces::msg::builder::Init_Refree_robot_hp();
}

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__REFREE__BUILDER_HPP_
