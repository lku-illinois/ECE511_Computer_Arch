/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__Base32Delta8__
#define __PARAMS__Base32Delta8__

namespace gem5 {
namespace compression {
class Base32Delta8;
} // namespace compression
} // namespace gem5

#include "params/BaseDictionaryCompressor.hh"

namespace gem5
{
struct Base32Delta8Params
    : public BaseDictionaryCompressorParams
{
    gem5::compression::Base32Delta8 * create() const;
};

} // namespace gem5

#endif // __PARAMS__Base32Delta8__
