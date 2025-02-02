/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__BaseKvmCPU__
#define __PARAMS__BaseKvmCPU__

namespace gem5 {
class BaseKvmCPU;
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>

#include "params/BaseCPU.hh"

namespace gem5
{
struct BaseKvmCPUParams
    : public BaseCPUParams
{
    bool alwaysSyncTC;
    double hostFactor;
    Tick hostFreq;
    bool useCoalescedMMIO;
    bool usePerf;
    bool usePerfOverflow;
};

} // namespace gem5

#endif // __PARAMS__BaseKvmCPU__
