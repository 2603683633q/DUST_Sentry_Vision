// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from global_interface:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__GAME_INFO__STRUCT_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__GAME_INFO__STRUCT_HPP_

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
# define DEPRECATED__global_interface__msg__GameInfo __attribute__((deprecated))
#else
# define DEPRECATED__global_interface__msg__GameInfo __declspec(deprecated)
#endif

namespace global_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameInfo_
{
  using Type = GameInfo_<ContainerAllocator>;

  explicit GameInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0;
      this->game_stage = 0;
    }
  }

  explicit GameInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0;
      this->game_stage = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _timestamp_type =
    uint16_t;
  _timestamp_type timestamp;
  using _game_stage_type =
    uint16_t;
  _game_stage_type game_stage;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint16_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__game_stage(
    const uint16_t & _arg)
  {
    this->game_stage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    global_interface::msg::GameInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const global_interface::msg::GameInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<global_interface::msg::GameInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<global_interface::msg::GameInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::GameInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::GameInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::GameInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::GameInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<global_interface::msg::GameInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<global_interface::msg::GameInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__global_interface__msg__GameInfo
    std::shared_ptr<global_interface::msg::GameInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__global_interface__msg__GameInfo
    std::shared_ptr<global_interface::msg::GameInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->game_stage != other.game_stage) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameInfo_

// alias to use template instance with default allocator
using GameInfo =
  global_interface::msg::GameInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__GAME_INFO__STRUCT_HPP_
