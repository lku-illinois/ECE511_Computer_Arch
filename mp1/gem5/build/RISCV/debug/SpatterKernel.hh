/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_SpatterKernel_HH__
#define __DEBUG_SpatterKernel_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union SpatterKernel
{
    ~SpatterKernel() {}
    SimpleFlag flagSpatterKernel;

    SpatterKernel() : flagSpatterKernel("SpatterKernel", "", false) {}

} instanceSpatterKernel;
} // namespace unions

inline constexpr const auto& SpatterKernel =
    ::gem5::debug::unions::instanceSpatterKernel.flagSpatterKernel;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_SpatterKernel_HH__
