/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__GarnetExtLink__
#define __PARAMS__GarnetExtLink__

namespace gem5 {
namespace ruby {
namespace garnet {
class GarnetExtLink;
} // namespace garnet
} // namespace ruby
} // namespace gem5
#include <vector>
#include "params/CreditLink.hh"
#include <cstddef>
#include <vector>
#include "params/NetworkBridge.hh"
#include <vector>
#include "params/NetworkBridge.hh"
#include <cstddef>
#include <cstddef>
#include <vector>
#include "params/NetworkBridge.hh"
#include <vector>
#include "params/NetworkBridge.hh"
#include <cstddef>
#include <vector>
#include "params/NetworkLink.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/BasicExtLink.hh"

namespace gem5
{
struct GarnetExtLinkParams
    : public BasicExtLinkParams
{
    gem5::ruby::garnet::GarnetExtLink * create() const;
    std::vector< gem5::ruby::garnet::CreditLink * > credit_links;
    bool ext_cdc;
    std::vector< gem5::ruby::garnet::NetworkBridge * > ext_cred_bridge;
    std::vector< gem5::ruby::garnet::NetworkBridge * > ext_net_bridge;
    bool ext_serdes;
    bool int_cdc;
    std::vector< gem5::ruby::garnet::NetworkBridge * > int_cred_bridge;
    std::vector< gem5::ruby::garnet::NetworkBridge * > int_net_bridge;
    bool int_serdes;
    std::vector< gem5::ruby::garnet::NetworkLink * > network_links;
    uint32_t width;
};

} // namespace gem5

#endif // __PARAMS__GarnetExtLink__
