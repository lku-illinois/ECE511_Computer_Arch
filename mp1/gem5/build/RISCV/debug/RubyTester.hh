/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_RubyTester_HH__
#define __DEBUG_RubyTester_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union RubyTester
{
    ~RubyTester() {}
    SimpleFlag flagRubyTester;

    RubyTester() : flagRubyTester("RubyTester", "", false) {}

} instanceRubyTester;
} // namespace unions

inline constexpr const auto& RubyTester =
    ::gem5::debug::unions::instanceRubyTester.flagRubyTester;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_RubyTester_HH__
