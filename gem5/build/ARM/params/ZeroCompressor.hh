/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__ZeroCompressor__
#define __PARAMS__ZeroCompressor__

namespace gem5 {
namespace compression {
class Zero;
} // namespace compression
} // namespace gem5

#include "params/BaseDictionaryCompressor.hh"

namespace gem5
{
struct ZeroCompressorParams
    : public BaseDictionaryCompressorParams
{
    gem5::compression::Zero * create() const;
};

} // namespace gem5

#endif // __PARAMS__ZeroCompressor__
