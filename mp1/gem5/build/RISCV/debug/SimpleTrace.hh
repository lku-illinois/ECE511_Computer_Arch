/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_SimpleTrace_HH__
#define __DEBUG_SimpleTrace_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union SimpleTrace
{
    ~SimpleTrace() {}
    SimpleFlag flagSimpleTrace;

    SimpleTrace() : flagSimpleTrace("SimpleTrace", "", false) {}

} instanceSimpleTrace;
} // namespace unions

inline constexpr const auto& SimpleTrace =
    ::gem5::debug::unions::instanceSimpleTrace.flagSimpleTrace;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_SimpleTrace_HH__
