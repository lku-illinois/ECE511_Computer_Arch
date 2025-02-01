/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SimpleBTB.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/pred/simple_btb.hh"

#include "base/types.hh"
#include "cpu/pred/btb_entry.hh"
#include "mem/cache/replacement_policies/base.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SimpleBTB");
    py::class_<SimpleBTBParams, BranchTargetBufferParams, std::unique_ptr<SimpleBTBParams, py::nodelete>>(m, "SimpleBTBParams")
        .def(py::init<>())
        .def("create", &SimpleBTBParams::create)
        .def_readwrite("associativity", &SimpleBTBParams::associativity)
        .def_readwrite("btbIndexingPolicy", &SimpleBTBParams::btbIndexingPolicy)
        .def_readwrite("btbReplPolicy", &SimpleBTBParams::btbReplPolicy)
        .def_readwrite("instShiftAmt", &SimpleBTBParams::instShiftAmt)
        .def_readwrite("numEntries", &SimpleBTBParams::numEntries)
        .def_readwrite("tagBits", &SimpleBTBParams::tagBits)
        ;

    py::class_<gem5::branch_prediction::SimpleBTB, gem5::branch_prediction::BranchTargetBuffer, std::unique_ptr<gem5::branch_prediction::SimpleBTB, py::nodelete>>(m, "gem5_COLONS_branch_prediction_COLONS_SimpleBTB")
        ;

}

static EmbeddedPyBind embed_obj("SimpleBTB", module_init, "BranchTargetBuffer");

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
class DummySimpleBTBParamsClass
{
  public:
    gem5::branch_prediction::SimpleBTB *create() const;
};

template <class CxxClass, class Enable=void>
class DummySimpleBTBShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySimpleBTBShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SimpleBTBParams &>>>
{
  public:
    using Params = SimpleBTBParams;
    static gem5::branch_prediction::SimpleBTB *
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
class DummySimpleBTBShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SimpleBTBParams &>>>
{
  public:
    using Params = DummySimpleBTBParamsClass;
    static gem5::branch_prediction::SimpleBTB *
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
[[maybe_unused]] gem5::branch_prediction::SimpleBTB *
DummySimpleBTBShunt<gem5::branch_prediction::SimpleBTB>::Params::create() const
{
    return DummySimpleBTBShunt<gem5::branch_prediction::SimpleBTB>::create(*this);
}

} // namespace gem5
