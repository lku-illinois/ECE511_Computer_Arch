/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__MemChecker__
#define __PARAMS__MemChecker__

namespace gem5 {
class MemChecker;
} // namespace gem5

#include "params/SimObject.hh"

namespace gem5
{
struct MemCheckerParams
    : public SimObjectParams
{
    gem5::MemChecker * create() const;
};

} // namespace gem5

#endif // __PARAMS__MemChecker__
