/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__PMP__
#define __PARAMS__PMP__

namespace gem5 {
namespace RiscvISA {
class PMP;
} // namespace RiscvISA
} // namespace gem5
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct PMPParams
    : public SimObjectParams
{
    gem5::RiscvISA::PMP * create() const;
    int pmp_entries;
};

} // namespace gem5

#endif // __PARAMS__PMP__
