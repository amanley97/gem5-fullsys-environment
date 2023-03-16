/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:170
 */

#include "base/compiler.hh"
#include "enums/DataDistribution.hh"

namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Enums, enums);
namespace enums
{
    const char *DataDistributionStrings[Num_DataDistribution] =
    {
        "sequential",
        "stripe",
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
    py::module_ m = m_internal.def_submodule("enum_DataDistribution");

py::enum_<enums::DataDistribution>(m, "enum_DataDistribution")
        .value("sequential", enums::sequential)
        .value("stripe", enums::stripe)
        .value("Num_DataDistribution", enums::Num_DataDistribution)
        .export_values()
        ;
    }
static EmbeddedPyBind embed_enum("enum_DataDistribution", module_init);

} // namespace gem5
    
