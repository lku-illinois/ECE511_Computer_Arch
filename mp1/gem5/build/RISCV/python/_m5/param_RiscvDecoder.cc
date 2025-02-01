/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/RiscvDecoder.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/riscv/decoder.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_RiscvDecoder");
    py::class_<RiscvDecoderParams, InstDecoderParams, std::unique_ptr<RiscvDecoderParams, py::nodelete>>(m, "RiscvDecoderParams")
        .def(py::init<>())
        .def("create", &RiscvDecoderParams::create)
        ;

    py::class_<gem5::RiscvISA::Decoder, gem5::InstDecoder, std::unique_ptr<gem5::RiscvISA::Decoder, py::nodelete>>(m, "gem5_COLONS_RiscvISA_COLONS_Decoder")
        ;

}

static EmbeddedPyBind embed_obj("RiscvDecoder", module_init, "InstDecoder");

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
class DummyRiscvDecoderParamsClass
{
  public:
    gem5::RiscvISA::Decoder *create() const;
};

template <class CxxClass, class Enable=void>
class DummyRiscvDecoderShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyRiscvDecoderShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const RiscvDecoderParams &>>>
{
  public:
    using Params = RiscvDecoderParams;
    static gem5::RiscvISA::Decoder *
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
class DummyRiscvDecoderShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const RiscvDecoderParams &>>>
{
  public:
    using Params = DummyRiscvDecoderParamsClass;
    static gem5::RiscvISA::Decoder *
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
[[maybe_unused]] gem5::RiscvISA::Decoder *
DummyRiscvDecoderShunt<gem5::RiscvISA::Decoder>::Params::create() const
{
    return DummyRiscvDecoderShunt<gem5::RiscvISA::Decoder>::create(*this);
}

} // namespace gem5
