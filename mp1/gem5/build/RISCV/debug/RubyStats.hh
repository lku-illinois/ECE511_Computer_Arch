/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_RubyStats_HH__
#define __DEBUG_RubyStats_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union RubyStats
{
    ~RubyStats() {}
    SimpleFlag flagRubyStats;

    RubyStats() : flagRubyStats("RubyStats", "", false) {}

} instanceRubyStats;
} // namespace unions

inline constexpr const auto& RubyStats =
    ::gem5::debug::unions::instanceRubyStats.flagRubyStats;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_RubyStats_HH__
