/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__BIPRP__
#define __PARAMS__BIPRP__

namespace gem5 {
namespace replacement_policy {
class BIP;
} // namespace replacement_policy
} // namespace gem5
#include <cstddef>
#include "base/types.hh"

#include "params/LRURP.hh"

namespace gem5
{
struct BIPRPParams
    : public LRURPParams
{
    gem5::replacement_policy::BIP * create() const;
    int btp;
};

} // namespace gem5

#endif // __PARAMS__BIPRP__
