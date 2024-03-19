// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutourial_intefaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TUTOURIAL_INTEFACES__MSG__DETAIL__NUM__STRUCT_H_
#define TUTOURIAL_INTEFACES__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package tutourial_intefaces.
typedef struct tutourial_intefaces__msg__Num
{
  int64_t num;
} tutourial_intefaces__msg__Num;

// Struct for a sequence of tutourial_intefaces__msg__Num.
typedef struct tutourial_intefaces__msg__Num__Sequence
{
  tutourial_intefaces__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutourial_intefaces__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTOURIAL_INTEFACES__MSG__DETAIL__NUM__STRUCT_H_
