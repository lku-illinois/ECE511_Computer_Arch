/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/ThermalNode.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "sim/power/thermal_node.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_ThermalNode");
    py::class_<ThermalNodeParams, SimObjectParams, std::unique_ptr<ThermalNodeParams, py::nodelete>>(m, "ThermalNodeParams")
        .def(py::init<>())
        .def("create", &ThermalNodeParams::create)
        ;

    py::class_<gem5::ThermalNode, gem5::SimObject, std::unique_ptr<gem5::ThermalNode, py::nodelete>>(m, "gem5_COLONS_ThermalNode")
        ;

}

static EmbeddedPyBind embed_obj("ThermalNode", module_init, "SimObject");

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
class DummyThermalNodeParamsClass
{
  public:
    gem5::ThermalNode *create() const;
};

template <class CxxClass, class Enable=void>
class DummyThermalNodeShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyThermalNodeShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const ThermalNodeParams &>>>
{
  public:
    using Params = ThermalNodeParams;
    static gem5::ThermalNode *
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
class DummyThermalNodeShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const ThermalNodeParams &>>>
{
  public:
    using Params = DummyThermalNodeParamsClass;
    static gem5::ThermalNode *
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
[[maybe_unused]] gem5::ThermalNode *
DummyThermalNodeShunt<gem5::ThermalNode>::Params::create() const
{
    return DummyThermalNodeShunt<gem5::ThermalNode>::create(*this);
}

} // namespace gem5
