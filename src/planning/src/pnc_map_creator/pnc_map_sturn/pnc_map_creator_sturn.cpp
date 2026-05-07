#include "pnc_map_creator_sturn.h"

namespace Planning
{
    PNCMapCreatorSTurn::PNCMapCreatorSTurn()
    {
        RCLCPP_INFO(rclcpp::get_logger("pnc_map"), "[🚀]pnc_map_node created!");

        pnc_map_config_ = std::make_unique<ConfigReader>();
        pnc_map_config_->read_pnc_map_config();
        map_type_ = static_cast<int>(PNCMapType::STURN);

        // 地图起点坐标
        p_mid_.x = -3.0;
        p_mid_.y = pnc_map_config_->pnc_map().road_half_width_ / 2.0;

        // 长度和角度步长
        len_step_ = pnc_map_config_->pnc_map().segment_len_;
        theta_step_ = 0.01;

        // 地图初始化
        init_pnc_map();
    }
    PNCMap PNCMapCreatorSTurn::creat_pnc_map() // 生成地图
    {
        draw_straight_x(pnc_map_config_->pnc_map().road_length_/3.0, 1.0); // 绘制直线路径
        draw_arc(M_PI_2,1.0); // 绘制圆弧路径
        draw_arc(M_PI_2,-1.0); // 绘制圆弧路径
        
        //保证pnc_map_.midline.points为偶数，否则rviz显示有问题
        if(pnc_map_.midline.points.size() %2 == 1)
        {
            pnc_map_.midline.points.pop_back();
            /*if (!pnc_map_.left_boundary.points.empty())
            {
                pnc_map_.left_boundary.points.pop_back();
            }
            
            if (!pnc_map_.right_boundary.points.empty())
            {
                pnc_map_.right_boundary.points.pop_back();
            }*/
            
        }

        //把所有marker放入pnc_map_markerarray_中
        pnc_map_markerarray_.markers.emplace_back(pnc_map_.midline);
        pnc_map_markerarray_.markers.emplace_back(pnc_map_.left_boundary);
        pnc_map_markerarray_.markers.emplace_back(pnc_map_.right_boundary);

        return pnc_map_;
    }
    void PNCMapCreatorSTurn::init_pnc_map()
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
        pnc_map_.left_boundary.color.r = 1.0;             // 红色
        pnc_map_.left_boundary.color.g = 1.0;             // 绿色
        pnc_map_.left_boundary.color.b = 1.0;             // 蓝色

        // 右边界格式
        pnc_map_.right_boundary = pnc_map_.left_boundary;
        pnc_map_.right_boundary.id = 2;
    }
    /**
     * @brief 绘制直线路径
     *  @param length    要绘制的长度
     * @param plus_flag 方向标志，正值表示向前，负值表示向后
     * @param ratio     步长比例因子，用于控制点的分布密度
     */
    void PNCMapCreatorSTurn::draw_straight_x(const double &length, const double &plus_flag, const double &ratio)
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
    /**
     * @brief 绘制圆弧路径
     * 根据指定的角度范围绘制圆弧路径，同时更新中线、左边界和右边界的点坐标
     * @param angle     要绘制的弧角目标值
     * @param plus_flag 方向标志，正值表示顺时针，负值表示逆时针
     * @param ratio     步长比例因子，用于控制点的分布密度
     */
    void PNCMapCreatorSTurn::draw_arc(const double &angle, const double &plus_flag, const double &ratio)
    {
        double theta_temp = 0.0;
        while (theta_temp < angle)
        {
            pl_.x = p_mid_.x - pnc_map_config_->pnc_map().road_half_width_ * std::sin(theta_current_);
            pl_.y = p_mid_.y + pnc_map_config_->pnc_map().road_half_width_ * std::cos(theta_current_);
            pr_.x = p_mid_.x + pnc_map_config_->pnc_map().road_half_width_ * std::sin(theta_current_);
            pr_.y = p_mid_.y - pnc_map_config_->pnc_map().road_half_width_ * std::cos(theta_current_);

            pnc_map_.midline.points.emplace_back(p_mid_);
            pnc_map_.left_boundary.points.emplace_back(pl_);
            pnc_map_.right_boundary.points.emplace_back(pr_);

            double step_x = len_step_ * std::cos(theta_current_);
            double step_y = len_step_ * std::sin(theta_current_);

            p_mid_.x += step_x;
            p_mid_.y += step_y;

            theta_temp += theta_step_ * ratio;
            theta_current_ += theta_step_ * plus_flag * ratio;
        }
    }
}
