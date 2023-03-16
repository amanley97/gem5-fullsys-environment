/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__Memory_Controller__
#define __PARAMS__Memory_Controller__

namespace gem5 {
namespace ruby {
class Memory_Controller;
} // namespace ruby
} // namespace gem5
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MessageBuffer.hh"

#include "params/RubyController.hh"

namespace gem5
{
struct Memory_ControllerParams
    : public RubyControllerParams
{
    gem5::ruby::Memory_Controller * create() const;
    gem5::ruby::MessageBuffer * datIn;
    gem5::ruby::MessageBuffer * datOut;
    int data_channel_size;
    Cycles data_latency;
    gem5::ruby::MessageBuffer * reqIn;
    gem5::ruby::MessageBuffer * reqOut;
    gem5::ruby::MessageBuffer * reqRdy;
    gem5::ruby::MessageBuffer * requestToMemory;
    gem5::ruby::MessageBuffer * responseFromMemory;
    Cycles response_latency;
    gem5::ruby::MessageBuffer * rspIn;
    gem5::ruby::MessageBuffer * rspOut;
    gem5::ruby::MessageBuffer * snpIn;
    gem5::ruby::MessageBuffer * snpOut;
    Cycles to_memory_controller_latency;
    gem5::ruby::MessageBuffer * triggerQueue;
};

} // namespace gem5

#endif // __PARAMS__Memory_Controller__