/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/QemuFwCfg.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/qemu/fw_cfg.hh"

#include <vector>
#include "dev/qemu/fw_cfg.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_QemuFwCfg");
    py::class_<QemuFwCfgParams, PioDeviceParams, std::unique_ptr<QemuFwCfgParams, py::nodelete>>(m, "QemuFwCfgParams")
        .def_readwrite("items", &QemuFwCfgParams::items)
        ;

    py::class_<gem5::qemu::FwCfg, gem5::PioDevice, std::unique_ptr<gem5::qemu::FwCfg, py::nodelete>>(m, "gem5_COLONS_qemu_COLONS_FwCfg")
        ;

}

static EmbeddedPyBind embed_obj("QemuFwCfg", module_init, "PioDevice");

} // namespace gem5
