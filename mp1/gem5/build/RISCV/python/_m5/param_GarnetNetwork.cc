/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/GarnetNetwork.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/ruby/network/garnet/GarnetNetwork.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "mem/ruby/network/fault_model/FaultModel.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_GarnetNetwork");
    py::class_<GarnetNetworkParams, RubyNetworkParams, std::unique_ptr<GarnetNetworkParams, py::nodelete>>(m, "GarnetNetworkParams")
        .def(py::init<>())
        .def("create", &GarnetNetworkParams::create)
        .def_readwrite("buffers_per_ctrl_vc", &GarnetNetworkParams::buffers_per_ctrl_vc)
        .def_readwrite("buffers_per_data_vc", &GarnetNetworkParams::buffers_per_data_vc)
        .def_readwrite("enable_fault_model", &GarnetNetworkParams::enable_fault_model)
        .def_readwrite("fault_model", &GarnetNetworkParams::fault_model)
        .def_readwrite("garnet_deadlock_threshold", &GarnetNetworkParams::garnet_deadlock_threshold)
        .def_readwrite("ni_flit_size", &GarnetNetworkParams::ni_flit_size)
        .def_readwrite("num_rows", &GarnetNetworkParams::num_rows)
        .def_readwrite("routing_algorithm", &GarnetNetworkParams::routing_algorithm)
        .def_readwrite("vcs_per_vnet", &GarnetNetworkParams::vcs_per_vnet)
        ;

    py::class_<gem5::ruby::garnet::GarnetNetwork, gem5::ruby::Network, std::unique_ptr<gem5::ruby::garnet::GarnetNetwork, py::nodelete>>(m, "gem5_COLONS_ruby_COLONS_garnet_COLONS_GarnetNetwork")
        ;

}

static EmbeddedPyBind embed_obj("GarnetNetwork", module_init, "RubyNetwork");

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
class DummyGarnetNetworkParamsClass
{
  public:
    gem5::ruby::garnet::GarnetNetwork *create() const;
};

template <class CxxClass, class Enable=void>
class DummyGarnetNetworkShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyGarnetNetworkShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const GarnetNetworkParams &>>>
{
  public:
    using Params = GarnetNetworkParams;
    static gem5::ruby::garnet::GarnetNetwork *
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
class DummyGarnetNetworkShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const GarnetNetworkParams &>>>
{
  public:
    using Params = DummyGarnetNetworkParamsClass;
    static gem5::ruby::garnet::GarnetNetwork *
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
[[maybe_unused]] gem5::ruby::garnet::GarnetNetwork *
DummyGarnetNetworkShunt<gem5::ruby::garnet::GarnetNetwork>::Params::create() const
{
    return DummyGarnetNetworkShunt<gem5::ruby::garnet::GarnetNetwork>::create(*this);
}

} // namespace gem5
