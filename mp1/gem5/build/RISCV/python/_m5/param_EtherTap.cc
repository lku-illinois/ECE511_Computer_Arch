/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/EtherTap.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/net/ethertap.hh"

#include <string>
#include <string>
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_EtherTap");
    py::class_<EtherTapParams, EtherTapBaseParams, std::unique_ptr<EtherTapParams, py::nodelete>>(m, "EtherTapParams")
        .def(py::init<>())
        .def("create", &EtherTapParams::create)
        .def_readwrite("tap_device_name", &EtherTapParams::tap_device_name)
        .def_readwrite("tun_clone_device", &EtherTapParams::tun_clone_device)
        ;

    py::class_<gem5::EtherTap, gem5::EtherTapBase, std::unique_ptr<gem5::EtherTap, py::nodelete>>(m, "gem5_COLONS_EtherTap")
        ;

}

static EmbeddedPyBind embed_obj("EtherTap", module_init, "EtherTapBase");

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
class DummyEtherTapParamsClass
{
  public:
    gem5::EtherTap *create() const;
};

template <class CxxClass, class Enable=void>
class DummyEtherTapShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyEtherTapShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const EtherTapParams &>>>
{
  public:
    using Params = EtherTapParams;
    static gem5::EtherTap *
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
class DummyEtherTapShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const EtherTapParams &>>>
{
  public:
    using Params = DummyEtherTapParamsClass;
    static gem5::EtherTap *
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
[[maybe_unused]] gem5::EtherTap *
DummyEtherTapShunt<gem5::EtherTap>::Params::create() const
{
    return DummyEtherTapShunt<gem5::EtherTap>::create(*this);
}

} // namespace gem5
