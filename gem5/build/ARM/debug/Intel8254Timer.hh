/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:140
 */

#ifndef __DEBUG_Intel8254Timer_HH__
#define __DEBUG_Intel8254Timer_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union Intel8254Timer
{
    ~Intel8254Timer() {}
    SimpleFlag Intel8254Timer = {
        "Intel8254Timer", "", false
    };
} Intel8254Timer;
} // namespace unions

inline constexpr const auto& Intel8254Timer =
    ::gem5::debug::unions::Intel8254Timer.Intel8254Timer;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Intel8254Timer_HH__
