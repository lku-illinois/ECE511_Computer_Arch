/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__TimingExprSrcReg__
#define __PARAMS__TimingExprSrcReg__

namespace gem5 {
class TimingExprSrcReg;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"

#include "params/TimingExpr.hh"

namespace gem5
{
struct TimingExprSrcRegParams
    : public TimingExprParams
{
    gem5::TimingExprSrcReg * create() const;
    unsigned index;
};

} // namespace gem5

#endif // __PARAMS__TimingExprSrcReg__
