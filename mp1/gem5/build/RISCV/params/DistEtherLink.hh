/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__DistEtherLink__
#define __PARAMS__DistEtherLink__

namespace gem5 {
class DistEtherLink;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "params/EtherDump.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct DistEtherLinkParams
    : public SimObjectParams
{
    gem5::DistEtherLink * create() const;
    Tick delay;
    Tick delay_var;
    uint32_t dist_rank;
    uint32_t dist_size;
    bool dist_sync_on_pseudo_op;
    gem5::EtherDump * dump;
    bool is_switch;
    uint32_t num_nodes;
    std::string server_name;
    uint32_t server_port;
    float speed;
    Tick sync_repeat;
    Tick sync_start;
    unsigned int port_int0_connection_count;
};

} // namespace gem5

#endif // __PARAMS__DistEtherLink__
