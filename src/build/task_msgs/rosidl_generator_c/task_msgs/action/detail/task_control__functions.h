// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from task_msgs:action/TaskControl.idl
// generated code does not contain a copyright notice

#ifndef TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__FUNCTIONS_H_
#define TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "task_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "task_msgs/action/detail/task_control__struct.h"

/// Initialize action/TaskControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task_msgs__action__TaskControl_Goal
 * )) before or use
 * task_msgs__action__TaskControl_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Goal__init(task_msgs__action__TaskControl_Goal * msg);

/// Finalize action/TaskControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Goal__fini(task_msgs__action__TaskControl_Goal * msg);

/// Create action/TaskControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task_msgs__action__TaskControl_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_Goal *
task_msgs__action__TaskControl_Goal__create();

/// Destroy action/TaskControl message.
/**
 * It calls
 * task_msgs__action__TaskControl_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Goal__destroy(task_msgs__action__TaskControl_Goal * msg);

/// Check for action/TaskControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Goal__are_equal(const task_msgs__action__TaskControl_Goal * lhs, const task_msgs__action__TaskControl_Goal * rhs);

/// Copy a action/TaskControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Goal__copy(
  const task_msgs__action__TaskControl_Goal * input,
  task_msgs__action__TaskControl_Goal * output);

/// Initialize array of action/TaskControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * task_msgs__action__TaskControl_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Goal__Sequence__init(task_msgs__action__TaskControl_Goal__Sequence * array, size_t size);

/// Finalize array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Goal__Sequence__fini(task_msgs__action__TaskControl_Goal__Sequence * array);

/// Create array of action/TaskControl messages.
/**
 * It allocates the memory for the array and calls
 * task_msgs__action__TaskControl_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_Goal__Sequence *
task_msgs__action__TaskControl_Goal__Sequence__create(size_t size);

/// Destroy array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Goal__Sequence__destroy(task_msgs__action__TaskControl_Goal__Sequence * array);

/// Check for action/TaskControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Goal__Sequence__are_equal(const task_msgs__action__TaskControl_Goal__Sequence * lhs, const task_msgs__action__TaskControl_Goal__Sequence * rhs);

/// Copy an array of action/TaskControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Goal__Sequence__copy(
  const task_msgs__action__TaskControl_Goal__Sequence * input,
  task_msgs__action__TaskControl_Goal__Sequence * output);

/// Initialize action/TaskControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task_msgs__action__TaskControl_Result
 * )) before or use
 * task_msgs__action__TaskControl_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Result__init(task_msgs__action__TaskControl_Result * msg);

/// Finalize action/TaskControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Result__fini(task_msgs__action__TaskControl_Result * msg);

/// Create action/TaskControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task_msgs__action__TaskControl_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_Result *
task_msgs__action__TaskControl_Result__create();

/// Destroy action/TaskControl message.
/**
 * It calls
 * task_msgs__action__TaskControl_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Result__destroy(task_msgs__action__TaskControl_Result * msg);

/// Check for action/TaskControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Result__are_equal(const task_msgs__action__TaskControl_Result * lhs, const task_msgs__action__TaskControl_Result * rhs);

/// Copy a action/TaskControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Result__copy(
  const task_msgs__action__TaskControl_Result * input,
  task_msgs__action__TaskControl_Result * output);

/// Initialize array of action/TaskControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * task_msgs__action__TaskControl_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Result__Sequence__init(task_msgs__action__TaskControl_Result__Sequence * array, size_t size);

/// Finalize array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Result__Sequence__fini(task_msgs__action__TaskControl_Result__Sequence * array);

/// Create array of action/TaskControl messages.
/**
 * It allocates the memory for the array and calls
 * task_msgs__action__TaskControl_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_Result__Sequence *
task_msgs__action__TaskControl_Result__Sequence__create(size_t size);

/// Destroy array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Result__Sequence__destroy(task_msgs__action__TaskControl_Result__Sequence * array);

/// Check for action/TaskControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Result__Sequence__are_equal(const task_msgs__action__TaskControl_Result__Sequence * lhs, const task_msgs__action__TaskControl_Result__Sequence * rhs);

/// Copy an array of action/TaskControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Result__Sequence__copy(
  const task_msgs__action__TaskControl_Result__Sequence * input,
  task_msgs__action__TaskControl_Result__Sequence * output);

/// Initialize action/TaskControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task_msgs__action__TaskControl_Feedback
 * )) before or use
 * task_msgs__action__TaskControl_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Feedback__init(task_msgs__action__TaskControl_Feedback * msg);

/// Finalize action/TaskControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Feedback__fini(task_msgs__action__TaskControl_Feedback * msg);

/// Create action/TaskControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task_msgs__action__TaskControl_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_Feedback *
task_msgs__action__TaskControl_Feedback__create();

/// Destroy action/TaskControl message.
/**
 * It calls
 * task_msgs__action__TaskControl_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Feedback__destroy(task_msgs__action__TaskControl_Feedback * msg);

/// Check for action/TaskControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Feedback__are_equal(const task_msgs__action__TaskControl_Feedback * lhs, const task_msgs__action__TaskControl_Feedback * rhs);

/// Copy a action/TaskControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Feedback__copy(
  const task_msgs__action__TaskControl_Feedback * input,
  task_msgs__action__TaskControl_Feedback * output);

/// Initialize array of action/TaskControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * task_msgs__action__TaskControl_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Feedback__Sequence__init(task_msgs__action__TaskControl_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Feedback__Sequence__fini(task_msgs__action__TaskControl_Feedback__Sequence * array);

/// Create array of action/TaskControl messages.
/**
 * It allocates the memory for the array and calls
 * task_msgs__action__TaskControl_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_Feedback__Sequence *
task_msgs__action__TaskControl_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_Feedback__Sequence__destroy(task_msgs__action__TaskControl_Feedback__Sequence * array);

/// Check for action/TaskControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Feedback__Sequence__are_equal(const task_msgs__action__TaskControl_Feedback__Sequence * lhs, const task_msgs__action__TaskControl_Feedback__Sequence * rhs);

/// Copy an array of action/TaskControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_Feedback__Sequence__copy(
  const task_msgs__action__TaskControl_Feedback__Sequence * input,
  task_msgs__action__TaskControl_Feedback__Sequence * output);

/// Initialize action/TaskControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task_msgs__action__TaskControl_SendGoal_Request
 * )) before or use
 * task_msgs__action__TaskControl_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Request__init(task_msgs__action__TaskControl_SendGoal_Request * msg);

/// Finalize action/TaskControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_SendGoal_Request__fini(task_msgs__action__TaskControl_SendGoal_Request * msg);

/// Create action/TaskControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task_msgs__action__TaskControl_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_SendGoal_Request *
task_msgs__action__TaskControl_SendGoal_Request__create();

/// Destroy action/TaskControl message.
/**
 * It calls
 * task_msgs__action__TaskControl_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_SendGoal_Request__destroy(task_msgs__action__TaskControl_SendGoal_Request * msg);

/// Check for action/TaskControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Request__are_equal(const task_msgs__action__TaskControl_SendGoal_Request * lhs, const task_msgs__action__TaskControl_SendGoal_Request * rhs);

/// Copy a action/TaskControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Request__copy(
  const task_msgs__action__TaskControl_SendGoal_Request * input,
  task_msgs__action__TaskControl_SendGoal_Request * output);

/// Initialize array of action/TaskControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * task_msgs__action__TaskControl_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Request__Sequence__init(task_msgs__action__TaskControl_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_SendGoal_Request__Sequence__fini(task_msgs__action__TaskControl_SendGoal_Request__Sequence * array);

/// Create array of action/TaskControl messages.
/**
 * It allocates the memory for the array and calls
 * task_msgs__action__TaskControl_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_SendGoal_Request__Sequence *
task_msgs__action__TaskControl_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_SendGoal_Request__Sequence__destroy(task_msgs__action__TaskControl_SendGoal_Request__Sequence * array);

/// Check for action/TaskControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Request__Sequence__are_equal(const task_msgs__action__TaskControl_SendGoal_Request__Sequence * lhs, const task_msgs__action__TaskControl_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/TaskControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Request__Sequence__copy(
  const task_msgs__action__TaskControl_SendGoal_Request__Sequence * input,
  task_msgs__action__TaskControl_SendGoal_Request__Sequence * output);

/// Initialize action/TaskControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task_msgs__action__TaskControl_SendGoal_Response
 * )) before or use
 * task_msgs__action__TaskControl_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Response__init(task_msgs__action__TaskControl_SendGoal_Response * msg);

/// Finalize action/TaskControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_SendGoal_Response__fini(task_msgs__action__TaskControl_SendGoal_Response * msg);

/// Create action/TaskControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task_msgs__action__TaskControl_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_SendGoal_Response *
task_msgs__action__TaskControl_SendGoal_Response__create();

/// Destroy action/TaskControl message.
/**
 * It calls
 * task_msgs__action__TaskControl_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_SendGoal_Response__destroy(task_msgs__action__TaskControl_SendGoal_Response * msg);

/// Check for action/TaskControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Response__are_equal(const task_msgs__action__TaskControl_SendGoal_Response * lhs, const task_msgs__action__TaskControl_SendGoal_Response * rhs);

/// Copy a action/TaskControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Response__copy(
  const task_msgs__action__TaskControl_SendGoal_Response * input,
  task_msgs__action__TaskControl_SendGoal_Response * output);

/// Initialize array of action/TaskControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * task_msgs__action__TaskControl_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Response__Sequence__init(task_msgs__action__TaskControl_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_SendGoal_Response__Sequence__fini(task_msgs__action__TaskControl_SendGoal_Response__Sequence * array);

/// Create array of action/TaskControl messages.
/**
 * It allocates the memory for the array and calls
 * task_msgs__action__TaskControl_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_SendGoal_Response__Sequence *
task_msgs__action__TaskControl_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_SendGoal_Response__Sequence__destroy(task_msgs__action__TaskControl_SendGoal_Response__Sequence * array);

/// Check for action/TaskControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Response__Sequence__are_equal(const task_msgs__action__TaskControl_SendGoal_Response__Sequence * lhs, const task_msgs__action__TaskControl_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/TaskControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_SendGoal_Response__Sequence__copy(
  const task_msgs__action__TaskControl_SendGoal_Response__Sequence * input,
  task_msgs__action__TaskControl_SendGoal_Response__Sequence * output);

/// Initialize action/TaskControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task_msgs__action__TaskControl_GetResult_Request
 * )) before or use
 * task_msgs__action__TaskControl_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Request__init(task_msgs__action__TaskControl_GetResult_Request * msg);

/// Finalize action/TaskControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_GetResult_Request__fini(task_msgs__action__TaskControl_GetResult_Request * msg);

/// Create action/TaskControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task_msgs__action__TaskControl_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_GetResult_Request *
task_msgs__action__TaskControl_GetResult_Request__create();

/// Destroy action/TaskControl message.
/**
 * It calls
 * task_msgs__action__TaskControl_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_GetResult_Request__destroy(task_msgs__action__TaskControl_GetResult_Request * msg);

/// Check for action/TaskControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Request__are_equal(const task_msgs__action__TaskControl_GetResult_Request * lhs, const task_msgs__action__TaskControl_GetResult_Request * rhs);

/// Copy a action/TaskControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Request__copy(
  const task_msgs__action__TaskControl_GetResult_Request * input,
  task_msgs__action__TaskControl_GetResult_Request * output);

/// Initialize array of action/TaskControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * task_msgs__action__TaskControl_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Request__Sequence__init(task_msgs__action__TaskControl_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_GetResult_Request__Sequence__fini(task_msgs__action__TaskControl_GetResult_Request__Sequence * array);

/// Create array of action/TaskControl messages.
/**
 * It allocates the memory for the array and calls
 * task_msgs__action__TaskControl_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_GetResult_Request__Sequence *
task_msgs__action__TaskControl_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_GetResult_Request__Sequence__destroy(task_msgs__action__TaskControl_GetResult_Request__Sequence * array);

/// Check for action/TaskControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Request__Sequence__are_equal(const task_msgs__action__TaskControl_GetResult_Request__Sequence * lhs, const task_msgs__action__TaskControl_GetResult_Request__Sequence * rhs);

/// Copy an array of action/TaskControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Request__Sequence__copy(
  const task_msgs__action__TaskControl_GetResult_Request__Sequence * input,
  task_msgs__action__TaskControl_GetResult_Request__Sequence * output);

/// Initialize action/TaskControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task_msgs__action__TaskControl_GetResult_Response
 * )) before or use
 * task_msgs__action__TaskControl_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Response__init(task_msgs__action__TaskControl_GetResult_Response * msg);

/// Finalize action/TaskControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_GetResult_Response__fini(task_msgs__action__TaskControl_GetResult_Response * msg);

/// Create action/TaskControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task_msgs__action__TaskControl_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_GetResult_Response *
task_msgs__action__TaskControl_GetResult_Response__create();

/// Destroy action/TaskControl message.
/**
 * It calls
 * task_msgs__action__TaskControl_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_GetResult_Response__destroy(task_msgs__action__TaskControl_GetResult_Response * msg);

/// Check for action/TaskControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Response__are_equal(const task_msgs__action__TaskControl_GetResult_Response * lhs, const task_msgs__action__TaskControl_GetResult_Response * rhs);

/// Copy a action/TaskControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Response__copy(
  const task_msgs__action__TaskControl_GetResult_Response * input,
  task_msgs__action__TaskControl_GetResult_Response * output);

/// Initialize array of action/TaskControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * task_msgs__action__TaskControl_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Response__Sequence__init(task_msgs__action__TaskControl_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_GetResult_Response__Sequence__fini(task_msgs__action__TaskControl_GetResult_Response__Sequence * array);

/// Create array of action/TaskControl messages.
/**
 * It allocates the memory for the array and calls
 * task_msgs__action__TaskControl_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_GetResult_Response__Sequence *
task_msgs__action__TaskControl_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_GetResult_Response__Sequence__destroy(task_msgs__action__TaskControl_GetResult_Response__Sequence * array);

/// Check for action/TaskControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Response__Sequence__are_equal(const task_msgs__action__TaskControl_GetResult_Response__Sequence * lhs, const task_msgs__action__TaskControl_GetResult_Response__Sequence * rhs);

/// Copy an array of action/TaskControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_GetResult_Response__Sequence__copy(
  const task_msgs__action__TaskControl_GetResult_Response__Sequence * input,
  task_msgs__action__TaskControl_GetResult_Response__Sequence * output);

/// Initialize action/TaskControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * task_msgs__action__TaskControl_FeedbackMessage
 * )) before or use
 * task_msgs__action__TaskControl_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_FeedbackMessage__init(task_msgs__action__TaskControl_FeedbackMessage * msg);

/// Finalize action/TaskControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_FeedbackMessage__fini(task_msgs__action__TaskControl_FeedbackMessage * msg);

/// Create action/TaskControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * task_msgs__action__TaskControl_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_FeedbackMessage *
task_msgs__action__TaskControl_FeedbackMessage__create();

/// Destroy action/TaskControl message.
/**
 * It calls
 * task_msgs__action__TaskControl_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_FeedbackMessage__destroy(task_msgs__action__TaskControl_FeedbackMessage * msg);

/// Check for action/TaskControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_FeedbackMessage__are_equal(const task_msgs__action__TaskControl_FeedbackMessage * lhs, const task_msgs__action__TaskControl_FeedbackMessage * rhs);

/// Copy a action/TaskControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_FeedbackMessage__copy(
  const task_msgs__action__TaskControl_FeedbackMessage * input,
  task_msgs__action__TaskControl_FeedbackMessage * output);

/// Initialize array of action/TaskControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * task_msgs__action__TaskControl_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_FeedbackMessage__Sequence__init(task_msgs__action__TaskControl_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_FeedbackMessage__Sequence__fini(task_msgs__action__TaskControl_FeedbackMessage__Sequence * array);

/// Create array of action/TaskControl messages.
/**
 * It allocates the memory for the array and calls
 * task_msgs__action__TaskControl_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
task_msgs__action__TaskControl_FeedbackMessage__Sequence *
task_msgs__action__TaskControl_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TaskControl messages.
/**
 * It calls
 * task_msgs__action__TaskControl_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
void
task_msgs__action__TaskControl_FeedbackMessage__Sequence__destroy(task_msgs__action__TaskControl_FeedbackMessage__Sequence * array);

/// Check for action/TaskControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_FeedbackMessage__Sequence__are_equal(const task_msgs__action__TaskControl_FeedbackMessage__Sequence * lhs, const task_msgs__action__TaskControl_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/TaskControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_task_msgs
bool
task_msgs__action__TaskControl_FeedbackMessage__Sequence__copy(
  const task_msgs__action__TaskControl_FeedbackMessage__Sequence * input,
  task_msgs__action__TaskControl_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TASK_MSGS__ACTION__DETAIL__TASK_CONTROL__FUNCTIONS_H_
