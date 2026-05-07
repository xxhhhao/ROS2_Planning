// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_msgs:msg/PNCMap.idl
// generated code does not contain a copyright notice
#include "base_msgs/msg/detail/pnc_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_msgs/msg/detail/pnc_map__struct.h"
#include "base_msgs/msg/detail/pnc_map__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header
#include "visualization_msgs/msg/detail/marker__functions.h"  // left_boundary, midline, right_boundary

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
bool cdr_serialize_visualization_msgs__msg__Marker(
  const visualization_msgs__msg__Marker * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
bool cdr_deserialize_visualization_msgs__msg__Marker(
  eprosima::fastcdr::Cdr & cdr,
  visualization_msgs__msg__Marker * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
size_t get_serialized_size_visualization_msgs__msg__Marker(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
size_t max_serialized_size_visualization_msgs__msg__Marker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
bool cdr_serialize_key_visualization_msgs__msg__Marker(
  const visualization_msgs__msg__Marker * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
size_t get_serialized_size_key_visualization_msgs__msg__Marker(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
size_t max_serialized_size_key_visualization_msgs__msg__Marker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, visualization_msgs, msg, Marker)();


using _PNCMap__ros_msg_type = base_msgs__msg__PNCMap;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
bool cdr_serialize_base_msgs__msg__PNCMap(
  const base_msgs__msg__PNCMap * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: road_length
  {
    cdr << ros_message->road_length;
  }

  // Field name: road_half_width
  {
    cdr << ros_message->road_half_width;
  }

  // Field name: left_boundary
  {
    cdr_serialize_visualization_msgs__msg__Marker(
      &ros_message->left_boundary, cdr);
  }

  // Field name: right_boundary
  {
    cdr_serialize_visualization_msgs__msg__Marker(
      &ros_message->right_boundary, cdr);
  }

  // Field name: midline
  {
    cdr_serialize_visualization_msgs__msg__Marker(
      &ros_message->midline, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
bool cdr_deserialize_base_msgs__msg__PNCMap(
  eprosima::fastcdr::Cdr & cdr,
  base_msgs__msg__PNCMap * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: road_length
  {
    cdr >> ros_message->road_length;
  }

  // Field name: road_half_width
  {
    cdr >> ros_message->road_half_width;
  }

  // Field name: left_boundary
  {
    cdr_deserialize_visualization_msgs__msg__Marker(cdr, &ros_message->left_boundary);
  }

  // Field name: right_boundary
  {
    cdr_deserialize_visualization_msgs__msg__Marker(cdr, &ros_message->right_boundary);
  }

  // Field name: midline
  {
    cdr_deserialize_visualization_msgs__msg__Marker(cdr, &ros_message->midline);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
size_t get_serialized_size_base_msgs__msg__PNCMap(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PNCMap__ros_msg_type * ros_message = static_cast<const _PNCMap__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: road_length
  {
    size_t item_size = sizeof(ros_message->road_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: road_half_width
  {
    size_t item_size = sizeof(ros_message->road_half_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_boundary
  current_alignment += get_serialized_size_visualization_msgs__msg__Marker(
    &(ros_message->left_boundary), current_alignment);

  // Field name: right_boundary
  current_alignment += get_serialized_size_visualization_msgs__msg__Marker(
    &(ros_message->right_boundary), current_alignment);

  // Field name: midline
  current_alignment += get_serialized_size_visualization_msgs__msg__Marker(
    &(ros_message->midline), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
size_t max_serialized_size_base_msgs__msg__PNCMap(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: road_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: road_half_width
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: left_boundary
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_visualization_msgs__msg__Marker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_boundary
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_visualization_msgs__msg__Marker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: midline
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_visualization_msgs__msg__Marker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = base_msgs__msg__PNCMap;
    is_plain =
      (
      offsetof(DataType, midline) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
bool cdr_serialize_key_base_msgs__msg__PNCMap(
  const base_msgs__msg__PNCMap * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: road_length
  {
    cdr << ros_message->road_length;
  }

  // Field name: road_half_width
  {
    cdr << ros_message->road_half_width;
  }

  // Field name: left_boundary
  {
    cdr_serialize_key_visualization_msgs__msg__Marker(
      &ros_message->left_boundary, cdr);
  }

  // Field name: right_boundary
  {
    cdr_serialize_key_visualization_msgs__msg__Marker(
      &ros_message->right_boundary, cdr);
  }

  // Field name: midline
  {
    cdr_serialize_key_visualization_msgs__msg__Marker(
      &ros_message->midline, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
size_t get_serialized_size_key_base_msgs__msg__PNCMap(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PNCMap__ros_msg_type * ros_message = static_cast<const _PNCMap__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: road_length
  {
    size_t item_size = sizeof(ros_message->road_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: road_half_width
  {
    size_t item_size = sizeof(ros_message->road_half_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left_boundary
  current_alignment += get_serialized_size_key_visualization_msgs__msg__Marker(
    &(ros_message->left_boundary), current_alignment);

  // Field name: right_boundary
  current_alignment += get_serialized_size_key_visualization_msgs__msg__Marker(
    &(ros_message->right_boundary), current_alignment);

  // Field name: midline
  current_alignment += get_serialized_size_key_visualization_msgs__msg__Marker(
    &(ros_message->midline), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_msgs
size_t max_serialized_size_key_base_msgs__msg__PNCMap(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: road_length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: road_half_width
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: left_boundary
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_visualization_msgs__msg__Marker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: right_boundary
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_visualization_msgs__msg__Marker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: midline
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_visualization_msgs__msg__Marker(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = base_msgs__msg__PNCMap;
    is_plain =
      (
      offsetof(DataType, midline) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PNCMap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const base_msgs__msg__PNCMap * ros_message = static_cast<const base_msgs__msg__PNCMap *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_base_msgs__msg__PNCMap(ros_message, cdr);
}

static bool _PNCMap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  base_msgs__msg__PNCMap * ros_message = static_cast<base_msgs__msg__PNCMap *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_base_msgs__msg__PNCMap(cdr, ros_message);
}

static uint32_t _PNCMap__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_msgs__msg__PNCMap(
      untyped_ros_message, 0));
}

static size_t _PNCMap__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_base_msgs__msg__PNCMap(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PNCMap = {
  "base_msgs::msg",
  "PNCMap",
  _PNCMap__cdr_serialize,
  _PNCMap__cdr_deserialize,
  _PNCMap__get_serialized_size,
  _PNCMap__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PNCMap__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PNCMap,
  get_message_typesupport_handle_function,
  &base_msgs__msg__PNCMap__get_type_hash,
  &base_msgs__msg__PNCMap__get_type_description,
  &base_msgs__msg__PNCMap__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_msgs, msg, PNCMap)() {
  return &_PNCMap__type_support;
}

#if defined(__cplusplus)
}
#endif
