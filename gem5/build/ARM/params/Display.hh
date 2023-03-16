/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__Display__
#define __PARAMS__Display__

namespace gem5 {
class Display;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct DisplayParams
    : public SimObjectParams
{
    gem5::Display * create() const;
    unsigned clock_frequency;
    unsigned hactive;
    unsigned hback_porch;
    unsigned hfront_porch;
    unsigned hsync_len;
    unsigned vactive;
    unsigned vback_porch;
    unsigned vfront_porch;
    unsigned vsync_len;
};

} // namespace gem5

#endif // __PARAMS__Display__