/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_DistEthernetCmd_HH__
#define __DEBUG_DistEthernetCmd_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union DistEthernetCmd
{
    ~DistEthernetCmd() {}
    SimpleFlag flagDistEthernetCmd;

    DistEthernetCmd() : flagDistEthernetCmd("DistEthernetCmd", "", false) {}

} instanceDistEthernetCmd;
} // namespace unions

inline constexpr const auto& DistEthernetCmd =
    ::gem5::debug::unions::instanceDistEthernetCmd.flagDistEthernetCmd;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_DistEthernetCmd_HH__
