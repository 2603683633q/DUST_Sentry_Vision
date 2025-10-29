// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from global_interface:msg/Autoaim.idl
// generated code does not contain a copyright notice
#include "global_interface/msg/detail/autoaim__rosidl_typesupport_fastrtps_cpp.hpp"
#include "global_interface/msg/detail/autoaim__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace global_interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const global_interface::msg::Point2f &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  global_interface::msg::Point2f &);
size_t get_serialized_size(
  const global_interface::msg::Point2f &,
  size_t current_alignment);
size_t
max_serialized_size_Point2f(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace global_interface

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Quaternion &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Quaternion &);
size_t get_serialized_size(
  const geometry_msgs::msg::Quaternion &,
  size_t current_alignment);
size_t
max_serialized_size_Quaternion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

// functions for geometry_msgs::msg::Point already declared above


namespace global_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_global_interface
cdr_serialize(
  const global_interface::msg::Autoaim & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: mode
  cdr << ros_message.mode;
  // Member: key
  cdr << ros_message.key;
  // Member: hp
  cdr << ros_message.hp;
  // Member: period
  cdr << ros_message.period;
  // Member: bullet_speed
  cdr << ros_message.bullet_speed;
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: point2d
  {
    for (size_t i = 0; i < 4; i++) {
      global_interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.point2d[i],
        cdr);
    }
  }
  // Member: clockwise
  cdr << (ros_message.clockwise ? true : false);
  // Member: is_spinning
  cdr << (ros_message.is_spinning ? true : false);
  // Member: is_controlled
  cdr << (ros_message.is_controlled ? true : false);
  // Member: is_target_lost
  cdr << (ros_message.is_target_lost ? true : false);
  // Member: target_switched
  cdr << (ros_message.target_switched ? true : false);
  // Member: spinning_switched
  cdr << (ros_message.spinning_switched ? true : false);
  // Member: is_still_spinning
  cdr << (ros_message.is_still_spinning ? true : false);
  // Member: quat_imu
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.quat_imu,
    cdr);
  // Member: aiming_point_world
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.aiming_point_world,
    cdr);
  // Member: aiming_point_cam
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.aiming_point_cam,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_global_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  global_interface::msg::Autoaim & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: mode
  cdr >> ros_message.mode;

  // Member: key
  cdr >> ros_message.key;

  // Member: hp
  cdr >> ros_message.hp;

  // Member: period
  cdr >> ros_message.period;

  // Member: bullet_speed
  cdr >> ros_message.bullet_speed;

  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: point2d
  {
    for (size_t i = 0; i < 4; i++) {
      global_interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.point2d[i]);
    }
  }

  // Member: clockwise
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.clockwise = tmp ? true : false;
  }

  // Member: is_spinning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_spinning = tmp ? true : false;
  }

  // Member: is_controlled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_controlled = tmp ? true : false;
  }

  // Member: is_target_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_target_lost = tmp ? true : false;
  }

  // Member: target_switched
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.target_switched = tmp ? true : false;
  }

  // Member: spinning_switched
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.spinning_switched = tmp ? true : false;
  }

  // Member: is_still_spinning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_still_spinning = tmp ? true : false;
  }

  // Member: quat_imu
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.quat_imu);

  // Member: aiming_point_world
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.aiming_point_world);

  // Member: aiming_point_cam
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.aiming_point_cam);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_global_interface
get_serialized_size(
  const global_interface::msg::Autoaim & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.key.size() + 1);
  // Member: hp
  {
    size_t item_size = sizeof(ros_message.hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: period
  {
    size_t item_size = sizeof(ros_message.period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bullet_speed
  {
    size_t item_size = sizeof(ros_message.bullet_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: point2d
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        global_interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.point2d[index], current_alignment);
    }
  }
  // Member: clockwise
  {
    size_t item_size = sizeof(ros_message.clockwise);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_spinning
  {
    size_t item_size = sizeof(ros_message.is_spinning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_controlled
  {
    size_t item_size = sizeof(ros_message.is_controlled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_target_lost
  {
    size_t item_size = sizeof(ros_message.is_target_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_switched
  {
    size_t item_size = sizeof(ros_message.target_switched);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spinning_switched
  {
    size_t item_size = sizeof(ros_message.spinning_switched);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_still_spinning
  {
    size_t item_size = sizeof(ros_message.is_still_spinning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: quat_imu

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.quat_imu, current_alignment);
  // Member: aiming_point_world

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.aiming_point_world, current_alignment);
  // Member: aiming_point_cam

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.aiming_point_cam, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_global_interface
max_serialized_size_Autoaim(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: period
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bullet_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: point2d
  {
    size_t array_size = 4;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        global_interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2f(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: clockwise
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_spinning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_controlled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_target_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: target_switched
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: spinning_switched
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_still_spinning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: quat_imu
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: aiming_point_world
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: aiming_point_cam
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = global_interface::msg::Autoaim;
    is_plain =
      (
      offsetof(DataType, aiming_point_cam) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Autoaim__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const global_interface::msg::Autoaim *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Autoaim__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<global_interface::msg::Autoaim *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Autoaim__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const global_interface::msg::Autoaim *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Autoaim__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Autoaim(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Autoaim__callbacks = {
  "global_interface::msg",
  "Autoaim",
  _Autoaim__cdr_serialize,
  _Autoaim__cdr_deserialize,
  _Autoaim__get_serialized_size,
  _Autoaim__max_serialized_size
};

static rosidl_message_type_support_t _Autoaim__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Autoaim__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace global_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_global_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<global_interface::msg::Autoaim>()
{
  return &global_interface::msg::typesupport_fastrtps_cpp::_Autoaim__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, global_interface, msg, Autoaim)() {
  return &global_interface::msg::typesupport_fastrtps_cpp::_Autoaim__handle;
}

#ifdef __cplusplus
}
#endif
