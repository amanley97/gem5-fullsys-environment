/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__GenericWatchdog__
#define __PARAMS__GenericWatchdog__

namespace gem5 {
class GenericWatchdog;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/SystemCounter.hh"
#include <cstddef>
#include "params/ArmInterruptPin.hh"
#include <cstddef>
#include "params/ArmInterruptPin.hh"

#include "params/PioDevice.hh"

namespace gem5
{
struct GenericWatchdogParams
    : public PioDeviceParams
{
    gem5::GenericWatchdog * create() const;
    Addr control_start;
    Tick pio_latency;
    Addr refresh_start;
    gem5::SystemCounter * system_counter;
    gem5::ArmInterruptPinGen * ws0;
    gem5::ArmInterruptPinGen * ws1;
};

} // namespace gem5

#endif // __PARAMS__GenericWatchdog__