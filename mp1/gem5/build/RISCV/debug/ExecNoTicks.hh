/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_ExecNoTicks_HH__
#define __DEBUG_ExecNoTicks_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
#include "debug/Exec.hh"
#include "debug/FmtTicksOff.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union ExecNoTicks
{
    ~ExecNoTicks() {}

    CompoundFlag flagExecNoTicks;

    ExecNoTicks() : flagExecNoTicks("ExecNoTicks", "",
        {
            (Flag *)&::gem5::debug::Exec,
            (Flag *)&::gem5::debug::FmtTicksOff
        }) {}

} instanceExecNoTicks;
} // namespace unions

inline constexpr const auto& ExecNoTicks =
    ::gem5::debug::unions::instanceExecNoTicks.flagExecNoTicks;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_ExecNoTicks_HH__
