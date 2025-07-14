// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chatbot_msgs:srv/ResetModel.idl
// generated code does not contain a copyright notice

#ifndef CHATBOT_MSGS__SRV__DETAIL__RESET_MODEL__TRAITS_HPP_
#define CHATBOT_MSGS__SRV__DETAIL__RESET_MODEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chatbot_msgs/srv/detail/reset_model__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chatbot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetModel_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetModel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetModel_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace chatbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use chatbot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chatbot_msgs::srv::ResetModel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  chatbot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chatbot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const chatbot_msgs::srv::ResetModel_Request & msg)
{
  return chatbot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chatbot_msgs::srv::ResetModel_Request>()
{
  return "chatbot_msgs::srv::ResetModel_Request";
}

template<>
inline const char * name<chatbot_msgs::srv::ResetModel_Request>()
{
  return "chatbot_msgs/srv/ResetModel_Request";
}

template<>
struct has_fixed_size<chatbot_msgs::srv::ResetModel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chatbot_msgs::srv::ResetModel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chatbot_msgs::srv::ResetModel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace chatbot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetModel_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetModel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetModel_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace chatbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use chatbot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chatbot_msgs::srv::ResetModel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  chatbot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chatbot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const chatbot_msgs::srv::ResetModel_Response & msg)
{
  return chatbot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chatbot_msgs::srv::ResetModel_Response>()
{
  return "chatbot_msgs::srv::ResetModel_Response";
}

template<>
inline const char * name<chatbot_msgs::srv::ResetModel_Response>()
{
  return "chatbot_msgs/srv/ResetModel_Response";
}

template<>
struct has_fixed_size<chatbot_msgs::srv::ResetModel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chatbot_msgs::srv::ResetModel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chatbot_msgs::srv::ResetModel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chatbot_msgs::srv::ResetModel>()
{
  return "chatbot_msgs::srv::ResetModel";
}

template<>
inline const char * name<chatbot_msgs::srv::ResetModel>()
{
  return "chatbot_msgs/srv/ResetModel";
}

template<>
struct has_fixed_size<chatbot_msgs::srv::ResetModel>
  : std::integral_constant<
    bool,
    has_fixed_size<chatbot_msgs::srv::ResetModel_Request>::value &&
    has_fixed_size<chatbot_msgs::srv::ResetModel_Response>::value
  >
{
};

template<>
struct has_bounded_size<chatbot_msgs::srv::ResetModel>
  : std::integral_constant<
    bool,
    has_bounded_size<chatbot_msgs::srv::ResetModel_Request>::value &&
    has_bounded_size<chatbot_msgs::srv::ResetModel_Response>::value
  >
{
};

template<>
struct is_service<chatbot_msgs::srv::ResetModel>
  : std::true_type
{
};

template<>
struct is_service_request<chatbot_msgs::srv::ResetModel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<chatbot_msgs::srv::ResetModel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CHATBOT_MSGS__SRV__DETAIL__RESET_MODEL__TRAITS_HPP_
