/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__ScmiPlatform__
#define __PARAMS__ScmiPlatform__

namespace gem5 {
namespace scmi {
class Platform;
} // namespace scmi
} // namespace gem5
#include <vector>
#include <string>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>
#include <cstddef>
#include <string>
#include <vector>
#include "params/ScmiCommunication.hh"
#include <cstddef>
#include "params/System.hh"

#include "params/Scp.hh"

namespace gem5
{
struct ScmiPlatformParams
    : public ScpParams
{
    gem5::scmi::Platform * create() const;
    std::vector< std::string > agents;
    unsigned base_impl_version;
    std::string base_subvendor;
    std::string base_vendor;
    std::vector< gem5::scmi::Communication * > comms;
    gem5::System * sys;
    unsigned int port_dma_connection_count;
};

} // namespace gem5

#endif // __PARAMS__ScmiPlatform__
