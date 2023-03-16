/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SEWorkload.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "sim/se_workload.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SEWorkload");
    py::class_<SEWorkloadParams, WorkloadParams, std::unique_ptr<SEWorkloadParams, py::nodelete>>(m, "SEWorkloadParams")
        ;

    py::class_<gem5::SEWorkload, gem5::Workload, std::unique_ptr<gem5::SEWorkload, py::nodelete>>(m, "gem5_COLONS_SEWorkload")
        ;

}

static EmbeddedPyBind embed_obj("SEWorkload", module_init, "Workload");

} // namespace gem5
