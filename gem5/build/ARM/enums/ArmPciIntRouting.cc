/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:170
 */

#include "base/compiler.hh"
#include "enums/ArmPciIntRouting.hh"

namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Enums, enums);
namespace enums
{
    const char *ArmPciIntRoutingStrings[Num_ArmPciIntRouting] =
    {
        "ARM_PCI_INT_STATIC",
        "ARM_PCI_INT_DEV",
        "ARM_PCI_INT_PIN",
    };
} // namespace enums
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
    py::module_ m = m_internal.def_submodule("enum_ArmPciIntRouting");

py::enum_<enums::ArmPciIntRouting>(m, "enum_ArmPciIntRouting")
        .value("ARM_PCI_INT_STATIC", enums::ARM_PCI_INT_STATIC)
        .value("ARM_PCI_INT_DEV", enums::ARM_PCI_INT_DEV)
        .value("ARM_PCI_INT_PIN", enums::ARM_PCI_INT_PIN)
        .value("Num_ArmPciIntRouting", enums::Num_ArmPciIntRouting)
        .export_values()
        ;
    }
static EmbeddedPyBind embed_enum("enum_ArmPciIntRouting", module_init);

} // namespace gem5
    