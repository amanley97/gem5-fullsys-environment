/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:140
 */

#ifndef __DEBUG_StoreSet_HH__
#define __DEBUG_StoreSet_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union StoreSet
{
    ~StoreSet() {}
    SimpleFlag StoreSet = {
        "StoreSet", "", false
    };
} StoreSet;
} // namespace unions

inline constexpr const auto& StoreSet =
    ::gem5::debug::unions::StoreSet.StoreSet;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_StoreSet_HH__
