/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_MMU_HH__
#define __DEBUG_MMU_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union MMU
{
    ~MMU() {}
    SimpleFlag flagMMU;

    MMU() : flagMMU("MMU", "", false) {}

} instanceMMU;
} // namespace unions

inline constexpr const auto& MMU =
    ::gem5::debug::unions::instanceMMU.flagMMU;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_MMU_HH__
