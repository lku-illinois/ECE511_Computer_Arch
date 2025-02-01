/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_SyscallAll_HH__
#define __DEBUG_SyscallAll_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
#include "debug/SyscallBase.hh"
#include "debug/SyscallVerbose.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union SyscallAll
{
    ~SyscallAll() {}

    CompoundFlag flagSyscallAll;

    SyscallAll() : flagSyscallAll("SyscallAll", "",
        {
            (Flag *)&::gem5::debug::SyscallBase,
            (Flag *)&::gem5::debug::SyscallVerbose
        }) {}

} instanceSyscallAll;
} // namespace unions

inline constexpr const auto& SyscallAll =
    ::gem5::debug::unions::instanceSyscallAll.flagSyscallAll;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_SyscallAll_HH__
