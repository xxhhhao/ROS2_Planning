#include"main_car_info.h"


namespace Planning
{
    MainCar::MainCar()
    {
        RCLCPP_INFO(rclcpp::get_logger("vehicle"),"main_car created!");
    }
}