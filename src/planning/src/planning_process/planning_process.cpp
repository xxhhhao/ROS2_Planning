#include"planning_process.h"

namespace Planning
{
   PlanningProcess::PlanningProcess() : Node("planning_node")
  {
    RCLCPP_INFO(this->get_logger(),"planning_process created!");

    process_config_ = std::make_unique<ConfigerReader>();
    process_config_->read_planning_process_config();
    auto obs_dis = process_config_->process().obs_dis_;

    RCLCPP_INFO(this->get_logger(),"[obs_dis]: %2.f", obs_dis);
  }

  bool PlanningProcess::process()
  {
      return true;
  }

}