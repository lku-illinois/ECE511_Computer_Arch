/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_PcSpeaker_HH__
#define __DEBUG_PcSpeaker_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union PcSpeaker
{
    ~PcSpeaker() {}
    SimpleFlag flagPcSpeaker;

    PcSpeaker() : flagPcSpeaker("PcSpeaker", "", false) {}

} instancePcSpeaker;
} // namespace unions

inline constexpr const auto& PcSpeaker =
    ::gem5::debug::unions::instancePcSpeaker.flagPcSpeaker;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_PcSpeaker_HH__
