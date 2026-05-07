#include "global_planner_normal.h"

namespace Planning
{
    GlobalPlannerNormal::GlobalPlannerNormal()
    {
        RCLCPP_INFO(rclcpp::get_logger("global_path"), "[🚀]global_planner_normal created!");

        global_planner_config_ = std::make_unique<ConfigReader>();
        global_planner_config_->read_global_path_config();
        global_planner_type_ = static_cast<int>(GlobalPlannerType::NORMAL);
    }

    Path GlobalPlannerNormal::search_global_path(const PNCMap &pnc_map)
    {
        if (pnc_map.midline.points.empty()) 
        {
            RCLCPP_ERROR(rclcpp::get_logger("global_path"), "midline is empty!");
            return Path();
        }
        
        RCLCPP_INFO(rclcpp::get_logger("global_path"), "using normal global_planner!");
        RCLCPP_INFO(rclcpp::get_logger("global_path"), "sizes: midline=%zu, left=%zu, right=%zu",
            pnc_map.midline.points.size(), 
            pnc_map.left_boundary.points.size(),
            pnc_map.right_boundary.points.size());

        global_path_.header.frame_id = pnc_map.header.frame_id;
        global_path_.header.stamp = rclcpp::Clock().now(); // 获取当前时间戳
        global_path_.poses.clear();                        // 清空之前的路径点

        PoseStamped p_tmp; // 临时变量，用于存放路径点
        p_tmp.header = global_path_.header;
        p_tmp.pose.orientation.x = 0.0;
        p_tmp.pose.orientation.y = 0.0;
        p_tmp.pose.orientation.z = 0.0;
        p_tmp.pose.orientation.w = 1.0; 

        // 使用最小值，确保不越界
        size_t valid_count = std::min({
            pnc_map.midline.points.size(),
            pnc_map.left_boundary.points.size(),
            pnc_map.right_boundary.points.size()
        });
        
        RCLCPP_INFO(rclcpp::get_logger("global_path"), "valid_count=%zu", valid_count);
        
        // 打印前3个和后3个点的坐标
        if (valid_count > 0) {
            for (size_t i = 0; i < std::min(size_t(3), valid_count); i++) {
                RCLCPP_INFO(rclcpp::get_logger("global_path"), "[DEBUG] input[%zu]: mid(%f,%f) right(%f,%f)", 
                    i, pnc_map.midline.points[i].x, pnc_map.midline.points[i].y,
                    pnc_map.right_boundary.points[i].x, pnc_map.right_boundary.points[i].y);
            }
            for (size_t i = (valid_count > 3 ? valid_count - 3 : 0); i < valid_count; i++) {
                RCLCPP_INFO(rclcpp::get_logger("global_path"), "[DEBUG] input[%zu]: mid(%f,%f) right(%f,%f)", 
                    i, pnc_map.midline.points[i].x, pnc_map.midline.points[i].y,
                    pnc_map.right_boundary.points[i].x, pnc_map.right_boundary.points[i].y);
            }
        }
        
        // 如果点数太多，降低采样率
        size_t step = 1;
        if (valid_count > 200) {
            step = 2;  // 每2个点取1个
            RCLCPP_INFO(rclcpp::get_logger("global_path"), "[DEBUG] too many points (%zu), using step=%zu", valid_count, step);
        }
        
        for (size_t i = 0; i < valid_count; i += step)
        {
            // 计算中线和右边界的中间点
            p_tmp.pose.position.x = (pnc_map.midline.points[i].x + pnc_map.right_boundary.points[i].x) / 2.0;
            p_tmp.pose.position.y = (pnc_map.midline.points[i].y + pnc_map.right_boundary.points[i].y) / 2.0;
            
            if (std::isnan(p_tmp.pose.position.x) || std::isnan(p_tmp.pose.position.y) 
                    || std::isinf(p_tmp.pose.position.x) || std::isinf(p_tmp.pose.position.y)) 
            {
                RCLCPP_ERROR(rclcpp::get_logger("global_path"), 
                    "NaN/Inf detected at index %zu: x=%f, y=%f", i, p_tmp.pose.position.x, p_tmp.pose.position.y);
                continue;  // 跳过这个点
            }
            global_path_.poses.emplace_back(p_tmp);
        }
        
        // 打印输出点的前3个和后3个
        if (!global_path_.poses.empty()) {
            for (size_t i = 0; i < std::min(size_t(3), global_path_.poses.size()); i++) {
                RCLCPP_INFO(rclcpp::get_logger("global_path"), "[DEBUG] output[%zu]: x=%f, y=%f", 
                    i, global_path_.poses[i].pose.position.x, global_path_.poses[i].pose.position.y);
            }
            for (size_t i = (global_path_.poses.size() > 3 ? global_path_.poses.size() - 3 : 0); 
                 i < global_path_.poses.size(); i++) {
                RCLCPP_INFO(rclcpp::get_logger("global_path"), "[DEBUG] output[%zu]: x=%f, y=%f", 
                    i, global_path_.poses[i].pose.position.x, global_path_.poses[i].pose.position.y);
            }
        }
        
        RCLCPP_INFO(rclcpp::get_logger("global_path"), "global_path created, points size: %zu", global_path_.poses.size());
        return global_path_;
    }
}// namespace Planning
