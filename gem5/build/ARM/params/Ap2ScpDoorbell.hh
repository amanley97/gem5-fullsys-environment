/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__Ap2ScpDoorbell__
#define __PARAMS__Ap2ScpDoorbell__

namespace gem5 {
class Ap2ScpDoorbell;
} // namespace gem5

#include "params/MhuDoorbell.hh"

namespace gem5
{
struct Ap2ScpDoorbellParams
    : public MhuDoorbellParams
{
    gem5::Ap2ScpDoorbell * create() const;
};

} // namespace gem5

#endif // __PARAMS__Ap2ScpDoorbell__