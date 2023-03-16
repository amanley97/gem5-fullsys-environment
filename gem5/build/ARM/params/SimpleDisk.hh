/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__SimpleDisk__
#define __PARAMS__SimpleDisk__

namespace gem5 {
class SimpleDisk;
} // namespace gem5
#include <cstddef>
#include "params/DiskImage.hh"
#include <cstddef>
#include "params/System.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct SimpleDiskParams
    : public SimObjectParams
{
    gem5::SimpleDisk * create() const;
    gem5::DiskImage * disk;
    gem5::System * system;
};

} // namespace gem5

#endif // __PARAMS__SimpleDisk__
