/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_LupioPIC_HH__
#define __DEBUG_LupioPIC_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union LupioPIC
{
    ~LupioPIC() {}
    SimpleFlag flagLupioPIC;

    LupioPIC() : flagLupioPIC("LupioPIC", "", false) {}

} instanceLupioPIC;
} // namespace unions

inline constexpr const auto& LupioPIC =
    ::gem5::debug::unions::instanceLupioPIC.flagLupioPIC;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_LupioPIC_HH__
