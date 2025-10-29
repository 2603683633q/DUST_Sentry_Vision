// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from global_interface:msg/StrikeLicensing.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__STRUCT_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__STRUCT_HPP_

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
# define DEPRECATED__global_interface__msg__StrikeLicensing __attribute__((deprecated))
#else
# define DEPRECATED__global_interface__msg__StrikeLicensing __declspec(deprecated)
#endif

namespace global_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StrikeLicensing_
{
  using Type = StrikeLicensing_<ContainerAllocator>;

  explicit StrikeLicensing_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->weights.begin(), this->weights.end(), 0.0f);
    }
  }

  explicit StrikeLicensing_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    weights(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->weights.begin(), this->weights.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _weights_type =
    std::array<float, 6>;
  _weights_type weights;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__weights(
    const std::array<float, 6> & _arg)
  {
    this->weights = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    global_interface::msg::StrikeLicensing_<ContainerAllocator> *;
  using ConstRawPtr =
    const global_interface::msg::StrikeLicensing_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<global_interface::msg::StrikeLicensing_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<global_interface::msg::StrikeLicensing_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::StrikeLicensing_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::StrikeLicensing_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::StrikeLicensing_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::StrikeLicensing_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<global_interface::msg::StrikeLicensing_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<global_interface::msg::StrikeLicensing_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__global_interface__msg__StrikeLicensing
    std::shared_ptr<global_interface::msg::StrikeLicensing_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__global_interface__msg__StrikeLicensing
    std::shared_ptr<global_interface::msg::StrikeLicensing_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StrikeLicensing_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->weights != other.weights) {
      return false;
    }
    return true;
  }
  bool operator!=(const StrikeLicensing_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StrikeLicensing_

// alias to use template instance with default allocator
using StrikeLicensing =
  global_interface::msg::StrikeLicensing_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__STRIKE_LICENSING__STRUCT_HPP_
