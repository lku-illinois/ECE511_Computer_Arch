/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_Event_HH__
#define __DEBUG_Event_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Event
{
    ~Event() {}
    SimpleFlag flagEvent;

    Event() : flagEvent("Event", "", false) {}

} instanceEvent;
} // namespace unions

inline constexpr const auto& Event =
    ::gem5::debug::unions::instanceEvent.flagEvent;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Event_HH__
