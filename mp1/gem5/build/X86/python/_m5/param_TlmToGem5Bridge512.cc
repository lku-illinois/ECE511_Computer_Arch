/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/TlmToGem5Bridge512.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "systemc/tlm_bridge/tlm_to_gem5.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_TlmToGem5Bridge512");
    py::class_<TlmToGem5Bridge512Params, TlmToGem5BridgeBaseParams, std::unique_ptr<TlmToGem5Bridge512Params, py::nodelete>>(m, "TlmToGem5Bridge512Params")
        .def(py::init<>())
        .def("create", &TlmToGem5Bridge512Params::create)
        .def_readwrite("port_tlm_connection_count", &TlmToGem5Bridge512Params::port_tlm_connection_count)
        ;

    py::class_<sc_gem5::TlmToGem5Bridge<512>, sc_gem5::TlmToGem5BridgeBase, std::unique_ptr<sc_gem5::TlmToGem5Bridge<512>, py::nodelete>>(m, "sc_gem5_COLONS_TlmToGem5Bridge<512>")
        ;

}

static EmbeddedPyBind embed_obj("TlmToGem5Bridge512", module_init, "TlmToGem5BridgeBase");

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
class DummyTlmToGem5Bridge512ParamsClass
{
  public:
    sc_gem5::TlmToGem5Bridge<512> *create() const;
};

template <class CxxClass, class Enable=void>
class DummyTlmToGem5Bridge512Shunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyTlmToGem5Bridge512Shunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const TlmToGem5Bridge512Params &>>>
{
  public:
    using Params = TlmToGem5Bridge512Params;
    static sc_gem5::TlmToGem5Bridge<512> *
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
class DummyTlmToGem5Bridge512Shunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const TlmToGem5Bridge512Params &>>>
{
  public:
    using Params = DummyTlmToGem5Bridge512ParamsClass;
    static sc_gem5::TlmToGem5Bridge<512> *
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
[[maybe_unused]] sc_gem5::TlmToGem5Bridge<512> *
DummyTlmToGem5Bridge512Shunt<sc_gem5::TlmToGem5Bridge<512>>::Params::create() const
{
    return DummyTlmToGem5Bridge512Shunt<sc_gem5::TlmToGem5Bridge<512>>::create(*this);
}

} // namespace gem5
