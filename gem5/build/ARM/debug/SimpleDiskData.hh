/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:140
 */

#ifndef __DEBUG_SimpleDiskData_HH__
#define __DEBUG_SimpleDiskData_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union SimpleDiskData
{
    ~SimpleDiskData() {}
    SimpleFlag SimpleDiskData = {
        "SimpleDiskData", "", false
    };
} SimpleDiskData;
} // namespace unions

inline constexpr const auto& SimpleDiskData =
    ::gem5::debug::unions::SimpleDiskData.SimpleDiskData;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_SimpleDiskData_HH__