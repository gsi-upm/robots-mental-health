// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chatbot_msgs:srv/GetResponse.idl
// generated code does not contain a copyright notice

#ifndef CHATBOT_MSGS__SRV__DETAIL__GET_RESPONSE__BUILDER_HPP_
#define CHATBOT_MSGS__SRV__DETAIL__GET_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chatbot_msgs/srv/detail/get_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chatbot_msgs
{

namespace srv
{

namespace builder
{

class Init_GetResponse_Request_model
{
public:
  explicit Init_GetResponse_Request_model(::chatbot_msgs::srv::GetResponse_Request & msg)
  : msg_(msg)
  {}
  ::chatbot_msgs::srv::GetResponse_Request model(::chatbot_msgs::srv::GetResponse_Request::_model_type arg)
  {
    msg_.model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chatbot_msgs::srv::GetResponse_Request msg_;
};

class Init_GetResponse_Request_input
{
public:
  explicit Init_GetResponse_Request_input(::chatbot_msgs::srv::GetResponse_Request & msg)
  : msg_(msg)
  {}
  Init_GetResponse_Request_model input(::chatbot_msgs::srv::GetResponse_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return Init_GetResponse_Request_model(msg_);
  }

private:
  ::chatbot_msgs::srv::GetResponse_Request msg_;
};

class Init_GetResponse_Request_user_id
{
public:
  Init_GetResponse_Request_user_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetResponse_Request_input user_id(::chatbot_msgs::srv::GetResponse_Request::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_GetResponse_Request_input(msg_);
  }

private:
  ::chatbot_msgs::srv::GetResponse_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chatbot_msgs::srv::GetResponse_Request>()
{
  return chatbot_msgs::srv::builder::Init_GetResponse_Request_user_id();
}

}  // namespace chatbot_msgs


namespace chatbot_msgs
{

namespace srv
{

namespace builder
{

class Init_GetResponse_Response_output
{
public:
  Init_GetResponse_Response_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chatbot_msgs::srv::GetResponse_Response output(::chatbot_msgs::srv::GetResponse_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chatbot_msgs::srv::GetResponse_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chatbot_msgs::srv::GetResponse_Response>()
{
  return chatbot_msgs::srv::builder::Init_GetResponse_Response_output();
}

}  // namespace chatbot_msgs

#endif  // CHATBOT_MSGS__SRV__DETAIL__GET_RESPONSE__BUILDER_HPP_
