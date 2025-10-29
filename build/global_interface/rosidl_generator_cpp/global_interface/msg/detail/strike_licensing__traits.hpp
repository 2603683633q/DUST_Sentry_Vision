// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from global_interface:msg/StrikeLicensing.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__TRAITS_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "global_interface/msg/detail/strike_licensing__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace global_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const StrikeLicensing & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: weights
  {
    if (msg.weights.size() == 0) {
      out << "weights: []";
    } else {
      out << "weights: [";
      size_t pending_items = msg.weights.size();
      for (auto item : msg.weights) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StrikeLicensing & msg,
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

  // member: weights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.weights.size() == 0) {
      out << "weights: []\n";
    } else {
      out << "weights:\n";
      for (auto item : msg.weights) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StrikeLicensing & msg, bool use_flow_style = false)
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
  const global_interface::msg::StrikeLicensing & msg,
  std::ostream & out, size_t indentation = 0)
{
  global_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use global_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const global_interface::msg::StrikeLicensing & msg)
{
  return global_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<global_interface::msg::StrikeLicensing>()
{
  return "global_interface::msg::StrikeLicensing";
}

template<>
inline const char * name<global_interface::msg::StrikeLicensing>()
{
  return "global_interface/msg/StrikeLicensing";
}

template<>
struct has_fixed_size<global_interface::msg::StrikeLicensing>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<global_interface::msg::StrikeLicensing>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<global_interface::msg::StrikeLicensing>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__TRAITS_HPP_
