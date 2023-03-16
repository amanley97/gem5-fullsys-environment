/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:643
 */

#ifndef __MiscNode_Event_HH__
#define __MiscNode_Event_HH__

#include <iostream>
#include <string>

namespace gem5
{

namespace ruby
{


// Class definition
/** \enum MiscNode_Event
 *  \brief No description avaliable
 */
enum MiscNode_Event {
    MiscNode_Event_FIRST,
    MiscNode_Event_AllocRequest = MiscNode_Event_FIRST, /**< Allocates a TBE for a request. Triggers a retry if table is full */
    MiscNode_Event_AllocRequestWithCredit, /**< Allocates a TBE for a request. Always succeeds. Used when a client is retrying after being denied. */
    MiscNode_Event_SnpResp_I, /**<  */
    MiscNode_Event_NCBWrData, /**<  */
    MiscNode_Event_SendRetryAck, /**< Send RetryAck */
    MiscNode_Event_SendPCrdGrant, /**< Send PCrdGrant */
    MiscNode_Event_DoRetry, /**< Resend the current pending request */
    MiscNode_Event_DvmTlbi_Initiate, /**< Initiate a DVM TLBI on the provided TBE */
    MiscNode_Event_DvmSync_Initiate, /**< Initiate a DVM Sync on the provided TBE */
    MiscNode_Event_DvmSendNextMessage_P1, /**< Trigger a SnpDvmOp_P1 message based on the TBE type */
    MiscNode_Event_DvmSendNextMessage_P2, /**< Trigger a SnpDvmOp_P2 message based on the TBE type */
    MiscNode_Event_DvmFinishDistributing, /**< Move the TBE out of the Distributing state into Waiting */
    MiscNode_Event_DvmFinishWaiting, /**< Move the TBE out of the Waiting state and complete it */
    MiscNode_Event_DvmUpdatePendingOps, /**< Update which operation is currently distributing */
    MiscNode_Event_Final, /**<  */
    MiscNode_Event_null, /**<  */
    MiscNode_Event_NUM
};

// Code to convert from a string to the enumeration
MiscNode_Event string_to_MiscNode_Event(const ::std::string& str);

// Code to convert state to a string
::std::string MiscNode_Event_to_string(const MiscNode_Event& obj);

// Code to increment an enumeration type
MiscNode_Event &operator++(MiscNode_Event &e);

::std::ostream&
operator<<(::std::ostream& out, const MiscNode_Event& obj);

} // namespace ruby
} // namespace gem5
#endif // __MiscNode_Event_HH__