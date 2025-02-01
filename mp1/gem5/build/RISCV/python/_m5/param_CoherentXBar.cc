/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/CoherentXBar.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/coherent_xbar.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "mem/snoop_filter.hh"
#include "base/types.hh"
#include "sim/system.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_CoherentXBar");
    py::class_<CoherentXBarParams, BaseXBarParams, std::unique_ptr<CoherentXBarParams, py::nodelete>>(m, "CoherentXBarParams")
        .def(py::init<>())
        .def("create", &CoherentXBarParams::create)
        .def_readwrite("max_outstanding_snoops", &CoherentXBarParams::max_outstanding_snoops)
        .def_readwrite("max_routing_table_size", &CoherentXBarParams::max_routing_table_size)
        .def_readwrite("point_of_coherency", &CoherentXBarParams::point_of_coherency)
        .def_readwrite("point_of_unification", &CoherentXBarParams::point_of_unification)
        .def_readwrite("snoop_filter", &CoherentXBarParams::snoop_filter)
        .def_readwrite("snoop_response_latency", &CoherentXBarParams::snoop_response_latency)
        .def_readwrite("system", &CoherentXBarParams::system)
        ;

    py::class_<gem5::CoherentXBar, gem5::BaseXBar, std::unique_ptr<gem5::CoherentXBar, py::nodelete>>(m, "gem5_COLONS_CoherentXBar")
        ;

}

static EmbeddedPyBind embed_obj("CoherentXBar", module_init, "BaseXBar");

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
class DummyCoherentXBarParamsClass
{
  public:
    gem5::CoherentXBar *create() const;
};

template <class CxxClass, class Enable=void>
class DummyCoherentXBarShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyCoherentXBarShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const CoherentXBarParams &>>>
{
  public:
    using Params = CoherentXBarParams;
    static gem5::CoherentXBar *
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
class DummyCoherentXBarShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const CoherentXBarParams &>>>
{
  public:
    using Params = DummyCoherentXBarParamsClass;
    static gem5::CoherentXBar *
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
[[maybe_unused]] gem5::CoherentXBar *
DummyCoherentXBarShunt<gem5::CoherentXBar>::Params::create() const
{
    return DummyCoherentXBarShunt<gem5::CoherentXBar>::create(*this);
}

} // namespace gem5
