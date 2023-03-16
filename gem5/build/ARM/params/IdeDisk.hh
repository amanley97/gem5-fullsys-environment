/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__IdeDisk__
#define __PARAMS__IdeDisk__

namespace gem5 {
class IdeDisk;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "enums/IdeID.hh"
#include <cstddef>
#include "params/DiskImage.hh"

#include "params/SimObject.hh"

#include "enums/IdeID.hh"

namespace gem5
{
struct IdeDiskParams
    : public SimObjectParams
{
    gem5::IdeDisk * create() const;
    Tick delay;
    enums::IdeID driveID;
    gem5::DiskImage * image;
};

} // namespace gem5

#endif // __PARAMS__IdeDisk__
