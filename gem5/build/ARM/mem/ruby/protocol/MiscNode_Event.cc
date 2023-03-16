/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:935
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/logging.hh"
#include "mem/ruby/protocol/MiscNode_Event.hh"

namespace gem5
{

namespace ruby
{

// Code for output operator
::std::ostream&
operator<<(::std::ostream& out, const MiscNode_Event& obj)
{
    out << MiscNode_Event_to_string(obj);
    out << ::std::flush;
    return out;
}

// Code to convert state to a string
std::string
MiscNode_Event_to_string(const MiscNode_Event& obj)
{
    switch(obj) {
      case MiscNode_Event_AllocRequest:
        return "AllocRequest";
      case MiscNode_Event_AllocRequestWithCredit:
        return "AllocRequestWithCredit";
      case MiscNode_Event_SnpResp_I:
        return "SnpResp_I";
      case MiscNode_Event_NCBWrData:
        return "NCBWrData";
      case MiscNode_Event_SendRetryAck:
        return "SendRetryAck";
      case MiscNode_Event_SendPCrdGrant:
        return "SendPCrdGrant";
      case MiscNode_Event_DoRetry:
        return "DoRetry";
      case MiscNode_Event_DvmTlbi_Initiate:
        return "DvmTlbi_Initiate";
      case MiscNode_Event_DvmSync_Initiate:
        return "DvmSync_Initiate";
      case MiscNode_Event_DvmSendNextMessage_P1:
        return "DvmSendNextMessage_P1";
      case MiscNode_Event_DvmSendNextMessage_P2:
        return "DvmSendNextMessage_P2";
      case MiscNode_Event_DvmFinishDistributing:
        return "DvmFinishDistributing";
      case MiscNode_Event_DvmFinishWaiting:
        return "DvmFinishWaiting";
      case MiscNode_Event_DvmUpdatePendingOps:
        return "DvmUpdatePendingOps";
      case MiscNode_Event_Final:
        return "Final";
      case MiscNode_Event_null:
        return "null";
      default:
        panic("Invalid range for type MiscNode_Event");
    }
    // Appease the compiler since this function has a return value
    return "";
}

// Code to convert from a string to the enumeration
MiscNode_Event
string_to_MiscNode_Event(const std::string& str)
{
    if (str == "AllocRequest") {
        return MiscNode_Event_AllocRequest;
    } else if (str == "AllocRequestWithCredit") {
        return MiscNode_Event_AllocRequestWithCredit;
    } else if (str == "SnpResp_I") {
        return MiscNode_Event_SnpResp_I;
    } else if (str == "NCBWrData") {
        return MiscNode_Event_NCBWrData;
    } else if (str == "SendRetryAck") {
        return MiscNode_Event_SendRetryAck;
    } else if (str == "SendPCrdGrant") {
        return MiscNode_Event_SendPCrdGrant;
    } else if (str == "DoRetry") {
        return MiscNode_Event_DoRetry;
    } else if (str == "DvmTlbi_Initiate") {
        return MiscNode_Event_DvmTlbi_Initiate;
    } else if (str == "DvmSync_Initiate") {
        return MiscNode_Event_DvmSync_Initiate;
    } else if (str == "DvmSendNextMessage_P1") {
        return MiscNode_Event_DvmSendNextMessage_P1;
    } else if (str == "DvmSendNextMessage_P2") {
        return MiscNode_Event_DvmSendNextMessage_P2;
    } else if (str == "DvmFinishDistributing") {
        return MiscNode_Event_DvmFinishDistributing;
    } else if (str == "DvmFinishWaiting") {
        return MiscNode_Event_DvmFinishWaiting;
    } else if (str == "DvmUpdatePendingOps") {
        return MiscNode_Event_DvmUpdatePendingOps;
    } else if (str == "Final") {
        return MiscNode_Event_Final;
    } else if (str == "null") {
        return MiscNode_Event_null;
    } else {
        panic("Invalid string conversion for %s, type MiscNode_Event", str);
    }
}

// Code to increment an enumeration type
MiscNode_Event&
operator++(MiscNode_Event& e)
{
    assert(e < MiscNode_Event_NUM);
    return e = MiscNode_Event(e+1);
}
} // namespace ruby
} // namespace gem5
