/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/VirtIODummyDevice.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/virtio/base.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_VirtIODummyDevice");
    py::class_<VirtIODummyDeviceParams, VirtIODeviceBaseParams, std::unique_ptr<VirtIODummyDeviceParams, py::nodelete>>(m, "VirtIODummyDeviceParams")
        .def(py::init<>())
        .def("create", &VirtIODummyDeviceParams::create)
        ;

    py::class_<gem5::VirtIODummyDevice, gem5::VirtIODeviceBase, std::unique_ptr<gem5::VirtIODummyDevice, py::nodelete>>(m, "gem5_COLONS_VirtIODummyDevice")
        ;

}

static EmbeddedPyBind embed_obj("VirtIODummyDevice", module_init, "VirtIODeviceBase");

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
class DummyVirtIODummyDeviceParamsClass
{
  public:
    gem5::VirtIODummyDevice *create() const;
};

template <class CxxClass, class Enable=void>
class DummyVirtIODummyDeviceShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyVirtIODummyDeviceShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const VirtIODummyDeviceParams &>>>
{
  public:
    using Params = VirtIODummyDeviceParams;
    static gem5::VirtIODummyDevice *
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
class DummyVirtIODummyDeviceShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const VirtIODummyDeviceParams &>>>
{
  public:
    using Params = DummyVirtIODummyDeviceParamsClass;
    static gem5::VirtIODummyDevice *
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
[[maybe_unused]] gem5::VirtIODummyDevice *
DummyVirtIODummyDeviceShunt<gem5::VirtIODummyDevice>::Params::create() const
{
    return DummyVirtIODummyDeviceShunt<gem5::VirtIODummyDevice>::create(*this);
}

} // namespace gem5
