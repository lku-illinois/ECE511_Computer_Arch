/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/PlicBase.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/riscv/plic.hh"

#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_PlicBase");
    py::class_<PlicBaseParams, BasicPioDeviceParams, std::unique_ptr<PlicBaseParams, py::nodelete>>(m, "PlicBaseParams")
        .def_readwrite("pio_size", &PlicBaseParams::pio_size)
        ;

    py::class_<gem5::PlicBase, gem5::BasicPioDevice, std::unique_ptr<gem5::PlicBase, py::nodelete>>(m, "gem5_COLONS_PlicBase")
        ;

}

static EmbeddedPyBind embed_obj("PlicBase", module_init, "BasicPioDevice");

} // namespace gem5
