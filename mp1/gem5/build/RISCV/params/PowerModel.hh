/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__PowerModel__
#define __PARAMS__PowerModel__

namespace gem5 {
class PowerModel;
} // namespace gem5
#include <cstddef>
#include "base/temperature.hh"
#include <vector>
#include "params/PowerModelState.hh"
#include <cstddef>
#include "enums/PMType.hh"
#include <cstddef>
#include "params/SubSystem.hh"

#include "params/SimObject.hh"

#include "enums/PMType.hh"

namespace gem5
{
struct PowerModelParams
    : public SimObjectParams
{
    gem5::PowerModel * create() const;
    Temperature ambient_temp;
    std::vector< gem5::PowerModelState * > pm;
    enums::PMType pm_type;
    gem5::SubSystem * subsystem;
};

} // namespace gem5

#endif // __PARAMS__PowerModel__
