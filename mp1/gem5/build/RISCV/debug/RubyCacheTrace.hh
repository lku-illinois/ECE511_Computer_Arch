/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_RubyCacheTrace_HH__
#define __DEBUG_RubyCacheTrace_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union RubyCacheTrace
{
    ~RubyCacheTrace() {}
    SimpleFlag flagRubyCacheTrace;

    RubyCacheTrace() : flagRubyCacheTrace("RubyCacheTrace", "", false) {}

} instanceRubyCacheTrace;
} // namespace unions

inline constexpr const auto& RubyCacheTrace =
    ::gem5::debug::unions::instanceRubyCacheTrace.flagRubyCacheTrace;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_RubyCacheTrace_HH__
