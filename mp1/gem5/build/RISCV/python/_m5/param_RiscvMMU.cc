/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/RiscvMMU.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/riscv/mmu.hh"

#include "arch/riscv/pma_checker.hh"
#include "arch/riscv/pmp.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_RiscvMMU");
    py::class_<RiscvMMUParams, BaseMMUParams, std::unique_ptr<RiscvMMUParams, py::nodelete>>(m, "RiscvMMUParams")
        .def(py::init<>())
        .def("create", &RiscvMMUParams::create)
        .def_readwrite("pma_checker", &RiscvMMUParams::pma_checker)
        .def_readwrite("pmp", &RiscvMMUParams::pmp)
        ;

    py::class_<gem5::RiscvISA::MMU, gem5::BaseMMU, std::unique_ptr<gem5::RiscvISA::MMU, py::nodelete>>(m, "gem5_COLONS_RiscvISA_COLONS_MMU")
        ;

}

static EmbeddedPyBind embed_obj("RiscvMMU", module_init, "BaseMMU");

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
class DummyRiscvMMUParamsClass
{
  public:
    gem5::RiscvISA::MMU *create() const;
};

template <class CxxClass, class Enable=void>
class DummyRiscvMMUShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyRiscvMMUShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const RiscvMMUParams &>>>
{
  public:
    using Params = RiscvMMUParams;
    static gem5::RiscvISA::MMU *
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
class DummyRiscvMMUShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const RiscvMMUParams &>>>
{
  public:
    using Params = DummyRiscvMMUParamsClass;
    static gem5::RiscvISA::MMU *
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
[[maybe_unused]] gem5::RiscvISA::MMU *
DummyRiscvMMUShunt<gem5::RiscvISA::MMU>::Params::create() const
{
    return DummyRiscvMMUShunt<gem5::RiscvISA::MMU>::create(*this);
}

} // namespace gem5
