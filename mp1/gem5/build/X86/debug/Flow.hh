/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_Flow_HH__
#define __DEBUG_Flow_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Flow
{
    ~Flow() {}
    SimpleFlag flagFlow;

    Flow() : flagFlow("Flow", "", false) {}

} instanceFlow;
} // namespace unions

inline constexpr const auto& Flow =
    ::gem5::debug::unions::instanceFlow.flagFlow;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Flow_HH__
