/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__EnergyCtrl__
#define __PARAMS__EnergyCtrl__

namespace gem5 {
class EnergyCtrl;
} // namespace gem5
#include <cstddef>
#include "params/DVFSHandler.hh"

#include "params/BasicPioDevice.hh"

namespace gem5
{
struct EnergyCtrlParams
    : public BasicPioDeviceParams
{
    gem5::EnergyCtrl * create() const;
    gem5::DVFSHandler * dvfs_handler;
};

} // namespace gem5

#endif // __PARAMS__EnergyCtrl__
