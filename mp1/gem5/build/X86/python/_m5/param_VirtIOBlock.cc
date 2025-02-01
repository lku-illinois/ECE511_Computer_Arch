/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/VirtIOBlock.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/virtio/block.hh"

#include "dev/storage/disk_image.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_VirtIOBlock");
    py::class_<VirtIOBlockParams, VirtIODeviceBaseParams, std::unique_ptr<VirtIOBlockParams, py::nodelete>>(m, "VirtIOBlockParams")
        .def(py::init<>())
        .def("create", &VirtIOBlockParams::create)
        .def_readwrite("image", &VirtIOBlockParams::image)
        .def_readwrite("queueSize", &VirtIOBlockParams::queueSize)
        ;

    py::class_<gem5::VirtIOBlock, gem5::VirtIODeviceBase, std::unique_ptr<gem5::VirtIOBlock, py::nodelete>>(m, "gem5_COLONS_VirtIOBlock")
        ;

}

static EmbeddedPyBind embed_obj("VirtIOBlock", module_init, "VirtIODeviceBase");

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
class DummyVirtIOBlockParamsClass
{
  public:
    gem5::VirtIOBlock *create() const;
};

template <class CxxClass, class Enable=void>
class DummyVirtIOBlockShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyVirtIOBlockShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const VirtIOBlockParams &>>>
{
  public:
    using Params = VirtIOBlockParams;
    static gem5::VirtIOBlock *
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
class DummyVirtIOBlockShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const VirtIOBlockParams &>>>
{
  public:
    using Params = DummyVirtIOBlockParamsClass;
    static gem5::VirtIOBlock *
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
[[maybe_unused]] gem5::VirtIOBlock *
DummyVirtIOBlockShunt<gem5::VirtIOBlock>::Params::create() const
{
    return DummyVirtIOBlockShunt<gem5::VirtIOBlock>::create(*this);
}

} // namespace gem5
