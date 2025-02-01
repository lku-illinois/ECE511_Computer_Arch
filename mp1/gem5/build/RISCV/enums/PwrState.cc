/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:167
 */

#include "base/compiler.hh"
#include "enums/PwrState.hh"

namespace gem5
{

namespace enums
{
    const char *PwrStateStrings[Num_PwrState] =
    {
        "UNDEFINED",
        "ON",
        "CLK_GATED",
        "SRAM_RETENTION",
        "OFF",
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
    py::module_ m = m_internal.def_submodule("enum_PwrState");

py::enum_<enums::PwrState>(m, "enum_PwrState")
        .value("UNDEFINED", enums::UNDEFINED)
        .value("ON", enums::ON)
        .value("CLK_GATED", enums::CLK_GATED)
        .value("SRAM_RETENTION", enums::SRAM_RETENTION)
        .value("OFF", enums::OFF)
        .value("Num_PwrState", enums::Num_PwrState)
        .export_values()
        ;
    }
static EmbeddedPyBind embed_enum("enum_PwrState", module_init);

} // namespace gem5
    
