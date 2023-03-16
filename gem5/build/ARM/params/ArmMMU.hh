/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__ArmMMU__
#define __PARAMS__ArmMMU__

namespace gem5 {
namespace ArmISA {
class MMU;
} // namespace ArmISA
} // namespace gem5
#include <cstddef>
#include "params/ArmTableWalker.hh"
#include <cstddef>
#include "params/ArmTableWalker.hh"
#include <cstddef>
#include "params/ArmRelease.hh"
#include <cstddef>
#include "params/ArmTLB.hh"
#include <cstddef>
#include "params/ArmTableWalker.hh"
#include <cstddef>
#include "params/ArmTLB.hh"
#include <cstddef>
#include "params/ArmTableWalker.hh"
#include <cstddef>
#include "params/System.hh"

#include "params/BaseMMU.hh"

namespace gem5
{
struct ArmMMUParams
    : public BaseMMUParams
{
    gem5::ArmISA::MMU * create() const;
    gem5::ArmISA::TableWalker * dtb_walker;
    gem5::ArmISA::TableWalker * itb_walker;
    gem5::ArmRelease * release_se;
    gem5::ArmISA::TLB * stage2_dtb;
    gem5::ArmISA::TableWalker * stage2_dtb_walker;
    gem5::ArmISA::TLB * stage2_itb;
    gem5::ArmISA::TableWalker * stage2_itb_walker;
    gem5::System * sys;
};

} // namespace gem5

#endif // __PARAMS__ArmMMU__
