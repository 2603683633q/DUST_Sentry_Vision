// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from global_interface:msg/Autoaim.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__STRUCT_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'point2d'
#include "global_interface/msg/detail/point2f__struct.hpp"
// Member 'quat_imu'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'aiming_point_world'
// Member 'aiming_point_cam'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__global_interface__msg__Autoaim __attribute__((deprecated))
#else
# define DEPRECATED__global_interface__msg__Autoaim __declspec(deprecated)
#endif

namespace global_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Autoaim_
{
  using Type = Autoaim_<ContainerAllocator>;

  explicit Autoaim_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    quat_imu(_init),
    aiming_point_world(_init),
    aiming_point_cam(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->key = "";
      this->hp = 0;
      this->period = 0.0;
      this->bullet_speed = 0.0;
      this->timestamp = 0ll;
      this->point2d.fill(global_interface::msg::Point2f_<ContainerAllocator>{_init});
      this->clockwise = false;
      this->is_spinning = false;
      this->is_controlled = false;
      this->is_target_lost = false;
      this->target_switched = false;
      this->spinning_switched = false;
      this->is_still_spinning = false;
    }
  }

  explicit Autoaim_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    key(_alloc),
    point2d(_alloc),
    quat_imu(_alloc, _init),
    aiming_point_world(_alloc, _init),
    aiming_point_cam(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->key = "";
      this->hp = 0;
      this->period = 0.0;
      this->bullet_speed = 0.0;
      this->timestamp = 0ll;
      this->point2d.fill(global_interface::msg::Point2f_<ContainerAllocator>{_alloc, _init});
      this->clockwise = false;
      this->is_spinning = false;
      this->is_controlled = false;
      this->is_target_lost = false;
      this->target_switched = false;
      this->spinning_switched = false;
      this->is_still_spinning = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;
  using _hp_type =
    uint16_t;
  _hp_type hp;
  using _period_type =
    double;
  _period_type period;
  using _bullet_speed_type =
    double;
  _bullet_speed_type bullet_speed;
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _point2d_type =
    std::array<global_interface::msg::Point2f_<ContainerAllocator>, 4>;
  _point2d_type point2d;
  using _clockwise_type =
    bool;
  _clockwise_type clockwise;
  using _is_spinning_type =
    bool;
  _is_spinning_type is_spinning;
  using _is_controlled_type =
    bool;
  _is_controlled_type is_controlled;
  using _is_target_lost_type =
    bool;
  _is_target_lost_type is_target_lost;
  using _target_switched_type =
    bool;
  _target_switched_type target_switched;
  using _spinning_switched_type =
    bool;
  _spinning_switched_type spinning_switched;
  using _is_still_spinning_type =
    bool;
  _is_still_spinning_type is_still_spinning;
  using _quat_imu_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _quat_imu_type quat_imu;
  using _aiming_point_world_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _aiming_point_world_type aiming_point_world;
  using _aiming_point_cam_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _aiming_point_cam_type aiming_point_cam;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__hp(
    const uint16_t & _arg)
  {
    this->hp = _arg;
    return *this;
  }
  Type & set__period(
    const double & _arg)
  {
    this->period = _arg;
    return *this;
  }
  Type & set__bullet_speed(
    const double & _arg)
  {
    this->bullet_speed = _arg;
    return *this;
  }
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__point2d(
    const std::array<global_interface::msg::Point2f_<ContainerAllocator>, 4> & _arg)
  {
    this->point2d = _arg;
    return *this;
  }
  Type & set__clockwise(
    const bool & _arg)
  {
    this->clockwise = _arg;
    return *this;
  }
  Type & set__is_spinning(
    const bool & _arg)
  {
    this->is_spinning = _arg;
    return *this;
  }
  Type & set__is_controlled(
    const bool & _arg)
  {
    this->is_controlled = _arg;
    return *this;
  }
  Type & set__is_target_lost(
    const bool & _arg)
  {
    this->is_target_lost = _arg;
    return *this;
  }
  Type & set__target_switched(
    const bool & _arg)
  {
    this->target_switched = _arg;
    return *this;
  }
  Type & set__spinning_switched(
    const bool & _arg)
  {
    this->spinning_switched = _arg;
    return *this;
  }
  Type & set__is_still_spinning(
    const bool & _arg)
  {
    this->is_still_spinning = _arg;
    return *this;
  }
  Type & set__quat_imu(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->quat_imu = _arg;
    return *this;
  }
  Type & set__aiming_point_world(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->aiming_point_world = _arg;
    return *this;
  }
  Type & set__aiming_point_cam(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->aiming_point_cam = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    global_interface::msg::Autoaim_<ContainerAllocator> *;
  using ConstRawPtr =
    const global_interface::msg::Autoaim_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<global_interface::msg::Autoaim_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<global_interface::msg::Autoaim_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::Autoaim_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::Autoaim_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::Autoaim_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::Autoaim_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<global_interface::msg::Autoaim_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<global_interface::msg::Autoaim_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__global_interface__msg__Autoaim
    std::shared_ptr<global_interface::msg::Autoaim_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__global_interface__msg__Autoaim
    std::shared_ptr<global_interface::msg::Autoaim_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Autoaim_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->key != other.key) {
      return false;
    }
    if (this->hp != other.hp) {
      return false;
    }
    if (this->period != other.period) {
      return false;
    }
    if (this->bullet_speed != other.bullet_speed) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->point2d != other.point2d) {
      return false;
    }
    if (this->clockwise != other.clockwise) {
      return false;
    }
    if (this->is_spinning != other.is_spinning) {
      return false;
    }
    if (this->is_controlled != other.is_controlled) {
      return false;
    }
    if (this->is_target_lost != other.is_target_lost) {
      return false;
    }
    if (this->target_switched != other.target_switched) {
      return false;
    }
    if (this->spinning_switched != other.spinning_switched) {
      return false;
    }
    if (this->is_still_spinning != other.is_still_spinning) {
      return false;
    }
    if (this->quat_imu != other.quat_imu) {
      return false;
    }
    if (this->aiming_point_world != other.aiming_point_world) {
      return false;
    }
    if (this->aiming_point_cam != other.aiming_point_cam) {
      return false;
    }
    return true;
  }
  bool operator!=(const Autoaim_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Autoaim_

// alias to use template instance with default allocator
using Autoaim =
  global_interface::msg::Autoaim_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__AUTOAIM__STRUCT_HPP_
