/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_SimpleCPU_HH__
#define __DEBUG_SimpleCPU_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union SimpleCPU
{
    ~SimpleCPU() {}
    SimpleFlag flagSimpleCPU;

    SimpleCPU() : flagSimpleCPU("SimpleCPU", "", false) {}

} instanceSimpleCPU;
} // namespace unions

inline constexpr const auto& SimpleCPU =
    ::gem5::debug::unions::instanceSimpleCPU.flagSimpleCPU;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_SimpleCPU_HH__
