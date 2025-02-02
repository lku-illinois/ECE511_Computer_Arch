/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_RiscvMisc_HH__
#define __DEBUG_RiscvMisc_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union RiscvMisc
{
    ~RiscvMisc() {}
    SimpleFlag flagRiscvMisc;

    RiscvMisc() : flagRiscvMisc("RiscvMisc", "", false) {}

} instanceRiscvMisc;
} // namespace unions

inline constexpr const auto& RiscvMisc =
    ::gem5::debug::unions::instanceRiscvMisc.flagRiscvMisc;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_RiscvMisc_HH__
