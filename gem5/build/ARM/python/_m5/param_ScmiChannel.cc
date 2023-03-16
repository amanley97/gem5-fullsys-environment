/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/ScmiChannel.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/css/scmi_platform.hh"

#include "dev/arm/doorbell.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/addr_range.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_ScmiChannel");
    py::class_<ScmiChannelParams, SimObjectParams, std::unique_ptr<ScmiChannelParams, py::nodelete>>(m, "ScmiChannelParams")
        .def(py::init<>())
        .def("create", &ScmiChannelParams::create)
        .def_readwrite("doorbell", &ScmiChannelParams::doorbell)
        .def_readwrite("phys_id", &ScmiChannelParams::phys_id)
        .def_readwrite("shmem_range", &ScmiChannelParams::shmem_range)
        .def_readwrite("virt_id", &ScmiChannelParams::virt_id)
        ;

    py::class_<gem5::scmi::VirtualChannel, gem5::SimObject, std::unique_ptr<gem5::scmi::VirtualChannel, py::nodelete>>(m, "gem5_COLONS_scmi_COLONS_VirtualChannel")
        ;

}

static EmbeddedPyBind embed_obj("ScmiChannel", module_init, "SimObject");

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
class DummyScmiChannelParamsClass
{
  public:
    gem5::scmi::VirtualChannel *create() const;
};

template <class CxxClass, class Enable=void>
class DummyScmiChannelShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyScmiChannelShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const ScmiChannelParams &>>>
{
  public:
    using Params = ScmiChannelParams;
    static gem5::scmi::VirtualChannel *
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
class DummyScmiChannelShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const ScmiChannelParams &>>>
{
  public:
    using Params = DummyScmiChannelParamsClass;
    static gem5::scmi::VirtualChannel *
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
[[maybe_unused]] gem5::scmi::VirtualChannel *
DummyScmiChannelShunt<gem5::scmi::VirtualChannel>::Params::create() const
{
    return DummyScmiChannelShunt<gem5::scmi::VirtualChannel>::create(*this);
}

} // namespace gem5
