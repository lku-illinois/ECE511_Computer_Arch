/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_TraceCPUInst_HH__
#define __DEBUG_TraceCPUInst_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union TraceCPUInst
{
    ~TraceCPUInst() {}
    SimpleFlag flagTraceCPUInst;

    TraceCPUInst() : flagTraceCPUInst("TraceCPUInst", "", false) {}

} instanceTraceCPUInst;
} // namespace unions

inline constexpr const auto& TraceCPUInst =
    ::gem5::debug::unions::instanceTraceCPUInst.flagTraceCPUInst;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_TraceCPUInst_HH__
