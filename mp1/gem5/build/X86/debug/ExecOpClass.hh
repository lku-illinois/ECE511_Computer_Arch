/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_ExecOpClass_HH__
#define __DEBUG_ExecOpClass_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union ExecOpClass
{
    ~ExecOpClass() {}
    SimpleFlag flagExecOpClass;

    ExecOpClass() : flagExecOpClass("ExecOpClass", "Format: Include operand class", false) {}

} instanceExecOpClass;
} // namespace unions

inline constexpr const auto& ExecOpClass =
    ::gem5::debug::unions::instanceExecOpClass.flagExecOpClass;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_ExecOpClass_HH__
