/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:167
 */

#include "base/compiler.hh"
#include "enums/CommitPolicy.hh"

namespace gem5
{

const char *CommitPolicyStrings[static_cast<int>(CommitPolicy::Num_CommitPolicy)] =
{
    "RoundRobin",
    "OldestReady",
};
} // namespace gem5
#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <sim/init.hh>

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
    py::module_ m = m_internal.def_submodule("enum_CommitPolicy");

py::enum_<CommitPolicy>(m, "enum_CommitPolicy")
        .value("RoundRobin", CommitPolicy::RoundRobin)
        .value("OldestReady", CommitPolicy::OldestReady)
        .value("Num_CommitPolicy", CommitPolicy::Num_CommitPolicy)
        ;
    }
static EmbeddedPyBind embed_enum("enum_CommitPolicy", module_init);

} // namespace gem5
    
