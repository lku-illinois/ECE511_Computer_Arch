/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/VirtIO9PDiod.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/virtio/fs9p.hh"

#include <string>
#include <string>
#include <string>
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_VirtIO9PDiod");
    py::class_<VirtIO9PDiodParams, VirtIO9PProxyParams, std::unique_ptr<VirtIO9PDiodParams, py::nodelete>>(m, "VirtIO9PDiodParams")
        .def(py::init<>())
        .def("create", &VirtIO9PDiodParams::create)
        .def_readwrite("diod", &VirtIO9PDiodParams::diod)
        .def_readwrite("root", &VirtIO9PDiodParams::root)
        .def_readwrite("socketPath", &VirtIO9PDiodParams::socketPath)
        ;

    py::class_<gem5::VirtIO9PDiod, gem5::VirtIO9PProxy, std::unique_ptr<gem5::VirtIO9PDiod, py::nodelete>>(m, "gem5_COLONS_VirtIO9PDiod")
        ;

}

static EmbeddedPyBind embed_obj("VirtIO9PDiod", module_init, "VirtIO9PProxy");

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
class DummyVirtIO9PDiodParamsClass
{
  public:
    gem5::VirtIO9PDiod *create() const;
};

template <class CxxClass, class Enable=void>
class DummyVirtIO9PDiodShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyVirtIO9PDiodShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const VirtIO9PDiodParams &>>>
{
  public:
    using Params = VirtIO9PDiodParams;
    static gem5::VirtIO9PDiod *
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
class DummyVirtIO9PDiodShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const VirtIO9PDiodParams &>>>
{
  public:
    using Params = DummyVirtIO9PDiodParamsClass;
    static gem5::VirtIO9PDiod *
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
[[maybe_unused]] gem5::VirtIO9PDiod *
DummyVirtIO9PDiodShunt<gem5::VirtIO9PDiod>::Params::create() const
{
    return DummyVirtIO9PDiodShunt<gem5::VirtIO9PDiod>::create(*this);
}

} // namespace gem5
