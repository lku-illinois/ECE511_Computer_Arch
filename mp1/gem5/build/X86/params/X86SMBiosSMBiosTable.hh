/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__X86SMBiosSMBiosTable__
#define __PARAMS__X86SMBiosSMBiosTable__

namespace gem5 {
namespace X86ISA {
namespace smbios {
class SMBiosTable;
} // namespace smbios
} // namespace X86ISA
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <vector>
#include "params/X86SMBiosSMBiosStructure.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct X86SMBiosSMBiosTableParams
    : public SimObjectParams
{
    gem5::X86ISA::smbios::SMBiosTable * create() const;
    uint8_t major_version;
    uint8_t minor_version;
    std::vector< gem5::X86ISA::smbios::SMBiosStructure * > structures;
};

} // namespace gem5

#endif // __PARAMS__X86SMBiosSMBiosTable__
