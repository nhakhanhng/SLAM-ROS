// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tutourial_intefaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TUTOURIAL_INTEFACES__MSG__DETAIL__NUM__FUNCTIONS_H_
#define TUTOURIAL_INTEFACES__MSG__DETAIL__NUM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tutourial_intefaces/msg/rosidl_generator_c__visibility_control.h"

#include "tutourial_intefaces/msg/detail/num__struct.h"

/// Initialize msg/Num message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutourial_intefaces__msg__Num
 * )) before or use
 * tutourial_intefaces__msg__Num__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
bool
tutourial_intefaces__msg__Num__init(tutourial_intefaces__msg__Num * msg);

/// Finalize msg/Num message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
void
tutourial_intefaces__msg__Num__fini(tutourial_intefaces__msg__Num * msg);

/// Create msg/Num message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutourial_intefaces__msg__Num__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
tutourial_intefaces__msg__Num *
tutourial_intefaces__msg__Num__create();

/// Destroy msg/Num message.
/**
 * It calls
 * tutourial_intefaces__msg__Num__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
void
tutourial_intefaces__msg__Num__destroy(tutourial_intefaces__msg__Num * msg);

/// Check for msg/Num message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
bool
tutourial_intefaces__msg__Num__are_equal(const tutourial_intefaces__msg__Num * lhs, const tutourial_intefaces__msg__Num * rhs);

/// Copy a msg/Num message.
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
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
bool
tutourial_intefaces__msg__Num__copy(
  const tutourial_intefaces__msg__Num * input,
  tutourial_intefaces__msg__Num * output);

/// Initialize array of msg/Num messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutourial_intefaces__msg__Num__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
bool
tutourial_intefaces__msg__Num__Sequence__init(tutourial_intefaces__msg__Num__Sequence * array, size_t size);

/// Finalize array of msg/Num messages.
/**
 * It calls
 * tutourial_intefaces__msg__Num__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
void
tutourial_intefaces__msg__Num__Sequence__fini(tutourial_intefaces__msg__Num__Sequence * array);

/// Create array of msg/Num messages.
/**
 * It allocates the memory for the array and calls
 * tutourial_intefaces__msg__Num__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
tutourial_intefaces__msg__Num__Sequence *
tutourial_intefaces__msg__Num__Sequence__create(size_t size);

/// Destroy array of msg/Num messages.
/**
 * It calls
 * tutourial_intefaces__msg__Num__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
void
tutourial_intefaces__msg__Num__Sequence__destroy(tutourial_intefaces__msg__Num__Sequence * array);

/// Check for msg/Num message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
bool
tutourial_intefaces__msg__Num__Sequence__are_equal(const tutourial_intefaces__msg__Num__Sequence * lhs, const tutourial_intefaces__msg__Num__Sequence * rhs);

/// Copy an array of msg/Num messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tutourial_intefaces
bool
tutourial_intefaces__msg__Num__Sequence__copy(
  const tutourial_intefaces__msg__Num__Sequence * input,
  tutourial_intefaces__msg__Num__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TUTOURIAL_INTEFACES__MSG__DETAIL__NUM__FUNCTIONS_H_
