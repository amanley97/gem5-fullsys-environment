/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__CpuLocalTimer__
#define __PARAMS__CpuLocalTimer__

namespace gem5 {
class CpuLocalTimer;
} // namespace gem5
#include <cstddef>
#include "params/ArmPPI.hh"
#include <cstddef>
#include "params/ArmPPI.hh"

#include "params/BasicPioDevice.hh"

namespace gem5
{
struct CpuLocalTimerParams
    : public BasicPioDeviceParams
{
    gem5::CpuLocalTimer * create() const;
    gem5::ArmPPIGen * int_timer;
    gem5::ArmPPIGen * int_watchdog;
};

} // namespace gem5

#endif // __PARAMS__CpuLocalTimer__
