/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_VtoPhys_HH__
#define __DEBUG_VtoPhys_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union VtoPhys
{
    ~VtoPhys() {}
    SimpleFlag flagVtoPhys;

    VtoPhys() : flagVtoPhys("VtoPhys", "", false) {}

} instanceVtoPhys;
} // namespace unions

inline constexpr const auto& VtoPhys =
    ::gem5::debug::unions::instanceVtoPhys.flagVtoPhys;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_VtoPhys_HH__
