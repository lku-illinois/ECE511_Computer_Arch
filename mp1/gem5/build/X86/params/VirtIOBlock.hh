/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__VirtIOBlock__
#define __PARAMS__VirtIOBlock__

namespace gem5 {
class VirtIOBlock;
} // namespace gem5
#include <cstddef>
#include "params/DiskImage.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/VirtIODeviceBase.hh"

namespace gem5
{
struct VirtIOBlockParams
    : public VirtIODeviceBaseParams
{
    gem5::VirtIOBlock * create() const;
    gem5::DiskImage * image;
    unsigned queueSize;
};

} // namespace gem5

#endif // __PARAMS__VirtIOBlock__
