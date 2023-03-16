/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/GarnetIntLink.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/ruby/network/garnet/GarnetLink.hh"

#include "mem/ruby/network/garnet/CreditLink.hh"
#include "mem/ruby/network/garnet/NetworkBridge.hh"
#include "mem/ruby/network/garnet/NetworkBridge.hh"
#include "mem/ruby/network/garnet/NetworkLink.hh"
#include "mem/ruby/network/garnet/NetworkBridge.hh"
#include "mem/ruby/network/garnet/NetworkBridge.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_GarnetIntLink");
    py::class_<GarnetIntLinkParams, BasicIntLinkParams, std::unique_ptr<GarnetIntLinkParams, py::nodelete>>(m, "GarnetIntLinkParams")
        .def(py::init<>())
        .def("create", &GarnetIntLinkParams::create)
        .def_readwrite("credit_link", &GarnetIntLinkParams::credit_link)
        .def_readwrite("dst_cdc", &GarnetIntLinkParams::dst_cdc)
        .def_readwrite("dst_cred_bridge", &GarnetIntLinkParams::dst_cred_bridge)
        .def_readwrite("dst_net_bridge", &GarnetIntLinkParams::dst_net_bridge)
        .def_readwrite("dst_serdes", &GarnetIntLinkParams::dst_serdes)
        .def_readwrite("network_link", &GarnetIntLinkParams::network_link)
        .def_readwrite("src_cdc", &GarnetIntLinkParams::src_cdc)
        .def_readwrite("src_cred_bridge", &GarnetIntLinkParams::src_cred_bridge)
        .def_readwrite("src_net_bridge", &GarnetIntLinkParams::src_net_bridge)
        .def_readwrite("src_serdes", &GarnetIntLinkParams::src_serdes)
        .def_readwrite("width", &GarnetIntLinkParams::width)
        ;

    py::class_<gem5::ruby::garnet::GarnetIntLink, gem5::ruby::BasicIntLink, std::unique_ptr<gem5::ruby::garnet::GarnetIntLink, py::nodelete>>(m, "gem5_COLONS_ruby_COLONS_garnet_COLONS_GarnetIntLink")
        ;

}

static EmbeddedPyBind embed_obj("GarnetIntLink", module_init, "BasicIntLink");

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
class DummyGarnetIntLinkParamsClass
{
  public:
    gem5::ruby::garnet::GarnetIntLink *create() const;
};

template <class CxxClass, class Enable=void>
class DummyGarnetIntLinkShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyGarnetIntLinkShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const GarnetIntLinkParams &>>>
{
  public:
    using Params = GarnetIntLinkParams;
    static gem5::ruby::garnet::GarnetIntLink *
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
class DummyGarnetIntLinkShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const GarnetIntLinkParams &>>>
{
  public:
    using Params = DummyGarnetIntLinkParamsClass;
    static gem5::ruby::garnet::GarnetIntLink *
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
[[maybe_unused]] gem5::ruby::garnet::GarnetIntLink *
DummyGarnetIntLinkShunt<gem5::ruby::garnet::GarnetIntLink>::Params::create() const
{
    return DummyGarnetIntLinkShunt<gem5::ruby::garnet::GarnetIntLink>::create(*this);
}

} // namespace gem5
