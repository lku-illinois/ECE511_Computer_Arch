/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_FreeList_HH__
#define __DEBUG_FreeList_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union FreeList
{
    ~FreeList() {}
    SimpleFlag flagFreeList;

    FreeList() : flagFreeList("FreeList", "", false) {}

} instanceFreeList;
} // namespace unions

inline constexpr const auto& FreeList =
    ::gem5::debug::unions::instanceFreeList.flagFreeList;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_FreeList_HH__
