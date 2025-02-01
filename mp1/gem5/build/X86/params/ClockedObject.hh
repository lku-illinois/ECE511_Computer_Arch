/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__ClockedObject__
#define __PARAMS__ClockedObject__

namespace gem5 {
class ClockedObject;
} // namespace gem5
#include <cstddef>
#include "params/ClockDomain.hh"
#include <vector>
#include "params/PowerModel.hh"
#include <cstddef>
#include "params/PowerState.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct ClockedObjectParams
    : public SimObjectParams
{
    gem5::ClockDomain * clk_domain;
    std::vector< gem5::PowerModel * > power_model;
    gem5::PowerState * power_state;
};

} // namespace gem5

#endif // __PARAMS__ClockedObject__
