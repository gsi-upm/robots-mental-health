// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chatbot_msgs:srv/ResetModel.idl
// generated code does not contain a copyright notice
#include "chatbot_msgs/srv/detail/reset_model__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
chatbot_msgs__srv__ResetModel_Request__init(chatbot_msgs__srv__ResetModel_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
chatbot_msgs__srv__ResetModel_Request__fini(chatbot_msgs__srv__ResetModel_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
chatbot_msgs__srv__ResetModel_Request__are_equal(const chatbot_msgs__srv__ResetModel_Request * lhs, const chatbot_msgs__srv__ResetModel_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
chatbot_msgs__srv__ResetModel_Request__copy(
  const chatbot_msgs__srv__ResetModel_Request * input,
  chatbot_msgs__srv__ResetModel_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

chatbot_msgs__srv__ResetModel_Request *
chatbot_msgs__srv__ResetModel_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__ResetModel_Request * msg = (chatbot_msgs__srv__ResetModel_Request *)allocator.allocate(sizeof(chatbot_msgs__srv__ResetModel_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chatbot_msgs__srv__ResetModel_Request));
  bool success = chatbot_msgs__srv__ResetModel_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chatbot_msgs__srv__ResetModel_Request__destroy(chatbot_msgs__srv__ResetModel_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chatbot_msgs__srv__ResetModel_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chatbot_msgs__srv__ResetModel_Request__Sequence__init(chatbot_msgs__srv__ResetModel_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__ResetModel_Request * data = NULL;

  if (size) {
    data = (chatbot_msgs__srv__ResetModel_Request *)allocator.zero_allocate(size, sizeof(chatbot_msgs__srv__ResetModel_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chatbot_msgs__srv__ResetModel_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chatbot_msgs__srv__ResetModel_Request__fini(&data[i - 1]);
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
chatbot_msgs__srv__ResetModel_Request__Sequence__fini(chatbot_msgs__srv__ResetModel_Request__Sequence * array)
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
      chatbot_msgs__srv__ResetModel_Request__fini(&array->data[i]);
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

chatbot_msgs__srv__ResetModel_Request__Sequence *
chatbot_msgs__srv__ResetModel_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__ResetModel_Request__Sequence * array = (chatbot_msgs__srv__ResetModel_Request__Sequence *)allocator.allocate(sizeof(chatbot_msgs__srv__ResetModel_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chatbot_msgs__srv__ResetModel_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chatbot_msgs__srv__ResetModel_Request__Sequence__destroy(chatbot_msgs__srv__ResetModel_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chatbot_msgs__srv__ResetModel_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chatbot_msgs__srv__ResetModel_Request__Sequence__are_equal(const chatbot_msgs__srv__ResetModel_Request__Sequence * lhs, const chatbot_msgs__srv__ResetModel_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chatbot_msgs__srv__ResetModel_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chatbot_msgs__srv__ResetModel_Request__Sequence__copy(
  const chatbot_msgs__srv__ResetModel_Request__Sequence * input,
  chatbot_msgs__srv__ResetModel_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chatbot_msgs__srv__ResetModel_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chatbot_msgs__srv__ResetModel_Request * data =
      (chatbot_msgs__srv__ResetModel_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chatbot_msgs__srv__ResetModel_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chatbot_msgs__srv__ResetModel_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chatbot_msgs__srv__ResetModel_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
chatbot_msgs__srv__ResetModel_Response__init(chatbot_msgs__srv__ResetModel_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
chatbot_msgs__srv__ResetModel_Response__fini(chatbot_msgs__srv__ResetModel_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
chatbot_msgs__srv__ResetModel_Response__are_equal(const chatbot_msgs__srv__ResetModel_Response * lhs, const chatbot_msgs__srv__ResetModel_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
chatbot_msgs__srv__ResetModel_Response__copy(
  const chatbot_msgs__srv__ResetModel_Response * input,
  chatbot_msgs__srv__ResetModel_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

chatbot_msgs__srv__ResetModel_Response *
chatbot_msgs__srv__ResetModel_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__ResetModel_Response * msg = (chatbot_msgs__srv__ResetModel_Response *)allocator.allocate(sizeof(chatbot_msgs__srv__ResetModel_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chatbot_msgs__srv__ResetModel_Response));
  bool success = chatbot_msgs__srv__ResetModel_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chatbot_msgs__srv__ResetModel_Response__destroy(chatbot_msgs__srv__ResetModel_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chatbot_msgs__srv__ResetModel_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chatbot_msgs__srv__ResetModel_Response__Sequence__init(chatbot_msgs__srv__ResetModel_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__ResetModel_Response * data = NULL;

  if (size) {
    data = (chatbot_msgs__srv__ResetModel_Response *)allocator.zero_allocate(size, sizeof(chatbot_msgs__srv__ResetModel_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chatbot_msgs__srv__ResetModel_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chatbot_msgs__srv__ResetModel_Response__fini(&data[i - 1]);
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
chatbot_msgs__srv__ResetModel_Response__Sequence__fini(chatbot_msgs__srv__ResetModel_Response__Sequence * array)
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
      chatbot_msgs__srv__ResetModel_Response__fini(&array->data[i]);
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

chatbot_msgs__srv__ResetModel_Response__Sequence *
chatbot_msgs__srv__ResetModel_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chatbot_msgs__srv__ResetModel_Response__Sequence * array = (chatbot_msgs__srv__ResetModel_Response__Sequence *)allocator.allocate(sizeof(chatbot_msgs__srv__ResetModel_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chatbot_msgs__srv__ResetModel_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chatbot_msgs__srv__ResetModel_Response__Sequence__destroy(chatbot_msgs__srv__ResetModel_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chatbot_msgs__srv__ResetModel_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chatbot_msgs__srv__ResetModel_Response__Sequence__are_equal(const chatbot_msgs__srv__ResetModel_Response__Sequence * lhs, const chatbot_msgs__srv__ResetModel_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chatbot_msgs__srv__ResetModel_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chatbot_msgs__srv__ResetModel_Response__Sequence__copy(
  const chatbot_msgs__srv__ResetModel_Response__Sequence * input,
  chatbot_msgs__srv__ResetModel_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chatbot_msgs__srv__ResetModel_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chatbot_msgs__srv__ResetModel_Response * data =
      (chatbot_msgs__srv__ResetModel_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chatbot_msgs__srv__ResetModel_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chatbot_msgs__srv__ResetModel_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chatbot_msgs__srv__ResetModel_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
