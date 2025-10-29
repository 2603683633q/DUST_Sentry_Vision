// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from global_interface:msg/Autoaim.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "global_interface/msg/detail/autoaim__struct.h"
#include "global_interface/msg/detail/autoaim__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "global_interface/msg/detail/point2f__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool global_interface__msg__point2f__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * global_interface__msg__point2f__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__quaternion__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__quaternion__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool global_interface__msg__autoaim__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("global_interface.msg._autoaim.Autoaim", full_classname_dest, 37) == 0);
  }
  global_interface__msg__Autoaim * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // key
    PyObject * field = PyObject_GetAttrString(_pymsg, "key");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->key, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // period
    PyObject * field = PyObject_GetAttrString(_pymsg, "period");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->period = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bullet_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "bullet_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bullet_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // point2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "point2d");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'point2d'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    global_interface__msg__Point2f * dest = ros_message->point2d;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!global_interface__msg__point2f__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // clockwise
    PyObject * field = PyObject_GetAttrString(_pymsg, "clockwise");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->clockwise = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_spinning
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_spinning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_spinning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_controlled
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_controlled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_controlled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_target_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_target_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_target_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // target_switched
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_switched");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->target_switched = (Py_True == field);
    Py_DECREF(field);
  }
  {  // spinning_switched
    PyObject * field = PyObject_GetAttrString(_pymsg, "spinning_switched");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->spinning_switched = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_still_spinning
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_still_spinning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_still_spinning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // quat_imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "quat_imu");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__quaternion__convert_from_py(field, &ros_message->quat_imu)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // aiming_point_world
    PyObject * field = PyObject_GetAttrString(_pymsg, "aiming_point_world");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->aiming_point_world)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // aiming_point_cam
    PyObject * field = PyObject_GetAttrString(_pymsg, "aiming_point_cam");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->aiming_point_cam)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * global_interface__msg__autoaim__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Autoaim */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("global_interface.msg._autoaim");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Autoaim");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  global_interface__msg__Autoaim * ros_message = (global_interface__msg__Autoaim *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->key.data,
      strlen(ros_message->key.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "key", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->period);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bullet_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bullet_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bullet_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // point2d
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    global_interface__msg__Point2f * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->point2d[i]);
      PyObject * pyitem = global_interface__msg__point2f__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "point2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clockwise
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->clockwise ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clockwise", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_spinning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_spinning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_spinning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_controlled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_controlled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_controlled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_target_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_target_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_target_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_switched
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->target_switched ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_switched", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spinning_switched
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->spinning_switched ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spinning_switched", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_still_spinning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_still_spinning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_still_spinning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quat_imu
    PyObject * field = NULL;
    field = geometry_msgs__msg__quaternion__convert_to_py(&ros_message->quat_imu);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "quat_imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aiming_point_world
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->aiming_point_world);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "aiming_point_world", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aiming_point_cam
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->aiming_point_cam);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "aiming_point_cam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
