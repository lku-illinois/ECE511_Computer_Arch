/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__CheckerCPU__
#define __PARAMS__CheckerCPU__

namespace gem5 {
class CheckerCPU;
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include <cstddef>

#include "params/BaseCPU.hh"

namespace gem5
{
struct CheckerCPUParams
    : public BaseCPUParams
{
    bool exitOnError;
    bool updateOnError;
    bool warnOnlyOnLoadError;
};

} // namespace gem5

#endif // __PARAMS__CheckerCPU__
