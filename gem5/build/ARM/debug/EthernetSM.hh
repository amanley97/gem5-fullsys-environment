/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:140
 */

#ifndef __DEBUG_EthernetSM_HH__
#define __DEBUG_EthernetSM_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union EthernetSM
{
    ~EthernetSM() {}
    SimpleFlag EthernetSM = {
        "EthernetSM", "", false
    };
} EthernetSM;
} // namespace unions

inline constexpr const auto& EthernetSM =
    ::gem5::debug::unions::EthernetSM.EthernetSM;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_EthernetSM_HH__