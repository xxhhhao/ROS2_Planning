// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_msgs:srv/GlobalPathService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_msgs/srv/global_path_service.hpp"


#ifndef BASE_MSGS__SRV__DETAIL__GLOBAL_PATH_SERVICE__BUILDER_HPP_
#define BASE_MSGS__SRV__DETAIL__GLOBAL_PATH_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "base_msgs/srv/detail/global_path_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace base_msgs
{

namespace srv
{

namespace builder
{

class Init_GlobalPathService_Request_pnc_map
{
public:
  explicit Init_GlobalPathService_Request_pnc_map(::base_msgs::srv::GlobalPathService_Request & msg)
  : msg_(msg)
  {}
  ::base_msgs::srv::GlobalPathService_Request pnc_map(::base_msgs::srv::GlobalPathService_Request::_pnc_map_type arg)
  {
    msg_.pnc_map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_msgs::srv::GlobalPathService_Request msg_;
};

class Init_GlobalPathService_Request_global_planner_type
{
public:
  Init_GlobalPathService_Request_global_planner_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalPathService_Request_pnc_map global_planner_type(::base_msgs::srv::GlobalPathService_Request::_global_planner_type_type arg)
  {
    msg_.global_planner_type = std::move(arg);
    return Init_GlobalPathService_Request_pnc_map(msg_);
  }

private:
  ::base_msgs::srv::GlobalPathService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_msgs::srv::GlobalPathService_Request>()
{
  return base_msgs::srv::builder::Init_GlobalPathService_Request_global_planner_type();
}

}  // namespace base_msgs


namespace base_msgs
{

namespace srv
{

namespace builder
{

class Init_GlobalPathService_Response_global_path
{
public:
  Init_GlobalPathService_Response_global_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_msgs::srv::GlobalPathService_Response global_path(::base_msgs::srv::GlobalPathService_Response::_global_path_type arg)
  {
    msg_.global_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_msgs::srv::GlobalPathService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_msgs::srv::GlobalPathService_Response>()
{
  return base_msgs::srv::builder::Init_GlobalPathService_Response_global_path();
}

}  // namespace base_msgs


namespace base_msgs
{

namespace srv
{

namespace builder
{

class Init_GlobalPathService_Event_response
{
public:
  explicit Init_GlobalPathService_Event_response(::base_msgs::srv::GlobalPathService_Event & msg)
  : msg_(msg)
  {}
  ::base_msgs::srv::GlobalPathService_Event response(::base_msgs::srv::GlobalPathService_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_msgs::srv::GlobalPathService_Event msg_;
};

class Init_GlobalPathService_Event_request
{
public:
  explicit Init_GlobalPathService_Event_request(::base_msgs::srv::GlobalPathService_Event & msg)
  : msg_(msg)
  {}
  Init_GlobalPathService_Event_response request(::base_msgs::srv::GlobalPathService_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GlobalPathService_Event_response(msg_);
  }

private:
  ::base_msgs::srv::GlobalPathService_Event msg_;
};

class Init_GlobalPathService_Event_info
{
public:
  Init_GlobalPathService_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalPathService_Event_request info(::base_msgs::srv::GlobalPathService_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GlobalPathService_Event_request(msg_);
  }

private:
  ::base_msgs::srv::GlobalPathService_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_msgs::srv::GlobalPathService_Event>()
{
  return base_msgs::srv::builder::Init_GlobalPathService_Event_info();
}

}  // namespace base_msgs

#endif  // BASE_MSGS__SRV__DETAIL__GLOBAL_PATH_SERVICE__BUILDER_HPP_
