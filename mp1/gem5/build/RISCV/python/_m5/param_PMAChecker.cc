/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/PMAChecker.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/riscv/pma_checker.hh"

#include <vector>
#include "base/types.hh"
#include "base/addr_range.hh"
#include <vector>
#include "base/types.hh"
#include "base/addr_range.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_PMAChecker");
    py::class_<PMACheckerParams, BasePMACheckerParams, std::unique_ptr<PMACheckerParams, py::nodelete>>(m, "PMACheckerParams")
        .def(py::init<>())
        .def("create", &PMACheckerParams::create)
        .def_readwrite("misaligned", &PMACheckerParams::misaligned)
        .def_readwrite("uncacheable", &PMACheckerParams::uncacheable)
        ;

    py::class_<gem5::RiscvISA::PMAChecker, gem5::RiscvISA::BasePMAChecker, std::unique_ptr<gem5::RiscvISA::PMAChecker, py::nodelete>>(m, "gem5_COLONS_RiscvISA_COLONS_PMAChecker")
        ;

}

static EmbeddedPyBind embed_obj("PMAChecker", module_init, "BasePMAChecker");

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
class DummyPMACheckerParamsClass
{
  public:
    gem5::RiscvISA::PMAChecker *create() const;
};

template <class CxxClass, class Enable=void>
class DummyPMACheckerShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyPMACheckerShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const PMACheckerParams &>>>
{
  public:
    using Params = PMACheckerParams;
    static gem5::RiscvISA::PMAChecker *
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
class DummyPMACheckerShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const PMACheckerParams &>>>
{
  public:
    using Params = DummyPMACheckerParamsClass;
    static gem5::RiscvISA::PMAChecker *
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
[[maybe_unused]] gem5::RiscvISA::PMAChecker *
DummyPMACheckerShunt<gem5::RiscvISA::PMAChecker>::Params::create() const
{
    return DummyPMACheckerShunt<gem5::RiscvISA::PMAChecker>::create(*this);
}

} // namespace gem5
