/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/MiscNode_Controller.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/ruby/protocol/MiscNode_Controller.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "mem/ruby/network/MessageBuffer.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/ruby/network/MessageBuffer.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_MiscNode_Controller");
    py::class_<MiscNode_ControllerParams, RubyControllerParams, std::unique_ptr<MiscNode_ControllerParams, py::nodelete>>(m, "MiscNode_ControllerParams")
        .def(py::init<>())
        .def("create", &MiscNode_ControllerParams::create)
        .def_readwrite("allocation_latency", &MiscNode_ControllerParams::allocation_latency)
        .def_readwrite("comp_wu_latency", &MiscNode_ControllerParams::comp_wu_latency)
        .def_readwrite("crd_grant_latency", &MiscNode_ControllerParams::crd_grant_latency)
        .def_readwrite("datIn", &MiscNode_ControllerParams::datIn)
        .def_readwrite("datOut", &MiscNode_ControllerParams::datOut)
        .def_readwrite("data_channel_size", &MiscNode_ControllerParams::data_channel_size)
        .def_readwrite("data_latency", &MiscNode_ControllerParams::data_latency)
        .def_readwrite("dealloc_wait_for_tag", &MiscNode_ControllerParams::dealloc_wait_for_tag)
        .def_readwrite("early_nonsync_comp", &MiscNode_ControllerParams::early_nonsync_comp)
        .def_readwrite("mandatoryQueue", &MiscNode_ControllerParams::mandatoryQueue)
        .def_readwrite("number_of_DVM_TBEs", &MiscNode_ControllerParams::number_of_DVM_TBEs)
        .def_readwrite("number_of_non_sync_TBEs", &MiscNode_ControllerParams::number_of_non_sync_TBEs)
        .def_readwrite("reqIn", &MiscNode_ControllerParams::reqIn)
        .def_readwrite("reqOut", &MiscNode_ControllerParams::reqOut)
        .def_readwrite("reqRdy", &MiscNode_ControllerParams::reqRdy)
        .def_readwrite("request_latency", &MiscNode_ControllerParams::request_latency)
        .def_readwrite("response_latency", &MiscNode_ControllerParams::response_latency)
        .def_readwrite("retryTriggerQueue", &MiscNode_ControllerParams::retryTriggerQueue)
        .def_readwrite("retry_ack_latency", &MiscNode_ControllerParams::retry_ack_latency)
        .def_readwrite("retry_req_latency", &MiscNode_ControllerParams::retry_req_latency)
        .def_readwrite("rspIn", &MiscNode_ControllerParams::rspIn)
        .def_readwrite("rspOut", &MiscNode_ControllerParams::rspOut)
        .def_readwrite("schedRspTriggerQueue", &MiscNode_ControllerParams::schedRspTriggerQueue)
        .def_readwrite("sched_response_latency", &MiscNode_ControllerParams::sched_response_latency)
        .def_readwrite("snoop_latency", &MiscNode_ControllerParams::snoop_latency)
        .def_readwrite("snpIn", &MiscNode_ControllerParams::snpIn)
        .def_readwrite("snpOut", &MiscNode_ControllerParams::snpOut)
        .def_readwrite("snpRdy", &MiscNode_ControllerParams::snpRdy)
        .def_readwrite("snp_inv_latency", &MiscNode_ControllerParams::snp_inv_latency)
        .def_readwrite("snp_latency", &MiscNode_ControllerParams::snp_latency)
        .def_readwrite("stall_recycle_lat", &MiscNode_ControllerParams::stall_recycle_lat)
        .def_readwrite("throttle_req_on_retry", &MiscNode_ControllerParams::throttle_req_on_retry)
        .def_readwrite("triggerQueue", &MiscNode_ControllerParams::triggerQueue)
        ;

    py::class_<gem5::ruby::MiscNode_Controller, gem5::ruby::AbstractController, std::unique_ptr<gem5::ruby::MiscNode_Controller, py::nodelete>>(m, "gem5_COLONS_ruby_COLONS_MiscNode_Controller")
        ;

}

static EmbeddedPyBind embed_obj("MiscNode_Controller", module_init, "RubyController");

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
class DummyMiscNode_ControllerParamsClass
{
  public:
    gem5::ruby::MiscNode_Controller *create() const;
};

template <class CxxClass, class Enable=void>
class DummyMiscNode_ControllerShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyMiscNode_ControllerShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const MiscNode_ControllerParams &>>>
{
  public:
    using Params = MiscNode_ControllerParams;
    static gem5::ruby::MiscNode_Controller *
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
class DummyMiscNode_ControllerShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const MiscNode_ControllerParams &>>>
{
  public:
    using Params = DummyMiscNode_ControllerParamsClass;
    static gem5::ruby::MiscNode_Controller *
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
[[maybe_unused]] gem5::ruby::MiscNode_Controller *
DummyMiscNode_ControllerShunt<gem5::ruby::MiscNode_Controller>::Params::create() const
{
    return DummyMiscNode_ControllerShunt<gem5::ruby::MiscNode_Controller>::create(*this);
}

} // namespace gem5