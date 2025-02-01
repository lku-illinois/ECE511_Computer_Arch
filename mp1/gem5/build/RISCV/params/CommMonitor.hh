/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__CommMonitor__
#define __PARAMS__CommMonitor__

namespace gem5 {
class CommMonitor;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/System.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct CommMonitorParams
    : public SimObjectParams
{
    gem5::CommMonitor * create() const;
    unsigned bandwidth_bins;
    unsigned burst_length_bins;
    bool disable_addr_dists;
    bool disable_bandwidth_hists;
    bool disable_burst_length_hists;
    bool disable_itt_dists;
    bool disable_latency_hists;
    bool disable_outstanding_hists;
    bool disable_transaction_hists;
    unsigned itt_bins;
    Tick itt_max_bin;
    unsigned latency_bins;
    unsigned outstanding_bins;
    Addr read_addr_mask;
    Tick sample_period;
    gem5::System * system;
    unsigned transaction_bins;
    Addr write_addr_mask;
    unsigned int port_mem_side_port_connection_count;
    unsigned int port_cpu_side_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__CommMonitor__
