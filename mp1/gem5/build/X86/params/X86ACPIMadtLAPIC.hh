/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__X86ACPIMadtLAPIC__
#define __PARAMS__X86ACPIMadtLAPIC__

namespace gem5 {
namespace X86ISA {
namespace ACPI {
namespace MADT {
class LAPIC;
} // namespace MADT
} // namespace ACPI
} // namespace X86ISA
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/X86ACPIMadtRecord.hh"

namespace gem5
{
struct X86ACPIMadtLAPICParams
    : public X86ACPIMadtRecordParams
{
    gem5::X86ISA::ACPI::MADT::LAPIC * create() const;
    uint8_t acpi_processor_id;
    uint8_t apic_id;
    uint32_t flags;
};

} // namespace gem5

#endif // __PARAMS__X86ACPIMadtLAPIC__
