/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Gem5ToTlmBridge512.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "systemc/tlm_bridge/gem5_to_tlm.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Gem5ToTlmBridge512");
    py::class_<Gem5ToTlmBridge512Params, Gem5ToTlmBridgeBaseParams, std::unique_ptr<Gem5ToTlmBridge512Params, py::nodelete>>(m, "Gem5ToTlmBridge512Params")
        .def(py::init<>())
        .def("create", &Gem5ToTlmBridge512Params::create)
        .def_readwrite("port_tlm_connection_count", &Gem5ToTlmBridge512Params::port_tlm_connection_count)
        ;

    py::class_<sc_gem5::Gem5ToTlmBridge<512>, sc_gem5::Gem5ToTlmBridgeBase, std::unique_ptr<sc_gem5::Gem5ToTlmBridge<512>, py::nodelete>>(m, "sc_gem5_COLONS_Gem5ToTlmBridge<512>")
        ;

}

static EmbeddedPyBind embed_obj("Gem5ToTlmBridge512", module_init, "Gem5ToTlmBridgeBase");

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
class DummyGem5ToTlmBridge512ParamsClass
{
  public:
    sc_gem5::Gem5ToTlmBridge<512> *create() const;
};

template <class CxxClass, class Enable=void>
class DummyGem5ToTlmBridge512Shunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyGem5ToTlmBridge512Shunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const Gem5ToTlmBridge512Params &>>>
{
  public:
    using Params = Gem5ToTlmBridge512Params;
    static sc_gem5::Gem5ToTlmBridge<512> *
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
class DummyGem5ToTlmBridge512Shunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const Gem5ToTlmBridge512Params &>>>
{
  public:
    using Params = DummyGem5ToTlmBridge512ParamsClass;
    static sc_gem5::Gem5ToTlmBridge<512> *
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
[[maybe_unused]] sc_gem5::Gem5ToTlmBridge<512> *
DummyGem5ToTlmBridge512Shunt<sc_gem5::Gem5ToTlmBridge<512>>::Params::create() const
{
    return DummyGem5ToTlmBridge512Shunt<sc_gem5::Gem5ToTlmBridge<512>>::create(*this);
}

} // namespace gem5
