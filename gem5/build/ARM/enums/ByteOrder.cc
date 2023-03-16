/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:170
 */

#include "base/compiler.hh"
#include "enums/ByteOrder.hh"

namespace gem5
{

const char *ByteOrderStrings[static_cast<int>(ByteOrder::Num_ByteOrder)] =
{
    "big",
    "little",
};
} // namespace gem5
#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <sim/init.hh>

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
    py::module_ m = m_internal.def_submodule("enum_ByteOrder");

py::enum_<ByteOrder>(m, "enum_ByteOrder")
        .value("big", ByteOrder::big)
        .value("little", ByteOrder::little)
        .value("Num_ByteOrder", ByteOrder::Num_ByteOrder)
        ;
    }
static EmbeddedPyBind embed_enum("enum_ByteOrder", module_init);

} // namespace gem5
    