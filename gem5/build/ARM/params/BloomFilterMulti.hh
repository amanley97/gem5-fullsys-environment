/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__BloomFilterMulti__
#define __PARAMS__BloomFilterMulti__

namespace gem5 {
namespace bloom_filter {
class Multi;
} // namespace bloom_filter
} // namespace gem5
#include <vector>
#include "params/BloomFilterBase.hh"

#include "params/BloomFilterBase.hh"

namespace gem5
{
struct BloomFilterMultiParams
    : public BloomFilterBaseParams
{
    gem5::bloom_filter::Multi * create() const;
    std::vector< gem5::bloom_filter::Base * > filters;
};

} // namespace gem5

#endif // __PARAMS__BloomFilterMulti__
