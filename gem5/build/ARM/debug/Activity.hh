/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:140
 */

#ifndef __DEBUG_Activity_HH__
#define __DEBUG_Activity_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union Activity
{
    ~Activity() {}
    SimpleFlag Activity = {
        "Activity", "", false
    };
} Activity;
} // namespace unions

inline constexpr const auto& Activity =
    ::gem5::debug::unions::Activity.Activity;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Activity_HH__