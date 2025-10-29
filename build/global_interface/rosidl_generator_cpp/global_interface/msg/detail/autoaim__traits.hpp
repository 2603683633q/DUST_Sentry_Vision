// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from global_interface:msg/Autoaim.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__TRAITS_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "global_interface/msg/detail/autoaim__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'point2d'
#include "global_interface/msg/detail/point2f__traits.hpp"
// Member 'quat_imu'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'aiming_point_world'
// Member 'aiming_point_cam'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace global_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Autoaim & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: hp
  {
    out << "hp: ";
    rosidl_generator_traits::value_to_yaml(msg.hp, out);
    out << ", ";
  }

  // member: period
  {
    out << "period: ";
    rosidl_generator_traits::value_to_yaml(msg.period, out);
    out << ", ";
  }

  // member: bullet_speed
  {
    out << "bullet_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_speed, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: point2d
  {
    if (msg.point2d.size() == 0) {
      out << "point2d: []";
    } else {
      out << "point2d: [";
      size_t pending_items = msg.point2d.size();
      for (auto item : msg.point2d) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: clockwise
  {
    out << "clockwise: ";
    rosidl_generator_traits::value_to_yaml(msg.clockwise, out);
    out << ", ";
  }

  // member: is_spinning
  {
    out << "is_spinning: ";
    rosidl_generator_traits::value_to_yaml(msg.is_spinning, out);
    out << ", ";
  }

  // member: is_controlled
  {
    out << "is_controlled: ";
    rosidl_generator_traits::value_to_yaml(msg.is_controlled, out);
    out << ", ";
  }

  // member: is_target_lost
  {
    out << "is_target_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.is_target_lost, out);
    out << ", ";
  }

  // member: target_switched
  {
    out << "target_switched: ";
    rosidl_generator_traits::value_to_yaml(msg.target_switched, out);
    out << ", ";
  }

  // member: spinning_switched
  {
    out << "spinning_switched: ";
    rosidl_generator_traits::value_to_yaml(msg.spinning_switched, out);
    out << ", ";
  }

  // member: is_still_spinning
  {
    out << "is_still_spinning: ";
    rosidl_generator_traits::value_to_yaml(msg.is_still_spinning, out);
    out << ", ";
  }

  // member: quat_imu
  {
    out << "quat_imu: ";
    to_flow_style_yaml(msg.quat_imu, out);
    out << ", ";
  }

  // member: aiming_point_world
  {
    out << "aiming_point_world: ";
    to_flow_style_yaml(msg.aiming_point_world, out);
    out << ", ";
  }

  // member: aiming_point_cam
  {
    out << "aiming_point_cam: ";
    to_flow_style_yaml(msg.aiming_point_cam, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Autoaim & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hp: ";
    rosidl_generator_traits::value_to_yaml(msg.hp, out);
    out << "\n";
  }

  // member: period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period: ";
    rosidl_generator_traits::value_to_yaml(msg.period, out);
    out << "\n";
  }

  // member: bullet_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_speed, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: point2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.point2d.size() == 0) {
      out << "point2d: []\n";
    } else {
      out << "point2d:\n";
      for (auto item : msg.point2d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: clockwise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clockwise: ";
    rosidl_generator_traits::value_to_yaml(msg.clockwise, out);
    out << "\n";
  }

  // member: is_spinning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_spinning: ";
    rosidl_generator_traits::value_to_yaml(msg.is_spinning, out);
    out << "\n";
  }

  // member: is_controlled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_controlled: ";
    rosidl_generator_traits::value_to_yaml(msg.is_controlled, out);
    out << "\n";
  }

  // member: is_target_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_target_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.is_target_lost, out);
    out << "\n";
  }

  // member: target_switched
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_switched: ";
    rosidl_generator_traits::value_to_yaml(msg.target_switched, out);
    out << "\n";
  }

  // member: spinning_switched
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spinning_switched: ";
    rosidl_generator_traits::value_to_yaml(msg.spinning_switched, out);
    out << "\n";
  }

  // member: is_still_spinning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_still_spinning: ";
    rosidl_generator_traits::value_to_yaml(msg.is_still_spinning, out);
    out << "\n";
  }

  // member: quat_imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quat_imu:\n";
    to_block_style_yaml(msg.quat_imu, out, indentation + 2);
  }

  // member: aiming_point_world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aiming_point_world:\n";
    to_block_style_yaml(msg.aiming_point_world, out, indentation + 2);
  }

  // member: aiming_point_cam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aiming_point_cam:\n";
    to_block_style_yaml(msg.aiming_point_cam, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Autoaim & msg, bool use_flow_style = false)
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
  const global_interface::msg::Autoaim & msg,
  std::ostream & out, size_t indentation = 0)
{
  global_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use global_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const global_interface::msg::Autoaim & msg)
{
  return global_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<global_interface::msg::Autoaim>()
{
  return "global_interface::msg::Autoaim";
}

template<>
inline const char * name<global_interface::msg::Autoaim>()
{
  return "global_interface/msg/Autoaim";
}

template<>
struct has_fixed_size<global_interface::msg::Autoaim>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<global_interface::msg::Autoaim>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<global_interface::msg::Autoaim>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__TRAITS_HPP_
