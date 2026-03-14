cmake_minimum_required(VERSION 3.28)
project(vehicle_info)

set(DEPENDS
  "rclcpp"
  "geometry_msgs"
  "visualization_msgs"
  "base_msgs"
)

#添加动态库
add_library(vehicle_info SHARED
  ${CMAKE_CURRENT_SOURCE_DIR}/main_car/main_car_info.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/obs_car/obs_car_info.cpp
)

set(target
  vehicle_info
)

#添加依赖
ament_target_dependencies(${target}
  ${DEPENDS}
)

target_link_libraries(${target}
  config_reader
  mathlibs
)

#安装动态库、节点相关目录
install(TARGETS
  ${target}
  LIBRARY DESTINATION lib)

