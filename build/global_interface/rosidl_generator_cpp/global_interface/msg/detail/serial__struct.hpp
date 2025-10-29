// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from global_interface:msg/Serial.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__SERIAL__STRUCT_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__SERIAL__STRUCT_HPP_

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
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__global_interface__msg__Serial __attribute__((deprecated))
#else
# define DEPRECATED__global_interface__msg__Serial __declspec(deprecated)
#endif

namespace global_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Serial_
{
  using Type = Serial_<ContainerAllocator>;

  explicit Serial_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    imu(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->theta = 0.0f;
      this->bullet_speed = 0.0f;
    }
  }

  explicit Serial_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    imu(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->theta = 0.0f;
      this->bullet_speed = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _imu_type =
    sensor_msgs::msg::Imu_<ContainerAllocator>;
  _imu_type imu;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _theta_type =
    float;
  _theta_type theta;
  using _bullet_speed_type =
    float;
  _bullet_speed_type bullet_speed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__imu(
    const sensor_msgs::msg::Imu_<ContainerAllocator> & _arg)
  {
    this->imu = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__bullet_speed(
    const float & _arg)
  {
    this->bullet_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    global_interface::msg::Serial_<ContainerAllocator> *;
  using ConstRawPtr =
    const global_interface::msg::Serial_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<global_interface::msg::Serial_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<global_interface::msg::Serial_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::Serial_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::Serial_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::Serial_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::Serial_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<global_interface::msg::Serial_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<global_interface::msg::Serial_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__global_interface__msg__Serial
    std::shared_ptr<global_interface::msg::Serial_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__global_interface__msg__Serial
    std::shared_ptr<global_interface::msg::Serial_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Serial_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->bullet_speed != other.bullet_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Serial_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Serial_

// alias to use template instance with default allocator
using Serial =
  global_interface::msg::Serial_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__SERIAL__STRUCT_HPP_
