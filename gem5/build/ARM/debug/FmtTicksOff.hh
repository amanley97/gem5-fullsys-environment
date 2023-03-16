/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:140
 */

#ifndef __DEBUG_FmtTicksOff_HH__
#define __DEBUG_FmtTicksOff_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union FmtTicksOff
{
    ~FmtTicksOff() {}
    SimpleFlag FmtTicksOff = {
        "FmtTicksOff", "Don't show tick count on debug messages", true
    };
} FmtTicksOff;
} // namespace unions

inline constexpr const auto& FmtTicksOff =
    ::gem5::debug::unions::FmtTicksOff.FmtTicksOff;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_FmtTicksOff_HH__
