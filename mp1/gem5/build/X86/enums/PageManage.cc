/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:167
 */

#include "base/compiler.hh"
#include "enums/PageManage.hh"

namespace gem5
{

namespace enums
{
    const char *PageManageStrings[Num_PageManage] =
    {
        "open",
        "open_adaptive",
        "close",
        "close_adaptive",
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
    py::module_ m = m_internal.def_submodule("enum_PageManage");

py::enum_<enums::PageManage>(m, "enum_PageManage")
        .value("open", enums::open)
        .value("open_adaptive", enums::open_adaptive)
        .value("close", enums::close)
        .value("close_adaptive", enums::close_adaptive)
        .value("Num_PageManage", enums::Num_PageManage)
        .export_values()
        ;
    }
static EmbeddedPyBind embed_enum("enum_PageManage", module_init);

} // namespace gem5
    
