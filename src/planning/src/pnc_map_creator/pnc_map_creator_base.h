#ifndef PNC_MAP_CREATOR_H_
#define PNC_MAP_CREATOR_H_

#include "rclcpp/rclcpp.hpp"
#include "base_msgs/msg/pnc_map.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "visualization_msgs/msg/marker_array.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "config_reader.h"

namespace Planning
{
    using base_msgs::msg::PNCMap;
    using geometry_msgs::msg::Point;
    using visualization_msgs::msg::Marker;
    using visualization_msgs::msg::MarkerArray;

    enum class PNCMapType // 地图类型
    {
        STRAIGHT,  // 直道
        STURN,     // S弯
        CROSSROAD, // 十字路口
        TJUNCTION, // T型路口
    };
    class PNCMapCreatorBase
    {
    public:
        virtual PNCMap creat_pnc_map() = 0;                                             // 生成地图
        inline PNCMap pnc_map() const { return pnc_map_; }                              // 获取地图
        inline MarkerArray pnc_map_markerarray() const { return pnc_map_markerarray_; } // 获取rviz地图
        virtual ~PNCMapCreatorBase() {}

    protected:
        std::unique_ptr<ConfigReader> pnc_map_config_; // 配置文件读取器
        int map_type_ = 0;                              // 地图类型
        PNCMap pnc_map_;                               // pnc地图
        MarkerArray pnc_map_markerarray_;              // pnc地图可视化rviz

        Point p_mid_, pl_, pr_;      // 中间点，左边界点，右边界点
        double theta_current_ = 0.0; // 当前航向角
        double len_step_ = 0.0;      // 步长
        double theta_step_ = 0.0;    // 角度步长

    private:
    };
} // namespace /* namespace_name */
#endif // PNC_MAP_CREATOR_H_
