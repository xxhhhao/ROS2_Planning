#ifndef GLOBAL_PLANNER_NORMAL_H_
#define GLOBAL_PLANNER_NORMAL_H_

#include "global_planner_base.h"
#include <cmath>

namespace Planning
{
    class GlobalPlannerNormal : public GlobalPlannerBase // 普通全局路径规划器
    {
    public:
        GlobalPlannerNormal();
        Path search_global_path(const PNCMap &pnc_map) override;

    private:
    };
} // namespace planning
#endif // GLOBAL_PLANNER_NORMAL_H_
