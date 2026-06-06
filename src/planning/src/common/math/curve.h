#ifndef CURVE_H_
#define CURVE_H_

#include "rclcpp/rclcpp.hpp"
#include "base_msgs/msg/referline.hpp"
#include "base_msgs/msg/local_path.hpp"
#include "nav_msgs/msg/path.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"

#include <cmath>

namespace Planning
{
    using base_msgs::msg::LocalPath;
    using base_msgs::msg::Referline;
    using geometry_msgs::msg::PoseStamped;
    using nav_msgs::msg::Path;

    constexpr double kMathEpsilon = 1.0e-6;

    class Curve
    {
    public:
        Curve()=default;

        //匹配点的下标
        static int find_match_point(const Path &path,const int &last_match_point_index,const PoseStamped &target_point);

        //计算投影点参数
        static void cal_projection_param(Referline &refer_line);
    private:

    };
    }  // namespace Planning
#endif  // CURVE_H_
