#include "pnc_map_creator_straight.h"

namespace Planning
{
    PNCMapCreatorStraight::PNCMapCreatorStraight() // 直道地图
    {
        RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "[🚀]pnc_map_creator created!");

        // 读取配置文件
        pnc_map_config_ = std::make_unique<ConfigReader>();
        pnc_map_config_->read_pnc_map_config();
        map_type_ = static_cast<int>(PNCMapType::STRAIGHT);

        // 地图起点坐标
        p_mid_.x = -3.0;
        p_mid_.y = pnc_map_config_->pnc_map().road_half_width_ / 2.0;

        // 长度步长
        len_step_ = pnc_map_config_->pnc_map().segment_len_;
        theta_step_ = 0.01;

        // 地图初始化
        init_pnc_map();
    }
    PNCMap PNCMapCreatorStraight::creat_pnc_map() // 生成地图
    {
        RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "[DEBUG] Straight map creating, road_length=%f", pnc_map_.road_length);
        RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "[DEBUG] p_mid initial: x=%f, y=%f", p_mid_.x, p_mid_.y);
        
        draw_straight_x(pnc_map_.road_length, 1.0);
        RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "[DEBUG] after draw_straight_x: midline=%zu, left=%zu, right=%zu",
            pnc_map_.midline.points.size(), pnc_map_.left_boundary.points.size(), pnc_map_.right_boundary.points.size());
        RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "[DEBUG] p_mid final: x=%f, y=%f", p_mid_.x, p_mid_.y);
        
        // 打印前3个和后3个点的坐标
        if (!pnc_map_.midline.points.empty()) {
            for (size_t i = 0; i < std::min(size_t(3), pnc_map_.midline.points.size()); i++) {
                RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "[DEBUG] midline[%zu]: x=%f, y=%f", 
                    i, pnc_map_.midline.points[i].x, pnc_map_.midline.points[i].y);
            }
            for (size_t i = (pnc_map_.midline.points.size() > 3 ? pnc_map_.midline.points.size() - 3 : 0); 
                 i < pnc_map_.midline.points.size(); i++) {
                RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "[DEBUG] midline[%zu]: x=%f, y=%f", 
                    i, pnc_map_.midline.points[i].x, pnc_map_.midline.points[i].y);
            }
        }

        //(rviz的bug)虚线点数设置为偶数，奇数可能显示不出来
        if (pnc_map_.midline.points.size() % 2 == 1)
        {
            RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "[DEBUG] odd size detected, popping back");
            pnc_map_.midline.points.pop_back();
            if (!pnc_map_.left_boundary.points.empty())
            {
                pnc_map_.left_boundary.points.pop_back();
            }            
            if (!pnc_map_.right_boundary.points.empty())
            {
                pnc_map_.right_boundary.points.pop_back();
            }
            RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "[DEBUG] after pop: midline=%zu, left=%zu, right=%zu",
                pnc_map_.midline.points.size(), pnc_map_.left_boundary.points.size(), pnc_map_.right_boundary.points.size());
        }

        // 把所有marker放入pnc_map_markerarray_中
        pnc_map_markerarray_.markers.emplace_back(pnc_map_.midline);
        pnc_map_markerarray_.markers.emplace_back(pnc_map_.left_boundary);
        pnc_map_markerarray_.markers.emplace_back(pnc_map_.right_boundary);

        RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "[DEBUG] Straight pnc_map created, midline=%zu, left=%zu, right=%zu", 
            pnc_map_.midline.points.size(), pnc_map_.left_boundary.points.size(), pnc_map_.right_boundary.points.size());

        return pnc_map_;
    }

    // 地图初始化
    void PNCMapCreatorStraight::init_pnc_map()
    {
        pnc_map_.header.frame_id = pnc_map_config_->pnc_map().frame_;
        pnc_map_.header.stamp = rclcpp::Clock().now(); // 获取当前的时间戳
        pnc_map_.road_length = pnc_map_config_->pnc_map().road_length_;
        pnc_map_.road_half_width = pnc_map_config_->pnc_map().road_half_width_;

        // 中心线格式
        pnc_map_.midline.header = pnc_map_.header;
        pnc_map_.midline.ns = "pnc_map"; // 命名空间
        pnc_map_.midline.id = 0;
        pnc_map_.midline.action = Marker::ADD;               // 新增或添加到marker数组中
        pnc_map_.midline.type = Marker::LINE_LIST;           // 线段列表(虚线)
        pnc_map_.midline.scale.x = 0.05;                     // 线段宽度
        pnc_map_.midline.color.a = 1.0;                      // 不透明度
        pnc_map_.midline.color.r = 1.0;                      // 红色
        pnc_map_.midline.color.g = 1.0;                      // 绿色
        pnc_map_.midline.color.b = 0.0;                      // 蓝色
        pnc_map_.midline.lifetime = rclcpp::Duration::max(); // 生命周期，在rviz中显示最大时间(长时间显示)
        pnc_map_.midline.frame_locked = true;                // 地图锁定

        // 左边界格式
        pnc_map_.left_boundary = pnc_map_.midline;
        pnc_map_.left_boundary.id = 1;
        pnc_map_.left_boundary.type = Marker::LINE_STRIP; // 连续线条
        pnc_map_.left_boundary.color.r = 1.0; // 红色
        pnc_map_.left_boundary.color.g = 1.0; // 绿色
        pnc_map_.left_boundary.color.b = 1.0; // 蓝色

        // 右边界格式
        pnc_map_.right_boundary = pnc_map_.left_boundary;
        pnc_map_.right_boundary.id = 2;
    }
    void PNCMapCreatorStraight::draw_straight_x(const double &length, const double &plus_flag, const double &ratio)
    {
        double len_temp = 0.0;

        while (len_temp < length)
        {
            pl_.x = p_mid_.x;
            pl_.y = p_mid_.y + pnc_map_config_->pnc_map().road_half_width_;

            pr_.x = p_mid_.x;
            pr_.y = p_mid_.y - pnc_map_config_->pnc_map().road_half_width_;

            pnc_map_.midline.points.emplace_back(p_mid_);
            pnc_map_.left_boundary.points.emplace_back(pl_);
            pnc_map_.right_boundary.points.emplace_back(pr_);
            
            len_temp += len_step_ * ratio;
            p_mid_.x += len_step_ * plus_flag * ratio;
        }
    }
} // namespace Planning
