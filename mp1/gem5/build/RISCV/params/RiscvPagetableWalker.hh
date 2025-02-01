/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__RiscvPagetableWalker__
#define __PARAMS__RiscvPagetableWalker__

namespace gem5 {
namespace RiscvISA {
class Walker;
} // namespace RiscvISA
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/BasePMAChecker.hh"
#include <cstddef>
#include "params/PMP.hh"
#include <cstddef>
#include "params/System.hh"

#include "params/ClockedObject.hh"

namespace gem5
{
struct RiscvPagetableWalkerParams
    : public ClockedObjectParams
{
    gem5::RiscvISA::Walker * create() const;
    unsigned num_squash_per_cycle;
    gem5::RiscvISA::BasePMAChecker * pma_checker;
    gem5::RiscvISA::PMP * pmp;
    gem5::System * system;
    unsigned int port_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__RiscvPagetableWalker__
