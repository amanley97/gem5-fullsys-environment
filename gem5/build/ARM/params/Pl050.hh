/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__Pl050__
#define __PARAMS__Pl050__

namespace gem5 {
class Pl050;
} // namespace gem5
#include <cstddef>
#include "params/PS2Device.hh"

#include "params/AmbaIntDevice.hh"

namespace gem5
{
struct Pl050Params
    : public AmbaIntDeviceParams
{
    gem5::Pl050 * create() const;
    gem5::ps2::Device * ps2;
};

} // namespace gem5

#endif // __PARAMS__Pl050__
