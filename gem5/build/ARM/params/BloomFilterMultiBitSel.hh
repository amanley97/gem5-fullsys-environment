/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__BloomFilterMultiBitSel__
#define __PARAMS__BloomFilterMultiBitSel__

namespace gem5 {
namespace bloom_filter {
class MultiBitSel;
} // namespace bloom_filter
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/BloomFilterBase.hh"

namespace gem5
{
struct BloomFilterMultiBitSelParams
    : public BloomFilterBaseParams
{
    gem5::bloom_filter::MultiBitSel * create() const;
    bool is_parallel;
    int num_hashes;
    int skip_bits;
};

} // namespace gem5

#endif // __PARAMS__BloomFilterMultiBitSel__
