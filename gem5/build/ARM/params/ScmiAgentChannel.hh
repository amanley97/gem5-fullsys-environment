/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__ScmiAgentChannel__
#define __PARAMS__ScmiAgentChannel__

namespace gem5 {
namespace scmi {
class AgentChannel;
} // namespace scmi
} // namespace gem5

#include "params/ScmiChannel.hh"

namespace gem5
{
struct ScmiAgentChannelParams
    : public ScmiChannelParams
{
    gem5::scmi::AgentChannel * create() const;
};

} // namespace gem5

#endif // __PARAMS__ScmiAgentChannel__