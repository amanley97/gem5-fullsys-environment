/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:297
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SerialDevice.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/serial/serial.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SerialDevice");
    py::class_<SerialDeviceParams, SimObjectParams, std::unique_ptr<SerialDeviceParams, py::nodelete>>(m, "SerialDeviceParams")
        ;

    py::class_<gem5::SerialDevice, gem5::SimObject, std::unique_ptr<gem5::SerialDevice, py::nodelete>>(m, "gem5_COLONS_SerialDevice")
        ;

}

static EmbeddedPyBind embed_obj("SerialDevice", module_init, "SimObject");

} // namespace gem5
