// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from task_msgs:action/TaskControl.idl
// generated code does not contain a copyright notice
#include "task_msgs/action/detail/task_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `task_data`
#include "rosidl_runtime_c/string_functions.h"

bool
task_msgs__action__TaskControl_Goal__init(task_msgs__action__TaskControl_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // task_data
  if (!rosidl_runtime_c__String__init(&msg->task_data)) {
    task_msgs__action__TaskControl_Goal__fini(msg);
    return false;
  }
  return true;
}

void
task_msgs__action__TaskControl_Goal__fini(task_msgs__action__TaskControl_Goal * msg)
{
  if (!msg) {
    return;
  }
  // task_data
  rosidl_runtime_c__String__fini(&msg->task_data);
}

bool
task_msgs__action__TaskControl_Goal__are_equal(const task_msgs__action__TaskControl_Goal * lhs, const task_msgs__action__TaskControl_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_data), &(rhs->task_data)))
  {
    return false;
  }
  return true;
}

bool
task_msgs__action__TaskControl_Goal__copy(
  const task_msgs__action__TaskControl_Goal * input,
  task_msgs__action__TaskControl_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // task_data
  if (!rosidl_runtime_c__String__copy(
      &(input->task_data), &(output->task_data)))
  {
    return false;
  }
  return true;
}

task_msgs__action__TaskControl_Goal *
task_msgs__action__TaskControl_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_Goal * msg = (task_msgs__action__TaskControl_Goal *)allocator.allocate(sizeof(task_msgs__action__TaskControl_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_msgs__action__TaskControl_Goal));
  bool success = task_msgs__action__TaskControl_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_msgs__action__TaskControl_Goal__destroy(task_msgs__action__TaskControl_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_msgs__action__TaskControl_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_msgs__action__TaskControl_Goal__Sequence__init(task_msgs__action__TaskControl_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_Goal * data = NULL;

  if (size) {
    data = (task_msgs__action__TaskControl_Goal *)allocator.zero_allocate(size, sizeof(task_msgs__action__TaskControl_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_msgs__action__TaskControl_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_msgs__action__TaskControl_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
task_msgs__action__TaskControl_Goal__Sequence__fini(task_msgs__action__TaskControl_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      task_msgs__action__TaskControl_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

task_msgs__action__TaskControl_Goal__Sequence *
task_msgs__action__TaskControl_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_Goal__Sequence * array = (task_msgs__action__TaskControl_Goal__Sequence *)allocator.allocate(sizeof(task_msgs__action__TaskControl_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_msgs__action__TaskControl_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_msgs__action__TaskControl_Goal__Sequence__destroy(task_msgs__action__TaskControl_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_msgs__action__TaskControl_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_msgs__action__TaskControl_Goal__Sequence__are_equal(const task_msgs__action__TaskControl_Goal__Sequence * lhs, const task_msgs__action__TaskControl_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_msgs__action__TaskControl_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_msgs__action__TaskControl_Goal__Sequence__copy(
  const task_msgs__action__TaskControl_Goal__Sequence * input,
  task_msgs__action__TaskControl_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_msgs__action__TaskControl_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_msgs__action__TaskControl_Goal * data =
      (task_msgs__action__TaskControl_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_msgs__action__TaskControl_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_msgs__action__TaskControl_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_msgs__action__TaskControl_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_msg`
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
task_msgs__action__TaskControl_Result__init(task_msgs__action__TaskControl_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__init(&msg->error_msg)) {
    task_msgs__action__TaskControl_Result__fini(msg);
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    task_msgs__action__TaskControl_Result__fini(msg);
    return false;
  }
  return true;
}

void
task_msgs__action__TaskControl_Result__fini(task_msgs__action__TaskControl_Result * msg)
{
  if (!msg) {
    return;
  }
  // error_msg
  rosidl_runtime_c__String__fini(&msg->error_msg);
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
task_msgs__action__TaskControl_Result__are_equal(const task_msgs__action__TaskControl_Result * lhs, const task_msgs__action__TaskControl_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_msg), &(rhs->error_msg)))
  {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
task_msgs__action__TaskControl_Result__copy(
  const task_msgs__action__TaskControl_Result * input,
  task_msgs__action__TaskControl_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->error_msg), &(output->error_msg)))
  {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

task_msgs__action__TaskControl_Result *
task_msgs__action__TaskControl_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_Result * msg = (task_msgs__action__TaskControl_Result *)allocator.allocate(sizeof(task_msgs__action__TaskControl_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_msgs__action__TaskControl_Result));
  bool success = task_msgs__action__TaskControl_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_msgs__action__TaskControl_Result__destroy(task_msgs__action__TaskControl_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_msgs__action__TaskControl_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_msgs__action__TaskControl_Result__Sequence__init(task_msgs__action__TaskControl_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_Result * data = NULL;

  if (size) {
    data = (task_msgs__action__TaskControl_Result *)allocator.zero_allocate(size, sizeof(task_msgs__action__TaskControl_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_msgs__action__TaskControl_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_msgs__action__TaskControl_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
task_msgs__action__TaskControl_Result__Sequence__fini(task_msgs__action__TaskControl_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      task_msgs__action__TaskControl_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

task_msgs__action__TaskControl_Result__Sequence *
task_msgs__action__TaskControl_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_Result__Sequence * array = (task_msgs__action__TaskControl_Result__Sequence *)allocator.allocate(sizeof(task_msgs__action__TaskControl_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_msgs__action__TaskControl_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_msgs__action__TaskControl_Result__Sequence__destroy(task_msgs__action__TaskControl_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_msgs__action__TaskControl_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_msgs__action__TaskControl_Result__Sequence__are_equal(const task_msgs__action__TaskControl_Result__Sequence * lhs, const task_msgs__action__TaskControl_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_msgs__action__TaskControl_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_msgs__action__TaskControl_Result__Sequence__copy(
  const task_msgs__action__TaskControl_Result__Sequence * input,
  task_msgs__action__TaskControl_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_msgs__action__TaskControl_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_msgs__action__TaskControl_Result * data =
      (task_msgs__action__TaskControl_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_msgs__action__TaskControl_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_msgs__action__TaskControl_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_msgs__action__TaskControl_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
task_msgs__action__TaskControl_Feedback__init(task_msgs__action__TaskControl_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    task_msgs__action__TaskControl_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
task_msgs__action__TaskControl_Feedback__fini(task_msgs__action__TaskControl_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
task_msgs__action__TaskControl_Feedback__are_equal(const task_msgs__action__TaskControl_Feedback * lhs, const task_msgs__action__TaskControl_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
task_msgs__action__TaskControl_Feedback__copy(
  const task_msgs__action__TaskControl_Feedback * input,
  task_msgs__action__TaskControl_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

task_msgs__action__TaskControl_Feedback *
task_msgs__action__TaskControl_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_Feedback * msg = (task_msgs__action__TaskControl_Feedback *)allocator.allocate(sizeof(task_msgs__action__TaskControl_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_msgs__action__TaskControl_Feedback));
  bool success = task_msgs__action__TaskControl_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_msgs__action__TaskControl_Feedback__destroy(task_msgs__action__TaskControl_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_msgs__action__TaskControl_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_msgs__action__TaskControl_Feedback__Sequence__init(task_msgs__action__TaskControl_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_Feedback * data = NULL;

  if (size) {
    data = (task_msgs__action__TaskControl_Feedback *)allocator.zero_allocate(size, sizeof(task_msgs__action__TaskControl_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_msgs__action__TaskControl_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_msgs__action__TaskControl_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
task_msgs__action__TaskControl_Feedback__Sequence__fini(task_msgs__action__TaskControl_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      task_msgs__action__TaskControl_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

task_msgs__action__TaskControl_Feedback__Sequence *
task_msgs__action__TaskControl_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_Feedback__Sequence * array = (task_msgs__action__TaskControl_Feedback__Sequence *)allocator.allocate(sizeof(task_msgs__action__TaskControl_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_msgs__action__TaskControl_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_msgs__action__TaskControl_Feedback__Sequence__destroy(task_msgs__action__TaskControl_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_msgs__action__TaskControl_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_msgs__action__TaskControl_Feedback__Sequence__are_equal(const task_msgs__action__TaskControl_Feedback__Sequence * lhs, const task_msgs__action__TaskControl_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_msgs__action__TaskControl_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_msgs__action__TaskControl_Feedback__Sequence__copy(
  const task_msgs__action__TaskControl_Feedback__Sequence * input,
  task_msgs__action__TaskControl_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_msgs__action__TaskControl_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_msgs__action__TaskControl_Feedback * data =
      (task_msgs__action__TaskControl_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_msgs__action__TaskControl_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_msgs__action__TaskControl_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_msgs__action__TaskControl_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "task_msgs/action/detail/task_control__functions.h"

bool
task_msgs__action__TaskControl_SendGoal_Request__init(task_msgs__action__TaskControl_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    task_msgs__action__TaskControl_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!task_msgs__action__TaskControl_Goal__init(&msg->goal)) {
    task_msgs__action__TaskControl_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
task_msgs__action__TaskControl_SendGoal_Request__fini(task_msgs__action__TaskControl_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  task_msgs__action__TaskControl_Goal__fini(&msg->goal);
}

bool
task_msgs__action__TaskControl_SendGoal_Request__are_equal(const task_msgs__action__TaskControl_SendGoal_Request * lhs, const task_msgs__action__TaskControl_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!task_msgs__action__TaskControl_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
task_msgs__action__TaskControl_SendGoal_Request__copy(
  const task_msgs__action__TaskControl_SendGoal_Request * input,
  task_msgs__action__TaskControl_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!task_msgs__action__TaskControl_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

task_msgs__action__TaskControl_SendGoal_Request *
task_msgs__action__TaskControl_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_SendGoal_Request * msg = (task_msgs__action__TaskControl_SendGoal_Request *)allocator.allocate(sizeof(task_msgs__action__TaskControl_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_msgs__action__TaskControl_SendGoal_Request));
  bool success = task_msgs__action__TaskControl_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_msgs__action__TaskControl_SendGoal_Request__destroy(task_msgs__action__TaskControl_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_msgs__action__TaskControl_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_msgs__action__TaskControl_SendGoal_Request__Sequence__init(task_msgs__action__TaskControl_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_SendGoal_Request * data = NULL;

  if (size) {
    data = (task_msgs__action__TaskControl_SendGoal_Request *)allocator.zero_allocate(size, sizeof(task_msgs__action__TaskControl_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_msgs__action__TaskControl_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_msgs__action__TaskControl_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
task_msgs__action__TaskControl_SendGoal_Request__Sequence__fini(task_msgs__action__TaskControl_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      task_msgs__action__TaskControl_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

task_msgs__action__TaskControl_SendGoal_Request__Sequence *
task_msgs__action__TaskControl_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_SendGoal_Request__Sequence * array = (task_msgs__action__TaskControl_SendGoal_Request__Sequence *)allocator.allocate(sizeof(task_msgs__action__TaskControl_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_msgs__action__TaskControl_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_msgs__action__TaskControl_SendGoal_Request__Sequence__destroy(task_msgs__action__TaskControl_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_msgs__action__TaskControl_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_msgs__action__TaskControl_SendGoal_Request__Sequence__are_equal(const task_msgs__action__TaskControl_SendGoal_Request__Sequence * lhs, const task_msgs__action__TaskControl_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_msgs__action__TaskControl_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_msgs__action__TaskControl_SendGoal_Request__Sequence__copy(
  const task_msgs__action__TaskControl_SendGoal_Request__Sequence * input,
  task_msgs__action__TaskControl_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_msgs__action__TaskControl_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_msgs__action__TaskControl_SendGoal_Request * data =
      (task_msgs__action__TaskControl_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_msgs__action__TaskControl_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_msgs__action__TaskControl_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_msgs__action__TaskControl_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
task_msgs__action__TaskControl_SendGoal_Response__init(task_msgs__action__TaskControl_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    task_msgs__action__TaskControl_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
task_msgs__action__TaskControl_SendGoal_Response__fini(task_msgs__action__TaskControl_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
task_msgs__action__TaskControl_SendGoal_Response__are_equal(const task_msgs__action__TaskControl_SendGoal_Response * lhs, const task_msgs__action__TaskControl_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
task_msgs__action__TaskControl_SendGoal_Response__copy(
  const task_msgs__action__TaskControl_SendGoal_Response * input,
  task_msgs__action__TaskControl_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

task_msgs__action__TaskControl_SendGoal_Response *
task_msgs__action__TaskControl_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_SendGoal_Response * msg = (task_msgs__action__TaskControl_SendGoal_Response *)allocator.allocate(sizeof(task_msgs__action__TaskControl_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_msgs__action__TaskControl_SendGoal_Response));
  bool success = task_msgs__action__TaskControl_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_msgs__action__TaskControl_SendGoal_Response__destroy(task_msgs__action__TaskControl_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_msgs__action__TaskControl_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_msgs__action__TaskControl_SendGoal_Response__Sequence__init(task_msgs__action__TaskControl_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_SendGoal_Response * data = NULL;

  if (size) {
    data = (task_msgs__action__TaskControl_SendGoal_Response *)allocator.zero_allocate(size, sizeof(task_msgs__action__TaskControl_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_msgs__action__TaskControl_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_msgs__action__TaskControl_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
task_msgs__action__TaskControl_SendGoal_Response__Sequence__fini(task_msgs__action__TaskControl_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      task_msgs__action__TaskControl_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

task_msgs__action__TaskControl_SendGoal_Response__Sequence *
task_msgs__action__TaskControl_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_SendGoal_Response__Sequence * array = (task_msgs__action__TaskControl_SendGoal_Response__Sequence *)allocator.allocate(sizeof(task_msgs__action__TaskControl_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_msgs__action__TaskControl_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_msgs__action__TaskControl_SendGoal_Response__Sequence__destroy(task_msgs__action__TaskControl_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_msgs__action__TaskControl_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_msgs__action__TaskControl_SendGoal_Response__Sequence__are_equal(const task_msgs__action__TaskControl_SendGoal_Response__Sequence * lhs, const task_msgs__action__TaskControl_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_msgs__action__TaskControl_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_msgs__action__TaskControl_SendGoal_Response__Sequence__copy(
  const task_msgs__action__TaskControl_SendGoal_Response__Sequence * input,
  task_msgs__action__TaskControl_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_msgs__action__TaskControl_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_msgs__action__TaskControl_SendGoal_Response * data =
      (task_msgs__action__TaskControl_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_msgs__action__TaskControl_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_msgs__action__TaskControl_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_msgs__action__TaskControl_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
task_msgs__action__TaskControl_GetResult_Request__init(task_msgs__action__TaskControl_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    task_msgs__action__TaskControl_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
task_msgs__action__TaskControl_GetResult_Request__fini(task_msgs__action__TaskControl_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
task_msgs__action__TaskControl_GetResult_Request__are_equal(const task_msgs__action__TaskControl_GetResult_Request * lhs, const task_msgs__action__TaskControl_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
task_msgs__action__TaskControl_GetResult_Request__copy(
  const task_msgs__action__TaskControl_GetResult_Request * input,
  task_msgs__action__TaskControl_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

task_msgs__action__TaskControl_GetResult_Request *
task_msgs__action__TaskControl_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_GetResult_Request * msg = (task_msgs__action__TaskControl_GetResult_Request *)allocator.allocate(sizeof(task_msgs__action__TaskControl_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_msgs__action__TaskControl_GetResult_Request));
  bool success = task_msgs__action__TaskControl_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_msgs__action__TaskControl_GetResult_Request__destroy(task_msgs__action__TaskControl_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_msgs__action__TaskControl_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_msgs__action__TaskControl_GetResult_Request__Sequence__init(task_msgs__action__TaskControl_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_GetResult_Request * data = NULL;

  if (size) {
    data = (task_msgs__action__TaskControl_GetResult_Request *)allocator.zero_allocate(size, sizeof(task_msgs__action__TaskControl_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_msgs__action__TaskControl_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_msgs__action__TaskControl_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
task_msgs__action__TaskControl_GetResult_Request__Sequence__fini(task_msgs__action__TaskControl_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      task_msgs__action__TaskControl_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

task_msgs__action__TaskControl_GetResult_Request__Sequence *
task_msgs__action__TaskControl_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_GetResult_Request__Sequence * array = (task_msgs__action__TaskControl_GetResult_Request__Sequence *)allocator.allocate(sizeof(task_msgs__action__TaskControl_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_msgs__action__TaskControl_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_msgs__action__TaskControl_GetResult_Request__Sequence__destroy(task_msgs__action__TaskControl_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_msgs__action__TaskControl_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_msgs__action__TaskControl_GetResult_Request__Sequence__are_equal(const task_msgs__action__TaskControl_GetResult_Request__Sequence * lhs, const task_msgs__action__TaskControl_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_msgs__action__TaskControl_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_msgs__action__TaskControl_GetResult_Request__Sequence__copy(
  const task_msgs__action__TaskControl_GetResult_Request__Sequence * input,
  task_msgs__action__TaskControl_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_msgs__action__TaskControl_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_msgs__action__TaskControl_GetResult_Request * data =
      (task_msgs__action__TaskControl_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_msgs__action__TaskControl_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_msgs__action__TaskControl_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_msgs__action__TaskControl_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "task_msgs/action/detail/task_control__functions.h"

bool
task_msgs__action__TaskControl_GetResult_Response__init(task_msgs__action__TaskControl_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!task_msgs__action__TaskControl_Result__init(&msg->result)) {
    task_msgs__action__TaskControl_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
task_msgs__action__TaskControl_GetResult_Response__fini(task_msgs__action__TaskControl_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  task_msgs__action__TaskControl_Result__fini(&msg->result);
}

bool
task_msgs__action__TaskControl_GetResult_Response__are_equal(const task_msgs__action__TaskControl_GetResult_Response * lhs, const task_msgs__action__TaskControl_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!task_msgs__action__TaskControl_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
task_msgs__action__TaskControl_GetResult_Response__copy(
  const task_msgs__action__TaskControl_GetResult_Response * input,
  task_msgs__action__TaskControl_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!task_msgs__action__TaskControl_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

task_msgs__action__TaskControl_GetResult_Response *
task_msgs__action__TaskControl_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_GetResult_Response * msg = (task_msgs__action__TaskControl_GetResult_Response *)allocator.allocate(sizeof(task_msgs__action__TaskControl_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_msgs__action__TaskControl_GetResult_Response));
  bool success = task_msgs__action__TaskControl_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_msgs__action__TaskControl_GetResult_Response__destroy(task_msgs__action__TaskControl_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_msgs__action__TaskControl_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_msgs__action__TaskControl_GetResult_Response__Sequence__init(task_msgs__action__TaskControl_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_GetResult_Response * data = NULL;

  if (size) {
    data = (task_msgs__action__TaskControl_GetResult_Response *)allocator.zero_allocate(size, sizeof(task_msgs__action__TaskControl_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_msgs__action__TaskControl_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_msgs__action__TaskControl_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
task_msgs__action__TaskControl_GetResult_Response__Sequence__fini(task_msgs__action__TaskControl_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      task_msgs__action__TaskControl_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

task_msgs__action__TaskControl_GetResult_Response__Sequence *
task_msgs__action__TaskControl_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_GetResult_Response__Sequence * array = (task_msgs__action__TaskControl_GetResult_Response__Sequence *)allocator.allocate(sizeof(task_msgs__action__TaskControl_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_msgs__action__TaskControl_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_msgs__action__TaskControl_GetResult_Response__Sequence__destroy(task_msgs__action__TaskControl_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_msgs__action__TaskControl_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_msgs__action__TaskControl_GetResult_Response__Sequence__are_equal(const task_msgs__action__TaskControl_GetResult_Response__Sequence * lhs, const task_msgs__action__TaskControl_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_msgs__action__TaskControl_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_msgs__action__TaskControl_GetResult_Response__Sequence__copy(
  const task_msgs__action__TaskControl_GetResult_Response__Sequence * input,
  task_msgs__action__TaskControl_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_msgs__action__TaskControl_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_msgs__action__TaskControl_GetResult_Response * data =
      (task_msgs__action__TaskControl_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_msgs__action__TaskControl_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_msgs__action__TaskControl_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_msgs__action__TaskControl_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "task_msgs/action/detail/task_control__functions.h"

bool
task_msgs__action__TaskControl_FeedbackMessage__init(task_msgs__action__TaskControl_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    task_msgs__action__TaskControl_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!task_msgs__action__TaskControl_Feedback__init(&msg->feedback)) {
    task_msgs__action__TaskControl_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
task_msgs__action__TaskControl_FeedbackMessage__fini(task_msgs__action__TaskControl_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  task_msgs__action__TaskControl_Feedback__fini(&msg->feedback);
}

bool
task_msgs__action__TaskControl_FeedbackMessage__are_equal(const task_msgs__action__TaskControl_FeedbackMessage * lhs, const task_msgs__action__TaskControl_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!task_msgs__action__TaskControl_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
task_msgs__action__TaskControl_FeedbackMessage__copy(
  const task_msgs__action__TaskControl_FeedbackMessage * input,
  task_msgs__action__TaskControl_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!task_msgs__action__TaskControl_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

task_msgs__action__TaskControl_FeedbackMessage *
task_msgs__action__TaskControl_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_FeedbackMessage * msg = (task_msgs__action__TaskControl_FeedbackMessage *)allocator.allocate(sizeof(task_msgs__action__TaskControl_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task_msgs__action__TaskControl_FeedbackMessage));
  bool success = task_msgs__action__TaskControl_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task_msgs__action__TaskControl_FeedbackMessage__destroy(task_msgs__action__TaskControl_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task_msgs__action__TaskControl_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task_msgs__action__TaskControl_FeedbackMessage__Sequence__init(task_msgs__action__TaskControl_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_FeedbackMessage * data = NULL;

  if (size) {
    data = (task_msgs__action__TaskControl_FeedbackMessage *)allocator.zero_allocate(size, sizeof(task_msgs__action__TaskControl_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task_msgs__action__TaskControl_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task_msgs__action__TaskControl_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
task_msgs__action__TaskControl_FeedbackMessage__Sequence__fini(task_msgs__action__TaskControl_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      task_msgs__action__TaskControl_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

task_msgs__action__TaskControl_FeedbackMessage__Sequence *
task_msgs__action__TaskControl_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task_msgs__action__TaskControl_FeedbackMessage__Sequence * array = (task_msgs__action__TaskControl_FeedbackMessage__Sequence *)allocator.allocate(sizeof(task_msgs__action__TaskControl_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task_msgs__action__TaskControl_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task_msgs__action__TaskControl_FeedbackMessage__Sequence__destroy(task_msgs__action__TaskControl_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task_msgs__action__TaskControl_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task_msgs__action__TaskControl_FeedbackMessage__Sequence__are_equal(const task_msgs__action__TaskControl_FeedbackMessage__Sequence * lhs, const task_msgs__action__TaskControl_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task_msgs__action__TaskControl_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task_msgs__action__TaskControl_FeedbackMessage__Sequence__copy(
  const task_msgs__action__TaskControl_FeedbackMessage__Sequence * input,
  task_msgs__action__TaskControl_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task_msgs__action__TaskControl_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task_msgs__action__TaskControl_FeedbackMessage * data =
      (task_msgs__action__TaskControl_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task_msgs__action__TaskControl_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task_msgs__action__TaskControl_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task_msgs__action__TaskControl_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
