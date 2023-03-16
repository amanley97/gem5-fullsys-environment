/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__ArmTableWalker__
#define __PARAMS__ArmTableWalker__

namespace gem5 {
namespace ArmISA {
class TableWalker;
} // namespace ArmISA
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/System.hh"

#include "params/ClockedObject.hh"

namespace gem5
{
struct ArmTableWalkerParams
    : public ClockedObjectParams
{
    gem5::ArmISA::TableWalker * create() const;
    bool is_stage2;
    unsigned num_squash_per_cycle;
    gem5::System * sys;
    unsigned int port_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__ArmTableWalker__