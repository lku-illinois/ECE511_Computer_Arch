/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__DuelingRP__
#define __PARAMS__DuelingRP__

namespace gem5 {
namespace replacement_policy {
class Dueling;
} // namespace replacement_policy
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/BaseReplacementPolicy.hh"
#include <cstddef>
#include "params/BaseReplacementPolicy.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/BaseReplacementPolicy.hh"

namespace gem5
{
struct DuelingRPParams
    : public BaseReplacementPolicyParams
{
    gem5::replacement_policy::Dueling * create() const;
    unsigned constituency_size;
    gem5::replacement_policy::Base * replacement_policy_a;
    gem5::replacement_policy::Base * replacement_policy_b;
    unsigned team_size;
};

} // namespace gem5

#endif // __PARAMS__DuelingRP__
