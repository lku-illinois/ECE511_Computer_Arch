/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_WorkItems_HH__
#define __DEBUG_WorkItems_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union WorkItems
{
    ~WorkItems() {}
    SimpleFlag flagWorkItems;

    WorkItems() : flagWorkItems("WorkItems", "", false) {}

} instanceWorkItems;
} // namespace unions

inline constexpr const auto& WorkItems =
    ::gem5::debug::unions::instanceWorkItems.flagWorkItems;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_WorkItems_HH__
