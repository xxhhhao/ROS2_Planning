// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from base_msgs:msg/Referline.idl
// generated code does not contain a copyright notice
#ifndef BASE_MSGS__MSG__DETAIL__REFERLINE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define BASE_MSGS__MSG__DETAIL__REFERLINE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "base_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_msgs/msg/detail/referline__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
bool cdr_serialize_base_msgs__msg__Referline(
  const base_msgs__msg__Referline * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
bool cdr_deserialize_base_msgs__msg__Referline(
  eprosima::fastcdr::Cdr &,
  base_msgs__msg__Referline * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
size_t get_serialized_size_base_msgs__msg__Referline(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
size_t max_serialized_size_base_msgs__msg__Referline(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
bool cdr_serialize_key_base_msgs__msg__Referline(
  const base_msgs__msg__Referline * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
size_t get_serialized_size_key_base_msgs__msg__Referline(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
size_t max_serialized_size_key_base_msgs__msg__Referline(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_msgs, msg, Referline)();

#ifdef __cplusplus
}
#endif

#endif  // BASE_MSGS__MSG__DETAIL__REFERLINE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
