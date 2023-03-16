/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/MhuDoorbell.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/css/mhu.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_MhuDoorbell");
    py::class_<MhuDoorbellParams, DoorbellParams, std::unique_ptr<MhuDoorbellParams, py::nodelete>>(m, "MhuDoorbellParams")
        ;

    py::class_<gem5::MhuDoorbell, gem5::Doorbell, std::unique_ptr<gem5::MhuDoorbell, py::nodelete>>(m, "gem5_COLONS_MhuDoorbell")
        ;

}

static EmbeddedPyBind embed_obj("MhuDoorbell", module_init, "Doorbell");

} // namespace gem5