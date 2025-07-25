// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from task_msgs:action/TaskControl.idl
// generated code does not contain a copyright notice

#ifndef TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__STRUCT_HPP_
#define TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__task_msgs__action__TaskControl_Goal __attribute__((deprecated))
#else
# define DEPRECATED__task_msgs__action__TaskControl_Goal __declspec(deprecated)
#endif

namespace task_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TaskControl_Goal_
{
  using Type = TaskControl_Goal_<ContainerAllocator>;

  explicit TaskControl_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_data = "";
    }
  }

  explicit TaskControl_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_data = "";
    }
  }

  // field types and members
  using _task_data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_data_type task_data;

  // setters for named parameter idiom
  Type & set__task_data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_msgs::action::TaskControl_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_msgs::action::TaskControl_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_msgs__action__TaskControl_Goal
    std::shared_ptr<task_msgs::action::TaskControl_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_msgs__action__TaskControl_Goal
    std::shared_ptr<task_msgs::action::TaskControl_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskControl_Goal_ & other) const
  {
    if (this->task_data != other.task_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskControl_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskControl_Goal_

// alias to use template instance with default allocator
using TaskControl_Goal =
  task_msgs::action::TaskControl_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace task_msgs


#ifndef _WIN32
# define DEPRECATED__task_msgs__action__TaskControl_Result __attribute__((deprecated))
#else
# define DEPRECATED__task_msgs__action__TaskControl_Result __declspec(deprecated)
#endif

namespace task_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TaskControl_Result_
{
  using Type = TaskControl_Result_<ContainerAllocator>;

  explicit TaskControl_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_msg = "";
      this->result = "";
    }
  }

  explicit TaskControl_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_msg(_alloc),
    result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_msg = "";
      this->result = "";
    }
  }

  // field types and members
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_msg_type error_msg;
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_msgs::action::TaskControl_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_msgs::action::TaskControl_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_msgs__action__TaskControl_Result
    std::shared_ptr<task_msgs::action::TaskControl_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_msgs__action__TaskControl_Result
    std::shared_ptr<task_msgs::action::TaskControl_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskControl_Result_ & other) const
  {
    if (this->error_msg != other.error_msg) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskControl_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskControl_Result_

// alias to use template instance with default allocator
using TaskControl_Result =
  task_msgs::action::TaskControl_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace task_msgs


#ifndef _WIN32
# define DEPRECATED__task_msgs__action__TaskControl_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__task_msgs__action__TaskControl_Feedback __declspec(deprecated)
#endif

namespace task_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TaskControl_Feedback_
{
  using Type = TaskControl_Feedback_<ContainerAllocator>;

  explicit TaskControl_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit TaskControl_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_msgs::action::TaskControl_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_msgs::action::TaskControl_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_msgs__action__TaskControl_Feedback
    std::shared_ptr<task_msgs::action::TaskControl_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_msgs__action__TaskControl_Feedback
    std::shared_ptr<task_msgs::action::TaskControl_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskControl_Feedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskControl_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskControl_Feedback_

// alias to use template instance with default allocator
using TaskControl_Feedback =
  task_msgs::action::TaskControl_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace task_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "task_msgs/action/detail/task_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__task_msgs__action__TaskControl_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__task_msgs__action__TaskControl_SendGoal_Request __declspec(deprecated)
#endif

namespace task_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TaskControl_SendGoal_Request_
{
  using Type = TaskControl_SendGoal_Request_<ContainerAllocator>;

  explicit TaskControl_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TaskControl_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    task_msgs::action::TaskControl_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const task_msgs::action::TaskControl_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_msgs__action__TaskControl_SendGoal_Request
    std::shared_ptr<task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_msgs__action__TaskControl_SendGoal_Request
    std::shared_ptr<task_msgs::action::TaskControl_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskControl_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskControl_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskControl_SendGoal_Request_

// alias to use template instance with default allocator
using TaskControl_SendGoal_Request =
  task_msgs::action::TaskControl_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace task_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__task_msgs__action__TaskControl_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__task_msgs__action__TaskControl_SendGoal_Response __declspec(deprecated)
#endif

namespace task_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TaskControl_SendGoal_Response_
{
  using Type = TaskControl_SendGoal_Response_<ContainerAllocator>;

  explicit TaskControl_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TaskControl_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_msgs__action__TaskControl_SendGoal_Response
    std::shared_ptr<task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_msgs__action__TaskControl_SendGoal_Response
    std::shared_ptr<task_msgs::action::TaskControl_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskControl_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskControl_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskControl_SendGoal_Response_

// alias to use template instance with default allocator
using TaskControl_SendGoal_Response =
  task_msgs::action::TaskControl_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace task_msgs

namespace task_msgs
{

namespace action
{

struct TaskControl_SendGoal
{
  using Request = task_msgs::action::TaskControl_SendGoal_Request;
  using Response = task_msgs::action::TaskControl_SendGoal_Response;
};

}  // namespace action

}  // namespace task_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__task_msgs__action__TaskControl_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__task_msgs__action__TaskControl_GetResult_Request __declspec(deprecated)
#endif

namespace task_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TaskControl_GetResult_Request_
{
  using Type = TaskControl_GetResult_Request_<ContainerAllocator>;

  explicit TaskControl_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TaskControl_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_msgs__action__TaskControl_GetResult_Request
    std::shared_ptr<task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_msgs__action__TaskControl_GetResult_Request
    std::shared_ptr<task_msgs::action::TaskControl_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskControl_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskControl_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskControl_GetResult_Request_

// alias to use template instance with default allocator
using TaskControl_GetResult_Request =
  task_msgs::action::TaskControl_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace task_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "task_msgs/action/detail/task_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__task_msgs__action__TaskControl_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__task_msgs__action__TaskControl_GetResult_Response __declspec(deprecated)
#endif

namespace task_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TaskControl_GetResult_Response_
{
  using Type = TaskControl_GetResult_Response_<ContainerAllocator>;

  explicit TaskControl_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TaskControl_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    task_msgs::action::TaskControl_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const task_msgs::action::TaskControl_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_msgs__action__TaskControl_GetResult_Response
    std::shared_ptr<task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_msgs__action__TaskControl_GetResult_Response
    std::shared_ptr<task_msgs::action::TaskControl_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskControl_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskControl_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskControl_GetResult_Response_

// alias to use template instance with default allocator
using TaskControl_GetResult_Response =
  task_msgs::action::TaskControl_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace task_msgs

namespace task_msgs
{

namespace action
{

struct TaskControl_GetResult
{
  using Request = task_msgs::action::TaskControl_GetResult_Request;
  using Response = task_msgs::action::TaskControl_GetResult_Response;
};

}  // namespace action

}  // namespace task_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "task_msgs/action/detail/task_control__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__task_msgs__action__TaskControl_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__task_msgs__action__TaskControl_FeedbackMessage __declspec(deprecated)
#endif

namespace task_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TaskControl_FeedbackMessage_
{
  using Type = TaskControl_FeedbackMessage_<ContainerAllocator>;

  explicit TaskControl_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TaskControl_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    task_msgs::action::TaskControl_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const task_msgs::action::TaskControl_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task_msgs__action__TaskControl_FeedbackMessage
    std::shared_ptr<task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task_msgs__action__TaskControl_FeedbackMessage
    std::shared_ptr<task_msgs::action::TaskControl_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskControl_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskControl_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskControl_FeedbackMessage_

// alias to use template instance with default allocator
using TaskControl_FeedbackMessage =
  task_msgs::action::TaskControl_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace task_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace task_msgs
{

namespace action
{

struct TaskControl
{
  /// The goal message defined in the action definition.
  using Goal = task_msgs::action::TaskControl_Goal;
  /// The result message defined in the action definition.
  using Result = task_msgs::action::TaskControl_Result;
  /// The feedback message defined in the action definition.
  using Feedback = task_msgs::action::TaskControl_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = task_msgs::action::TaskControl_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = task_msgs::action::TaskControl_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = task_msgs::action::TaskControl_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TaskControl TaskControl;

}  // namespace action

}  // namespace task_msgs

#endif  // TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__STRUCT_HPP_
