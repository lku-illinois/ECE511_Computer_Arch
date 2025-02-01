/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:295
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/RiscvBootloaderKernelWorkload.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/riscv/linux/fs_workload.hh"

#include "base/types.hh"
#include <string>
#include <string>
#include "base/types.hh"
#include <string>
#include "base/types.hh"
#include "base/types.hh"
#include <string>
#include "enums/KernelPanicOopsBehaviour.hh"
#include "enums/KernelPanicOopsBehaviour.hh"
#include "arch/riscv/semihosting.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_RiscvBootloaderKernelWorkload");
    py::class_<RiscvBootloaderKernelWorkloadParams, WorkloadParams, std::unique_ptr<RiscvBootloaderKernelWorkloadParams, py::nodelete>>(m, "RiscvBootloaderKernelWorkloadParams")
        .def(py::init<>())
        .def("create", &RiscvBootloaderKernelWorkloadParams::create)
        .def_readwrite("bootloader_addr", &RiscvBootloaderKernelWorkloadParams::bootloader_addr)
        .def_readwrite("bootloader_filename", &RiscvBootloaderKernelWorkloadParams::bootloader_filename)
        .def_readwrite("command_line", &RiscvBootloaderKernelWorkloadParams::command_line)
        .def_readwrite("dtb_addr", &RiscvBootloaderKernelWorkloadParams::dtb_addr)
        .def_readwrite("dtb_filename", &RiscvBootloaderKernelWorkloadParams::dtb_filename)
        .def_readwrite("entry_point", &RiscvBootloaderKernelWorkloadParams::entry_point)
        .def_readwrite("exit_on_kernel_oops", &RiscvBootloaderKernelWorkloadParams::exit_on_kernel_oops)
        .def_readwrite("exit_on_kernel_panic", &RiscvBootloaderKernelWorkloadParams::exit_on_kernel_panic)
        .def_readwrite("kernel_addr", &RiscvBootloaderKernelWorkloadParams::kernel_addr)
        .def_readwrite("object_file", &RiscvBootloaderKernelWorkloadParams::object_file)
        .def_readwrite("on_oops", &RiscvBootloaderKernelWorkloadParams::on_oops)
        .def_readwrite("on_panic", &RiscvBootloaderKernelWorkloadParams::on_panic)
        .def_readwrite("semihosting", &RiscvBootloaderKernelWorkloadParams::semihosting)
        ;

    py::class_<gem5::RiscvISA::BootloaderKernelWorkload, gem5::Workload, std::unique_ptr<gem5::RiscvISA::BootloaderKernelWorkload, py::nodelete>>(m, "gem5_COLONS_RiscvISA_COLONS_BootloaderKernelWorkload")
        ;

}

static EmbeddedPyBind embed_obj("RiscvBootloaderKernelWorkload", module_init, "Workload");

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
class DummyRiscvBootloaderKernelWorkloadParamsClass
{
  public:
    gem5::RiscvISA::BootloaderKernelWorkload *create() const;
};

template <class CxxClass, class Enable=void>
class DummyRiscvBootloaderKernelWorkloadShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyRiscvBootloaderKernelWorkloadShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const RiscvBootloaderKernelWorkloadParams &>>>
{
  public:
    using Params = RiscvBootloaderKernelWorkloadParams;
    static gem5::RiscvISA::BootloaderKernelWorkload *
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
class DummyRiscvBootloaderKernelWorkloadShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const RiscvBootloaderKernelWorkloadParams &>>>
{
  public:
    using Params = DummyRiscvBootloaderKernelWorkloadParamsClass;
    static gem5::RiscvISA::BootloaderKernelWorkload *
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
[[maybe_unused]] gem5::RiscvISA::BootloaderKernelWorkload *
DummyRiscvBootloaderKernelWorkloadShunt<gem5::RiscvISA::BootloaderKernelWorkload>::Params::create() const
{
    return DummyRiscvBootloaderKernelWorkloadShunt<gem5::RiscvISA::BootloaderKernelWorkload>::create(*this);
}

} // namespace gem5
