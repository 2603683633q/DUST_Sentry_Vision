// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from global_interface:msg/ModeSet.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__MODE_SET__FUNCTIONS_H_
#define GLOBAL_INTERFACE__MSG__DETAIL__MODE_SET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "global_interface/msg/rosidl_generator_c__visibility_control.h"

#include "global_interface/msg/detail/mode_set__struct.h"

/// Initialize msg/ModeSet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * global_interface__msg__ModeSet
 * )) before or use
 * global_interface__msg__ModeSet__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
bool
global_interface__msg__ModeSet__init(global_interface__msg__ModeSet * msg);

/// Finalize msg/ModeSet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
void
global_interface__msg__ModeSet__fini(global_interface__msg__ModeSet * msg);

/// Create msg/ModeSet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * global_interface__msg__ModeSet__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
global_interface__msg__ModeSet *
global_interface__msg__ModeSet__create();

/// Destroy msg/ModeSet message.
/**
 * It calls
 * global_interface__msg__ModeSet__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
void
global_interface__msg__ModeSet__destroy(global_interface__msg__ModeSet * msg);

/// Check for msg/ModeSet message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
bool
global_interface__msg__ModeSet__are_equal(const global_interface__msg__ModeSet * lhs, const global_interface__msg__ModeSet * rhs);

/// Copy a msg/ModeSet message.
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
ROSIDL_GENERATOR_C_PUBLIC_global_interface
bool
global_interface__msg__ModeSet__copy(
  const global_interface__msg__ModeSet * input,
  global_interface__msg__ModeSet * output);

/// Initialize array of msg/ModeSet messages.
/**
 * It allocates the memory for the number of elements and calls
 * global_interface__msg__ModeSet__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
bool
global_interface__msg__ModeSet__Sequence__init(global_interface__msg__ModeSet__Sequence * array, size_t size);

/// Finalize array of msg/ModeSet messages.
/**
 * It calls
 * global_interface__msg__ModeSet__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
void
global_interface__msg__ModeSet__Sequence__fini(global_interface__msg__ModeSet__Sequence * array);

/// Create array of msg/ModeSet messages.
/**
 * It allocates the memory for the array and calls
 * global_interface__msg__ModeSet__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
global_interface__msg__ModeSet__Sequence *
global_interface__msg__ModeSet__Sequence__create(size_t size);

/// Destroy array of msg/ModeSet messages.
/**
 * It calls
 * global_interface__msg__ModeSet__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
void
global_interface__msg__ModeSet__Sequence__destroy(global_interface__msg__ModeSet__Sequence * array);

/// Check for msg/ModeSet message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
bool
global_interface__msg__ModeSet__Sequence__are_equal(const global_interface__msg__ModeSet__Sequence * lhs, const global_interface__msg__ModeSet__Sequence * rhs);

/// Copy an array of msg/ModeSet messages.
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
ROSIDL_GENERATOR_C_PUBLIC_global_interface
bool
global_interface__msg__ModeSet__Sequence__copy(
  const global_interface__msg__ModeSet__Sequence * input,
  global_interface__msg__ModeSet__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__MODE_SET__FUNCTIONS_H_
