// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from base_msgs:msg/PlotInfo.idl
// generated code does not contain a copyright notice

#include "base_msgs/msg/detail/plot_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_base_msgs
const rosidl_type_hash_t *
base_msgs__msg__PlotInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0x9b, 0x5c, 0xfd, 0xb0, 0x26, 0xa0, 0xce,
      0x17, 0x01, 0xd3, 0x7c, 0x8e, 0xbd, 0xf7, 0x6d,
      0xe0, 0x02, 0xe7, 0xbf, 0xde, 0x31, 0xa7, 0x6c,
      0xcf, 0xd4, 0xe8, 0xe7, 0x5c, 0xc7, 0x6f, 0x28,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "base_msgs/msg/detail/local_trajectory__functions.h"
#include "base_msgs/msg/detail/local_speeds_point__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "base_msgs/msg/detail/local_trajectory_point__functions.h"
#include "base_msgs/msg/detail/obs_info__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "base_msgs/msg/detail/local_path_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t base_msgs__msg__LocalPathPoint__EXPECTED_HASH = {1, {
    0xbb, 0x03, 0x2a, 0xe7, 0x07, 0x4a, 0x34, 0xf8,
    0x02, 0x24, 0xd1, 0x43, 0xf1, 0x27, 0x1e, 0x83,
    0x4f, 0x7c, 0xe2, 0x99, 0xd2, 0xe5, 0xb1, 0x86,
    0xeb, 0x8b, 0xdd, 0x80, 0xbb, 0x9a, 0x8c, 0xb2,
  }};
static const rosidl_type_hash_t base_msgs__msg__LocalSpeedsPoint__EXPECTED_HASH = {1, {
    0xef, 0x24, 0x68, 0xa5, 0x1d, 0xc4, 0x52, 0x39,
    0x86, 0x62, 0x14, 0xa7, 0xb0, 0x60, 0x75, 0x47,
    0xea, 0x7b, 0x57, 0x8a, 0xd7, 0x04, 0x21, 0xa0,
    0x18, 0x36, 0xb1, 0xf9, 0xe3, 0x9c, 0x57, 0xf4,
  }};
static const rosidl_type_hash_t base_msgs__msg__LocalTrajectory__EXPECTED_HASH = {1, {
    0x65, 0x02, 0x83, 0x7b, 0x9f, 0x73, 0x0f, 0x2e,
    0x37, 0x3d, 0xf9, 0x27, 0x8e, 0xcf, 0x80, 0x0f,
    0xdf, 0xbc, 0x09, 0x35, 0xf0, 0x14, 0xa3, 0xc6,
    0x34, 0x5f, 0x85, 0xd4, 0x31, 0xa0, 0x70, 0xbd,
  }};
static const rosidl_type_hash_t base_msgs__msg__LocalTrajectoryPoint__EXPECTED_HASH = {1, {
    0xcb, 0x00, 0x09, 0x35, 0x68, 0x75, 0x93, 0xb8,
    0x89, 0x00, 0x0c, 0x7c, 0x5e, 0xd7, 0xeb, 0x8d,
    0x52, 0x27, 0x14, 0xdb, 0xb1, 0x80, 0x48, 0x1d,
    0x74, 0xd1, 0xb0, 0x98, 0x1d, 0x4b, 0x8a, 0x6b,
  }};
static const rosidl_type_hash_t base_msgs__msg__ObsInfo__EXPECTED_HASH = {1, {
    0xff, 0xfb, 0x3b, 0x5a, 0x6e, 0x4e, 0xe0, 0x32,
    0x04, 0x5d, 0xe9, 0xdc, 0xdf, 0x51, 0xe0, 0x18,
    0x24, 0xd0, 0x43, 0xc2, 0x60, 0x07, 0x04, 0xf0,
    0x72, 0x9b, 0x78, 0xe5, 0x29, 0xde, 0x4f, 0x09,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PoseStamped__EXPECTED_HASH = {1, {
    0x10, 0xf3, 0x78, 0x6d, 0x7d, 0x40, 0xfd, 0x2b,
    0x54, 0x36, 0x78, 0x35, 0x61, 0x4b, 0xff, 0x85,
    0xd4, 0xad, 0x3b, 0x5d, 0xab, 0x62, 0xbf, 0x8b,
    0xca, 0x0c, 0xc2, 0x32, 0xd7, 0x3b, 0x4c, 0xd8,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char base_msgs__msg__PlotInfo__TYPE_NAME[] = "base_msgs/msg/PlotInfo";
static char base_msgs__msg__LocalPathPoint__TYPE_NAME[] = "base_msgs/msg/LocalPathPoint";
static char base_msgs__msg__LocalSpeedsPoint__TYPE_NAME[] = "base_msgs/msg/LocalSpeedsPoint";
static char base_msgs__msg__LocalTrajectory__TYPE_NAME[] = "base_msgs/msg/LocalTrajectory";
static char base_msgs__msg__LocalTrajectoryPoint__TYPE_NAME[] = "base_msgs/msg/LocalTrajectoryPoint";
static char base_msgs__msg__ObsInfo__TYPE_NAME[] = "base_msgs/msg/ObsInfo";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseStamped__TYPE_NAME[] = "geometry_msgs/msg/PoseStamped";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char base_msgs__msg__PlotInfo__FIELD_NAME__header[] = "header";
static char base_msgs__msg__PlotInfo__FIELD_NAME__trajectory_info[] = "trajectory_info";
static char base_msgs__msg__PlotInfo__FIELD_NAME__obs_info[] = "obs_info";

static rosidl_runtime_c__type_description__Field base_msgs__msg__PlotInfo__FIELDS[] = {
  {
    {base_msgs__msg__PlotInfo__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__PlotInfo__FIELD_NAME__trajectory_info, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {base_msgs__msg__LocalTrajectory__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__PlotInfo__FIELD_NAME__obs_info, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {base_msgs__msg__ObsInfo__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription base_msgs__msg__PlotInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {base_msgs__msg__LocalPathPoint__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__LocalSpeedsPoint__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__LocalTrajectory__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__LocalTrajectoryPoint__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {base_msgs__msg__ObsInfo__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
base_msgs__msg__PlotInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_msgs__msg__PlotInfo__TYPE_NAME, 22, 22},
      {base_msgs__msg__PlotInfo__FIELDS, 3, 3},
    },
    {base_msgs__msg__PlotInfo__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
  };
  if (!constructed) {
    assert(0 == memcmp(&base_msgs__msg__LocalPathPoint__EXPECTED_HASH, base_msgs__msg__LocalPathPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = base_msgs__msg__LocalPathPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&base_msgs__msg__LocalSpeedsPoint__EXPECTED_HASH, base_msgs__msg__LocalSpeedsPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = base_msgs__msg__LocalSpeedsPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&base_msgs__msg__LocalTrajectory__EXPECTED_HASH, base_msgs__msg__LocalTrajectory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = base_msgs__msg__LocalTrajectory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&base_msgs__msg__LocalTrajectoryPoint__EXPECTED_HASH, base_msgs__msg__LocalTrajectoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = base_msgs__msg__LocalTrajectoryPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&base_msgs__msg__ObsInfo__EXPECTED_HASH, base_msgs__msg__ObsInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = base_msgs__msg__ObsInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe7\\xbb\\x98\\xe5\\x88\\xb6\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\n"
  "\n"
  "std_msgs/Header header                  # \\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe5\\xa4\\xb4, \\xe7\\x94\\xa8\\xe4\\xba\\x8e\\xe5\\x9d\\x90\\xe6\\xa0\\x87\\xe7\\xb3\\xbb\\xe5\\x92\\x8c\\xe6\\x97\\xb6\\xe9\\x97\\xb4\\xe5\\x90\\x8c\\xe6\\xad\\xa5\n"
  "LocalTrajectory trajectory_info         # \\xe8\\xbd\\xa8\\xe8\\xbf\\xb9\\xe4\\xbf\\xa1\\xe6\\x81\\xaf\n"
  "ObsInfo[] obs_info                      # \\xe9\\x9a\\x9c\\xe7\\xa2\\x8d\\xe7\\x89\\xa9\\xe4\\xbf\\xa1\\xe6\\x81\\xaf";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
base_msgs__msg__PlotInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_msgs__msg__PlotInfo__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 160, 160},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_msgs__msg__PlotInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_msgs__msg__PlotInfo__get_individual_type_description_source(NULL),
    sources[1] = *base_msgs__msg__LocalPathPoint__get_individual_type_description_source(NULL);
    sources[2] = *base_msgs__msg__LocalSpeedsPoint__get_individual_type_description_source(NULL);
    sources[3] = *base_msgs__msg__LocalTrajectory__get_individual_type_description_source(NULL);
    sources[4] = *base_msgs__msg__LocalTrajectoryPoint__get_individual_type_description_source(NULL);
    sources[5] = *base_msgs__msg__ObsInfo__get_individual_type_description_source(NULL);
    sources[6] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[9] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[10] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[11] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
