// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from base_msgs:msg/ObsInfo.idl
// generated code does not contain a copyright notice

#include "base_msgs/msg/detail/obs_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_base_msgs
const rosidl_type_hash_t *
base_msgs__msg__ObsInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0xfb, 0x3b, 0x5a, 0x6e, 0x4e, 0xe0, 0x32,
      0x04, 0x5d, 0xe9, 0xdc, 0xdf, 0x51, 0xe0, 0x18,
      0x24, 0xd0, 0x43, 0xc2, 0x60, 0x07, 0x04, 0xf0,
      0x72, 0x9b, 0x78, 0xe5, 0x29, 0xde, 0x4f, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char base_msgs__msg__ObsInfo__TYPE_NAME[] = "base_msgs/msg/ObsInfo";

// Define type names, field names, and default values
static char base_msgs__msg__ObsInfo__FIELD_NAME__obs_length[] = "obs_length";
static char base_msgs__msg__ObsInfo__FIELD_NAME__obs_width[] = "obs_width";
static char base_msgs__msg__ObsInfo__FIELD_NAME__l[] = "l";
static char base_msgs__msg__ObsInfo__FIELD_NAME__s[] = "s";
static char base_msgs__msg__ObsInfo__FIELD_NAME__s_2path[] = "s_2path";
static char base_msgs__msg__ObsInfo__FIELD_NAME__ds_dt_2path[] = "ds_dt_2path";
static char base_msgs__msg__ObsInfo__FIELD_NAME__t_in[] = "t_in";
static char base_msgs__msg__ObsInfo__FIELD_NAME__t_out[] = "t_out";

static rosidl_runtime_c__type_description__Field base_msgs__msg__ObsInfo__FIELDS[] = {
  {
    {base_msgs__msg__ObsInfo__FIELD_NAME__obs_length, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__ObsInfo__FIELD_NAME__obs_width, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__ObsInfo__FIELD_NAME__l, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__ObsInfo__FIELD_NAME__s, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__ObsInfo__FIELD_NAME__s_2path, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__ObsInfo__FIELD_NAME__ds_dt_2path, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__ObsInfo__FIELD_NAME__t_in, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__ObsInfo__FIELD_NAME__t_out, 5, 5},
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
base_msgs__msg__ObsInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_msgs__msg__ObsInfo__TYPE_NAME, 21, 21},
      {base_msgs__msg__ObsInfo__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe9\\x9a\\x9c\\xe7\\xa2\\x8d\\xe7\\x89\\xa9\n"
  "\n"
  "float64 obs_length  # \\xe9\\x95\\xbf\n"
  "float64 obs_width   # \\xe5\\xae\\xbd\n"
  "float64 l           # \\xe5\\x8f\\x82\\xe8\\x80\\x83\\xe7\\xba\\xbf\\xe6\\x8a\\x95\\xe5\\xbd\\xb1\\xe7\\x9a\\x84l\n"
  "float64 s           # \\xe5\\x8f\\x82\\xe8\\x80\\x83\\xe7\\xba\\xbf\\xe6\\x8a\\x95\\xe5\\xbd\\xb1\\xe7\\x9a\\x84s\n"
  "float64 s_2path     # \\xe8\\xb7\\xaf\\xe5\\xbe\\x84\\xe6\\x8a\\x95\\xe5\\xbd\\xb1\\xe7\\x9a\\x84s\n"
  "float64 ds_dt_2path # \\xe8\\xb7\\xaf\\xe5\\xbe\\x84\\xe6\\x8a\\x95\\xe5\\xbd\\xb1\\xe7\\x9a\\x84\\xe9\\x80\\x9f\\xe5\\xba\\xa6(\\xe5\\xb0\\xb1\\xe6\\x98\\xaf\\xe7\\xac\\x9b\\xe5\\x8d\\xa1\\xe5\\xb0\\x94\\xe5\\x9d\\x90\\xe6\\xa0\\x87\\xe4\\xb8\\x8b\\xe7\\x9a\\x84\\xe9\\x80\\x9f\\xe5\\xba\\xa6)\n"
  "float64 t_in        # \\xe8\\xbf\\x9b\\xe5\\x85\\xa5\\xe8\\xb7\\xaf\\xe5\\xbe\\x84\\xe6\\x97\\xb6\\xe9\\x97\\xb4\n"
  "float64 t_out       # \\xe9\\x80\\x80\\xe5\\x87\\xba\\xe8\\xb7\\xaf\\xe5\\xbe\\x84\\xe6\\x97\\xb6\\xe9\\x97\\xb4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
base_msgs__msg__ObsInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_msgs__msg__ObsInfo__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 244, 244},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_msgs__msg__ObsInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_msgs__msg__ObsInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
