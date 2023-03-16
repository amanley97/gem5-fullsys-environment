/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/GenericArmPciHost.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/pci_host.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "enums/ArmPciIntRouting.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_GenericArmPciHost");
    py::class_<GenericArmPciHostParams, GenericPciHostParams, std::unique_ptr<GenericArmPciHostParams, py::nodelete>>(m, "GenericArmPciHostParams")
        .def(py::init<>())
        .def("create", &GenericArmPciHostParams::create)
        .def_readwrite("int_base", &GenericArmPciHostParams::int_base)
        .def_readwrite("int_count", &GenericArmPciHostParams::int_count)
        .def_readwrite("int_policy", &GenericArmPciHostParams::int_policy)
        ;

    py::class_<gem5::GenericArmPciHost, gem5::GenericPciHost, std::unique_ptr<gem5::GenericArmPciHost, py::nodelete>>(m, "gem5_COLONS_GenericArmPciHost")
        ;

}

static EmbeddedPyBind embed_obj("GenericArmPciHost", module_init, "GenericPciHost");

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
class DummyGenericArmPciHostParamsClass
{
  public:
    gem5::GenericArmPciHost *create() const;
};

template <class CxxClass, class Enable=void>
class DummyGenericArmPciHostShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyGenericArmPciHostShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const GenericArmPciHostParams &>>>
{
  public:
    using Params = GenericArmPciHostParams;
    static gem5::GenericArmPciHost *
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
class DummyGenericArmPciHostShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const GenericArmPciHostParams &>>>
{
  public:
    using Params = DummyGenericArmPciHostParamsClass;
    static gem5::GenericArmPciHost *
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
[[maybe_unused]] gem5::GenericArmPciHost *
DummyGenericArmPciHostShunt<gem5::GenericArmPciHost>::Params::create() const
{
    return DummyGenericArmPciHostShunt<gem5::GenericArmPciHost>::create(*this);
}

} // namespace gem5
