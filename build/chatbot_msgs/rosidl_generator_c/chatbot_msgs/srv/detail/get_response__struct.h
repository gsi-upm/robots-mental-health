// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chatbot_msgs:srv/GetResponse.idl
// generated code does not contain a copyright notice

#ifndef CHATBOT_MSGS__SRV__DETAIL__GET_RESPONSE__STRUCT_H_
#define CHATBOT_MSGS__SRV__DETAIL__GET_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'user_id'
// Member 'input'
// Member 'model'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetResponse in the package chatbot_msgs.
typedef struct chatbot_msgs__srv__GetResponse_Request
{
  rosidl_runtime_c__String user_id;
  rosidl_runtime_c__String input;
  /// AÑADIDO para manejar el cambio de modo
  rosidl_runtime_c__String model;
} chatbot_msgs__srv__GetResponse_Request;

// Struct for a sequence of chatbot_msgs__srv__GetResponse_Request.
typedef struct chatbot_msgs__srv__GetResponse_Request__Sequence
{
  chatbot_msgs__srv__GetResponse_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chatbot_msgs__srv__GetResponse_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetResponse in the package chatbot_msgs.
typedef struct chatbot_msgs__srv__GetResponse_Response
{
  rosidl_runtime_c__String output;
} chatbot_msgs__srv__GetResponse_Response;

// Struct for a sequence of chatbot_msgs__srv__GetResponse_Response.
typedef struct chatbot_msgs__srv__GetResponse_Response__Sequence
{
  chatbot_msgs__srv__GetResponse_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chatbot_msgs__srv__GetResponse_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHATBOT_MSGS__SRV__DETAIL__GET_RESPONSE__STRUCT_H_
