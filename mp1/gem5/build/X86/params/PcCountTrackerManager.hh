/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__PcCountTrackerManager__
#define __PARAMS__PcCountTrackerManager__

namespace gem5 {
class PcCountTrackerManager;
} // namespace gem5
#include <vector>
#include "cpu/probes/pc_count_pair.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct PcCountTrackerManagerParams
    : public SimObjectParams
{
    gem5::PcCountTrackerManager * create() const;
    std::vector< PcCountPair > targets;
};

} // namespace gem5

#endif // __PARAMS__PcCountTrackerManager__
