/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/GarnetRouter.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/ruby/network/garnet/Router.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_GarnetRouter");
    py::class_<GarnetRouterParams, BasicRouterParams, std::unique_ptr<GarnetRouterParams, py::nodelete>>(m, "GarnetRouterParams")
        .def(py::init<>())
        .def("create", &GarnetRouterParams::create)
        .def_readwrite("vcs_per_vnet", &GarnetRouterParams::vcs_per_vnet)
        .def_readwrite("virt_nets", &GarnetRouterParams::virt_nets)
        .def_readwrite("width", &GarnetRouterParams::width)
        ;

    py::class_<gem5::ruby::garnet::Router, gem5::ruby::BasicRouter, std::unique_ptr<gem5::ruby::garnet::Router, py::nodelete>>(m, "gem5_COLONS_ruby_COLONS_garnet_COLONS_Router")
        ;

}

static EmbeddedPyBind embed_obj("GarnetRouter", module_init, "BasicRouter");

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
class DummyGarnetRouterParamsClass
{
  public:
    gem5::ruby::garnet::Router *create() const;
};

template <class CxxClass, class Enable=void>
class DummyGarnetRouterShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyGarnetRouterShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const GarnetRouterParams &>>>
{
  public:
    using Params = GarnetRouterParams;
    static gem5::ruby::garnet::Router *
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
class DummyGarnetRouterShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const GarnetRouterParams &>>>
{
  public:
    using Params = DummyGarnetRouterParamsClass;
    static gem5::ruby::garnet::Router *
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
[[maybe_unused]] gem5::ruby::garnet::Router *
DummyGarnetRouterShunt<gem5::ruby::garnet::Router>::Params::create() const
{
    return DummyGarnetRouterShunt<gem5::ruby::garnet::Router>::create(*this);
}

} // namespace gem5