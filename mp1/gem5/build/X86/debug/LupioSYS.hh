/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_LupioSYS_HH__
#define __DEBUG_LupioSYS_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union LupioSYS
{
    ~LupioSYS() {}
    SimpleFlag flagLupioSYS;

    LupioSYS() : flagLupioSYS("LupioSYS", "", false) {}

} instanceLupioSYS;
} // namespace unions

inline constexpr const auto& LupioSYS =
    ::gem5::debug::unions::instanceLupioSYS.flagLupioSYS;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_LupioSYS_HH__
