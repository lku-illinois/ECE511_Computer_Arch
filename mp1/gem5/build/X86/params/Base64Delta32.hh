/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__Base64Delta32__
#define __PARAMS__Base64Delta32__

namespace gem5 {
namespace compression {
class Base64Delta32;
} // namespace compression
} // namespace gem5

#include "params/BaseDictionaryCompressor.hh"

namespace gem5
{
struct Base64Delta32Params
    : public BaseDictionaryCompressorParams
{
    gem5::compression::Base64Delta32 * create() const;
};

} // namespace gem5

#endif // __PARAMS__Base64Delta32__
