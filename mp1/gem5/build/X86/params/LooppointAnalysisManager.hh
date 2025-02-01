/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:233
 */

#ifndef __PARAMS__LooppointAnalysisManager__
#define __PARAMS__LooppointAnalysisManager__

namespace gem5 {
class LooppointAnalysisManager;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct LooppointAnalysisManagerParams
    : public SimObjectParams
{
    gem5::LooppointAnalysisManager * create() const;
    int region_length;
};

} // namespace gem5

#endif // __PARAMS__LooppointAnalysisManager__
