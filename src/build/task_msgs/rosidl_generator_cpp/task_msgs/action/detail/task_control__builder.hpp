// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task_msgs:action/TaskControl.idl
// generated code does not contain a copyright notice

#ifndef TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__BUILDER_HPP_
#define TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task_msgs/action/detail/task_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task_msgs
{

namespace action
{

namespace builder
{

class Init_TaskControl_Goal_task_data
{
public:
  Init_TaskControl_Goal_task_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task_msgs::action::TaskControl_Goal task_data(::task_msgs::action::TaskControl_Goal::_task_data_type arg)
  {
    msg_.task_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_msgs::action::TaskControl_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_msgs::action::TaskControl_Goal>()
{
  return task_msgs::action::builder::Init_TaskControl_Goal_task_data();
}

}  // namespace task_msgs


namespace task_msgs
{

namespace action
{

namespace builder
{

class Init_TaskControl_Result_result
{
public:
  explicit Init_TaskControl_Result_result(::task_msgs::action::TaskControl_Result & msg)
  : msg_(msg)
  {}
  ::task_msgs::action::TaskControl_Result result(::task_msgs::action::TaskControl_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_msgs::action::TaskControl_Result msg_;
};

class Init_TaskControl_Result_error_msg
{
public:
  Init_TaskControl_Result_error_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskControl_Result_result error_msg(::task_msgs::action::TaskControl_Result::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return Init_TaskControl_Result_result(msg_);
  }

private:
  ::task_msgs::action::TaskControl_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_msgs::action::TaskControl_Result>()
{
  return task_msgs::action::builder::Init_TaskControl_Result_error_msg();
}

}  // namespace task_msgs


namespace task_msgs
{

namespace action
{

namespace builder
{

class Init_TaskControl_Feedback_status
{
public:
  Init_TaskControl_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task_msgs::action::TaskControl_Feedback status(::task_msgs::action::TaskControl_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_msgs::action::TaskControl_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_msgs::action::TaskControl_Feedback>()
{
  return task_msgs::action::builder::Init_TaskControl_Feedback_status();
}

}  // namespace task_msgs


namespace task_msgs
{

namespace action
{

namespace builder
{

class Init_TaskControl_SendGoal_Request_goal
{
public:
  explicit Init_TaskControl_SendGoal_Request_goal(::task_msgs::action::TaskControl_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::task_msgs::action::TaskControl_SendGoal_Request goal(::task_msgs::action::TaskControl_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_msgs::action::TaskControl_SendGoal_Request msg_;
};

class Init_TaskControl_SendGoal_Request_goal_id
{
public:
  Init_TaskControl_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskControl_SendGoal_Request_goal goal_id(::task_msgs::action::TaskControl_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TaskControl_SendGoal_Request_goal(msg_);
  }

private:
  ::task_msgs::action::TaskControl_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_msgs::action::TaskControl_SendGoal_Request>()
{
  return task_msgs::action::builder::Init_TaskControl_SendGoal_Request_goal_id();
}

}  // namespace task_msgs


namespace task_msgs
{

namespace action
{

namespace builder
{

class Init_TaskControl_SendGoal_Response_stamp
{
public:
  explicit Init_TaskControl_SendGoal_Response_stamp(::task_msgs::action::TaskControl_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::task_msgs::action::TaskControl_SendGoal_Response stamp(::task_msgs::action::TaskControl_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_msgs::action::TaskControl_SendGoal_Response msg_;
};

class Init_TaskControl_SendGoal_Response_accepted
{
public:
  Init_TaskControl_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskControl_SendGoal_Response_stamp accepted(::task_msgs::action::TaskControl_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TaskControl_SendGoal_Response_stamp(msg_);
  }

private:
  ::task_msgs::action::TaskControl_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_msgs::action::TaskControl_SendGoal_Response>()
{
  return task_msgs::action::builder::Init_TaskControl_SendGoal_Response_accepted();
}

}  // namespace task_msgs


namespace task_msgs
{

namespace action
{

namespace builder
{

class Init_TaskControl_GetResult_Request_goal_id
{
public:
  Init_TaskControl_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task_msgs::action::TaskControl_GetResult_Request goal_id(::task_msgs::action::TaskControl_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_msgs::action::TaskControl_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_msgs::action::TaskControl_GetResult_Request>()
{
  return task_msgs::action::builder::Init_TaskControl_GetResult_Request_goal_id();
}

}  // namespace task_msgs


namespace task_msgs
{

namespace action
{

namespace builder
{

class Init_TaskControl_GetResult_Response_result
{
public:
  explicit Init_TaskControl_GetResult_Response_result(::task_msgs::action::TaskControl_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::task_msgs::action::TaskControl_GetResult_Response result(::task_msgs::action::TaskControl_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_msgs::action::TaskControl_GetResult_Response msg_;
};

class Init_TaskControl_GetResult_Response_status
{
public:
  Init_TaskControl_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskControl_GetResult_Response_result status(::task_msgs::action::TaskControl_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TaskControl_GetResult_Response_result(msg_);
  }

private:
  ::task_msgs::action::TaskControl_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_msgs::action::TaskControl_GetResult_Response>()
{
  return task_msgs::action::builder::Init_TaskControl_GetResult_Response_status();
}

}  // namespace task_msgs


namespace task_msgs
{

namespace action
{

namespace builder
{

class Init_TaskControl_FeedbackMessage_feedback
{
public:
  explicit Init_TaskControl_FeedbackMessage_feedback(::task_msgs::action::TaskControl_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::task_msgs::action::TaskControl_FeedbackMessage feedback(::task_msgs::action::TaskControl_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task_msgs::action::TaskControl_FeedbackMessage msg_;
};

class Init_TaskControl_FeedbackMessage_goal_id
{
public:
  Init_TaskControl_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskControl_FeedbackMessage_feedback goal_id(::task_msgs::action::TaskControl_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TaskControl_FeedbackMessage_feedback(msg_);
  }

private:
  ::task_msgs::action::TaskControl_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::task_msgs::action::TaskControl_FeedbackMessage>()
{
  return task_msgs::action::builder::Init_TaskControl_FeedbackMessage_goal_id();
}

}  // namespace task_msgs

#endif  // TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__BUILDER_HPP_
