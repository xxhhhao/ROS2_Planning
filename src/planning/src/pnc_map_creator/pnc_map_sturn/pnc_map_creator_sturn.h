#ifndef PNC_MAP_CREATOR_STURN_H_
#define PNC_MAP_CREATOR_STURN_H_

#include "pnc_map_creator_base.h"

namespace Planning
{
class PNCMapCreatorSTurn : public PNCMapCreatorBase //S弯地图
{
public:
    PNCMapCreatorSTurn();
    PNCMap creat_pnc_map() override;
protected:
   


private:
    void init_pnc_map();
    void draw_straight_x(const double &length, const double &plus_flag, const double &ratio = 1.0);
    void draw_arc(const double &angle,const double &plus_flag, const double &ratio=1.0);

};
}  // namespace /* namespace_name */
#endif  // PNC_MAP_CREATOR_STURN_H_
