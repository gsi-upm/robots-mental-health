// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chatbot_msgs:srv/GetResponse.idl
// generated code does not contain a copyright notice

#ifndef CHATBOT_MSGS__SRV__DETAIL__GET_RESPONSE__STRUCT_HPP_
#define CHATBOT_MSGS__SRV__DETAIL__GET_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__chatbot_msgs__srv__GetResponse_Request __attribute__((deprecated))
#else
# define DEPRECATED__chatbot_msgs__srv__GetResponse_Request __declspec(deprecated)
#endif

namespace chatbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetResponse_Request_
{
  using Type = GetResponse_Request_<ContainerAllocator>;

  explicit GetResponse_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->input = "";
      this->model = "";
    }
  }

  explicit GetResponse_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : user_id(_alloc),
    input(_alloc),
    model(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->input = "";
      this->model = "";
    }
  }

  // field types and members
  using _user_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_id_type user_id;
  using _input_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _input_type input;
  using _model_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_type model;

  // setters for named parameter idiom
  Type & set__user_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_id = _arg;
    return *this;
  }
  Type & set__input(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->input = _arg;
    return *this;
  }
  Type & set__model(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chatbot_msgs__srv__GetResponse_Request
    std::shared_ptr<chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chatbot_msgs__srv__GetResponse_Request
    std::shared_ptr<chatbot_msgs::srv::GetResponse_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetResponse_Request_ & other) const
  {
    if (this->user_id != other.user_id) {
      return false;
    }
    if (this->input != other.input) {
      return false;
    }
    if (this->model != other.model) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetResponse_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetResponse_Request_

// alias to use template instance with default allocator
using GetResponse_Request =
  chatbot_msgs::srv::GetResponse_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace chatbot_msgs


#ifndef _WIN32
# define DEPRECATED__chatbot_msgs__srv__GetResponse_Response __attribute__((deprecated))
#else
# define DEPRECATED__chatbot_msgs__srv__GetResponse_Response __declspec(deprecated)
#endif

namespace chatbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetResponse_Response_
{
  using Type = GetResponse_Response_<ContainerAllocator>;

  explicit GetResponse_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output = "";
    }
  }

  explicit GetResponse_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output = "";
    }
  }

  // field types and members
  using _output_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _output_type output;

  // setters for named parameter idiom
  Type & set__output(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chatbot_msgs__srv__GetResponse_Response
    std::shared_ptr<chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chatbot_msgs__srv__GetResponse_Response
    std::shared_ptr<chatbot_msgs::srv::GetResponse_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetResponse_Response_ & other) const
  {
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetResponse_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetResponse_Response_

// alias to use template instance with default allocator
using GetResponse_Response =
  chatbot_msgs::srv::GetResponse_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace chatbot_msgs

namespace chatbot_msgs
{

namespace srv
{

struct GetResponse
{
  using Request = chatbot_msgs::srv::GetResponse_Request;
  using Response = chatbot_msgs::srv::GetResponse_Response;
};

}  // namespace srv

}  // namespace chatbot_msgs

#endif  // CHATBOT_MSGS__SRV__DETAIL__GET_RESPONSE__STRUCT_HPP_
