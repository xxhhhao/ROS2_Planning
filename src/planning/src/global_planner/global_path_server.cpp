#include "global_path_server.h"

namespace Planning
{
    GlobalPathServer::GlobalPathServer() : Node("global_path_server_node")
    {
        RCLCPP_INFO(this->get_logger(), "🚀 global_path_server_node created!");

        // 初始化全局路径规划的发布器
        global_path_pub_ = this->create_publisher<Path>("global_path", 10);
        global_path_rviz_pub_ = this->create_publisher<Marker>("global_path_rviz", 10);

        global_path_server_ = this->create_service<GlobalPathService>(
            "global_path_server",
            std::bind(&GlobalPathServer::response_global_path_callback, this, _1, _2));
    }
    void GlobalPathServer::response_global_path_callback(const std::shared_ptr<GlobalPathService::Request> request, std::shared_ptr<GlobalPathService::Response> response)
    {
        RCLCPP_INFO(this->get_logger(), "[DEBUG] received global_path request");
        RCLCPP_INFO(this->get_logger(), "[DEBUG] request pnc_map: midline=%zu, left=%zu, right=%zu",
            request->pnc_map.midline.points.size(), request->pnc_map.left_boundary.points.size(), 
            request->pnc_map.right_boundary.points.size());
        
        // 接受请求，多态
        switch (request->global_planner_type)
        {
        case static_cast<int>(GlobalPlannerType::NORMAL):
            RCLCPP_INFO(this->get_logger(), "[DEBUG] using NORMAL planner");
            global_planner_base_ = std::make_shared<GlobalPlannerNormal>();
            break;
        default:
            RCLCPP_WARN(this->get_logger(), "[❌]Invalid global planner type!");
            return;
        }

        // 判断请求是否为空
        if (request->pnc_map.midline.points.empty())
        {
            RCLCPP_WARN(this->get_logger(), "[❌]pnc_map empty,global_path cannot be created!");
            return;
        }

        // 搜索并响应全局路径
        RCLCPP_INFO(this->get_logger(), "[DEBUG] calling search_global_path");
        const auto global_path = global_planner_base_->search_global_path(request->pnc_map);
        RCLCPP_INFO(this->get_logger(), "[DEBUG] global_path has %zu poses, frame_id=%s", 
            global_path.poses.size(), global_path.header.frame_id.c_str());
        response->global_path = global_path;

        // 发布全局路径
        global_path_pub_->publish(global_path);
        RCLCPP_INFO(this->get_logger(), "global_path publisher");

        // 发布rviz显示的全局路径
        // path无frame_lock，所以无法固定在rviz中
        const auto global_path_rviz = path2marker(global_path);
        RCLCPP_INFO(this->get_logger(), "[DEBUG] publishing marker with %zu points, frame_id=%s",
            global_path_rviz.points.size(), global_path_rviz.header.frame_id.c_str());
        global_path_rviz_pub_->publish(global_path_rviz);
        RCLCPP_INFO(this->get_logger(), "global_path for rviz publisher");
    }
    Marker GlobalPathServer::path2marker(const Path &path) // path转marker地图
    {
        Marker path_rviz_;
        path_rviz_.header = path.header;
        // 确保 frame_id 有效
        if (path_rviz_.header.frame_id.empty()) {
            path_rviz_.header.frame_id = "map";
            RCLCPP_WARN(rclcpp::get_logger("global_path"), "[DEBUG] path header frame_id is empty, using 'map'");
        }
        path_rviz_.header.stamp = rclcpp::Clock().now();  // 确保时间戳有效
        path_rviz_.ns = "global_path";          // 命名空间
        path_rviz_.id = 0;                      // id
        path_rviz_.action = Marker::ADD;        //添加
        path_rviz_.type = Marker::LINE_STRIP;   // 连续的线条
        path_rviz_.scale.x = 0.1;               // 线条宽度（加粗以便观察）
        path_rviz_.color.a = 1.0;               // 线条透明度
        path_rviz_.color.r = 1.0;               // 改为纯红色，更容易看到
        path_rviz_.color.g = 0.0;
        path_rviz_.color.b = 0.0;
        path_rviz_.lifetime = rclcpp::Duration::max(); // 持续时间无限
        path_rviz_.frame_locked = true;                // 固定在rviz中

        RCLCPP_INFO(rclcpp::get_logger("global_path"), "[DEBUG] path2marker: path has %zu poses", path.poses.size());
        
        Point p_tmp;
        for (const auto &pose : path.poses)
        {
            p_tmp.x = pose.pose.position.x;
            p_tmp.y = pose.pose.position.y;
            p_tmp.z = 0.0;  // 确保z坐标为0
            path_rviz_.points.emplace_back(p_tmp);
        }
        
        RCLCPP_INFO(rclcpp::get_logger("global_path"), "[DEBUG] path2marker: marker has %zu points", path_rviz_.points.size());
        return path_rviz_;
    }
}

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Planning::GlobalPathServer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
