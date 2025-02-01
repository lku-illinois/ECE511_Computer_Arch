/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_StackDist_HH__
#define __DEBUG_StackDist_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union StackDist
{
    ~StackDist() {}
    SimpleFlag flagStackDist;

    StackDist() : flagStackDist("StackDist", "", false) {}

} instanceStackDist;
} // namespace unions

inline constexpr const auto& StackDist =
    ::gem5::debug::unions::instanceStackDist.flagStackDist;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_StackDist_HH__
