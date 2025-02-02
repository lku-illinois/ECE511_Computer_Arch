/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/X86ISA.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/x86/isa.hh"

#include <vector>
#include "base/types.hh"
#include <vector>
#include "base/types.hh"
#include <vector>
#include "base/types.hh"
#include <vector>
#include "base/types.hh"
#include <vector>
#include "base/types.hh"
#include <vector>
#include "base/types.hh"
#include <vector>
#include "base/types.hh"
#include <vector>
#include "base/types.hh"
#include <vector>
#include "base/types.hh"
#include <string>
#include <string>
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_X86ISA");
    py::class_<X86ISAParams, BaseISAParams, std::unique_ptr<X86ISAParams, py::nodelete>>(m, "X86ISAParams")
        .def(py::init<>())
        .def("create", &X86ISAParams::create)
        .def_readwrite("APMInfo", &X86ISAParams::APMInfo)
        .def_readwrite("CacheParams", &X86ISAParams::CacheParams)
        .def_readwrite("ExtendedFeatures", &X86ISAParams::ExtendedFeatures)
        .def_readwrite("ExtendedState", &X86ISAParams::ExtendedState)
        .def_readwrite("FamilyModelStepping", &X86ISAParams::FamilyModelStepping)
        .def_readwrite("FamilyModelSteppingBrandFeatures", &X86ISAParams::FamilyModelSteppingBrandFeatures)
        .def_readwrite("L1CacheAndTLB", &X86ISAParams::L1CacheAndTLB)
        .def_readwrite("L2L3CacheAndL2TLB", &X86ISAParams::L2L3CacheAndL2TLB)
        .def_readwrite("LongModeAddressSize", &X86ISAParams::LongModeAddressSize)
        .def_readwrite("name_string", &X86ISAParams::name_string)
        .def_readwrite("vendor_string", &X86ISAParams::vendor_string)
        ;

    py::class_<gem5::X86ISA::ISA, gem5::BaseISA, std::unique_ptr<gem5::X86ISA::ISA, py::nodelete>>(m, "gem5_COLONS_X86ISA_COLONS_ISA")
        ;

}

static EmbeddedPyBind embed_obj("X86ISA", module_init, "BaseISA");

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
class DummyX86ISAParamsClass
{
  public:
    gem5::X86ISA::ISA *create() const;
};

template <class CxxClass, class Enable=void>
class DummyX86ISAShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyX86ISAShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const X86ISAParams &>>>
{
  public:
    using Params = X86ISAParams;
    static gem5::X86ISA::ISA *
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
class DummyX86ISAShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const X86ISAParams &>>>
{
  public:
    using Params = DummyX86ISAParamsClass;
    static gem5::X86ISA::ISA *
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
[[maybe_unused]] gem5::X86ISA::ISA *
DummyX86ISAShunt<gem5::X86ISA::ISA>::Params::create() const
{
    return DummyX86ISAShunt<gem5::X86ISA::ISA>::create(*this);
}

} // namespace gem5
