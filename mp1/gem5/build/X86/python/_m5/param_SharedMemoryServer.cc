/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SharedMemoryServer.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/shared_memory_server.hh"

#include <string>
#include "sim/system.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SharedMemoryServer");
    py::class_<SharedMemoryServerParams, SimObjectParams, std::unique_ptr<SharedMemoryServerParams, py::nodelete>>(m, "SharedMemoryServerParams")
        .def(py::init<>())
        .def("create", &SharedMemoryServerParams::create)
        .def_readwrite("server_path", &SharedMemoryServerParams::server_path)
        .def_readwrite("system", &SharedMemoryServerParams::system)
        ;

    py::class_<gem5::memory::SharedMemoryServer, gem5::SimObject, std::unique_ptr<gem5::memory::SharedMemoryServer, py::nodelete>>(m, "gem5_COLONS_memory_COLONS_SharedMemoryServer")
        ;

}

static EmbeddedPyBind embed_obj("SharedMemoryServer", module_init, "SimObject");

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
class DummySharedMemoryServerParamsClass
{
  public:
    gem5::memory::SharedMemoryServer *create() const;
};

template <class CxxClass, class Enable=void>
class DummySharedMemoryServerShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySharedMemoryServerShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SharedMemoryServerParams &>>>
{
  public:
    using Params = SharedMemoryServerParams;
    static gem5::memory::SharedMemoryServer *
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
class DummySharedMemoryServerShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SharedMemoryServerParams &>>>
{
  public:
    using Params = DummySharedMemoryServerParamsClass;
    static gem5::memory::SharedMemoryServer *
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
[[maybe_unused]] gem5::memory::SharedMemoryServer *
DummySharedMemoryServerShunt<gem5::memory::SharedMemoryServer>::Params::create() const
{
    return DummySharedMemoryServerShunt<gem5::memory::SharedMemoryServer>::create(*this);
}

} // namespace gem5
