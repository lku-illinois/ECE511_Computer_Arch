/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_DistEthernetPkt_HH__
#define __DEBUG_DistEthernetPkt_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union DistEthernetPkt
{
    ~DistEthernetPkt() {}
    SimpleFlag flagDistEthernetPkt;

    DistEthernetPkt() : flagDistEthernetPkt("DistEthernetPkt", "", false) {}

} instanceDistEthernetPkt;
} // namespace unions

inline constexpr const auto& DistEthernetPkt =
    ::gem5::debug::unions::instanceDistEthernetPkt.flagDistEthernetPkt;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_DistEthernetPkt_HH__
