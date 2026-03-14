#ifndef PNC_MAP_SERVER_H_
#define PNC_MAP_SERVER_H_

#include "rclcpp/rclcpp.hpp"
#include "pnc_map_creator_straight.h"
#include "pnc_map_creator_sturn.h"

namespace Planning
{
class PNCMapServer : public rclcpp::Node
{
public:
    PNCMapServer();

private:

};
}  // namespace /* namespace_name */
#endif  // PNC_MAP_SERVER_H_
