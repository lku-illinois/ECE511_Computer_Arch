/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_LupioTMR_HH__
#define __DEBUG_LupioTMR_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union LupioTMR
{
    ~LupioTMR() {}
    SimpleFlag flagLupioTMR;

    LupioTMR() : flagLupioTMR("LupioTMR", "", false) {}

} instanceLupioTMR;
} // namespace unions

inline constexpr const auto& LupioTMR =
    ::gem5::debug::unions::instanceLupioTMR.flagLupioTMR;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_LupioTMR_HH__
