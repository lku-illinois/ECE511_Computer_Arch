/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_Printf_HH__
#define __DEBUG_Printf_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Printf
{
    ~Printf() {}
    SimpleFlag flagPrintf;

    Printf() : flagPrintf("Printf", "", false) {}

} instancePrintf;
} // namespace unions

inline constexpr const auto& Printf =
    ::gem5::debug::unions::instancePrintf.flagPrintf;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Printf_HH__
