/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:501
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/CHIRequestMsg.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

/** \brief Print the state of this object */
void
CHIRequestMsg::print(std::ostream& out) const
{
    out << "[CHIRequestMsg: ";
    out << "addr = " << printAddress(m_addr) << " ";
    out << "accAddr = " << printAddress(m_accAddr) << " ";
    out << "accSize = " << m_accSize << " ";
    out << "type = " << m_type << " ";
    out << "requestor = " << m_requestor << " ";
    out << "fwdRequestor = " << m_fwdRequestor << " ";
    out << "dataToFwdRequestor = " << m_dataToFwdRequestor << " ";
    out << "retToSrc = " << m_retToSrc << " ";
    out << "allowRetry = " << m_allowRetry << " ";
    out << "Destination = " << m_Destination << " ";
    out << "seqReq = " << m_seqReq << " ";
    out << "isSeqReqValid = " << m_isSeqReqValid << " ";
    out << "is_local_pf = " << m_is_local_pf << " ";
    out << "is_remote_pf = " << m_is_remote_pf << " ";
    out << "usesTxnId = " << m_usesTxnId << " ";
    out << "txnId = " << printAddress(m_txnId) << " ";
    out << "MessageSize = " << m_MessageSize << " ";
    out << "]";
}
bool
CHIRequestMsg::functionalRead(Packet* param_pkt)
{
return (false);

}
bool
CHIRequestMsg::functionalRead(Packet* param_pkt, WriteMask& param_mask)
{
return (false);

}
bool
CHIRequestMsg::functionalWrite(Packet* param_pkt)
{
return (false);

}
} // namespace ruby
} // namespace gem5
