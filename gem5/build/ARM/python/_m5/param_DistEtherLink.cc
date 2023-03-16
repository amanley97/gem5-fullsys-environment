/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/DistEtherLink.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/net/dist_etherlink.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "dev/net/etherdump.hh"
#include "base/types.hh"
#include <string>
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_DistEtherLink");
    py::class_<DistEtherLinkParams, SimObjectParams, std::unique_ptr<DistEtherLinkParams, py::nodelete>>(m, "DistEtherLinkParams")
        .def(py::init<>())
        .def("create", &DistEtherLinkParams::create)
        .def_readwrite("delay", &DistEtherLinkParams::delay)
        .def_readwrite("delay_var", &DistEtherLinkParams::delay_var)
        .def_readwrite("dist_rank", &DistEtherLinkParams::dist_rank)
        .def_readwrite("dist_size", &DistEtherLinkParams::dist_size)
        .def_readwrite("dist_sync_on_pseudo_op", &DistEtherLinkParams::dist_sync_on_pseudo_op)
        .def_readwrite("dump", &DistEtherLinkParams::dump)
        .def_readwrite("is_switch", &DistEtherLinkParams::is_switch)
        .def_readwrite("num_nodes", &DistEtherLinkParams::num_nodes)
        .def_readwrite("server_name", &DistEtherLinkParams::server_name)
        .def_readwrite("server_port", &DistEtherLinkParams::server_port)
        .def_readwrite("speed", &DistEtherLinkParams::speed)
        .def_readwrite("sync_repeat", &DistEtherLinkParams::sync_repeat)
        .def_readwrite("sync_start", &DistEtherLinkParams::sync_start)
        .def_readwrite("port_int0_connection_count", &DistEtherLinkParams::port_int0_connection_count)
        ;

    py::class_<gem5::DistEtherLink, gem5::SimObject, std::unique_ptr<gem5::DistEtherLink, py::nodelete>>(m, "gem5_COLONS_DistEtherLink")
        ;

}

static EmbeddedPyBind embed_obj("DistEtherLink", module_init, "SimObject");

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
class DummyDistEtherLinkParamsClass
{
  public:
    gem5::DistEtherLink *create() const;
};

template <class CxxClass, class Enable=void>
class DummyDistEtherLinkShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyDistEtherLinkShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const DistEtherLinkParams &>>>
{
  public:
    using Params = DistEtherLinkParams;
    static gem5::DistEtherLink *
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
class DummyDistEtherLinkShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const DistEtherLinkParams &>>>
{
  public:
    using Params = DummyDistEtherLinkParamsClass;
    static gem5::DistEtherLink *
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
[[maybe_unused]] gem5::DistEtherLink *
DummyDistEtherLinkShunt<gem5::DistEtherLink>::Params::create() const
{
    return DummyDistEtherLinkShunt<gem5::DistEtherLink>::create(*this);
}

} // namespace gem5
