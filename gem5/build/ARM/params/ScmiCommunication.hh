/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__ScmiCommunication__
#define __PARAMS__ScmiCommunication__

namespace gem5 {
namespace scmi {
class Communication;
} // namespace scmi
} // namespace gem5
#include <cstddef>
#include "params/ScmiAgentChannel.hh"
#include <cstddef>
#include "params/ScmiPlatformChannel.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct ScmiCommunicationParams
    : public SimObjectParams
{
    gem5::scmi::Communication * create() const;
    gem5::scmi::AgentChannel * agent_channel;
    gem5::scmi::PlatformChannel * platform_channel;
};

} // namespace gem5

#endif // __PARAMS__ScmiCommunication__