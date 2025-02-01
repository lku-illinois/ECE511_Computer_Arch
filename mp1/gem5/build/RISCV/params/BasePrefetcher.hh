/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__BasePrefetcher__
#define __PARAMS__BasePrefetcher__

namespace gem5 {
namespace prefetch {
class Base;
} // namespace prefetch
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "params/System.hh"
#include <cstddef>

#include "params/ClockedObject.hh"

namespace gem5
{
struct BasePrefetcherParams
    : public ClockedObjectParams
{
    int block_size;
    bool on_data;
    bool on_inst;
    bool on_miss;
    bool on_read;
    bool on_write;
    uint64_t page_bytes;
    bool prefetch_on_access;
    bool prefetch_on_pf_hit;
    gem5::System * sys;
    bool use_virtual_addresses;
};

} // namespace gem5

#endif // __PARAMS__BasePrefetcher__
