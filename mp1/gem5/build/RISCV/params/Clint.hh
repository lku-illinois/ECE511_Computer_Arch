/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__Clint__
#define __PARAMS__Clint__

namespace gem5 {
class Clint;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>

#include "params/BasicPioDevice.hh"

namespace gem5
{
struct ClintParams
    : public BasicPioDeviceParams
{
    gem5::Clint * create() const;
    uint64_t mtimecmp_reset_value;
    int num_threads;
    Addr pio_size;
    bool reset_mtimecmp;
    unsigned int port_int_pin_connection_count;
    unsigned int port_reset_connection_count;
};

} // namespace gem5

#endif // __PARAMS__Clint__
