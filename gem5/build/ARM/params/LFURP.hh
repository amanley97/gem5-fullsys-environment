/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__LFURP__
#define __PARAMS__LFURP__

namespace gem5 {
namespace replacement_policy {
class LFU;
} // namespace replacement_policy
} // namespace gem5

#include "params/BaseReplacementPolicy.hh"

namespace gem5
{
struct LFURPParams
    : public BaseReplacementPolicyParams
{
    gem5::replacement_policy::LFU * create() const;
};

} // namespace gem5

#endif // __PARAMS__LFURP__
