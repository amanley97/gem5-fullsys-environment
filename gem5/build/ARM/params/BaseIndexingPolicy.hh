/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__BaseIndexingPolicy__
#define __PARAMS__BaseIndexingPolicy__

namespace gem5 {
class BaseIndexingPolicy;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct BaseIndexingPolicyParams
    : public SimObjectParams
{
    int assoc;
    int entry_size;
    uint64_t size;
};

} // namespace gem5

#endif // __PARAMS__BaseIndexingPolicy__