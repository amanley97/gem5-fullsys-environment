/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Sp804.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/timer_sp804.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "dev/arm/base_gic.hh"
#include "dev/arm/base_gic.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Sp804");
    py::class_<Sp804Params, AmbaPioDeviceParams, std::unique_ptr<Sp804Params, py::nodelete>>(m, "Sp804Params")
        .def(py::init<>())
        .def("create", &Sp804Params::create)
        .def_readwrite("clock0", &Sp804Params::clock0)
        .def_readwrite("clock1", &Sp804Params::clock1)
        .def_readwrite("int0", &Sp804Params::int0)
        .def_readwrite("int1", &Sp804Params::int1)
        ;

    py::class_<gem5::Sp804, gem5::AmbaPioDevice, std::unique_ptr<gem5::Sp804, py::nodelete>>(m, "gem5_COLONS_Sp804")
        ;

}

static EmbeddedPyBind embed_obj("Sp804", module_init, "AmbaPioDevice");

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
class DummySp804ParamsClass
{
  public:
    gem5::Sp804 *create() const;
};

template <class CxxClass, class Enable=void>
class DummySp804Shunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySp804Shunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const Sp804Params &>>>
{
  public:
    using Params = Sp804Params;
    static gem5::Sp804 *
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
class DummySp804Shunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const Sp804Params &>>>
{
  public:
    using Params = DummySp804ParamsClass;
    static gem5::Sp804 *
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
[[maybe_unused]] gem5::Sp804 *
DummySp804Shunt<gem5::Sp804>::Params::create() const
{
    return DummySp804Shunt<gem5::Sp804>::create(*this);
}

} // namespace gem5
