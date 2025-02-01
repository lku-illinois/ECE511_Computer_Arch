/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:167
 */

#include "base/compiler.hh"
#include "enums/MemSched.hh"

namespace gem5
{

namespace enums
{
    const char *MemSchedStrings[Num_MemSched] =
    {
        "fcfs",
        "frfcfs",
    };
} // namespace enums
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
    py::module_ m = m_internal.def_submodule("enum_MemSched");

py::enum_<enums::MemSched>(m, "enum_MemSched")
        .value("fcfs", enums::fcfs)
        .value("frfcfs", enums::frfcfs)
        .value("Num_MemSched", enums::Num_MemSched)
        .export_values()
        ;
    }
static EmbeddedPyBind embed_enum("enum_MemSched", module_init);

} // namespace gem5
    
