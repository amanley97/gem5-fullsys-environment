/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:235
 */

#ifndef __PARAMS__TAGE_SC_L_TAGE_64KB__
#define __PARAMS__TAGE_SC_L_TAGE_64KB__

namespace gem5 {
namespace branch_prediction {
class TAGE_SC_L_TAGE_64KB;
} // namespace branch_prediction
} // namespace gem5

#include "params/TAGE_SC_L_TAGE.hh"

namespace gem5
{
struct TAGE_SC_L_TAGE_64KBParams
    : public TAGE_SC_L_TAGEParams
{
    gem5::branch_prediction::TAGE_SC_L_TAGE_64KB * create() const;
};

} // namespace gem5

#endif // __PARAMS__TAGE_SC_L_TAGE_64KB__
