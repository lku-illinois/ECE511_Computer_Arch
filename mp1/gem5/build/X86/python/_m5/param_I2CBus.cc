/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/I2CBus.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/i2c/bus.hh"

#include <vector>
#include "dev/i2c/device.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_I2CBus");
    py::class_<I2CBusParams, BasicPioDeviceParams, std::unique_ptr<I2CBusParams, py::nodelete>>(m, "I2CBusParams")
        .def(py::init<>())
        .def("create", &I2CBusParams::create)
        .def_readwrite("devices", &I2CBusParams::devices)
        ;

    py::class_<gem5::I2CBus, gem5::BasicPioDevice, std::unique_ptr<gem5::I2CBus, py::nodelete>>(m, "gem5_COLONS_I2CBus")
        ;

}

static EmbeddedPyBind embed_obj("I2CBus", module_init, "BasicPioDevice");

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
class DummyI2CBusParamsClass
{
  public:
    gem5::I2CBus *create() const;
};

template <class CxxClass, class Enable=void>
class DummyI2CBusShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyI2CBusShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const I2CBusParams &>>>
{
  public:
    using Params = I2CBusParams;
    static gem5::I2CBus *
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
class DummyI2CBusShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const I2CBusParams &>>>
{
  public:
    using Params = DummyI2CBusParamsClass;
    static gem5::I2CBus *
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
[[maybe_unused]] gem5::I2CBus *
DummyI2CBusShunt<gem5::I2CBus>::Params::create() const
{
    return DummyI2CBusShunt<gem5::I2CBus>::create(*this);
}

} // namespace gem5
