// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task_msgs:action/TaskControl.idl
// generated code does not contain a copyright notice

#ifndef TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__STRUCT_H_
#define TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/TaskControl in the package task_msgs.
typedef struct task_msgs__action__TaskControl_Goal
{
  rosidl_runtime_c__String task_data;
} task_msgs__action__TaskControl_Goal;

// Struct for a sequence of task_msgs__action__TaskControl_Goal.
typedef struct task_msgs__action__TaskControl_Goal__Sequence
{
  task_msgs__action__TaskControl_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_msgs__action__TaskControl_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_msg'
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/TaskControl in the package task_msgs.
typedef struct task_msgs__action__TaskControl_Result
{
  rosidl_runtime_c__String error_msg;
  rosidl_runtime_c__String result;
} task_msgs__action__TaskControl_Result;

// Struct for a sequence of task_msgs__action__TaskControl_Result.
typedef struct task_msgs__action__TaskControl_Result__Sequence
{
  task_msgs__action__TaskControl_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_msgs__action__TaskControl_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/TaskControl in the package task_msgs.
typedef struct task_msgs__action__TaskControl_Feedback
{
  rosidl_runtime_c__String status;
} task_msgs__action__TaskControl_Feedback;

// Struct for a sequence of task_msgs__action__TaskControl_Feedback.
typedef struct task_msgs__action__TaskControl_Feedback__Sequence
{
  task_msgs__action__TaskControl_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_msgs__action__TaskControl_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "task_msgs/action/detail/task_control__struct.h"

/// Struct defined in action/TaskControl in the package task_msgs.
typedef struct task_msgs__action__TaskControl_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  task_msgs__action__TaskControl_Goal goal;
} task_msgs__action__TaskControl_SendGoal_Request;

// Struct for a sequence of task_msgs__action__TaskControl_SendGoal_Request.
typedef struct task_msgs__action__TaskControl_SendGoal_Request__Sequence
{
  task_msgs__action__TaskControl_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_msgs__action__TaskControl_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TaskControl in the package task_msgs.
typedef struct task_msgs__action__TaskControl_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} task_msgs__action__TaskControl_SendGoal_Response;

// Struct for a sequence of task_msgs__action__TaskControl_SendGoal_Response.
typedef struct task_msgs__action__TaskControl_SendGoal_Response__Sequence
{
  task_msgs__action__TaskControl_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_msgs__action__TaskControl_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TaskControl in the package task_msgs.
typedef struct task_msgs__action__TaskControl_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} task_msgs__action__TaskControl_GetResult_Request;

// Struct for a sequence of task_msgs__action__TaskControl_GetResult_Request.
typedef struct task_msgs__action__TaskControl_GetResult_Request__Sequence
{
  task_msgs__action__TaskControl_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_msgs__action__TaskControl_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "task_msgs/action/detail/task_control__struct.h"

/// Struct defined in action/TaskControl in the package task_msgs.
typedef struct task_msgs__action__TaskControl_GetResult_Response
{
  int8_t status;
  task_msgs__action__TaskControl_Result result;
} task_msgs__action__TaskControl_GetResult_Response;

// Struct for a sequence of task_msgs__action__TaskControl_GetResult_Response.
typedef struct task_msgs__action__TaskControl_GetResult_Response__Sequence
{
  task_msgs__action__TaskControl_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_msgs__action__TaskControl_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "task_msgs/action/detail/task_control__struct.h"

/// Struct defined in action/TaskControl in the package task_msgs.
typedef struct task_msgs__action__TaskControl_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  task_msgs__action__TaskControl_Feedback feedback;
} task_msgs__action__TaskControl_FeedbackMessage;

// Struct for a sequence of task_msgs__action__TaskControl_FeedbackMessage.
typedef struct task_msgs__action__TaskControl_FeedbackMessage__Sequence
{
  task_msgs__action__TaskControl_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task_msgs__action__TaskControl_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__STRUCT_H_
