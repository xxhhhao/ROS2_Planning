// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_msgs:srv/GlobalPathService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_msgs/srv/detail/global_path_service__rosidl_typesupport_introspection_c.h"
#include "base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_msgs/srv/detail/global_path_service__functions.h"
#include "base_msgs/srv/detail/global_path_service__struct.h"


// Include directives for member types
// Member `pnc_map`
#include "base_msgs/msg/pnc_map.h"
// Member `pnc_map`
#include "base_msgs/msg/detail/pnc_map__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_msgs__srv__GlobalPathService_Request__init(message_memory);
}

void base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_fini_function(void * message_memory)
{
  base_msgs__srv__GlobalPathService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_message_member_array[2] = {
  {
    "global_planner_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_msgs__srv__GlobalPathService_Request, global_planner_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pnc_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_msgs__srv__GlobalPathService_Request, pnc_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_message_members = {
  "base_msgs__srv",  // message namespace
  "GlobalPathService_Request",  // message name
  2,  // number of fields
  sizeof(base_msgs__srv__GlobalPathService_Request),
  false,  // has_any_key_member_
  base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_message_member_array,  // message members
  base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_message_type_support_handle = {
  0,
  &base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_message_members,
  get_message_typesupport_handle_function,
  &base_msgs__srv__GlobalPathService_Request__get_type_hash,
  &base_msgs__srv__GlobalPathService_Request__get_type_description,
  &base_msgs__srv__GlobalPathService_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService_Request)() {
  base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, msg, PNCMap)();
  if (!base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_message_type_support_handle.typesupport_identifier) {
    base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_msgs/srv/detail/global_path_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_msgs/srv/detail/global_path_service__functions.h"
// already included above
// #include "base_msgs/srv/detail/global_path_service__struct.h"


// Include directives for member types
// Member `global_path`
#include "nav_msgs/msg/path.h"
// Member `global_path`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_msgs__srv__GlobalPathService_Response__init(message_memory);
}

void base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_fini_function(void * message_memory)
{
  base_msgs__srv__GlobalPathService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_member_array[1] = {
  {
    "global_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_msgs__srv__GlobalPathService_Response, global_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_members = {
  "base_msgs__srv",  // message namespace
  "GlobalPathService_Response",  // message name
  1,  // number of fields
  sizeof(base_msgs__srv__GlobalPathService_Response),
  false,  // has_any_key_member_
  base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_member_array,  // message members
  base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_type_support_handle = {
  0,
  &base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_members,
  get_message_typesupport_handle_function,
  &base_msgs__srv__GlobalPathService_Response__get_type_hash,
  &base_msgs__srv__GlobalPathService_Response__get_type_description,
  &base_msgs__srv__GlobalPathService_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService_Response)() {
  base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  if (!base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_type_support_handle.typesupport_identifier) {
    base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_msgs/srv/detail/global_path_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_msgs/srv/detail/global_path_service__functions.h"
// already included above
// #include "base_msgs/srv/detail/global_path_service__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "base_msgs/srv/global_path_service.h"
// Member `request`
// Member `response`
// already included above
// #include "base_msgs/srv/detail/global_path_service__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_msgs__srv__GlobalPathService_Event__init(message_memory);
}

void base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_fini_function(void * message_memory)
{
  base_msgs__srv__GlobalPathService_Event__fini(message_memory);
}

size_t base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__size_function__GlobalPathService_Event__request(
  const void * untyped_member)
{
  const base_msgs__srv__GlobalPathService_Request__Sequence * member =
    (const base_msgs__srv__GlobalPathService_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_const_function__GlobalPathService_Event__request(
  const void * untyped_member, size_t index)
{
  const base_msgs__srv__GlobalPathService_Request__Sequence * member =
    (const base_msgs__srv__GlobalPathService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_function__GlobalPathService_Event__request(
  void * untyped_member, size_t index)
{
  base_msgs__srv__GlobalPathService_Request__Sequence * member =
    (base_msgs__srv__GlobalPathService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__fetch_function__GlobalPathService_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const base_msgs__srv__GlobalPathService_Request * item =
    ((const base_msgs__srv__GlobalPathService_Request *)
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_const_function__GlobalPathService_Event__request(untyped_member, index));
  base_msgs__srv__GlobalPathService_Request * value =
    (base_msgs__srv__GlobalPathService_Request *)(untyped_value);
  *value = *item;
}

void base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__assign_function__GlobalPathService_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  base_msgs__srv__GlobalPathService_Request * item =
    ((base_msgs__srv__GlobalPathService_Request *)
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_function__GlobalPathService_Event__request(untyped_member, index));
  const base_msgs__srv__GlobalPathService_Request * value =
    (const base_msgs__srv__GlobalPathService_Request *)(untyped_value);
  *item = *value;
}

bool base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__resize_function__GlobalPathService_Event__request(
  void * untyped_member, size_t size)
{
  base_msgs__srv__GlobalPathService_Request__Sequence * member =
    (base_msgs__srv__GlobalPathService_Request__Sequence *)(untyped_member);
  base_msgs__srv__GlobalPathService_Request__Sequence__fini(member);
  return base_msgs__srv__GlobalPathService_Request__Sequence__init(member, size);
}

size_t base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__size_function__GlobalPathService_Event__response(
  const void * untyped_member)
{
  const base_msgs__srv__GlobalPathService_Response__Sequence * member =
    (const base_msgs__srv__GlobalPathService_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_const_function__GlobalPathService_Event__response(
  const void * untyped_member, size_t index)
{
  const base_msgs__srv__GlobalPathService_Response__Sequence * member =
    (const base_msgs__srv__GlobalPathService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_function__GlobalPathService_Event__response(
  void * untyped_member, size_t index)
{
  base_msgs__srv__GlobalPathService_Response__Sequence * member =
    (base_msgs__srv__GlobalPathService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__fetch_function__GlobalPathService_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const base_msgs__srv__GlobalPathService_Response * item =
    ((const base_msgs__srv__GlobalPathService_Response *)
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_const_function__GlobalPathService_Event__response(untyped_member, index));
  base_msgs__srv__GlobalPathService_Response * value =
    (base_msgs__srv__GlobalPathService_Response *)(untyped_value);
  *value = *item;
}

void base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__assign_function__GlobalPathService_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  base_msgs__srv__GlobalPathService_Response * item =
    ((base_msgs__srv__GlobalPathService_Response *)
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_function__GlobalPathService_Event__response(untyped_member, index));
  const base_msgs__srv__GlobalPathService_Response * value =
    (const base_msgs__srv__GlobalPathService_Response *)(untyped_value);
  *item = *value;
}

bool base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__resize_function__GlobalPathService_Event__response(
  void * untyped_member, size_t size)
{
  base_msgs__srv__GlobalPathService_Response__Sequence * member =
    (base_msgs__srv__GlobalPathService_Response__Sequence *)(untyped_member);
  base_msgs__srv__GlobalPathService_Response__Sequence__fini(member);
  return base_msgs__srv__GlobalPathService_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_msgs__srv__GlobalPathService_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(base_msgs__srv__GlobalPathService_Event, request),  // bytes offset in struct
    NULL,  // default value
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__size_function__GlobalPathService_Event__request,  // size() function pointer
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_const_function__GlobalPathService_Event__request,  // get_const(index) function pointer
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_function__GlobalPathService_Event__request,  // get(index) function pointer
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__fetch_function__GlobalPathService_Event__request,  // fetch(index, &value) function pointer
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__assign_function__GlobalPathService_Event__request,  // assign(index, value) function pointer
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__resize_function__GlobalPathService_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(base_msgs__srv__GlobalPathService_Event, response),  // bytes offset in struct
    NULL,  // default value
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__size_function__GlobalPathService_Event__response,  // size() function pointer
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_const_function__GlobalPathService_Event__response,  // get_const(index) function pointer
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__get_function__GlobalPathService_Event__response,  // get(index) function pointer
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__fetch_function__GlobalPathService_Event__response,  // fetch(index, &value) function pointer
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__assign_function__GlobalPathService_Event__response,  // assign(index, value) function pointer
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__resize_function__GlobalPathService_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_members = {
  "base_msgs__srv",  // message namespace
  "GlobalPathService_Event",  // message name
  3,  // number of fields
  sizeof(base_msgs__srv__GlobalPathService_Event),
  false,  // has_any_key_member_
  base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_member_array,  // message members
  base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_type_support_handle = {
  0,
  &base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_members,
  get_message_typesupport_handle_function,
  &base_msgs__srv__GlobalPathService_Event__get_type_hash,
  &base_msgs__srv__GlobalPathService_Event__get_type_description,
  &base_msgs__srv__GlobalPathService_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService_Event)() {
  base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService_Request)();
  base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService_Response)();
  if (!base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_type_support_handle.typesupport_identifier) {
    base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "base_msgs/srv/detail/global_path_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers base_msgs__srv__detail__global_path_service__rosidl_typesupport_introspection_c__GlobalPathService_service_members = {
  "base_msgs__srv",  // service namespace
  "GlobalPathService",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // base_msgs__srv__detail__global_path_service__rosidl_typesupport_introspection_c__GlobalPathService_Request_message_type_support_handle,
  NULL,  // response message
  // base_msgs__srv__detail__global_path_service__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_type_support_handle
  NULL  // event_message
  // base_msgs__srv__detail__global_path_service__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_type_support_handle
};


static rosidl_service_type_support_t base_msgs__srv__detail__global_path_service__rosidl_typesupport_introspection_c__GlobalPathService_service_type_support_handle = {
  0,
  &base_msgs__srv__detail__global_path_service__rosidl_typesupport_introspection_c__GlobalPathService_service_members,
  get_service_typesupport_handle_function,
  &base_msgs__srv__GlobalPathService_Request__rosidl_typesupport_introspection_c__GlobalPathService_Request_message_type_support_handle,
  &base_msgs__srv__GlobalPathService_Response__rosidl_typesupport_introspection_c__GlobalPathService_Response_message_type_support_handle,
  &base_msgs__srv__GlobalPathService_Event__rosidl_typesupport_introspection_c__GlobalPathService_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    base_msgs,
    srv,
    GlobalPathService
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    base_msgs,
    srv,
    GlobalPathService
  ),
  &base_msgs__srv__GlobalPathService__get_type_hash,
  &base_msgs__srv__GlobalPathService__get_type_description,
  &base_msgs__srv__GlobalPathService__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService)(void) {
  if (!base_msgs__srv__detail__global_path_service__rosidl_typesupport_introspection_c__GlobalPathService_service_type_support_handle.typesupport_identifier) {
    base_msgs__srv__detail__global_path_service__rosidl_typesupport_introspection_c__GlobalPathService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)base_msgs__srv__detail__global_path_service__rosidl_typesupport_introspection_c__GlobalPathService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_msgs, srv, GlobalPathService_Event)()->data;
  }

  return &base_msgs__srv__detail__global_path_service__rosidl_typesupport_introspection_c__GlobalPathService_service_type_support_handle;
}
