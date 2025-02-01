/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SysBridge.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/sys_bridge.hh"

#include "sim/system.hh"
#include "sim/system.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SysBridge");
    py::class_<SysBridgeParams, SimObjectParams, std::unique_ptr<SysBridgeParams, py::nodelete>>(m, "SysBridgeParams")
        .def(py::init<>())
        .def("create", &SysBridgeParams::create)
        .def_readwrite("source", &SysBridgeParams::source)
        .def_readwrite("target", &SysBridgeParams::target)
        .def_readwrite("port_target_port_connection_count", &SysBridgeParams::port_target_port_connection_count)
        .def_readwrite("port_source_port_connection_count", &SysBridgeParams::port_source_port_connection_count)
        ;

    py::class_<gem5::SysBridge, gem5::SimObject, std::unique_ptr<gem5::SysBridge, py::nodelete>>(m, "gem5_COLONS_SysBridge")
        ;

}

static EmbeddedPyBind embed_obj("SysBridge", module_init, "SimObject");

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
class DummySysBridgeParamsClass
{
  public:
    gem5::SysBridge *create() const;
};

template <class CxxClass, class Enable=void>
class DummySysBridgeShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySysBridgeShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SysBridgeParams &>>>
{
  public:
    using Params = SysBridgeParams;
    static gem5::SysBridge *
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
class DummySysBridgeShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SysBridgeParams &>>>
{
  public:
    using Params = DummySysBridgeParamsClass;
    static gem5::SysBridge *
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
[[maybe_unused]] gem5::SysBridge *
DummySysBridgeShunt<gem5::SysBridge>::Params::create() const
{
    return DummySysBridgeShunt<gem5::SysBridge>::create(*this);
}

} // namespace gem5
