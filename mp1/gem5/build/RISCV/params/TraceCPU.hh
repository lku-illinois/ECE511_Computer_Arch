/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__TraceCPU__
#define __PARAMS__TraceCPU__

namespace gem5 {
class TraceCPU;
} // namespace gem5
#include <cstddef>
#include <string>
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include <string>
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

#include "params/ClockedObject.hh"

namespace gem5
{
struct TraceCPUParams
    : public ClockedObjectParams
{
    gem5::TraceCPU * create() const;
    std::string dataTraceFile;
    bool enableEarlyExit;
    double freqMultiplier;
    std::string instTraceFile;
    unsigned progressMsgInterval;
    unsigned sizeLoadBuffer;
    unsigned sizeROB;
    unsigned sizeStoreBuffer;
    gem5::System * system;
    unsigned int port_icache_port_connection_count;
    unsigned int port_dcache_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__TraceCPU__
