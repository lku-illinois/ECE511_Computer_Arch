/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__BaseTimingSimpleCPU__
#define __PARAMS__BaseTimingSimpleCPU__

namespace gem5 {
class TimingSimpleCPU;
} // namespace gem5

#include "params/BaseSimpleCPU.hh"

namespace gem5
{
struct BaseTimingSimpleCPUParams
    : public BaseSimpleCPUParams
{
    gem5::TimingSimpleCPU * create() const;
};

} // namespace gem5

#endif // __PARAMS__BaseTimingSimpleCPU__
