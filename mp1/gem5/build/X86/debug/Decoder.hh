/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_Decoder_HH__
#define __DEBUG_Decoder_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union Decoder
{
    ~Decoder() {}
    SimpleFlag flagDecoder;

    Decoder() : flagDecoder("Decoder", "Decoder debug output", false) {}

} instanceDecoder;
} // namespace unions

inline constexpr const auto& Decoder =
    ::gem5::debug::unions::instanceDecoder.flagDecoder;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Decoder_HH__
