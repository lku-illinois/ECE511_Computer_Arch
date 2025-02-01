/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SBOOEPrefetcher.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/prefetch/sbooe.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SBOOEPrefetcher");
    py::class_<SBOOEPrefetcherParams, QueuedPrefetcherParams, std::unique_ptr<SBOOEPrefetcherParams, py::nodelete>>(m, "SBOOEPrefetcherParams")
        .def(py::init<>())
        .def("create", &SBOOEPrefetcherParams::create)
        .def_readwrite("latency_buffer_size", &SBOOEPrefetcherParams::latency_buffer_size)
        .def_readwrite("sandbox_entries", &SBOOEPrefetcherParams::sandbox_entries)
        .def_readwrite("score_threshold_pct", &SBOOEPrefetcherParams::score_threshold_pct)
        .def_readwrite("sequential_prefetchers", &SBOOEPrefetcherParams::sequential_prefetchers)
        ;

    py::class_<gem5::prefetch::SBOOE, gem5::prefetch::Queued, std::unique_ptr<gem5::prefetch::SBOOE, py::nodelete>>(m, "gem5_COLONS_prefetch_COLONS_SBOOE")
        ;

}

static EmbeddedPyBind embed_obj("SBOOEPrefetcher", module_init, "QueuedPrefetcher");

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
class DummySBOOEPrefetcherParamsClass
{
  public:
    gem5::prefetch::SBOOE *create() const;
};

template <class CxxClass, class Enable=void>
class DummySBOOEPrefetcherShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySBOOEPrefetcherShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SBOOEPrefetcherParams &>>>
{
  public:
    using Params = SBOOEPrefetcherParams;
    static gem5::prefetch::SBOOE *
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
class DummySBOOEPrefetcherShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SBOOEPrefetcherParams &>>>
{
  public:
    using Params = DummySBOOEPrefetcherParamsClass;
    static gem5::prefetch::SBOOE *
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
[[maybe_unused]] gem5::prefetch::SBOOE *
DummySBOOEPrefetcherShunt<gem5::prefetch::SBOOE>::Params::create() const
{
    return DummySBOOEPrefetcherShunt<gem5::prefetch::SBOOE>::create(*this);
}

} // namespace gem5
