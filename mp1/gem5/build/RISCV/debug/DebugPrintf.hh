/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_DebugPrintf_HH__
#define __DEBUG_DebugPrintf_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union DebugPrintf
{
    ~DebugPrintf() {}
    SimpleFlag flagDebugPrintf;

    DebugPrintf() : flagDebugPrintf("DebugPrintf", "", false) {}

} instanceDebugPrintf;
} // namespace unions

inline constexpr const auto& DebugPrintf =
    ::gem5::debug::unions::instanceDebugPrintf.flagDebugPrintf;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_DebugPrintf_HH__
