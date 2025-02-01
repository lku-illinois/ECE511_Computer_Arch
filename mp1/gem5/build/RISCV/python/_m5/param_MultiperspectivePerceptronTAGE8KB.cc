/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/MultiperspectivePerceptronTAGE8KB.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/pred/multiperspective_perceptron_tage_8KB.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_MultiperspectivePerceptronTAGE8KB");
    py::class_<MultiperspectivePerceptronTAGE8KBParams, MultiperspectivePerceptronTAGEParams, std::unique_ptr<MultiperspectivePerceptronTAGE8KBParams, py::nodelete>>(m, "MultiperspectivePerceptronTAGE8KBParams")
        .def(py::init<>())
        .def("create", &MultiperspectivePerceptronTAGE8KBParams::create)
        ;

    py::class_<gem5::branch_prediction::MultiperspectivePerceptronTAGE8KB, gem5::branch_prediction::MultiperspectivePerceptronTAGE, std::unique_ptr<gem5::branch_prediction::MultiperspectivePerceptronTAGE8KB, py::nodelete>>(m, "gem5_COLONS_branch_prediction_COLONS_MultiperspectivePerceptronTAGE8KB")
        ;

}

static EmbeddedPyBind embed_obj("MultiperspectivePerceptronTAGE8KB", module_init, "MultiperspectivePerceptronTAGE");

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
class DummyMultiperspectivePerceptronTAGE8KBParamsClass
{
  public:
    gem5::branch_prediction::MultiperspectivePerceptronTAGE8KB *create() const;
};

template <class CxxClass, class Enable=void>
class DummyMultiperspectivePerceptronTAGE8KBShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyMultiperspectivePerceptronTAGE8KBShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const MultiperspectivePerceptronTAGE8KBParams &>>>
{
  public:
    using Params = MultiperspectivePerceptronTAGE8KBParams;
    static gem5::branch_prediction::MultiperspectivePerceptronTAGE8KB *
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
class DummyMultiperspectivePerceptronTAGE8KBShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const MultiperspectivePerceptronTAGE8KBParams &>>>
{
  public:
    using Params = DummyMultiperspectivePerceptronTAGE8KBParamsClass;
    static gem5::branch_prediction::MultiperspectivePerceptronTAGE8KB *
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
[[maybe_unused]] gem5::branch_prediction::MultiperspectivePerceptronTAGE8KB *
DummyMultiperspectivePerceptronTAGE8KBShunt<gem5::branch_prediction::MultiperspectivePerceptronTAGE8KB>::Params::create() const
{
    return DummyMultiperspectivePerceptronTAGE8KBShunt<gem5::branch_prediction::MultiperspectivePerceptronTAGE8KB>::create(*this);
}

} // namespace gem5
