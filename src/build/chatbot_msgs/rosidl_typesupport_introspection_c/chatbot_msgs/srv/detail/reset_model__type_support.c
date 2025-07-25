// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from chatbot_msgs:srv/ResetModel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "chatbot_msgs/srv/detail/reset_model__rosidl_typesupport_introspection_c.h"
#include "chatbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "chatbot_msgs/srv/detail/reset_model__functions.h"
#include "chatbot_msgs/srv/detail/reset_model__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chatbot_msgs__srv__ResetModel_Request__init(message_memory);
}

void chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_fini_function(void * message_memory)
{
  chatbot_msgs__srv__ResetModel_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chatbot_msgs__srv__ResetModel_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_message_members = {
  "chatbot_msgs__srv",  // message namespace
  "ResetModel_Request",  // message name
  1,  // number of fields
  sizeof(chatbot_msgs__srv__ResetModel_Request),
  chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_message_member_array,  // message members
  chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_message_type_support_handle = {
  0,
  &chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chatbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chatbot_msgs, srv, ResetModel_Request)() {
  if (!chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_message_type_support_handle.typesupport_identifier) {
    chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &chatbot_msgs__srv__ResetModel_Request__rosidl_typesupport_introspection_c__ResetModel_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "chatbot_msgs/srv/detail/reset_model__rosidl_typesupport_introspection_c.h"
// already included above
// #include "chatbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "chatbot_msgs/srv/detail/reset_model__functions.h"
// already included above
// #include "chatbot_msgs/srv/detail/reset_model__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chatbot_msgs__srv__ResetModel_Response__init(message_memory);
}

void chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_fini_function(void * message_memory)
{
  chatbot_msgs__srv__ResetModel_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chatbot_msgs__srv__ResetModel_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_message_members = {
  "chatbot_msgs__srv",  // message namespace
  "ResetModel_Response",  // message name
  1,  // number of fields
  sizeof(chatbot_msgs__srv__ResetModel_Response),
  chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_message_member_array,  // message members
  chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_message_type_support_handle = {
  0,
  &chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chatbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chatbot_msgs, srv, ResetModel_Response)() {
  if (!chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_message_type_support_handle.typesupport_identifier) {
    chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &chatbot_msgs__srv__ResetModel_Response__rosidl_typesupport_introspection_c__ResetModel_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "chatbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "chatbot_msgs/srv/detail/reset_model__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers chatbot_msgs__srv__detail__reset_model__rosidl_typesupport_introspection_c__ResetModel_service_members = {
  "chatbot_msgs__srv",  // service namespace
  "ResetModel",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // chatbot_msgs__srv__detail__reset_model__rosidl_typesupport_introspection_c__ResetModel_Request_message_type_support_handle,
  NULL  // response message
  // chatbot_msgs__srv__detail__reset_model__rosidl_typesupport_introspection_c__ResetModel_Response_message_type_support_handle
};

static rosidl_service_type_support_t chatbot_msgs__srv__detail__reset_model__rosidl_typesupport_introspection_c__ResetModel_service_type_support_handle = {
  0,
  &chatbot_msgs__srv__detail__reset_model__rosidl_typesupport_introspection_c__ResetModel_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chatbot_msgs, srv, ResetModel_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chatbot_msgs, srv, ResetModel_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chatbot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chatbot_msgs, srv, ResetModel)() {
  if (!chatbot_msgs__srv__detail__reset_model__rosidl_typesupport_introspection_c__ResetModel_service_type_support_handle.typesupport_identifier) {
    chatbot_msgs__srv__detail__reset_model__rosidl_typesupport_introspection_c__ResetModel_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)chatbot_msgs__srv__detail__reset_model__rosidl_typesupport_introspection_c__ResetModel_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chatbot_msgs, srv, ResetModel_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chatbot_msgs, srv, ResetModel_Response)()->data;
  }

  return &chatbot_msgs__srv__detail__reset_model__rosidl_typesupport_introspection_c__ResetModel_service_type_support_handle;
}
