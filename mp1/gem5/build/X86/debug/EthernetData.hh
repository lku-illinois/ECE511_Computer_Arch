/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_EthernetData_HH__
#define __DEBUG_EthernetData_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union EthernetData
{
    ~EthernetData() {}
    SimpleFlag flagEthernetData;

    EthernetData() : flagEthernetData("EthernetData", "", false) {}

} instanceEthernetData;
} // namespace unions

inline constexpr const auto& EthernetData =
    ::gem5::debug::unions::instanceEthernetData.flagEthernetData;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_EthernetData_HH__
