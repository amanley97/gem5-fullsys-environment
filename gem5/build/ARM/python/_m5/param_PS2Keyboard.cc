/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/PS2Keyboard.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/ps2/keyboard.hh"

#include "base/vnc/vncinput.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_PS2Keyboard");
    py::class_<PS2KeyboardParams, PS2DeviceParams, std::unique_ptr<PS2KeyboardParams, py::nodelete>>(m, "PS2KeyboardParams")
        .def(py::init<>())
        .def("create", &PS2KeyboardParams::create)
        .def_readwrite("vnc", &PS2KeyboardParams::vnc)
        ;

    py::class_<gem5::ps2::PS2Keyboard, gem5::ps2::Device, std::unique_ptr<gem5::ps2::PS2Keyboard, py::nodelete>>(m, "gem5_COLONS_ps2_COLONS_PS2Keyboard")
        ;

}

static EmbeddedPyBind embed_obj("PS2Keyboard", module_init, "PS2Device");

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
class DummyPS2KeyboardParamsClass
{
  public:
    gem5::ps2::PS2Keyboard *create() const;
};

template <class CxxClass, class Enable=void>
class DummyPS2KeyboardShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyPS2KeyboardShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const PS2KeyboardParams &>>>
{
  public:
    using Params = PS2KeyboardParams;
    static gem5::ps2::PS2Keyboard *
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
class DummyPS2KeyboardShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const PS2KeyboardParams &>>>
{
  public:
    using Params = DummyPS2KeyboardParamsClass;
    static gem5::ps2::PS2Keyboard *
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
[[maybe_unused]] gem5::ps2::PS2Keyboard *
DummyPS2KeyboardShunt<gem5::ps2::PS2Keyboard>::Params::create() const
{
    return DummyPS2KeyboardShunt<gem5::ps2::PS2Keyboard>::create(*this);
}

} // namespace gem5
