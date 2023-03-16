/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/TickedObject.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "sim/ticked_object.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_TickedObject");
    py::class_<TickedObjectParams, ClockedObjectParams, std::unique_ptr<TickedObjectParams, py::nodelete>>(m, "TickedObjectParams")
        ;

    py::class_<gem5::TickedObject, gem5::ClockedObject, std::unique_ptr<gem5::TickedObject, py::nodelete>>(m, "gem5_COLONS_TickedObject")
        ;

}

static EmbeddedPyBind embed_obj("TickedObject", module_init, "ClockedObject");

} // namespace gem5
