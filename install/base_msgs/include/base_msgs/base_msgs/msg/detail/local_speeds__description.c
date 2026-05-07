// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from base_msgs:msg/LocalSpeeds.idl
// generated code does not contain a copyright notice

#include "base_msgs/msg/detail/local_speeds__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_base_msgs
const rosidl_type_hash_t *
base_msgs__msg__LocalSpeeds__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0xda, 0xc0, 0xa8, 0xbd, 0xe9, 0xb8, 0x10,
      0x0e, 0x2c, 0xba, 0x09, 0xf3, 0xb1, 0xfa, 0x59,
      0xf7, 0x6a, 0x3d, 0x53, 0x41, 0xeb, 0xd2, 0x69,
      0x80, 0x36, 0x48, 0xd1, 0x1d, 0xfb, 0x46, 0x7f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "base_msgs/msg/detail/local_speeds_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t base_msgs__msg__LocalSpeedsPoint__EXPECTED_HASH = {1, {
    0xef, 0x24, 0x68, 0xa5, 0x1d, 0xc4, 0x52, 0x39,
    0x86, 0x62, 0x14, 0xa7, 0xb0, 0x60, 0x75, 0x47,
    0xea, 0x7b, 0x57, 0x8a, 0xd7, 0x04, 0x21, 0xa0,
    0x18, 0x36, 0xb1, 0xf9, 0xe3, 0x9c, 0x57, 0xf4,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char base_msgs__msg__LocalSpeeds__TYPE_NAME[] = "base_msgs/msg/LocalSpeeds";
static char base_msgs__msg__LocalSpeedsPoint__TYPE_NAME[] = "base_msgs/msg/LocalSpeedsPoint";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char base_msgs__msg__LocalSpeeds__FIELD_NAME__header[] = "header";
static char base_msgs__msg__LocalSpeeds__FIELD_NAME__local_speeds[] = "local_speeds";

static rosidl_runtime_c__type_description__Field base_msgs__msg__LocalSpeeds__FIELDS[] = {
  {
    {base_msgs__msg__LocalSpeeds__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__LocalSpeeds__FIELD_NAME__local_speeds, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {base_msgs__msg__LocalSpeedsPoint__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription base_msgs__msg__LocalSpeeds__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {base_msgs__msg__LocalSpeedsPoint__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_msgs__msg__LocalSpeeds__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_msgs__msg__LocalSpeeds__TYPE_NAME, 25, 25},
      {base_msgs__msg__LocalSpeeds__FIELDS, 2, 2},
    },
    {base_msgs__msg__LocalSpeeds__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&base_msgs__msg__LocalSpeedsPoint__EXPECTED_HASH, base_msgs__msg__LocalSpeedsPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = base_msgs__msg__LocalSpeedsPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe9\\x80\\x9f\\xe5\\xba\\xa6\n"
  "\n"
  "std_msgs/Header header          # \\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe5\\xa4\\xb4, \\xe7\\x94\\xa8\\xe4\\xba\\x8e\\xe5\\x9d\\x90\\xe6\\xa0\\x87\\xe7\\xb3\\xbb\\xe5\\x92\\x8c\\xe6\\x97\\xb6\\xe9\\x97\\xb4\\xe5\\x90\\x8c\\xe6\\xad\\xa5\n"
  "LocalSpeedsPoint[] local_speeds # \\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xe7\\xbb\\x93\\xe6\\x9e\\x9c";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
base_msgs__msg__LocalSpeeds__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_msgs__msg__LocalSpeeds__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 94, 94},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_msgs__msg__LocalSpeeds__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_msgs__msg__LocalSpeeds__get_individual_type_description_source(NULL),
    sources[1] = *base_msgs__msg__LocalSpeedsPoint__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
