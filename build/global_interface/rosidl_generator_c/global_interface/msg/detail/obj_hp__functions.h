// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from global_interface:msg/ObjHP.idl
// generated code does not contain a copyright notice

#ifndef GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__FUNCTIONS_H_
#define GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "global_interface/msg/rosidl_generator_c__visibility_control.h"

#include "global_interface/msg/detail/obj_hp__struct.h"

/// Initialize msg/ObjHP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * global_interface__msg__ObjHP
 * )) before or use
 * global_interface__msg__ObjHP__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
bool
global_interface__msg__ObjHP__init(global_interface__msg__ObjHP * msg);

/// Finalize msg/ObjHP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
void
global_interface__msg__ObjHP__fini(global_interface__msg__ObjHP * msg);

/// Create msg/ObjHP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * global_interface__msg__ObjHP__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
global_interface__msg__ObjHP *
global_interface__msg__ObjHP__create();

/// Destroy msg/ObjHP message.
/**
 * It calls
 * global_interface__msg__ObjHP__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
void
global_interface__msg__ObjHP__destroy(global_interface__msg__ObjHP * msg);

/// Check for msg/ObjHP message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
bool
global_interface__msg__ObjHP__are_equal(const global_interface__msg__ObjHP * lhs, const global_interface__msg__ObjHP * rhs);

/// Copy a msg/ObjHP message.
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
global_interface__msg__ObjHP__copy(
  const global_interface__msg__ObjHP * input,
  global_interface__msg__ObjHP * output);

/// Initialize array of msg/ObjHP messages.
/**
 * It allocates the memory for the number of elements and calls
 * global_interface__msg__ObjHP__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
bool
global_interface__msg__ObjHP__Sequence__init(global_interface__msg__ObjHP__Sequence * array, size_t size);

/// Finalize array of msg/ObjHP messages.
/**
 * It calls
 * global_interface__msg__ObjHP__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
void
global_interface__msg__ObjHP__Sequence__fini(global_interface__msg__ObjHP__Sequence * array);

/// Create array of msg/ObjHP messages.
/**
 * It allocates the memory for the array and calls
 * global_interface__msg__ObjHP__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
global_interface__msg__ObjHP__Sequence *
global_interface__msg__ObjHP__Sequence__create(size_t size);

/// Destroy array of msg/ObjHP messages.
/**
 * It calls
 * global_interface__msg__ObjHP__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
void
global_interface__msg__ObjHP__Sequence__destroy(global_interface__msg__ObjHP__Sequence * array);

/// Check for msg/ObjHP message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_global_interface
bool
global_interface__msg__ObjHP__Sequence__are_equal(const global_interface__msg__ObjHP__Sequence * lhs, const global_interface__msg__ObjHP__Sequence * rhs);

/// Copy an array of msg/ObjHP messages.
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
global_interface__msg__ObjHP__Sequence__copy(
  const global_interface__msg__ObjHP__Sequence * input,
  global_interface__msg__ObjHP__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GLOBAL_INTERFACE__MSG__DETAIL__OBJ_HP__FUNCTIONS_H_
