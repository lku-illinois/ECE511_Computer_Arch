/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_PseudoInst_HH__
#define __DEBUG_PseudoInst_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union PseudoInst
{
    ~PseudoInst() {}
    SimpleFlag flagPseudoInst;

    PseudoInst() : flagPseudoInst("PseudoInst", "", false) {}

} instancePseudoInst;
} // namespace unions

inline constexpr const auto& PseudoInst =
    ::gem5::debug::unions::instancePseudoInst.flagPseudoInst;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_PseudoInst_HH__
