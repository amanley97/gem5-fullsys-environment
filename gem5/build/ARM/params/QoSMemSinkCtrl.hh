/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__QoSMemSinkCtrl__
#define __PARAMS__QoSMemSinkCtrl__

namespace gem5 {
namespace memory {
namespace qos {
class MemSinkCtrl;
} // namespace qos
} // namespace memory
} // namespace gem5
#include <cstddef>
#include "params/QoSMemSinkInterface.hh"
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

#include "params/QoSMemCtrl.hh"

namespace gem5
{
struct QoSMemSinkCtrlParams
    : public QoSMemCtrlParams
{
    gem5::memory::qos::MemSinkCtrl * create() const;
    gem5::memory::qos::MemSinkInterface * interface;
    uint64_t memory_packet_size;
    unsigned read_buffer_size;
    Tick request_latency;
    Tick response_latency;
    unsigned write_buffer_size;
    unsigned int port_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__QoSMemSinkCtrl__
