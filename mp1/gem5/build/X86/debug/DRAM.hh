/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_DRAM_HH__
#define __DEBUG_DRAM_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union DRAM
{
    ~DRAM() {}
    SimpleFlag flagDRAM;

    DRAM() : flagDRAM("DRAM", "", false) {}

} instanceDRAM;
} // namespace unions

inline constexpr const auto& DRAM =
    ::gem5::debug::unions::instanceDRAM.flagDRAM;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_DRAM_HH__
