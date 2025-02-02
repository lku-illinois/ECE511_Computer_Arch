/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_I8042_HH__
#define __DEBUG_I8042_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union I8042
{
    ~I8042() {}
    SimpleFlag flagI8042;

    I8042() : flagI8042("I8042", "The I8042 keyboard controller", false) {}

} instanceI8042;
} // namespace unions

inline constexpr const auto& I8042 =
    ::gem5::debug::unions::instanceI8042.flagI8042;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_I8042_HH__
