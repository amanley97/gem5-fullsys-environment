/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:170
 */

#include "base/compiler.hh"
#include "enums/TerminalDump.hh"

namespace gem5
{

const char *TerminalDumpStrings[static_cast<int>(TerminalDump::Num_TerminalDump)] =
{
    "none",
    "stdoutput",
    "stderror",
    "file",
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
    py::module_ m = m_internal.def_submodule("enum_TerminalDump");

py::enum_<TerminalDump>(m, "enum_TerminalDump")
        .value("none", TerminalDump::none)
        .value("stdoutput", TerminalDump::stdoutput)
        .value("stderror", TerminalDump::stderror)
        .value("file", TerminalDump::file)
        .value("Num_TerminalDump", TerminalDump::Num_TerminalDump)
        ;
    }
static EmbeddedPyBind embed_enum("enum_TerminalDump", module_init);

} // namespace gem5
    
