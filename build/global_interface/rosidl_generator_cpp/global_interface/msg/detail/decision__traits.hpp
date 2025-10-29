// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from global_interface:msg/Decision.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__DECISION__TRAITS_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__DECISION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "global_interface/msg/detail/decision__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace global_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Decision & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: decision_id
  {
    out << "decision_id: ";
    rosidl_generator_traits::value_to_yaml(msg.decision_id, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Decision & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: decision_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decision_id: ";
    rosidl_generator_traits::value_to_yaml(msg.decision_id, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Decision & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace global_interface

namespace rosidl_generator_traits
{

[[deprecated("use global_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const global_interface::msg::Decision & msg,
  std::ostream & out, size_t indentation = 0)
{
  global_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use global_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const global_interface::msg::Decision & msg)
{
  return global_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<global_interface::msg::Decision>()
{
  return "global_interface::msg::Decision";
}

template<>
inline const char * name<global_interface::msg::Decision>()
{
  return "global_interface/msg/Decision";
}

template<>
struct has_fixed_size<global_interface::msg::Decision>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<global_interface::msg::Decision>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<global_interface::msg::Decision>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__DECISION__TRAITS_HPP_
