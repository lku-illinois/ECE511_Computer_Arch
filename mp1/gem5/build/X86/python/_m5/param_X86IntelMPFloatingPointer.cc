/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/X86IntelMPFloatingPointer.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/x86/bios/intelmp.hh"

#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_X86IntelMPFloatingPointer");
    py::class_<X86IntelMPFloatingPointerParams, SimObjectParams, std::unique_ptr<X86IntelMPFloatingPointerParams, py::nodelete>>(m, "X86IntelMPFloatingPointerParams")
        .def(py::init<>())
        .def("create", &X86IntelMPFloatingPointerParams::create)
        .def_readwrite("default_config", &X86IntelMPFloatingPointerParams::default_config)
        .def_readwrite("imcr_present", &X86IntelMPFloatingPointerParams::imcr_present)
        .def_readwrite("spec_rev", &X86IntelMPFloatingPointerParams::spec_rev)
        ;

    py::class_<gem5::X86ISA::intelmp::FloatingPointer, gem5::SimObject, std::unique_ptr<gem5::X86ISA::intelmp::FloatingPointer, py::nodelete>>(m, "gem5_COLONS_X86ISA_COLONS_intelmp_COLONS_FloatingPointer")
        ;

}

static EmbeddedPyBind embed_obj("X86IntelMPFloatingPointer", module_init, "SimObject");

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
class DummyX86IntelMPFloatingPointerParamsClass
{
  public:
    gem5::X86ISA::intelmp::FloatingPointer *create() const;
};

template <class CxxClass, class Enable=void>
class DummyX86IntelMPFloatingPointerShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyX86IntelMPFloatingPointerShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const X86IntelMPFloatingPointerParams &>>>
{
  public:
    using Params = X86IntelMPFloatingPointerParams;
    static gem5::X86ISA::intelmp::FloatingPointer *
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
class DummyX86IntelMPFloatingPointerShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const X86IntelMPFloatingPointerParams &>>>
{
  public:
    using Params = DummyX86IntelMPFloatingPointerParamsClass;
    static gem5::X86ISA::intelmp::FloatingPointer *
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
[[maybe_unused]] gem5::X86ISA::intelmp::FloatingPointer *
DummyX86IntelMPFloatingPointerShunt<gem5::X86ISA::intelmp::FloatingPointer>::Params::create() const
{
    return DummyX86IntelMPFloatingPointerShunt<gem5::X86ISA::intelmp::FloatingPointer>::create(*this);
}

} // namespace gem5
