/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_VecRegs_HH__
#define __DEBUG_VecRegs_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union VecRegs
{
    ~VecRegs() {}
    SimpleFlag flagVecRegs;

    VecRegs() : flagVecRegs("VecRegs", "", false) {}

} instanceVecRegs;
} // namespace unions

inline constexpr const auto& VecRegs =
    ::gem5::debug::unions::instanceVecRegs.flagVecRegs;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_VecRegs_HH__
