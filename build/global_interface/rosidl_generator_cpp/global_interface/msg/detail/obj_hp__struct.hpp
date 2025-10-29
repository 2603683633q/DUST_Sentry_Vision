// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from global_interface:msg/ObjHP.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__STRUCT_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__STRUCT_HPP_

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
# define DEPRECATED__global_interface__msg__ObjHP __attribute__((deprecated))
#else
# define DEPRECATED__global_interface__msg__ObjHP __declspec(deprecated)
#endif

namespace global_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjHP_
{
  using Type = ObjHP_<ContainerAllocator>;

  explicit ObjHP_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint16_t, 16>::iterator, uint16_t>(this->hp.begin(), this->hp.end(), 0);
    }
  }

  explicit ObjHP_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    hp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint16_t, 16>::iterator, uint16_t>(this->hp.begin(), this->hp.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hp_type =
    std::array<uint16_t, 16>;
  _hp_type hp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hp(
    const std::array<uint16_t, 16> & _arg)
  {
    this->hp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    global_interface::msg::ObjHP_<ContainerAllocator> *;
  using ConstRawPtr =
    const global_interface::msg::ObjHP_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<global_interface::msg::ObjHP_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<global_interface::msg::ObjHP_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::ObjHP_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::ObjHP_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::ObjHP_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::ObjHP_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<global_interface::msg::ObjHP_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<global_interface::msg::ObjHP_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__global_interface__msg__ObjHP
    std::shared_ptr<global_interface::msg::ObjHP_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__global_interface__msg__ObjHP
    std::shared_ptr<global_interface::msg::ObjHP_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjHP_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hp != other.hp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjHP_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjHP_

// alias to use template instance with default allocator
using ObjHP =
  global_interface::msg::ObjHP_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__STRUCT_HPP_
