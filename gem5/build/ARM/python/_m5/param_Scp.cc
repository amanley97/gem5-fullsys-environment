/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Scp.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/arm/css/scp.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Scp");
    py::class_<ScpParams, ClockedObjectParams, std::unique_ptr<ScpParams, py::nodelete>>(m, "ScpParams")
        ;

    py::class_<gem5::Scp, gem5::ClockedObject, std::unique_ptr<gem5::Scp, py::nodelete>>(m, "gem5_COLONS_Scp")
        ;

}

static EmbeddedPyBind embed_obj("Scp", module_init, "ClockedObject");

} // namespace gem5
