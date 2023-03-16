/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__IndirectMemoryPrefetcher__
#define __PARAMS__IndirectMemoryPrefetcher__

namespace gem5 {
namespace prefetch {
class IndirectMemory;
} // namespace prefetch
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/BaseIndexingPolicy.hh"
#include <cstddef>
#include "params/BaseReplacementPolicy.hh"
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
#include "params/BaseIndexingPolicy.hh"
#include <cstddef>
#include "params/BaseReplacementPolicy.hh"
#include <vector>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/QueuedPrefetcher.hh"

namespace gem5
{
struct IndirectMemoryPrefetcherParams
    : public QueuedPrefetcherParams
{
    gem5::prefetch::IndirectMemory * create() const;
    unsigned addr_array_len;
    unsigned ipd_table_assoc;
    uint64_t ipd_table_entries;
    gem5::BaseIndexingPolicy * ipd_table_indexing_policy;
    gem5::replacement_policy::Base * ipd_table_replacement_policy;
    unsigned max_prefetch_distance;
    unsigned num_indirect_counter_bits;
    unsigned prefetch_threshold;
    unsigned pt_table_assoc;
    uint64_t pt_table_entries;
    gem5::BaseIndexingPolicy * pt_table_indexing_policy;
    gem5::replacement_policy::Base * pt_table_replacement_policy;
    std::vector< int > shift_values;
    unsigned stream_counter_threshold;
    unsigned streaming_distance;
};

} // namespace gem5

#endif // __PARAMS__IndirectMemoryPrefetcher__