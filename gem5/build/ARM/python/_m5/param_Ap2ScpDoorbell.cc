/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Ap2ScpDoorbell.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/css/mhu.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Ap2ScpDoorbell");
    py::class_<Ap2ScpDoorbellParams, MhuDoorbellParams, std::unique_ptr<Ap2ScpDoorbellParams, py::nodelete>>(m, "Ap2ScpDoorbellParams")
        .def(py::init<>())
        .def("create", &Ap2ScpDoorbellParams::create)
        ;

    py::class_<gem5::Ap2ScpDoorbell, gem5::MhuDoorbell, std::unique_ptr<gem5::Ap2ScpDoorbell, py::nodelete>>(m, "gem5_COLONS_Ap2ScpDoorbell")
        ;

}

static EmbeddedPyBind embed_obj("Ap2ScpDoorbell", module_init, "MhuDoorbell");

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
class DummyAp2ScpDoorbellParamsClass
{
  public:
    gem5::Ap2ScpDoorbell *create() const;
};

template <class CxxClass, class Enable=void>
class DummyAp2ScpDoorbellShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyAp2ScpDoorbellShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const Ap2ScpDoorbellParams &>>>
{
  public:
    using Params = Ap2ScpDoorbellParams;
    static gem5::Ap2ScpDoorbell *
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
class DummyAp2ScpDoorbellShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const Ap2ScpDoorbellParams &>>>
{
  public:
    using Params = DummyAp2ScpDoorbellParamsClass;
    static gem5::Ap2ScpDoorbell *
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
[[maybe_unused]] gem5::Ap2ScpDoorbell *
DummyAp2ScpDoorbellShunt<gem5::Ap2ScpDoorbell>::Params::create() const
{
    return DummyAp2ScpDoorbellShunt<gem5::Ap2ScpDoorbell>::create(*this);
}

} // namespace gem5