/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__Gicv3Its__
#define __PARAMS__Gicv3Its__

namespace gem5 {
class Gicv3Its;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/BasicPioDevice.hh"

namespace gem5
{
struct Gicv3ItsParams
    : public BasicPioDeviceParams
{
    gem5::Gicv3Its * create() const;
    uint64_t gits_typer;
    unsigned pio_size;
    unsigned int port_dma_connection_count;
};

} // namespace gem5

#endif // __PARAMS__Gicv3Its__