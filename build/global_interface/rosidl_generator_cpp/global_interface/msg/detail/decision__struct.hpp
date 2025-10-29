// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from global_interface:msg/Decision.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__DECISION__STRUCT_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__DECISION__STRUCT_HPP_

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
# define DEPRECATED__global_interface__msg__Decision __attribute__((deprecated))
#else
# define DEPRECATED__global_interface__msg__Decision __declspec(deprecated)
#endif

namespace global_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Decision_
{
  using Type = Decision_<ContainerAllocator>;

  explicit Decision_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->decision_id = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->mode = 0;
    }
  }

  explicit Decision_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->decision_id = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->mode = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _decision_id_type =
    uint8_t;
  _decision_id_type decision_id;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _theta_type =
    float;
  _theta_type theta;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__decision_id(
    const uint8_t & _arg)
  {
    this->decision_id = _arg;
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
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    global_interface::msg::Decision_<ContainerAllocator> *;
  using ConstRawPtr =
    const global_interface::msg::Decision_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<global_interface::msg::Decision_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<global_interface::msg::Decision_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::Decision_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::Decision_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::Decision_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::Decision_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<global_interface::msg::Decision_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<global_interface::msg::Decision_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__global_interface__msg__Decision
    std::shared_ptr<global_interface::msg::Decision_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__global_interface__msg__Decision
    std::shared_ptr<global_interface::msg::Decision_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Decision_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->decision_id != other.decision_id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const Decision_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Decision_

// alias to use template instance with default allocator
using Decision =
  global_interface::msg::Decision_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__DECISION__STRUCT_HPP_
