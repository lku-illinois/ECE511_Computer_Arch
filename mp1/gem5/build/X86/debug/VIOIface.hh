/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:143
 */

#ifndef __DEBUG_VIOIface_HH__
#define __DEBUG_VIOIface_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

namespace debug
{

namespace unions
{
inline union VIOIface
{
    ~VIOIface() {}
    SimpleFlag flagVIOIface;

    VIOIface() : flagVIOIface("VIOIface", "VirtIO transport", false) {}

} instanceVIOIface;
} // namespace unions

inline constexpr const auto& VIOIface =
    ::gem5::debug::unions::instanceVIOIface.flagVIOIface;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_VIOIface_HH__
