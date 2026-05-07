#include "pnc_map_server.h"

namespace Planning
{
    PNCMapServer::PNCMapServer() : Node("pnc_map_server_node")
    {
        RCLCPP_INFO(this->get_logger(), "[🚀]pnc_map_server_node created!");

        // 地图发布器
        map_pub_ = this->create_publisher<PNCMap>("pnc_map", 10);
        map_rviz_pub_ = this->create_publisher<MarkerArray>("pnc_map_marker_array", 10);

        // 地图服务器
        map_server_ = this->create_service<PNCMapService>(
            "pnc_map_server",
            std::bind(&PNCMapServer::response_pnc_map_callback, this, _1, _2));

        // 定时器：定期发布地图（确保RViz能看到）
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            [this]() {
                if (map_created_) {
                    map_rviz_pub_->publish(cached_marker_array_);
                }
            });
    }
    // 响应并发布地图
    void PNCMapServer::response_pnc_map_callback(const std::shared_ptr<PNCMapService::Request> request,
                                                 const std::shared_ptr<PNCMapService::Response> responce)
    {
        // 根据请求的类型创建地图
        switch (request->map_type)
        {
        case static_cast<int>(PNCMapType::STRAIGHT):
            map_creator_ = std::make_shared<PNCMapCreatorStraight>();
            break;
        case static_cast<int>(PNCMapType::STURN):
            map_creator_ = std::make_shared<PNCMapCreatorSTurn>();
            break;
        default:
            RCLCPP_WARN(this->get_logger(), "[❌]Invalid map type!");
            return;
        }

        // 创建并响应地图
        const auto pnc_map = map_creator_->creat_pnc_map();
        responce->pnc_map = pnc_map;

        // 缓存MarkerArray（用于定期发布）
        cached_marker_array_ = map_creator_->pnc_map_markerarray();
        map_created_ = true;

        // 发布地图
        map_pub_->publish(pnc_map);
        RCLCPP_INFO(this->get_logger(), "[🚀]pnc_map published!");

        // 发布地图的rviz可视化
        map_rviz_pub_->publish(cached_marker_array_);
        RCLCPP_INFO(this->get_logger(), "[🚀]pnc_map for rviz published!");
    }
}

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Planning::PNCMapServer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
