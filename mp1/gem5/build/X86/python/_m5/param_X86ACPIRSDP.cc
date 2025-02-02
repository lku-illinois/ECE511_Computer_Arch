/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/X86ACPIRSDP.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/x86/bios/acpi.hh"

#include <string>
#include "base/types.hh"
#include "arch/x86/bios/acpi.hh"
#include "arch/x86/bios/acpi.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_X86ACPIRSDP");
    py::class_<X86ACPIRSDPParams, SimObjectParams, std::unique_ptr<X86ACPIRSDPParams, py::nodelete>>(m, "X86ACPIRSDPParams")
        .def(py::init<>())
        .def("create", &X86ACPIRSDPParams::create)
        .def_readwrite("oem_id", &X86ACPIRSDPParams::oem_id)
        .def_readwrite("revision", &X86ACPIRSDPParams::revision)
        .def_readwrite("rsdt", &X86ACPIRSDPParams::rsdt)
        .def_readwrite("xsdt", &X86ACPIRSDPParams::xsdt)
        ;

    py::class_<gem5::X86ISA::ACPI::RSDP, gem5::SimObject, std::unique_ptr<gem5::X86ISA::ACPI::RSDP, py::nodelete>>(m, "gem5_COLONS_X86ISA_COLONS_ACPI_COLONS_RSDP")
        ;

}

static EmbeddedPyBind embed_obj("X86ACPIRSDP", module_init, "SimObject");

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
class DummyX86ACPIRSDPParamsClass
{
  public:
    gem5::X86ISA::ACPI::RSDP *create() const;
};

template <class CxxClass, class Enable=void>
class DummyX86ACPIRSDPShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyX86ACPIRSDPShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const X86ACPIRSDPParams &>>>
{
  public:
    using Params = X86ACPIRSDPParams;
    static gem5::X86ISA::ACPI::RSDP *
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
class DummyX86ACPIRSDPShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const X86ACPIRSDPParams &>>>
{
  public:
    using Params = DummyX86ACPIRSDPParamsClass;
    static gem5::X86ISA::ACPI::RSDP *
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
[[maybe_unused]] gem5::X86ISA::ACPI::RSDP *
DummyX86ACPIRSDPShunt<gem5::X86ISA::ACPI::RSDP>::Params::create() const
{
    return DummyX86ACPIRSDPShunt<gem5::X86ISA::ACPI::RSDP>::create(*this);
}

} // namespace gem5
