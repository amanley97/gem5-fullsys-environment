/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__GenericTimerMem__
#define __PARAMS__GenericTimerMem__

namespace gem5 {
class GenericTimerMem;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/SystemCounter.hh"
#include <vector>
#include "params/GenericTimerFrame.hh"

#include "params/PioDevice.hh"

namespace gem5
{
struct GenericTimerMemParams
    : public PioDeviceParams
{
    gem5::GenericTimerMem * create() const;
    Addr cnt_control_base;
    Addr cnt_ctl_base;
    Addr cnt_read_base;
    gem5::SystemCounter * counter;
    std::vector< gem5::GenericTimerFrame * > frames;
};

} // namespace gem5

#endif // __PARAMS__GenericTimerMem__
