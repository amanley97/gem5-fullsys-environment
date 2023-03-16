/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__RubyWireBuffer__
#define __PARAMS__RubyWireBuffer__

namespace gem5 {
namespace ruby {
class WireBuffer;
} // namespace ruby
} // namespace gem5
#include <cstddef>
#include "params/RubySystem.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct RubyWireBufferParams
    : public SimObjectParams
{
    gem5::ruby::WireBuffer * create() const;
    gem5::ruby::RubySystem * ruby_system;
};

} // namespace gem5

#endif // __PARAMS__RubyWireBuffer__
