/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Pc.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/x86/pc.hh"

#include "dev/x86/south_bridge.hh"
#include "sim/system.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Pc");
    py::class_<PcParams, PlatformParams, std::unique_ptr<PcParams, py::nodelete>>(m, "PcParams")
        .def(py::init<>())
        .def("create", &PcParams::create)
        .def_readwrite("south_bridge", &PcParams::south_bridge)
        .def_readwrite("system", &PcParams::system)
        ;

    py::class_<gem5::Pc, gem5::Platform, std::unique_ptr<gem5::Pc, py::nodelete>>(m, "gem5_COLONS_Pc")
        ;

}

static EmbeddedPyBind embed_obj("Pc", module_init, "Platform");

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
class DummyPcParamsClass
{
  public:
    gem5::Pc *create() const;
};

template <class CxxClass, class Enable=void>
class DummyPcShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyPcShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const PcParams &>>>
{
  public:
    using Params = PcParams;
    static gem5::Pc *
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
class DummyPcShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const PcParams &>>>
{
  public:
    using Params = DummyPcParamsClass;
    static gem5::Pc *
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
[[maybe_unused]] gem5::Pc *
DummyPcShunt<gem5::Pc>::Params::create() const
{
    return DummyPcShunt<gem5::Pc>::create(*this);
}

} // namespace gem5
