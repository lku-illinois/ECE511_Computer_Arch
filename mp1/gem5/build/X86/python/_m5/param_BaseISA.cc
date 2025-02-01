/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/BaseISA.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/generic/isa.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_BaseISA");
    py::class_<BaseISAParams, SimObjectParams, std::unique_ptr<BaseISAParams, py::nodelete>>(m, "BaseISAParams")
        ;

    py::class_<gem5::BaseISA, gem5::SimObject, std::unique_ptr<gem5::BaseISA, py::nodelete>>(m, "gem5_COLONS_BaseISA")
        ;

}

static EmbeddedPyBind embed_obj("BaseISA", module_init, "SimObject");

} // namespace gem5
