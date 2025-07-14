// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chatbot_msgs:srv/ResetModel.idl
// generated code does not contain a copyright notice

#ifndef CHATBOT_MSGS__SRV__DETAIL__RESET_MODEL__STRUCT_H_
#define CHATBOT_MSGS__SRV__DETAIL__RESET_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetModel in the package chatbot_msgs.
typedef struct chatbot_msgs__srv__ResetModel_Request
{
  uint8_t structure_needs_at_least_one_member;
} chatbot_msgs__srv__ResetModel_Request;

// Struct for a sequence of chatbot_msgs__srv__ResetModel_Request.
typedef struct chatbot_msgs__srv__ResetModel_Request__Sequence
{
  chatbot_msgs__srv__ResetModel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chatbot_msgs__srv__ResetModel_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ResetModel in the package chatbot_msgs.
typedef struct chatbot_msgs__srv__ResetModel_Response
{
  uint8_t structure_needs_at_least_one_member;
} chatbot_msgs__srv__ResetModel_Response;

// Struct for a sequence of chatbot_msgs__srv__ResetModel_Response.
typedef struct chatbot_msgs__srv__ResetModel_Response__Sequence
{
  chatbot_msgs__srv__ResetModel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chatbot_msgs__srv__ResetModel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHATBOT_MSGS__SRV__DETAIL__RESET_MODEL__STRUCT_H_
