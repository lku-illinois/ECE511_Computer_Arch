/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/GarnetExtLink.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/ruby/network/garnet/GarnetLink.hh"

#include <vector>
#include "mem/ruby/network/garnet/CreditLink.hh"
#include <vector>
#include "mem/ruby/network/garnet/NetworkBridge.hh"
#include <vector>
#include "mem/ruby/network/garnet/NetworkBridge.hh"
#include <vector>
#include "mem/ruby/network/garnet/NetworkBridge.hh"
#include <vector>
#include "mem/ruby/network/garnet/NetworkBridge.hh"
#include <vector>
#include "mem/ruby/network/garnet/NetworkLink.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_GarnetExtLink");
    py::class_<GarnetExtLinkParams, BasicExtLinkParams, std::unique_ptr<GarnetExtLinkParams, py::nodelete>>(m, "GarnetExtLinkParams")
        .def(py::init<>())
        .def("create", &GarnetExtLinkParams::create)
        .def_readwrite("credit_links", &GarnetExtLinkParams::credit_links)
        .def_readwrite("ext_cdc", &GarnetExtLinkParams::ext_cdc)
        .def_readwrite("ext_cred_bridge", &GarnetExtLinkParams::ext_cred_bridge)
        .def_readwrite("ext_net_bridge", &GarnetExtLinkParams::ext_net_bridge)
        .def_readwrite("ext_serdes", &GarnetExtLinkParams::ext_serdes)
        .def_readwrite("int_cdc", &GarnetExtLinkParams::int_cdc)
        .def_readwrite("int_cred_bridge", &GarnetExtLinkParams::int_cred_bridge)
        .def_readwrite("int_net_bridge", &GarnetExtLinkParams::int_net_bridge)
        .def_readwrite("int_serdes", &GarnetExtLinkParams::int_serdes)
        .def_readwrite("network_links", &GarnetExtLinkParams::network_links)
        .def_readwrite("width", &GarnetExtLinkParams::width)
        ;

    py::class_<gem5::ruby::garnet::GarnetExtLink, gem5::ruby::BasicExtLink, std::unique_ptr<gem5::ruby::garnet::GarnetExtLink, py::nodelete>>(m, "gem5_COLONS_ruby_COLONS_garnet_COLONS_GarnetExtLink")
        ;

}

static EmbeddedPyBind embed_obj("GarnetExtLink", module_init, "BasicExtLink");

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
class DummyGarnetExtLinkParamsClass
{
  public:
    gem5::ruby::garnet::GarnetExtLink *create() const;
};

template <class CxxClass, class Enable=void>
class DummyGarnetExtLinkShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyGarnetExtLinkShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const GarnetExtLinkParams &>>>
{
  public:
    using Params = GarnetExtLinkParams;
    static gem5::ruby::garnet::GarnetExtLink *
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
class DummyGarnetExtLinkShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const GarnetExtLinkParams &>>>
{
  public:
    using Params = DummyGarnetExtLinkParamsClass;
    static gem5::ruby::garnet::GarnetExtLink *
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
[[maybe_unused]] gem5::ruby::garnet::GarnetExtLink *
DummyGarnetExtLinkShunt<gem5::ruby::garnet::GarnetExtLink>::Params::create() const
{
    return DummyGarnetExtLinkShunt<gem5::ruby::garnet::GarnetExtLink>::create(*this);
}

} // namespace gem5
