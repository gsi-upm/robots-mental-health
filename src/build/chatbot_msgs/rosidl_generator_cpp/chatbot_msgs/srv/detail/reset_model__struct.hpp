// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chatbot_msgs:srv/ResetModel.idl
// generated code does not contain a copyright notice

#ifndef CHATBOT_MSGS__SRV__DETAIL__RESET_MODEL__STRUCT_HPP_
#define CHATBOT_MSGS__SRV__DETAIL__RESET_MODEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chatbot_msgs__srv__ResetModel_Request __attribute__((deprecated))
#else
# define DEPRECATED__chatbot_msgs__srv__ResetModel_Request __declspec(deprecated)
#endif

namespace chatbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetModel_Request_
{
  using Type = ResetModel_Request_<ContainerAllocator>;

  explicit ResetModel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ResetModel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chatbot_msgs__srv__ResetModel_Request
    std::shared_ptr<chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chatbot_msgs__srv__ResetModel_Request
    std::shared_ptr<chatbot_msgs::srv::ResetModel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetModel_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetModel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetModel_Request_

// alias to use template instance with default allocator
using ResetModel_Request =
  chatbot_msgs::srv::ResetModel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace chatbot_msgs


#ifndef _WIN32
# define DEPRECATED__chatbot_msgs__srv__ResetModel_Response __attribute__((deprecated))
#else
# define DEPRECATED__chatbot_msgs__srv__ResetModel_Response __declspec(deprecated)
#endif

namespace chatbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetModel_Response_
{
  using Type = ResetModel_Response_<ContainerAllocator>;

  explicit ResetModel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ResetModel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chatbot_msgs__srv__ResetModel_Response
    std::shared_ptr<chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chatbot_msgs__srv__ResetModel_Response
    std::shared_ptr<chatbot_msgs::srv::ResetModel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetModel_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetModel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetModel_Response_

// alias to use template instance with default allocator
using ResetModel_Response =
  chatbot_msgs::srv::ResetModel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace chatbot_msgs

namespace chatbot_msgs
{

namespace srv
{

struct ResetModel
{
  using Request = chatbot_msgs::srv::ResetModel_Request;
  using Response = chatbot_msgs::srv::ResetModel_Response;
};

}  // namespace srv

}  // namespace chatbot_msgs

#endif  // CHATBOT_MSGS__SRV__DETAIL__RESET_MODEL__STRUCT_HPP_
