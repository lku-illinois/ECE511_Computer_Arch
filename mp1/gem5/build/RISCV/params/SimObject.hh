/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__SimObject__
#define __PARAMS__SimObject__

#include <string>
namespace gem5 {
class SimObject;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"

namespace gem5
{
struct SimObjectParams
{
    virtual ~SimObjectParams() = default;

    std::string name;
        
    uint32_t eventq_index;
};

} // namespace gem5

#endif // __PARAMS__SimObject__
