/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:140
 */

#ifndef __DEBUG_VGIC_HH__
#define __DEBUG_VGIC_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union VGIC
{
    ~VGIC() {}
    SimpleFlag VGIC = {
        "VGIC", "", false
    };
} VGIC;
} // namespace unions

inline constexpr const auto& VGIC =
    ::gem5::debug::unions::VGIC.VGIC;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_VGIC_HH__
