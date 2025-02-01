/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__RiscvInterrupts__
#define __PARAMS__RiscvInterrupts__

namespace gem5 {
namespace RiscvISA {
class Interrupts;
} // namespace RiscvISA
} // namespace gem5
#include <vector>
#include "base/types.hh"

#include "params/BaseInterrupts.hh"

namespace gem5
{
struct RiscvInterruptsParams
    : public BaseInterruptsParams
{
    gem5::RiscvISA::Interrupts * create() const;
    std::vector< unsigned > local_interrupt_ids;
    unsigned int port_local_interrupt_pins_connection_count;
};

} // namespace gem5

#endif // __PARAMS__RiscvInterrupts__
