/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:501
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/Memory_TriggerMsg.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

/** \brief Print the state of this object */
void
Memory_TriggerMsg::print(std::ostream& out) const
{
    out << "[Memory_TriggerMsg: ";
    out << "addr = " << printAddress(m_addr) << " ";
    out << "event = " << m_event << " ";
    out << "retryDest = " << m_retryDest << " ";
    out << "]";
}
bool
Memory_TriggerMsg::functionalRead(Packet* param_pkt)
{
return (false);

}
bool
Memory_TriggerMsg::functionalRead(Packet* param_pkt, WriteMask& param_mask)
{
return (false);

}
bool
Memory_TriggerMsg::functionalWrite(Packet* param_pkt)
{
return (false);

}
} // namespace ruby
} // namespace gem5