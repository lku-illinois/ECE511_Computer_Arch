/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_VirtIOMMIO_HH__
#define __DEBUG_VirtIOMMIO_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union VirtIOMMIO
{
    ~VirtIOMMIO() {}
    SimpleFlag flagVirtIOMMIO;

    VirtIOMMIO() : flagVirtIOMMIO("VirtIOMMIO", "", false) {}

} instanceVirtIOMMIO;
} // namespace unions

inline constexpr const auto& VirtIOMMIO =
    ::gem5::debug::unions::instanceVirtIOMMIO.flagVirtIOMMIO;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_VirtIOMMIO_HH__
