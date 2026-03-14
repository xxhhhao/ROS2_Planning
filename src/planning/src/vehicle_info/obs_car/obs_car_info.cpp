#include"obs_car_info.h"


namespace Planning
{
    ObsCar::ObsCar()
    {
        RCLCPP_INFO(rclcpp::get_logger("vehicle"),"obs_car created!");
    }
}