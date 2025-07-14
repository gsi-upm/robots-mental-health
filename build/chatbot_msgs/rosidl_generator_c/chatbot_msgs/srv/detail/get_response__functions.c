// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chatbot_msgs:srv/GetResponse.idl
// generated code does not contain a copyright notice
#include "chatbot_msgs/srv/detail/get_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `user_id`
// Member `input`
// Member `model`
#include "rosidl_runtime_c/string_functions.h"

bool
chatbot_msgs__srv__GetResponse_Request__init(chatbot_msgs__srv__GetResponse_Request * msg)
{
  if (!msg) {
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__init(&msg->user_id)) {
    chatbot_msgs__srv__GetResponse_Request__fini(msg);
    return false;
  }
  // input
  if (!rosidl_runtime_c__String__init(&msg->input)) {
    chatbot_msgs__srv__GetResponse_Request__fini(msg);
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    chatbot_msgs__srv__GetResponse_Request__fini(msg);
    return false;
  }
  return true;
}

void
chatbot_msgs__srv__GetResponse_Request__fini(chatbot_msgs__srv__GetResponse_Request * msg)
{
  if (!msg) {
    return;
  }
  // user_id
  rosidl_runtime_c__String__fini(&msg->user_id);
  // input
  rosidl_runtime_c__String__fini(&msg->input);
  // model
  rosidl_runtime_c__String__fini(&msg->model);
}

bool
chatbot_msgs__srv__GetResponse_Request__are_equal(const chatbot_msgs__srv__GetResponse_Request * lhs, const chatbot_msgs__srv__GetResponse_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->user_id), &(rhs->user_id)))
  {
    return false;
  }
  // input
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  return true;
}

bool
chatbot_msgs__srv__GetResponse_Request__copy(
  const chatbot_msgs__srv__GetResponse_Request * input,
  chatbot_msgs__srv__GetResponse_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // user_id
  if (!rosidl_runtime_c__String__copy(
      &(input->user_id), &(output->user_id)))
  {
    return false;
  }
  // input
  if (!rosidl_runtime_c__String__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  return true;
}

chatbot_msgs__srv__GetResponse_Request *
chatbot_msgs__srv__GetResponse_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__GetResponse_Request * msg = (chatbot_msgs__srv__GetResponse_Request *)allocator.allocate(sizeof(chatbot_msgs__srv__GetResponse_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chatbot_msgs__srv__GetResponse_Request));
  bool success = chatbot_msgs__srv__GetResponse_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chatbot_msgs__srv__GetResponse_Request__destroy(chatbot_msgs__srv__GetResponse_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chatbot_msgs__srv__GetResponse_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chatbot_msgs__srv__GetResponse_Request__Sequence__init(chatbot_msgs__srv__GetResponse_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__GetResponse_Request * data = NULL;

  if (size) {
    data = (chatbot_msgs__srv__GetResponse_Request *)allocator.zero_allocate(size, sizeof(chatbot_msgs__srv__GetResponse_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chatbot_msgs__srv__GetResponse_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chatbot_msgs__srv__GetResponse_Request__fini(&data[i - 1]);
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
chatbot_msgs__srv__GetResponse_Request__Sequence__fini(chatbot_msgs__srv__GetResponse_Request__Sequence * array)
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
      chatbot_msgs__srv__GetResponse_Request__fini(&array->data[i]);
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

chatbot_msgs__srv__GetResponse_Request__Sequence *
chatbot_msgs__srv__GetResponse_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__GetResponse_Request__Sequence * array = (chatbot_msgs__srv__GetResponse_Request__Sequence *)allocator.allocate(sizeof(chatbot_msgs__srv__GetResponse_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chatbot_msgs__srv__GetResponse_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chatbot_msgs__srv__GetResponse_Request__Sequence__destroy(chatbot_msgs__srv__GetResponse_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chatbot_msgs__srv__GetResponse_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chatbot_msgs__srv__GetResponse_Request__Sequence__are_equal(const chatbot_msgs__srv__GetResponse_Request__Sequence * lhs, const chatbot_msgs__srv__GetResponse_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chatbot_msgs__srv__GetResponse_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chatbot_msgs__srv__GetResponse_Request__Sequence__copy(
  const chatbot_msgs__srv__GetResponse_Request__Sequence * input,
  chatbot_msgs__srv__GetResponse_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chatbot_msgs__srv__GetResponse_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chatbot_msgs__srv__GetResponse_Request * data =
      (chatbot_msgs__srv__GetResponse_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chatbot_msgs__srv__GetResponse_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chatbot_msgs__srv__GetResponse_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chatbot_msgs__srv__GetResponse_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `output`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
chatbot_msgs__srv__GetResponse_Response__init(chatbot_msgs__srv__GetResponse_Response * msg)
{
  if (!msg) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__init(&msg->output)) {
    chatbot_msgs__srv__GetResponse_Response__fini(msg);
    return false;
  }
  return true;
}

void
chatbot_msgs__srv__GetResponse_Response__fini(chatbot_msgs__srv__GetResponse_Response * msg)
{
  if (!msg) {
    return;
  }
  // output
  rosidl_runtime_c__String__fini(&msg->output);
}

bool
chatbot_msgs__srv__GetResponse_Response__are_equal(const chatbot_msgs__srv__GetResponse_Response * lhs, const chatbot_msgs__srv__GetResponse_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->output), &(rhs->output)))
  {
    return false;
  }
  return true;
}

bool
chatbot_msgs__srv__GetResponse_Response__copy(
  const chatbot_msgs__srv__GetResponse_Response * input,
  chatbot_msgs__srv__GetResponse_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__copy(
      &(input->output), &(output->output)))
  {
    return false;
  }
  return true;
}

chatbot_msgs__srv__GetResponse_Response *
chatbot_msgs__srv__GetResponse_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__GetResponse_Response * msg = (chatbot_msgs__srv__GetResponse_Response *)allocator.allocate(sizeof(chatbot_msgs__srv__GetResponse_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chatbot_msgs__srv__GetResponse_Response));
  bool success = chatbot_msgs__srv__GetResponse_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chatbot_msgs__srv__GetResponse_Response__destroy(chatbot_msgs__srv__GetResponse_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chatbot_msgs__srv__GetResponse_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chatbot_msgs__srv__GetResponse_Response__Sequence__init(chatbot_msgs__srv__GetResponse_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__GetResponse_Response * data = NULL;

  if (size) {
    data = (chatbot_msgs__srv__GetResponse_Response *)allocator.zero_allocate(size, sizeof(chatbot_msgs__srv__GetResponse_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chatbot_msgs__srv__GetResponse_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chatbot_msgs__srv__GetResponse_Response__fini(&data[i - 1]);
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
chatbot_msgs__srv__GetResponse_Response__Sequence__fini(chatbot_msgs__srv__GetResponse_Response__Sequence * array)
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
      chatbot_msgs__srv__GetResponse_Response__fini(&array->data[i]);
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

chatbot_msgs__srv__GetResponse_Response__Sequence *
chatbot_msgs__srv__GetResponse_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__GetResponse_Response__Sequence * array = (chatbot_msgs__srv__GetResponse_Response__Sequence *)allocator.allocate(sizeof(chatbot_msgs__srv__GetResponse_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chatbot_msgs__srv__GetResponse_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chatbot_msgs__srv__GetResponse_Response__Sequence__destroy(chatbot_msgs__srv__GetResponse_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chatbot_msgs__srv__GetResponse_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chatbot_msgs__srv__GetResponse_Response__Sequence__are_equal(const chatbot_msgs__srv__GetResponse_Response__Sequence * lhs, const chatbot_msgs__srv__GetResponse_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chatbot_msgs__srv__GetResponse_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chatbot_msgs__srv__GetResponse_Response__Sequence__copy(
  const chatbot_msgs__srv__GetResponse_Response__Sequence * input,
  chatbot_msgs__srv__GetResponse_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chatbot_msgs__srv__GetResponse_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chatbot_msgs__srv__GetResponse_Response * data =
      (chatbot_msgs__srv__GetResponse_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chatbot_msgs__srv__GetResponse_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chatbot_msgs__srv__GetResponse_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chatbot_msgs__srv__GetResponse_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
