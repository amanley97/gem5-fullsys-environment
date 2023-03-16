/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__Gicv2m__
#define __PARAMS__Gicv2m__

namespace gem5 {
class Gicv2m;
} // namespace gem5
#include <vector>
#include "params/Gicv2mFrame.hh"
#include <cstddef>
#include "params/BaseGic.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/PioDevice.hh"

namespace gem5
{
struct Gicv2mParams
    : public PioDeviceParams
{
    gem5::Gicv2m * create() const;
    std::vector< gem5::Gicv2mFrame * > frames;
    gem5::BaseGic * gic;
    Tick pio_delay;
};

} // namespace gem5

#endif // __PARAMS__Gicv2m__
