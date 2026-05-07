#ifndef GLOBAL_PLANNER_BASE_H_
#define GLOBAL_PLANNER_BASE_H_

#include "rclcpp/rclcpp.hpp"
#include "base_msgs/msg/pnc_map.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "nav_msgs/msg/path.hpp"
#include "config_reader.h"

namespace Planning
{
    using base_msgs::msg::PNCMap;          // PNC
    using geometry_msgs::msg::PoseStamped; // 位姿
    using nav_msgs::msg::Path;             // 路径

    enum class GlobalPlannerType
    {
        NORMAL
    };
    class GlobalPlannerBase // 全局路径规划器基类
    {
    public:
        virtual Path search_global_path(const PNCMap &pnc_map) = 0; // 纯虚函数，用于搜索全局路径
        inline Path get_global_path() { return global_path_; }                 // 获取全局路径
        virtual ~GlobalPlannerBase() {}                                         // 虚析构函数
    protected:
        std::unique_ptr<ConfigReader> global_planner_config_; // 存储全局路径的智能指针
        int global_planner_type_ = 0;                         // 全局路径类型
        Path global_path_;                                 // 全局路径
    };
} // namespace /* namespace_name */
#endif // GLOBAL_PLANNER_BASE_H_
