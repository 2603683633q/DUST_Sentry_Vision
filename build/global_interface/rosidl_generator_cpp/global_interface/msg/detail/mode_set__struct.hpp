// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from global_interface:msg/ModeSet.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__MODE_SET__STRUCT_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__MODE_SET__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__global_interface__msg__ModeSet __attribute__((deprecated))
#else
# define DEPRECATED__global_interface__msg__ModeSet __declspec(deprecated)
#endif

namespace global_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModeSet_
{
  using Type = ModeSet_<ContainerAllocator>;

  explicit ModeSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit ModeSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mode_type =
    uint16_t;
  _mode_type mode;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mode(
    const uint16_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    global_interface::msg::ModeSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const global_interface::msg::ModeSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<global_interface::msg::ModeSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<global_interface::msg::ModeSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::ModeSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::ModeSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::ModeSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::ModeSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<global_interface::msg::ModeSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<global_interface::msg::ModeSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__global_interface__msg__ModeSet
    std::shared_ptr<global_interface::msg::ModeSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__global_interface__msg__ModeSet
    std::shared_ptr<global_interface::msg::ModeSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModeSet_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModeSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModeSet_

// alias to use template instance with default allocator
using ModeSet =
  global_interface::msg::ModeSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__MODE_SET__STRUCT_HPP_
