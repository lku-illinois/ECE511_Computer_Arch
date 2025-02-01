/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__FUPool__
#define __PARAMS__FUPool__

namespace gem5 {
namespace o3 {
class FUPool;
} // namespace o3
} // namespace gem5
#include <vector>
#include "params/FUDesc.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct FUPoolParams
    : public SimObjectParams
{
    gem5::o3::FUPool * create() const;
    std::vector< gem5::FUDesc * > FUList;
};

} // namespace gem5

#endif // __PARAMS__FUPool__
