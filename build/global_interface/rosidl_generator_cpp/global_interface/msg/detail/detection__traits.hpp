// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from global_interface:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "global_interface/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'center'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace global_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: conf
  {
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection & msg,
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

  // member: conf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection & msg, bool use_flow_style = false)
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
  const global_interface::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  global_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use global_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const global_interface::msg::Detection & msg)
{
  return global_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<global_interface::msg::Detection>()
{
  return "global_interface::msg::Detection";
}

template<>
inline const char * name<global_interface::msg::Detection>()
{
  return "global_interface/msg/Detection";
}

template<>
struct has_fixed_size<global_interface::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<global_interface::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<global_interface::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__DETECTION__TRAITS_HPP_
