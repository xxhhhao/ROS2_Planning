// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from base_msgs:msg/LocalSpeedsPoint.idl
// generated code does not contain a copyright notice

#include "base_msgs/msg/detail/local_speeds_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_base_msgs
const rosidl_type_hash_t *
base_msgs__msg__LocalSpeedsPoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x24, 0x68, 0xa5, 0x1d, 0xc4, 0x52, 0x39,
      0x86, 0x62, 0x14, 0xa7, 0xb0, 0x60, 0x75, 0x47,
      0xea, 0x7b, 0x57, 0x8a, 0xd7, 0x04, 0x21, 0xa0,
      0x18, 0x36, 0xb1, 0xf9, 0xe3, 0x9c, 0x57, 0xf4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char base_msgs__msg__LocalSpeedsPoint__TYPE_NAME[] = "base_msgs/msg/LocalSpeedsPoint";

// Define type names, field names, and default values
static char base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__t[] = "t";
static char base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__s_2path[] = "s_2path";
static char base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__ds_dt_2path[] = "ds_dt_2path";
static char base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__dds_dt_2path[] = "dds_dt_2path";
static char base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__speed[] = "speed";
static char base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__acceleration[] = "acceleration";
static char base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__dacceleration[] = "dacceleration";

static rosidl_runtime_c__type_description__Field base_msgs__msg__LocalSpeedsPoint__FIELDS[] = {
  {
    {base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__t, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__s_2path, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__ds_dt_2path, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__dds_dt_2path, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__acceleration, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__LocalSpeedsPoint__FIELD_NAME__dacceleration, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_msgs__msg__LocalSpeedsPoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_msgs__msg__LocalSpeedsPoint__TYPE_NAME, 30, 30},
      {base_msgs__msg__LocalSpeedsPoint__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xe7\\x82\\xb9\n"
  "\n"
  "float64 t                       # t\n"
  "float64 s_2path                 # s_2path\n"
  "float64 ds_dt_2path             # ds_dt_2path\n"
  "float64 dds_dt_2path            # dds_dt_2path\n"
  "float64 speed                   # \\xe9\\x80\\x9f\\xe5\\xba\\xa6\n"
  "float64 acceleration            # \\xe5\\x8a\\xa0\\xe9\\x80\\x9f\\xe5\\xba\\xa6\n"
  "float64 dacceleration           # \\xe5\\x8a\\xa0\\xe5\\x8a\\xa0\\xe9\\x80\\x9f\\xe5\\xba\\xa6";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
base_msgs__msg__LocalSpeedsPoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_msgs__msg__LocalSpeedsPoint__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 291, 291},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_msgs__msg__LocalSpeedsPoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_msgs__msg__LocalSpeedsPoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
