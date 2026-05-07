// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from base_msgs:srv/GlobalPathService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_msgs/srv/global_path_service.hpp"


#ifndef BASE_MSGS__SRV__DETAIL__GLOBAL_PATH_SERVICE__TRAITS_HPP_
#define BASE_MSGS__SRV__DETAIL__GLOBAL_PATH_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "base_msgs/srv/detail/global_path_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pnc_map'
#include "base_msgs/msg/detail/pnc_map__traits.hpp"

namespace base_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GlobalPathService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: global_planner_type
  {
    out << "global_planner_type: ";
    rosidl_generator_traits::value_to_yaml(msg.global_planner_type, out);
    out << ", ";
  }

  // member: pnc_map
  {
    out << "pnc_map: ";
    to_flow_style_yaml(msg.pnc_map, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GlobalPathService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: global_planner_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_planner_type: ";
    rosidl_generator_traits::value_to_yaml(msg.global_planner_type, out);
    out << "\n";
  }

  // member: pnc_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pnc_map:\n";
    to_block_style_yaml(msg.pnc_map, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GlobalPathService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_msgs

namespace rosidl_generator_traits
{

[[deprecated("use base_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_msgs::srv::GlobalPathService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_msgs::srv::GlobalPathService_Request & msg)
{
  return base_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_msgs::srv::GlobalPathService_Request>()
{
  return "base_msgs::srv::GlobalPathService_Request";
}

template<>
inline const char * name<base_msgs::srv::GlobalPathService_Request>()
{
  return "base_msgs/srv/GlobalPathService_Request";
}

template<>
struct has_fixed_size<base_msgs::srv::GlobalPathService_Request>
  : std::integral_constant<bool, has_fixed_size<base_msgs::msg::PNCMap>::value> {};

template<>
struct has_bounded_size<base_msgs::srv::GlobalPathService_Request>
  : std::integral_constant<bool, has_bounded_size<base_msgs::msg::PNCMap>::value> {};

template<>
struct is_message<base_msgs::srv::GlobalPathService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'global_path'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace base_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GlobalPathService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: global_path
  {
    out << "global_path: ";
    to_flow_style_yaml(msg.global_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GlobalPathService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: global_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_path:\n";
    to_block_style_yaml(msg.global_path, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GlobalPathService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_msgs

namespace rosidl_generator_traits
{

[[deprecated("use base_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_msgs::srv::GlobalPathService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_msgs::srv::GlobalPathService_Response & msg)
{
  return base_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_msgs::srv::GlobalPathService_Response>()
{
  return "base_msgs::srv::GlobalPathService_Response";
}

template<>
inline const char * name<base_msgs::srv::GlobalPathService_Response>()
{
  return "base_msgs/srv/GlobalPathService_Response";
}

template<>
struct has_fixed_size<base_msgs::srv::GlobalPathService_Response>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<base_msgs::srv::GlobalPathService_Response>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<base_msgs::srv::GlobalPathService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace base_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GlobalPathService_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GlobalPathService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GlobalPathService_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace base_msgs

namespace rosidl_generator_traits
{

[[deprecated("use base_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const base_msgs::srv::GlobalPathService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  base_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use base_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const base_msgs::srv::GlobalPathService_Event & msg)
{
  return base_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<base_msgs::srv::GlobalPathService_Event>()
{
  return "base_msgs::srv::GlobalPathService_Event";
}

template<>
inline const char * name<base_msgs::srv::GlobalPathService_Event>()
{
  return "base_msgs/srv/GlobalPathService_Event";
}

template<>
struct has_fixed_size<base_msgs::srv::GlobalPathService_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<base_msgs::srv::GlobalPathService_Event>
  : std::integral_constant<bool, has_bounded_size<base_msgs::srv::GlobalPathService_Request>::value && has_bounded_size<base_msgs::srv::GlobalPathService_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<base_msgs::srv::GlobalPathService_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<base_msgs::srv::GlobalPathService>()
{
  return "base_msgs::srv::GlobalPathService";
}

template<>
inline const char * name<base_msgs::srv::GlobalPathService>()
{
  return "base_msgs/srv/GlobalPathService";
}

template<>
struct has_fixed_size<base_msgs::srv::GlobalPathService>
  : std::integral_constant<
    bool,
    has_fixed_size<base_msgs::srv::GlobalPathService_Request>::value &&
    has_fixed_size<base_msgs::srv::GlobalPathService_Response>::value
  >
{
};

template<>
struct has_bounded_size<base_msgs::srv::GlobalPathService>
  : std::integral_constant<
    bool,
    has_bounded_size<base_msgs::srv::GlobalPathService_Request>::value &&
    has_bounded_size<base_msgs::srv::GlobalPathService_Response>::value
  >
{
};

template<>
struct is_service<base_msgs::srv::GlobalPathService>
  : std::true_type
{
};

template<>
struct is_service_request<base_msgs::srv::GlobalPathService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<base_msgs::srv::GlobalPathService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BASE_MSGS__SRV__DETAIL__GLOBAL_PATH_SERVICE__TRAITS_HPP_
