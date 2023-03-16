/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__FUDesc__
#define __PARAMS__FUDesc__

namespace gem5 {
class FUDesc;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <vector>
#include "params/OpDesc.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct FUDescParams
    : public SimObjectParams
{
    gem5::FUDesc * create() const;
    int count;
    std::vector< gem5::OpDesc * > opList;
};

} // namespace gem5

#endif // __PARAMS__FUDesc__