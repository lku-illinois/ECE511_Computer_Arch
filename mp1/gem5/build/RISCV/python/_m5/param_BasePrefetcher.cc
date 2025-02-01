/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/BasePrefetcher.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/prefetch/base.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "sim/system.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_BasePrefetcher");
    py::class_<BasePrefetcherParams, ClockedObjectParams, std::unique_ptr<BasePrefetcherParams, py::nodelete>>(m, "BasePrefetcherParams")
        .def_readwrite("block_size", &BasePrefetcherParams::block_size)
        .def_readwrite("on_data", &BasePrefetcherParams::on_data)
        .def_readwrite("on_inst", &BasePrefetcherParams::on_inst)
        .def_readwrite("on_miss", &BasePrefetcherParams::on_miss)
        .def_readwrite("on_read", &BasePrefetcherParams::on_read)
        .def_readwrite("on_write", &BasePrefetcherParams::on_write)
        .def_readwrite("page_bytes", &BasePrefetcherParams::page_bytes)
        .def_readwrite("prefetch_on_access", &BasePrefetcherParams::prefetch_on_access)
        .def_readwrite("prefetch_on_pf_hit", &BasePrefetcherParams::prefetch_on_pf_hit)
        .def_readwrite("sys", &BasePrefetcherParams::sys)
        .def_readwrite("use_virtual_addresses", &BasePrefetcherParams::use_virtual_addresses)
        ;

    py::class_<gem5::prefetch::Base, gem5::ClockedObject, std::unique_ptr<gem5::prefetch::Base, py::nodelete>>(m, "gem5_COLONS_prefetch_COLONS_Base")
        .def("addEventProbe", &gem5::prefetch::Base::addEventProbe)
        .def("addMMU", &gem5::prefetch::Base::addMMU)
        ;

}

static EmbeddedPyBind embed_obj("BasePrefetcher", module_init, "ClockedObject");

} // namespace gem5
