/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__LupioPIC__
#define __PARAMS__LupioPIC__

namespace gem5 {
class LupioPIC;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/BasicPioDevice.hh"

namespace gem5
{
struct LupioPICParams
    : public BasicPioDeviceParams
{
    gem5::LupioPIC * create() const;
    int int_type;
    int n_src;
    int num_threads;
    Addr pio_size;
};

} // namespace gem5

#endif // __PARAMS__LupioPIC__
