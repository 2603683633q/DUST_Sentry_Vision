// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from global_interface:msg/CarPos.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__STRUCT_HPP_
#define GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__STRUCT_HPP_

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
// Member 'pos'
#include "global_interface/msg/detail/point2f__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__global_interface__msg__CarPos __attribute__((deprecated))
#else
# define DEPRECATED__global_interface__msg__CarPos __declspec(deprecated)
#endif

namespace global_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarPos_
{
  using Type = CarPos_<ContainerAllocator>;

  explicit CarPos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos.fill(global_interface::msg::Point2f_<ContainerAllocator>{_init});
    }
  }

  explicit CarPos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pos(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos.fill(global_interface::msg::Point2f_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pos_type =
    std::array<global_interface::msg::Point2f_<ContainerAllocator>, 12>;
  _pos_type pos;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pos(
    const std::array<global_interface::msg::Point2f_<ContainerAllocator>, 12> & _arg)
  {
    this->pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    global_interface::msg::CarPos_<ContainerAllocator> *;
  using ConstRawPtr =
    const global_interface::msg::CarPos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<global_interface::msg::CarPos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<global_interface::msg::CarPos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::CarPos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::CarPos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      global_interface::msg::CarPos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<global_interface::msg::CarPos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<global_interface::msg::CarPos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<global_interface::msg::CarPos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__global_interface__msg__CarPos
    std::shared_ptr<global_interface::msg::CarPos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__global_interface__msg__CarPos
    std::shared_ptr<global_interface::msg::CarPos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarPos_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarPos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarPos_

// alias to use template instance with default allocator
using CarPos =
  global_interface::msg::CarPos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace global_interface

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__CAR_POS__STRUCT_HPP_
