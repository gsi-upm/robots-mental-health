// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from task_msgs:action/TaskControl.idl
// generated code does not contain a copyright notice

#ifndef TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__TRAITS_HPP_
#define TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "task_msgs/action/detail/task_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace task_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskControl_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_data
  {
    out << "task_data: ";
    rosidl_generator_traits::value_to_yaml(msg.task_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskControl_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_data: ";
    rosidl_generator_traits::value_to_yaml(msg.task_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskControl_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use task_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_msgs::action::TaskControl_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const task_msgs::action::TaskControl_Goal & msg)
{
  return task_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<task_msgs::action::TaskControl_Goal>()
{
  return "task_msgs::action::TaskControl_Goal";
}

template<>
inline const char * name<task_msgs::action::TaskControl_Goal>()
{
  return "task_msgs/action/TaskControl_Goal";
}

template<>
struct has_fixed_size<task_msgs::action::TaskControl_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task_msgs::action::TaskControl_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task_msgs::action::TaskControl_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace task_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskControl_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_msg
  {
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskControl_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskControl_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use task_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_msgs::action::TaskControl_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const task_msgs::action::TaskControl_Result & msg)
{
  return task_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<task_msgs::action::TaskControl_Result>()
{
  return "task_msgs::action::TaskControl_Result";
}

template<>
inline const char * name<task_msgs::action::TaskControl_Result>()
{
  return "task_msgs/action/TaskControl_Result";
}

template<>
struct has_fixed_size<task_msgs::action::TaskControl_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task_msgs::action::TaskControl_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task_msgs::action::TaskControl_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace task_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskControl_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskControl_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskControl_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use task_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_msgs::action::TaskControl_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const task_msgs::action::TaskControl_Feedback & msg)
{
  return task_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<task_msgs::action::TaskControl_Feedback>()
{
  return "task_msgs::action::TaskControl_Feedback";
}

template<>
inline const char * name<task_msgs::action::TaskControl_Feedback>()
{
  return "task_msgs/action/TaskControl_Feedback";
}

template<>
struct has_fixed_size<task_msgs::action::TaskControl_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<task_msgs::action::TaskControl_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<task_msgs::action::TaskControl_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "task_msgs/action/detail/task_control__traits.hpp"

namespace task_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskControl_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskControl_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskControl_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use task_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_msgs::action::TaskControl_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const task_msgs::action::TaskControl_SendGoal_Request & msg)
{
  return task_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<task_msgs::action::TaskControl_SendGoal_Request>()
{
  return "task_msgs::action::TaskControl_SendGoal_Request";
}

template<>
inline const char * name<task_msgs::action::TaskControl_SendGoal_Request>()
{
  return "task_msgs/action/TaskControl_SendGoal_Request";
}

template<>
struct has_fixed_size<task_msgs::action::TaskControl_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<task_msgs::action::TaskControl_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<task_msgs::action::TaskControl_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<task_msgs::action::TaskControl_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<task_msgs::action::TaskControl_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace task_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskControl_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskControl_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskControl_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use task_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_msgs::action::TaskControl_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const task_msgs::action::TaskControl_SendGoal_Response & msg)
{
  return task_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<task_msgs::action::TaskControl_SendGoal_Response>()
{
  return "task_msgs::action::TaskControl_SendGoal_Response";
}

template<>
inline const char * name<task_msgs::action::TaskControl_SendGoal_Response>()
{
  return "task_msgs/action/TaskControl_SendGoal_Response";
}

template<>
struct has_fixed_size<task_msgs::action::TaskControl_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<task_msgs::action::TaskControl_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<task_msgs::action::TaskControl_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<task_msgs::action::TaskControl_SendGoal>()
{
  return "task_msgs::action::TaskControl_SendGoal";
}

template<>
inline const char * name<task_msgs::action::TaskControl_SendGoal>()
{
  return "task_msgs/action/TaskControl_SendGoal";
}

template<>
struct has_fixed_size<task_msgs::action::TaskControl_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<task_msgs::action::TaskControl_SendGoal_Request>::value &&
    has_fixed_size<task_msgs::action::TaskControl_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<task_msgs::action::TaskControl_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<task_msgs::action::TaskControl_SendGoal_Request>::value &&
    has_bounded_size<task_msgs::action::TaskControl_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<task_msgs::action::TaskControl_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<task_msgs::action::TaskControl_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<task_msgs::action::TaskControl_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace task_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskControl_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskControl_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskControl_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use task_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_msgs::action::TaskControl_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const task_msgs::action::TaskControl_GetResult_Request & msg)
{
  return task_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<task_msgs::action::TaskControl_GetResult_Request>()
{
  return "task_msgs::action::TaskControl_GetResult_Request";
}

template<>
inline const char * name<task_msgs::action::TaskControl_GetResult_Request>()
{
  return "task_msgs/action/TaskControl_GetResult_Request";
}

template<>
struct has_fixed_size<task_msgs::action::TaskControl_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<task_msgs::action::TaskControl_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<task_msgs::action::TaskControl_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "task_msgs/action/detail/task_control__traits.hpp"

namespace task_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskControl_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskControl_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskControl_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use task_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_msgs::action::TaskControl_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const task_msgs::action::TaskControl_GetResult_Response & msg)
{
  return task_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<task_msgs::action::TaskControl_GetResult_Response>()
{
  return "task_msgs::action::TaskControl_GetResult_Response";
}

template<>
inline const char * name<task_msgs::action::TaskControl_GetResult_Response>()
{
  return "task_msgs/action/TaskControl_GetResult_Response";
}

template<>
struct has_fixed_size<task_msgs::action::TaskControl_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<task_msgs::action::TaskControl_Result>::value> {};

template<>
struct has_bounded_size<task_msgs::action::TaskControl_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<task_msgs::action::TaskControl_Result>::value> {};

template<>
struct is_message<task_msgs::action::TaskControl_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<task_msgs::action::TaskControl_GetResult>()
{
  return "task_msgs::action::TaskControl_GetResult";
}

template<>
inline const char * name<task_msgs::action::TaskControl_GetResult>()
{
  return "task_msgs/action/TaskControl_GetResult";
}

template<>
struct has_fixed_size<task_msgs::action::TaskControl_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<task_msgs::action::TaskControl_GetResult_Request>::value &&
    has_fixed_size<task_msgs::action::TaskControl_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<task_msgs::action::TaskControl_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<task_msgs::action::TaskControl_GetResult_Request>::value &&
    has_bounded_size<task_msgs::action::TaskControl_GetResult_Response>::value
  >
{
};

template<>
struct is_service<task_msgs::action::TaskControl_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<task_msgs::action::TaskControl_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<task_msgs::action::TaskControl_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "task_msgs/action/detail/task_control__traits.hpp"

namespace task_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const TaskControl_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskControl_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskControl_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use task_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const task_msgs::action::TaskControl_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  task_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use task_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const task_msgs::action::TaskControl_FeedbackMessage & msg)
{
  return task_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<task_msgs::action::TaskControl_FeedbackMessage>()
{
  return "task_msgs::action::TaskControl_FeedbackMessage";
}

template<>
inline const char * name<task_msgs::action::TaskControl_FeedbackMessage>()
{
  return "task_msgs/action/TaskControl_FeedbackMessage";
}

template<>
struct has_fixed_size<task_msgs::action::TaskControl_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<task_msgs::action::TaskControl_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<task_msgs::action::TaskControl_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<task_msgs::action::TaskControl_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<task_msgs::action::TaskControl_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<task_msgs::action::TaskControl>
  : std::true_type
{
};

template<>
struct is_action_goal<task_msgs::action::TaskControl_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<task_msgs::action::TaskControl_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<task_msgs::action::TaskControl_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__TRAITS_HPP_
