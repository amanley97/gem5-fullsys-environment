/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/GenericTimerMem.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/generic_timer.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "dev/arm/generic_timer.hh"
#include <vector>
#include "dev/arm/generic_timer.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_GenericTimerMem");
    py::class_<GenericTimerMemParams, PioDeviceParams, std::unique_ptr<GenericTimerMemParams, py::nodelete>>(m, "GenericTimerMemParams")
        .def(py::init<>())
        .def("create", &GenericTimerMemParams::create)
        .def_readwrite("cnt_control_base", &GenericTimerMemParams::cnt_control_base)
        .def_readwrite("cnt_ctl_base", &GenericTimerMemParams::cnt_ctl_base)
        .def_readwrite("cnt_read_base", &GenericTimerMemParams::cnt_read_base)
        .def_readwrite("counter", &GenericTimerMemParams::counter)
        .def_readwrite("frames", &GenericTimerMemParams::frames)
        ;

    py::class_<gem5::GenericTimerMem, gem5::PioDevice, std::unique_ptr<gem5::GenericTimerMem, py::nodelete>>(m, "gem5_COLONS_GenericTimerMem")
        ;

}

static EmbeddedPyBind embed_obj("GenericTimerMem", module_init, "PioDevice");

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
class DummyGenericTimerMemParamsClass
{
  public:
    gem5::GenericTimerMem *create() const;
};

template <class CxxClass, class Enable=void>
class DummyGenericTimerMemShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyGenericTimerMemShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const GenericTimerMemParams &>>>
{
  public:
    using Params = GenericTimerMemParams;
    static gem5::GenericTimerMem *
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
class DummyGenericTimerMemShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const GenericTimerMemParams &>>>
{
  public:
    using Params = DummyGenericTimerMemParamsClass;
    static gem5::GenericTimerMem *
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
[[maybe_unused]] gem5::GenericTimerMem *
DummyGenericTimerMemShunt<gem5::GenericTimerMem>::Params::create() const
{
    return DummyGenericTimerMemShunt<gem5::GenericTimerMem>::create(*this);
}

} // namespace gem5