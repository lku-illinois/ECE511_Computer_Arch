/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Gem5ToTlmBridgeBase.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "systemc/tlm_bridge/gem5_to_tlm.hh"

#include <vector>
#include "base/types.hh"
#include "base/addr_range.hh"
#include "sim/system.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Gem5ToTlmBridgeBase");
    py::class_<Gem5ToTlmBridgeBaseParams, SystemC_ScModuleParams, std::unique_ptr<Gem5ToTlmBridgeBaseParams, py::nodelete>>(m, "Gem5ToTlmBridgeBaseParams")
        .def_readwrite("addr_ranges", &Gem5ToTlmBridgeBaseParams::addr_ranges)
        .def_readwrite("system", &Gem5ToTlmBridgeBaseParams::system)
        .def_readwrite("port_gem5_connection_count", &Gem5ToTlmBridgeBaseParams::port_gem5_connection_count)
        ;

    py::class_<sc_gem5::Gem5ToTlmBridgeBase, sc_core::sc_module, std::unique_ptr<sc_gem5::Gem5ToTlmBridgeBase, py::nodelete>>(m, "sc_gem5_COLONS_Gem5ToTlmBridgeBase")
        ;

}

static EmbeddedPyBind embed_obj("Gem5ToTlmBridgeBase", module_init, "SystemC_ScModule");

} // namespace gem5
