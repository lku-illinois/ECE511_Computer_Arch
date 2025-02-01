/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/MI_example_Directory_Controller.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/ruby/protocol/MI_example/Directory_Controller.hh"

#include "mem/ruby/structures/DirectoryMemory.hh"
#include "base/types.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_MI_example_Directory_Controller");
    py::class_<MI_example_Directory_ControllerParams, RubyControllerParams, std::unique_ptr<MI_example_Directory_ControllerParams, py::nodelete>>(m, "MI_example_Directory_ControllerParams")
        .def(py::init<>())
        .def("create", &MI_example_Directory_ControllerParams::create)
        .def_readwrite("directory", &MI_example_Directory_ControllerParams::directory)
        .def_readwrite("directory_latency", &MI_example_Directory_ControllerParams::directory_latency)
        .def_readwrite("dmaRequestToDir", &MI_example_Directory_ControllerParams::dmaRequestToDir)
        .def_readwrite("dmaResponseFromDir", &MI_example_Directory_ControllerParams::dmaResponseFromDir)
        .def_readwrite("forwardFromDir", &MI_example_Directory_ControllerParams::forwardFromDir)
        .def_readwrite("requestToDir", &MI_example_Directory_ControllerParams::requestToDir)
        .def_readwrite("requestToMemory", &MI_example_Directory_ControllerParams::requestToMemory)
        .def_readwrite("responseFromDir", &MI_example_Directory_ControllerParams::responseFromDir)
        .def_readwrite("responseFromMemory", &MI_example_Directory_ControllerParams::responseFromMemory)
        .def_readwrite("to_memory_controller_latency", &MI_example_Directory_ControllerParams::to_memory_controller_latency)
        ;

    py::class_<gem5::ruby::MI_example::Directory_Controller, gem5::ruby::AbstractController, std::unique_ptr<gem5::ruby::MI_example::Directory_Controller, py::nodelete>>(m, "gem5_COLONS_ruby_COLONS_MI_example_COLONS_Directory_Controller")
        ;

}

static EmbeddedPyBind embed_obj("MI_example_Directory_Controller", module_init, "RubyController");

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
class DummyMI_example_Directory_ControllerParamsClass
{
  public:
    gem5::ruby::MI_example::Directory_Controller *create() const;
};

template <class CxxClass, class Enable=void>
class DummyMI_example_Directory_ControllerShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyMI_example_Directory_ControllerShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const MI_example_Directory_ControllerParams &>>>
{
  public:
    using Params = MI_example_Directory_ControllerParams;
    static gem5::ruby::MI_example::Directory_Controller *
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
class DummyMI_example_Directory_ControllerShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const MI_example_Directory_ControllerParams &>>>
{
  public:
    using Params = DummyMI_example_Directory_ControllerParamsClass;
    static gem5::ruby::MI_example::Directory_Controller *
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
[[maybe_unused]] gem5::ruby::MI_example::Directory_Controller *
DummyMI_example_Directory_ControllerShunt<gem5::ruby::MI_example::Directory_Controller>::Params::create() const
{
    return DummyMI_example_Directory_ControllerShunt<gem5::ruby::MI_example::Directory_Controller>::create(*this);
}

} // namespace gem5
