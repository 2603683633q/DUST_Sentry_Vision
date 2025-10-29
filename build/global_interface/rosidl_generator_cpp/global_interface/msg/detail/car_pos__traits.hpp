// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from global_interface:msg/CarPos.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__TRAITS_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "global_interface/msg/detail/car_pos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pos'
#include "global_interface/msg/detail/point2f__traits.hpp"

namespace global_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const CarPos & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pos
  {
    if (msg.pos.size() == 0) {
      out << "pos: []";
    } else {
      out << "pos: [";
      size_t pending_items = msg.pos.size();
      for (auto item : msg.pos) {
        to_flow_style_yaml(item, out);
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
  const CarPos & msg,
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

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos.size() == 0) {
      out << "pos: []\n";
    } else {
      out << "pos:\n";
      for (auto item : msg.pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarPos & msg, bool use_flow_style = false)
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
  const global_interface::msg::CarPos & msg,
  std::ostream & out, size_t indentation = 0)
{
  global_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use global_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const global_interface::msg::CarPos & msg)
{
  return global_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<global_interface::msg::CarPos>()
{
  return "global_interface::msg::CarPos";
}

template<>
inline const char * name<global_interface::msg::CarPos>()
{
  return "global_interface/msg/CarPos";
}

template<>
struct has_fixed_size<global_interface::msg::CarPos>
  : std::integral_constant<bool, has_fixed_size<global_interface::msg::Point2f>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<global_interface::msg::CarPos>
  : std::integral_constant<bool, has_bounded_size<global_interface::msg::Point2f>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<global_interface::msg::CarPos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__TRAITS_HPP_
