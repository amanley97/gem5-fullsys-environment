/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/GenericTimerFrame.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/generic_timer.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "dev/arm/generic_timer.hh"
#include "dev/arm/base_gic.hh"
#include "dev/arm/base_gic.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_GenericTimerFrame");
    py::class_<GenericTimerFrameParams, PioDeviceParams, std::unique_ptr<GenericTimerFrameParams, py::nodelete>>(m, "GenericTimerFrameParams")
        .def(py::init<>())
        .def("create", &GenericTimerFrameParams::create)
        .def_readwrite("cnt_base", &GenericTimerFrameParams::cnt_base)
        .def_readwrite("cnt_el0_base", &GenericTimerFrameParams::cnt_el0_base)
        .def_readwrite("counter", &GenericTimerFrameParams::counter)
        .def_readwrite("int_phys", &GenericTimerFrameParams::int_phys)
        .def_readwrite("int_virt", &GenericTimerFrameParams::int_virt)
        ;

    py::class_<gem5::GenericTimerFrame, gem5::PioDevice, std::unique_ptr<gem5::GenericTimerFrame, py::nodelete>>(m, "gem5_COLONS_GenericTimerFrame")
        ;

}

static EmbeddedPyBind embed_obj("GenericTimerFrame", module_init, "PioDevice");

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
class DummyGenericTimerFrameParamsClass
{
  public:
    gem5::GenericTimerFrame *create() const;
};

template <class CxxClass, class Enable=void>
class DummyGenericTimerFrameShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyGenericTimerFrameShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const GenericTimerFrameParams &>>>
{
  public:
    using Params = GenericTimerFrameParams;
    static gem5::GenericTimerFrame *
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
class DummyGenericTimerFrameShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const GenericTimerFrameParams &>>>
{
  public:
    using Params = DummyGenericTimerFrameParamsClass;
    static gem5::GenericTimerFrame *
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
[[maybe_unused]] gem5::GenericTimerFrame *
DummyGenericTimerFrameShunt<gem5::GenericTimerFrame>::Params::create() const
{
    return DummyGenericTimerFrameShunt<gem5::GenericTimerFrame>::create(*this);
}

} // namespace gem5
