/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_FloatRegs_HH__
#define __DEBUG_FloatRegs_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union FloatRegs
{
    ~FloatRegs() {}
    SimpleFlag flagFloatRegs;

    FloatRegs() : flagFloatRegs("FloatRegs", "", false) {}

} instanceFloatRegs;
} // namespace unions

inline constexpr const auto& FloatRegs =
    ::gem5::debug::unions::instanceFloatRegs.flagFloatRegs;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_FloatRegs_HH__
