/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SMMUv3DeviceInterface.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/smmu_v3_deviceifc.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include <string>
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
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
py::module_ m = m_internal.def_submodule("param_SMMUv3DeviceInterface");
    py::class_<SMMUv3DeviceInterfaceParams, ClockedObjectParams, std::unique_ptr<SMMUv3DeviceInterfaceParams, py::nodelete>>(m, "SMMUv3DeviceInterfaceParams")
        .def(py::init<>())
        .def("create", &SMMUv3DeviceInterfaceParams::create)
        .def_readwrite("port_width", &SMMUv3DeviceInterfaceParams::port_width)
        .def_readwrite("prefetch_enable", &SMMUv3DeviceInterfaceParams::prefetch_enable)
        .def_readwrite("prefetch_reserve_last_way", &SMMUv3DeviceInterfaceParams::prefetch_reserve_last_way)
        .def_readwrite("tlb_assoc", &SMMUv3DeviceInterfaceParams::tlb_assoc)
        .def_readwrite("tlb_enable", &SMMUv3DeviceInterfaceParams::tlb_enable)
        .def_readwrite("tlb_entries", &SMMUv3DeviceInterfaceParams::tlb_entries)
        .def_readwrite("tlb_lat", &SMMUv3DeviceInterfaceParams::tlb_lat)
        .def_readwrite("tlb_policy", &SMMUv3DeviceInterfaceParams::tlb_policy)
        .def_readwrite("tlb_slots", &SMMUv3DeviceInterfaceParams::tlb_slots)
        .def_readwrite("utlb_assoc", &SMMUv3DeviceInterfaceParams::utlb_assoc)
        .def_readwrite("utlb_enable", &SMMUv3DeviceInterfaceParams::utlb_enable)
        .def_readwrite("utlb_entries", &SMMUv3DeviceInterfaceParams::utlb_entries)
        .def_readwrite("utlb_lat", &SMMUv3DeviceInterfaceParams::utlb_lat)
        .def_readwrite("utlb_policy", &SMMUv3DeviceInterfaceParams::utlb_policy)
        .def_readwrite("utlb_slots", &SMMUv3DeviceInterfaceParams::utlb_slots)
        .def_readwrite("wrbuf_slots", &SMMUv3DeviceInterfaceParams::wrbuf_slots)
        .def_readwrite("xlate_slots", &SMMUv3DeviceInterfaceParams::xlate_slots)
        .def_readwrite("port_device_port_connection_count", &SMMUv3DeviceInterfaceParams::port_device_port_connection_count)
        .def_readwrite("port_ats_mem_side_port_connection_count", &SMMUv3DeviceInterfaceParams::port_ats_mem_side_port_connection_count)
        .def_readwrite("port_ats_dev_side_port_connection_count", &SMMUv3DeviceInterfaceParams::port_ats_dev_side_port_connection_count)
        ;

    py::class_<gem5::SMMUv3DeviceInterface, gem5::ClockedObject, std::unique_ptr<gem5::SMMUv3DeviceInterface, py::nodelete>>(m, "gem5_COLONS_SMMUv3DeviceInterface")
        ;

}

static EmbeddedPyBind embed_obj("SMMUv3DeviceInterface", module_init, "ClockedObject");

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
class DummySMMUv3DeviceInterfaceParamsClass
{
  public:
    gem5::SMMUv3DeviceInterface *create() const;
};

template <class CxxClass, class Enable=void>
class DummySMMUv3DeviceInterfaceShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySMMUv3DeviceInterfaceShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SMMUv3DeviceInterfaceParams &>>>
{
  public:
    using Params = SMMUv3DeviceInterfaceParams;
    static gem5::SMMUv3DeviceInterface *
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
class DummySMMUv3DeviceInterfaceShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SMMUv3DeviceInterfaceParams &>>>
{
  public:
    using Params = DummySMMUv3DeviceInterfaceParamsClass;
    static gem5::SMMUv3DeviceInterface *
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
[[maybe_unused]] gem5::SMMUv3DeviceInterface *
DummySMMUv3DeviceInterfaceShunt<gem5::SMMUv3DeviceInterface>::Params::create() const
{
    return DummySMMUv3DeviceInterfaceShunt<gem5::SMMUv3DeviceInterface>::create(*this);
}

} // namespace gem5
