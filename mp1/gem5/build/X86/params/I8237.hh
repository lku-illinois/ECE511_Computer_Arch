/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__I8237__
#define __PARAMS__I8237__

namespace gem5 {
namespace X86ISA {
class I8237;
} // namespace X86ISA
} // namespace gem5

#include "params/BasicPioDevice.hh"

namespace gem5
{
struct I8237Params
    : public BasicPioDeviceParams
{
    gem5::X86ISA::I8237 * create() const;
};

} // namespace gem5

#endif // __PARAMS__I8237__
