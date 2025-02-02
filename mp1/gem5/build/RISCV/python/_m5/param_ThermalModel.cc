/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/ThermalModel.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "sim/power/thermal_model.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_ThermalModel");
    py::class_<ThermalModelParams, ClockedObjectParams, std::unique_ptr<ThermalModelParams, py::nodelete>>(m, "ThermalModelParams")
        .def(py::init<>())
        .def("create", &ThermalModelParams::create)
        .def_readwrite("step", &ThermalModelParams::step)
        ;

    py::class_<gem5::ThermalModel, gem5::ClockedObject, std::unique_ptr<gem5::ThermalModel, py::nodelete>>(m, "gem5_COLONS_ThermalModel")
        .def("addCapacitor", &gem5::ThermalModel::addCapacitor)
        .def("addResistor", &gem5::ThermalModel::addResistor)
        .def("addReference", &gem5::ThermalModel::addReference)
        .def("addDomain", &gem5::ThermalModel::addDomain)
        .def("addNode", &gem5::ThermalModel::addNode)
        .def("doStep", &gem5::ThermalModel::doStep)
        ;

}

static EmbeddedPyBind embed_obj("ThermalModel", module_init, "ClockedObject");

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
class DummyThermalModelParamsClass
{
  public:
    gem5::ThermalModel *create() const;
};

template <class CxxClass, class Enable=void>
class DummyThermalModelShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyThermalModelShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const ThermalModelParams &>>>
{
  public:
    using Params = ThermalModelParams;
    static gem5::ThermalModel *
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
class DummyThermalModelShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const ThermalModelParams &>>>
{
  public:
    using Params = DummyThermalModelParamsClass;
    static gem5::ThermalModel *
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
[[maybe_unused]] gem5::ThermalModel *
DummyThermalModelShunt<gem5::ThermalModel>::Params::create() const
{
    return DummyThermalModelShunt<gem5::ThermalModel>::create(*this);
}

} // namespace gem5
