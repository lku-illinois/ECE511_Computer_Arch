/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_TLB_HH__
#define __DEBUG_TLB_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union TLB
{
    ~TLB() {}
    SimpleFlag flagTLB;

    TLB() : flagTLB("TLB", "", false) {}

} instanceTLB;
} // namespace unions

inline constexpr const auto& TLB =
    ::gem5::debug::unions::instanceTLB.flagTLB;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_TLB_HH__
