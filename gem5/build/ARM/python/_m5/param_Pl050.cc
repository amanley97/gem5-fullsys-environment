/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Pl050.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/kmi.hh"

#include "dev/ps2/device.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Pl050");
    py::class_<Pl050Params, AmbaIntDeviceParams, std::unique_ptr<Pl050Params, py::nodelete>>(m, "Pl050Params")
        .def(py::init<>())
        .def("create", &Pl050Params::create)
        .def_readwrite("ps2", &Pl050Params::ps2)
        ;

    py::class_<gem5::Pl050, gem5::AmbaIntDevice, std::unique_ptr<gem5::Pl050, py::nodelete>>(m, "gem5_COLONS_Pl050")
        ;

}

static EmbeddedPyBind embed_obj("Pl050", module_init, "AmbaIntDevice");

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
class DummyPl050ParamsClass
{
  public:
    gem5::Pl050 *create() const;
};

template <class CxxClass, class Enable=void>
class DummyPl050Shunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyPl050Shunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const Pl050Params &>>>
{
  public:
    using Params = Pl050Params;
    static gem5::Pl050 *
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
class DummyPl050Shunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const Pl050Params &>>>
{
  public:
    using Params = DummyPl050ParamsClass;
    static gem5::Pl050 *
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
[[maybe_unused]] gem5::Pl050 *
DummyPl050Shunt<gem5::Pl050>::Params::create() const
{
    return DummyPl050Shunt<gem5::Pl050>::create(*this);
}

} // namespace gem5
