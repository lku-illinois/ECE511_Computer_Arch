/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/FPCD.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/compressors/fpcd.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_FPCD");
    py::class_<FPCDParams, BaseDictionaryCompressorParams, std::unique_ptr<FPCDParams, py::nodelete>>(m, "FPCDParams")
        .def(py::init<>())
        .def("create", &FPCDParams::create)
        ;

    py::class_<gem5::compression::FPCD, gem5::compression::BaseDictionaryCompressor, std::unique_ptr<gem5::compression::FPCD, py::nodelete>>(m, "gem5_COLONS_compression_COLONS_FPCD")
        ;

}

static EmbeddedPyBind embed_obj("FPCD", module_init, "BaseDictionaryCompressor");

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
class DummyFPCDParamsClass
{
  public:
    gem5::compression::FPCD *create() const;
};

template <class CxxClass, class Enable=void>
class DummyFPCDShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyFPCDShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const FPCDParams &>>>
{
  public:
    using Params = FPCDParams;
    static gem5::compression::FPCD *
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
class DummyFPCDShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const FPCDParams &>>>
{
  public:
    using Params = DummyFPCDParamsClass;
    static gem5::compression::FPCD *
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
[[maybe_unused]] gem5::compression::FPCD *
DummyFPCDShunt<gem5::compression::FPCD>::Params::create() const
{
    return DummyFPCDShunt<gem5::compression::FPCD>::create(*this);
}

} // namespace gem5
