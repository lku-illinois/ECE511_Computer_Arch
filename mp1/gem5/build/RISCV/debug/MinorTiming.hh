/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_MinorTiming_HH__
#define __DEBUG_MinorTiming_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union MinorTiming
{
    ~MinorTiming() {}
    SimpleFlag flagMinorTiming;

    MinorTiming() : flagMinorTiming("MinorTiming", "Extra timing for instructions", false) {}

} instanceMinorTiming;
} // namespace unions

inline constexpr const auto& MinorTiming =
    ::gem5::debug::unions::instanceMinorTiming.flagMinorTiming;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_MinorTiming_HH__
