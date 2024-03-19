// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rtabmap_msgs:srv/PublishMap.idl
// generated code does not contain a copyright notice
#include "rtabmap_msgs/srv/detail/publish_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rtabmap_msgs__srv__PublishMap_Request__init(rtabmap_msgs__srv__PublishMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // global_map
  // optimized
  // graph_only
  return true;
}

void
rtabmap_msgs__srv__PublishMap_Request__fini(rtabmap_msgs__srv__PublishMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // global_map
  // optimized
  // graph_only
}

bool
rtabmap_msgs__srv__PublishMap_Request__are_equal(const rtabmap_msgs__srv__PublishMap_Request * lhs, const rtabmap_msgs__srv__PublishMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // global_map
  if (lhs->global_map != rhs->global_map) {
    return false;
  }
  // optimized
  if (lhs->optimized != rhs->optimized) {
    return false;
  }
  // graph_only
  if (lhs->graph_only != rhs->graph_only) {
    return false;
  }
  return true;
}

bool
rtabmap_msgs__srv__PublishMap_Request__copy(
  const rtabmap_msgs__srv__PublishMap_Request * input,
  rtabmap_msgs__srv__PublishMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // global_map
  output->global_map = input->global_map;
  // optimized
  output->optimized = input->optimized;
  // graph_only
  output->graph_only = input->graph_only;
  return true;
}

rtabmap_msgs__srv__PublishMap_Request *
rtabmap_msgs__srv__PublishMap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__PublishMap_Request * msg = (rtabmap_msgs__srv__PublishMap_Request *)allocator.allocate(sizeof(rtabmap_msgs__srv__PublishMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__srv__PublishMap_Request));
  bool success = rtabmap_msgs__srv__PublishMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__srv__PublishMap_Request__destroy(rtabmap_msgs__srv__PublishMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__srv__PublishMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__srv__PublishMap_Request__Sequence__init(rtabmap_msgs__srv__PublishMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__PublishMap_Request * data = NULL;

  if (size) {
    data = (rtabmap_msgs__srv__PublishMap_Request *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__srv__PublishMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__srv__PublishMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__srv__PublishMap_Request__fini(&data[i - 1]);
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
rtabmap_msgs__srv__PublishMap_Request__Sequence__fini(rtabmap_msgs__srv__PublishMap_Request__Sequence * array)
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
      rtabmap_msgs__srv__PublishMap_Request__fini(&array->data[i]);
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

rtabmap_msgs__srv__PublishMap_Request__Sequence *
rtabmap_msgs__srv__PublishMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__PublishMap_Request__Sequence * array = (rtabmap_msgs__srv__PublishMap_Request__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__srv__PublishMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__srv__PublishMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__srv__PublishMap_Request__Sequence__destroy(rtabmap_msgs__srv__PublishMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__srv__PublishMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__srv__PublishMap_Request__Sequence__are_equal(const rtabmap_msgs__srv__PublishMap_Request__Sequence * lhs, const rtabmap_msgs__srv__PublishMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__srv__PublishMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__srv__PublishMap_Request__Sequence__copy(
  const rtabmap_msgs__srv__PublishMap_Request__Sequence * input,
  rtabmap_msgs__srv__PublishMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__srv__PublishMap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__srv__PublishMap_Request * data =
      (rtabmap_msgs__srv__PublishMap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__srv__PublishMap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__srv__PublishMap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__srv__PublishMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rtabmap_msgs__srv__PublishMap_Response__init(rtabmap_msgs__srv__PublishMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rtabmap_msgs__srv__PublishMap_Response__fini(rtabmap_msgs__srv__PublishMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rtabmap_msgs__srv__PublishMap_Response__are_equal(const rtabmap_msgs__srv__PublishMap_Response * lhs, const rtabmap_msgs__srv__PublishMap_Response * rhs)
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
rtabmap_msgs__srv__PublishMap_Response__copy(
  const rtabmap_msgs__srv__PublishMap_Response * input,
  rtabmap_msgs__srv__PublishMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rtabmap_msgs__srv__PublishMap_Response *
rtabmap_msgs__srv__PublishMap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__PublishMap_Response * msg = (rtabmap_msgs__srv__PublishMap_Response *)allocator.allocate(sizeof(rtabmap_msgs__srv__PublishMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rtabmap_msgs__srv__PublishMap_Response));
  bool success = rtabmap_msgs__srv__PublishMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rtabmap_msgs__srv__PublishMap_Response__destroy(rtabmap_msgs__srv__PublishMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rtabmap_msgs__srv__PublishMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rtabmap_msgs__srv__PublishMap_Response__Sequence__init(rtabmap_msgs__srv__PublishMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__PublishMap_Response * data = NULL;

  if (size) {
    data = (rtabmap_msgs__srv__PublishMap_Response *)allocator.zero_allocate(size, sizeof(rtabmap_msgs__srv__PublishMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rtabmap_msgs__srv__PublishMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rtabmap_msgs__srv__PublishMap_Response__fini(&data[i - 1]);
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
rtabmap_msgs__srv__PublishMap_Response__Sequence__fini(rtabmap_msgs__srv__PublishMap_Response__Sequence * array)
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
      rtabmap_msgs__srv__PublishMap_Response__fini(&array->data[i]);
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

rtabmap_msgs__srv__PublishMap_Response__Sequence *
rtabmap_msgs__srv__PublishMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rtabmap_msgs__srv__PublishMap_Response__Sequence * array = (rtabmap_msgs__srv__PublishMap_Response__Sequence *)allocator.allocate(sizeof(rtabmap_msgs__srv__PublishMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rtabmap_msgs__srv__PublishMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rtabmap_msgs__srv__PublishMap_Response__Sequence__destroy(rtabmap_msgs__srv__PublishMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rtabmap_msgs__srv__PublishMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rtabmap_msgs__srv__PublishMap_Response__Sequence__are_equal(const rtabmap_msgs__srv__PublishMap_Response__Sequence * lhs, const rtabmap_msgs__srv__PublishMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rtabmap_msgs__srv__PublishMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rtabmap_msgs__srv__PublishMap_Response__Sequence__copy(
  const rtabmap_msgs__srv__PublishMap_Response__Sequence * input,
  rtabmap_msgs__srv__PublishMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rtabmap_msgs__srv__PublishMap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rtabmap_msgs__srv__PublishMap_Response * data =
      (rtabmap_msgs__srv__PublishMap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rtabmap_msgs__srv__PublishMap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rtabmap_msgs__srv__PublishMap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rtabmap_msgs__srv__PublishMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
