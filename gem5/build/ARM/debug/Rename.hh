/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:140
 */

#ifndef __DEBUG_Rename_HH__
#define __DEBUG_Rename_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union Rename
{
    ~Rename() {}
    SimpleFlag Rename = {
        "Rename", "", false
    };
} Rename;
} // namespace unions

inline constexpr const auto& Rename =
    ::gem5::debug::unions::Rename.Rename;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Rename_HH__
