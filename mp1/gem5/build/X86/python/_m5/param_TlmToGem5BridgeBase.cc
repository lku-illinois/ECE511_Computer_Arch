/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/TlmToGem5BridgeBase.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "systemc/tlm_bridge/tlm_to_gem5.hh"

#include "sim/system.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_TlmToGem5BridgeBase");
    py::class_<TlmToGem5BridgeBaseParams, SystemC_ScModuleParams, std::unique_ptr<TlmToGem5BridgeBaseParams, py::nodelete>>(m, "TlmToGem5BridgeBaseParams")
        .def_readwrite("system", &TlmToGem5BridgeBaseParams::system)
        .def_readwrite("port_gem5_connection_count", &TlmToGem5BridgeBaseParams::port_gem5_connection_count)
        ;

    py::class_<sc_gem5::TlmToGem5BridgeBase, sc_core::sc_module, std::unique_ptr<sc_gem5::TlmToGem5BridgeBase, py::nodelete>>(m, "sc_gem5_COLONS_TlmToGem5BridgeBase")
        ;

}

static EmbeddedPyBind embed_obj("TlmToGem5BridgeBase", module_init, "SystemC_ScModule");

} // namespace gem5
