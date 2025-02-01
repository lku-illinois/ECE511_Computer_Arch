/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_Checker_HH__
#define __DEBUG_Checker_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Checker
{
    ~Checker() {}
    SimpleFlag flagChecker;

    Checker() : flagChecker("Checker", "", false) {}

} instanceChecker;
} // namespace unions

inline constexpr const auto& Checker =
    ::gem5::debug::unions::instanceChecker.flagChecker;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Checker_HH__
