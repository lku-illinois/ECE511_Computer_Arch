/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_NoncoherentXBar_HH__
#define __DEBUG_NoncoherentXBar_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union NoncoherentXBar
{
    ~NoncoherentXBar() {}
    SimpleFlag flagNoncoherentXBar;

    NoncoherentXBar() : flagNoncoherentXBar("NoncoherentXBar", "", false) {}

} instanceNoncoherentXBar;
} // namespace unions

inline constexpr const auto& NoncoherentXBar =
    ::gem5::debug::unions::instanceNoncoherentXBar.flagNoncoherentXBar;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_NoncoherentXBar_HH__
