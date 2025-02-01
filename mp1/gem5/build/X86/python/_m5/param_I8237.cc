/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/I8237.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/x86/i8237.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_I8237");
    py::class_<I8237Params, BasicPioDeviceParams, std::unique_ptr<I8237Params, py::nodelete>>(m, "I8237Params")
        .def(py::init<>())
        .def("create", &I8237Params::create)
        ;

    py::class_<gem5::X86ISA::I8237, gem5::BasicPioDevice, std::unique_ptr<gem5::X86ISA::I8237, py::nodelete>>(m, "gem5_COLONS_X86ISA_COLONS_I8237")
        ;

}

static EmbeddedPyBind embed_obj("I8237", module_init, "BasicPioDevice");

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
class DummyI8237ParamsClass
{
  public:
    gem5::X86ISA::I8237 *create() const;
};

template <class CxxClass, class Enable=void>
class DummyI8237Shunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyI8237Shunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const I8237Params &>>>
{
  public:
    using Params = I8237Params;
    static gem5::X86ISA::I8237 *
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
class DummyI8237Shunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const I8237Params &>>>
{
  public:
    using Params = DummyI8237ParamsClass;
    static gem5::X86ISA::I8237 *
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
[[maybe_unused]] gem5::X86ISA::I8237 *
DummyI8237Shunt<gem5::X86ISA::I8237>::Params::create() const
{
    return DummyI8237Shunt<gem5::X86ISA::I8237>::create(*this);
}

} // namespace gem5
