/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__StridePrefetcherHashedSetAssociative__
#define __PARAMS__StridePrefetcherHashedSetAssociative__

namespace gem5 {
namespace prefetch {
class StridePrefetcherHashedSetAssociative;
} // namespace prefetch
} // namespace gem5

#include "params/TaggedSetAssociative.hh"

namespace gem5
{
struct StridePrefetcherHashedSetAssociativeParams
    : public TaggedSetAssociativeParams
{
    gem5::prefetch::StridePrefetcherHashedSetAssociative * create() const;
};

} // namespace gem5

#endif // __PARAMS__StridePrefetcherHashedSetAssociative__
