/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/PIFPrefetcher.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/prefetch/pif.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/cache/tags/tagged_entry.hh"
#include "mem/cache/replacement_policies/base.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_PIFPrefetcher");
    py::class_<PIFPrefetcherParams, QueuedPrefetcherParams, std::unique_ptr<PIFPrefetcherParams, py::nodelete>>(m, "PIFPrefetcherParams")
        .def(py::init<>())
        .def("create", &PIFPrefetcherParams::create)
        .def_readwrite("compactor_entries", &PIFPrefetcherParams::compactor_entries)
        .def_readwrite("history_buffer_size", &PIFPrefetcherParams::history_buffer_size)
        .def_readwrite("index_assoc", &PIFPrefetcherParams::index_assoc)
        .def_readwrite("index_entries", &PIFPrefetcherParams::index_entries)
        .def_readwrite("index_indexing_policy", &PIFPrefetcherParams::index_indexing_policy)
        .def_readwrite("index_replacement_policy", &PIFPrefetcherParams::index_replacement_policy)
        .def_readwrite("prec_spatial_region_bits", &PIFPrefetcherParams::prec_spatial_region_bits)
        .def_readwrite("stream_address_buffer_entries", &PIFPrefetcherParams::stream_address_buffer_entries)
        .def_readwrite("succ_spatial_region_bits", &PIFPrefetcherParams::succ_spatial_region_bits)
        ;

    py::class_<gem5::prefetch::PIF, gem5::prefetch::Queued, std::unique_ptr<gem5::prefetch::PIF, py::nodelete>>(m, "gem5_COLONS_prefetch_COLONS_PIF")
        .def("addEventProbeRetiredInsts", &gem5::prefetch::PIF::addEventProbeRetiredInsts)
        ;

}

static EmbeddedPyBind embed_obj("PIFPrefetcher", module_init, "QueuedPrefetcher");

} // namespace gem5
namespace gem5
{

namespace
{

/*
 * If we can't define a default create() method for this params
 * struct because the SimObject doesn't have the right
 * constructor, use template magic to make it so we're actually
 * defining a create method for this class instead.
 */
class DummyPIFPrefetcherParamsClass
{
  public:
    gem5::prefetch::PIF *create() const;
};

template <class CxxClass, class Enable=void>
class DummyPIFPrefetcherShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyPIFPrefetcherShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const PIFPrefetcherParams &>>>
{
  public:
    using Params = PIFPrefetcherParams;
    static gem5::prefetch::PIF *
    create(const Params &p)
    {
        return new CxxClass(p);
    }
};

/*
 * This version diverts to the DummyParamsClass and a dummy
 * implementation of create if the appropriate constructor does
 * not exist.
 */
template <class CxxClass>
class DummyPIFPrefetcherShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const PIFPrefetcherParams &>>>
{
  public:
    using Params = DummyPIFPrefetcherParamsClass;
    static gem5::prefetch::PIF *
    create(const Params &p)
    {
        return nullptr;
    }
};

} // anonymous namespace

/*
 * An implementation of either the real Params struct's create
 * method, or the Dummy one. Either an implementation is
 * mandantory since this was shunted off to the dummy class, or
 * one is optional which will override this weak version.
 */
[[maybe_unused]] gem5::prefetch::PIF *
DummyPIFPrefetcherShunt<gem5::prefetch::PIF>::Params::create() const
{
    return DummyPIFPrefetcherShunt<gem5::prefetch::PIF>::create(*this);
}

} // namespace gem5
