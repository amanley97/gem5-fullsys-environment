/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:140
 */

#ifndef __DEBUG_NoncoherentXBar_HH__
#define __DEBUG_NoncoherentXBar_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union NoncoherentXBar
{
    ~NoncoherentXBar() {}
    SimpleFlag NoncoherentXBar = {
        "NoncoherentXBar", "", false
    };
} NoncoherentXBar;
} // namespace unions

inline constexpr const auto& NoncoherentXBar =
    ::gem5::debug::unions::NoncoherentXBar.NoncoherentXBar;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_NoncoherentXBar_HH__