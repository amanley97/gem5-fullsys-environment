/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:140
 */

#ifndef __DEBUG_KvmContext_HH__
#define __DEBUG_KvmContext_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union KvmContext
{
    ~KvmContext() {}
    SimpleFlag KvmContext = {
        "KvmContext", "KVM/gem5 context synchronization", false
    };
} KvmContext;
} // namespace unions

inline constexpr const auto& KvmContext =
    ::gem5::debug::unions::KvmContext.KvmContext;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_KvmContext_HH__
