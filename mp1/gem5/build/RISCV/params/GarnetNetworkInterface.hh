/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__GarnetNetworkInterface__
#define __PARAMS__GarnetNetworkInterface__

namespace gem5 {
namespace ruby {
namespace garnet {
class NetworkInterface;
} // namespace garnet
} // namespace ruby
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/ClockedObject.hh"

namespace gem5
{
struct GarnetNetworkInterfaceParams
    : public ClockedObjectParams
{
    gem5::ruby::garnet::NetworkInterface * create() const;
    uint32_t garnet_deadlock_threshold;
    uint32_t id;
    uint32_t vcs_per_vnet;
    uint32_t virt_nets;
};

} // namespace gem5

#endif // __PARAMS__GarnetNetworkInterface__
