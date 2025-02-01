/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/X86KvmCPU.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/x86/kvm/x86_cpu.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_X86KvmCPU");
    py::class_<X86KvmCPUParams, BaseKvmCPUParams, std::unique_ptr<X86KvmCPUParams, py::nodelete>>(m, "X86KvmCPUParams")
        .def(py::init<>())
        .def("create", &X86KvmCPUParams::create)
        .def_readwrite("useXSave", &X86KvmCPUParams::useXSave)
        ;

    py::class_<gem5::X86KvmCPU, gem5::BaseKvmCPU, std::unique_ptr<gem5::X86KvmCPU, py::nodelete>>(m, "gem5_COLONS_X86KvmCPU")
        .def("dumpFpuRegs", &gem5::X86KvmCPU::dumpFpuRegs)
        .def("dumpIntRegs", &gem5::X86KvmCPU::dumpIntRegs)
        .def("dumpSpecRegs", &gem5::X86KvmCPU::dumpSpecRegs)
        .def("dumpXCRs", &gem5::X86KvmCPU::dumpXCRs)
        .def("dumpXSave", &gem5::X86KvmCPU::dumpXSave)
        .def("dumpVCpuEvents", &gem5::X86KvmCPU::dumpVCpuEvents)
        ;

}

static EmbeddedPyBind embed_obj("X86KvmCPU", module_init, "BaseKvmCPU");

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
class DummyX86KvmCPUParamsClass
{
  public:
    gem5::X86KvmCPU *create() const;
};

template <class CxxClass, class Enable=void>
class DummyX86KvmCPUShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyX86KvmCPUShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const X86KvmCPUParams &>>>
{
  public:
    using Params = X86KvmCPUParams;
    static gem5::X86KvmCPU *
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
class DummyX86KvmCPUShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const X86KvmCPUParams &>>>
{
  public:
    using Params = DummyX86KvmCPUParamsClass;
    static gem5::X86KvmCPU *
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
[[maybe_unused]] gem5::X86KvmCPU *
DummyX86KvmCPUShunt<gem5::X86KvmCPU>::Params::create() const
{
    return DummyX86KvmCPUShunt<gem5::X86KvmCPU>::create(*this);
}

} // namespace gem5
