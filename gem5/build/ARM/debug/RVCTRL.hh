/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:140
 */

#ifndef __DEBUG_RVCTRL_HH__
#define __DEBUG_RVCTRL_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union RVCTRL
{
    ~RVCTRL() {}
    SimpleFlag RVCTRL = {
        "RVCTRL", "", false
    };
} RVCTRL;
} // namespace unions

inline constexpr const auto& RVCTRL =
    ::gem5::debug::unions::RVCTRL.RVCTRL;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_RVCTRL_HH__
