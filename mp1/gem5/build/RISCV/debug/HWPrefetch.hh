/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_HWPrefetch_HH__
#define __DEBUG_HWPrefetch_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union HWPrefetch
{
    ~HWPrefetch() {}
    SimpleFlag flagHWPrefetch;

    HWPrefetch() : flagHWPrefetch("HWPrefetch", "", false) {}

} instanceHWPrefetch;
} // namespace unions

inline constexpr const auto& HWPrefetch =
    ::gem5::debug::unions::instanceHWPrefetch.flagHWPrefetch;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_HWPrefetch_HH__
