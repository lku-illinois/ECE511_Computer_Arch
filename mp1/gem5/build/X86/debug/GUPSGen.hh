/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_GUPSGen_HH__
#define __DEBUG_GUPSGen_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union GUPSGen
{
    ~GUPSGen() {}
    SimpleFlag flagGUPSGen;

    GUPSGen() : flagGUPSGen("GUPSGen", "", false) {}

} instanceGUPSGen;
} // namespace unions

inline constexpr const auto& GUPSGen =
    ::gem5::debug::unions::instanceGUPSGen.flagGUPSGen;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_GUPSGen_HH__
