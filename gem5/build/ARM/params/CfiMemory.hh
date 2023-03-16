/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__CfiMemory__
#define __PARAMS__CfiMemory__

namespace gem5 {
namespace memory {
class CfiMemory;
} // namespace memory
} // namespace gem5
#include <cstddef>
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

#include "params/AbstractMemory.hh"

namespace gem5
{
struct CfiMemoryParams
    : public AbstractMemoryParams
{
    gem5::memory::CfiMemory * create() const;
    float bandwidth;
    uint16_t bank_width;
    uint32_t blk_size;
    uint16_t device_id;
    Tick latency;
    Tick latency_var;
    uint16_t vendor_id;
    unsigned int port_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__CfiMemory__
