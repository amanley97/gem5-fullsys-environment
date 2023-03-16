/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/StateMachine.py:1814
 */

// Memory: Memory controller interface

#include <cassert>

#include "base/logging.hh"
#include "base/trace.hh"
#include "debug/ProtocolTrace.hh"
#include "debug/RubyGenerated.hh"
#include "mem/ruby/protocol/Memory_Controller.hh"
#include "mem/ruby/protocol/Memory_Event.hh"
#include "mem/ruby/protocol/Memory_State.hh"
#include "mem/ruby/protocol/Types.hh"
#include "mem/ruby/system/RubySystem.hh"

#define HASH_FUN(state, event)  ((int(state)*Memory_Event_NUM)+int(event))

#define GET_TRANSITION_COMMENT() (Memory_transitionComment.str())
#define CLEAR_TRANSITION_COMMENT() (Memory_transitionComment.str(""))

namespace gem5
{

namespace ruby
{

TransitionResult
Memory_Controller::doTransition(Memory_Event event,
                                  Memory_TBE* m_tbe_ptr,
                                  Addr addr)
{
    Memory_State state = getState(m_tbe_ptr, addr);
    Memory_State next_state = state;

    DPRINTF(RubyGenerated, "%s, Time: %lld, state: %s, event: %s, addr: %#x\n",
            *this, curCycle(), Memory_State_to_string(state),
            Memory_Event_to_string(event), addr);

    TransitionResult result =
    doTransitionWorker(event, state, next_state, m_tbe_ptr, addr);

    if (result == TransitionResult_Valid) {
        DPRINTF(RubyGenerated, "next_state: %s\n",
                Memory_State_to_string(next_state));
        countTransition(state, event);

        DPRINTFR(ProtocolTrace, "%15d %3s %10s%20s %6s>%-6s %#x %s\n",
                 curTick(), m_version, "Memory",
                 Memory_Event_to_string(event),
                 Memory_State_to_string(state),
                 Memory_State_to_string(next_state),
                 printAddress(addr), GET_TRANSITION_COMMENT());

        CLEAR_TRANSITION_COMMENT();
    setState(m_tbe_ptr, addr, next_state);
    setAccessPermission(addr, next_state);
    } else if (result == TransitionResult_ResourceStall) {
        DPRINTFR(ProtocolTrace, "%15s %3s %10s%20s %6s>%-6s %#x %s\n",
                 curTick(), m_version, "Memory",
                 Memory_Event_to_string(event),
                 Memory_State_to_string(state),
                 Memory_State_to_string(next_state),
                 printAddress(addr), "Resource Stall");
    } else if (result == TransitionResult_ProtocolStall) {
        DPRINTF(RubyGenerated, "stalling\n");
        DPRINTFR(ProtocolTrace, "%15s %3s %10s%20s %6s>%-6s %#x %s\n",
                 curTick(), m_version, "Memory",
                 Memory_Event_to_string(event),
                 Memory_State_to_string(state),
                 Memory_State_to_string(next_state),
                 printAddress(addr), "Protocol Stall");
    }

    return result;
}

TransitionResult
Memory_Controller::doTransitionWorker(Memory_Event event,
                                        Memory_State state,
                                        Memory_State& next_state,
                                        Memory_TBE*& m_tbe_ptr,
                                        Addr addr)
{
    m_curTransitionEvent = event;
    m_curTransitionNextState = next_state;
    switch(HASH_FUN(state, event)) {
  case HASH_FUN(Memory_State_READY, Memory_Event_ReadNoSnp):
    next_state = Memory_State_READING_MEM; m_curTransitionNextState = next_state;
    if (!(*m_triggerQueue_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    allocateTBE(m_tbe_ptr, addr);
    initializeFromReqTBE(m_tbe_ptr, addr);
    triggerSendMemoryRead(m_tbe_ptr, addr);
    popReqInQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_READY, Memory_Event_ReadNoSnpSep):
    next_state = Memory_State_READING_MEM; m_curTransitionNextState = next_state;
    if (!(*m_rspOut_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_triggerQueue_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    allocateTBE(m_tbe_ptr, addr);
    initializeFromReqTBE(m_tbe_ptr, addr);
    triggerSendMemoryRead(m_tbe_ptr, addr);
    sendReadReceipt(m_tbe_ptr, addr);
    popReqInQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_READING_MEM, Memory_Event_Trigger_SendMemoryRead):
    if (!(*m_requestToMemory_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    sendMemoryRead(m_tbe_ptr, addr);
    popTriggerQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_READING_MEM, Memory_Event_MemoryData):
    next_state = Memory_State_SENDING_NET_DATA; m_curTransitionNextState = next_state;
    if (!(*m_datOut_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_triggerQueue_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    prepareSend(m_tbe_ptr, addr);
    sendDataAndCheck(m_tbe_ptr, addr);
    popMemoryQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_SENDING_NET_DATA, Memory_Event_Trigger_Send):
    if (!(*m_datOut_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_triggerQueue_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    sendDataAndCheck(m_tbe_ptr, addr);
    popTriggerQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_READY, Memory_Event_WriteNoSnpPtl):
  case HASH_FUN(Memory_State_READY, Memory_Event_WriteNoSnp):
    next_state = Memory_State_WAITING_NET_DATA; m_curTransitionNextState = next_state;
    if (!(*m_rspOut_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    allocateTBE(m_tbe_ptr, addr);
    initializeFromReqTBE(m_tbe_ptr, addr);
    sendCompDBIDResp(m_tbe_ptr, addr);
    popReqInQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_WAITING_NET_DATA, Memory_Event_WriteData):
    if (!(*m_triggerQueue_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    copyWriteDataToTBE(m_tbe_ptr, addr);
    checkForReceiveCompletion(m_tbe_ptr, addr);
    popDataInQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_WAITING_NET_DATA, Memory_Event_Trigger_ReceiveDone):
    next_state = Memory_State_READY; m_curTransitionNextState = next_state;
    if (!(*m_requestToMemory_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_triggerQueue_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    sendMemoryWrite(m_tbe_ptr, addr);
    deallocateTBE(m_tbe_ptr, addr);
    wakeUpStalled(m_tbe_ptr, addr);
    popTriggerQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_SENDING_NET_DATA, Memory_Event_Trigger_SendDone):
    next_state = Memory_State_READY; m_curTransitionNextState = next_state;
    if (!(*m_triggerQueue_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    deallocateTBE(m_tbe_ptr, addr);
    wakeUpStalled(m_tbe_ptr, addr);
    popTriggerQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_READING_MEM, Memory_Event_MemoryAck):
  case HASH_FUN(Memory_State_WAITING_NET_DATA, Memory_Event_MemoryAck):
  case HASH_FUN(Memory_State_SENDING_NET_DATA, Memory_Event_MemoryAck):
  case HASH_FUN(Memory_State_READY, Memory_Event_MemoryAck):
    decWritePending(m_tbe_ptr, addr);
    popMemoryQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_READING_MEM, Memory_Event_ReadNoSnp):
  case HASH_FUN(Memory_State_READING_MEM, Memory_Event_ReadNoSnpSep):
  case HASH_FUN(Memory_State_READING_MEM, Memory_Event_WriteNoSnpPtl):
  case HASH_FUN(Memory_State_READING_MEM, Memory_Event_WriteNoSnp):
  case HASH_FUN(Memory_State_WAITING_NET_DATA, Memory_Event_ReadNoSnp):
  case HASH_FUN(Memory_State_WAITING_NET_DATA, Memory_Event_ReadNoSnpSep):
  case HASH_FUN(Memory_State_WAITING_NET_DATA, Memory_Event_WriteNoSnpPtl):
  case HASH_FUN(Memory_State_WAITING_NET_DATA, Memory_Event_WriteNoSnp):
  case HASH_FUN(Memory_State_SENDING_NET_DATA, Memory_Event_ReadNoSnp):
  case HASH_FUN(Memory_State_SENDING_NET_DATA, Memory_Event_ReadNoSnpSep):
  case HASH_FUN(Memory_State_SENDING_NET_DATA, Memory_Event_WriteNoSnpPtl):
  case HASH_FUN(Memory_State_SENDING_NET_DATA, Memory_Event_WriteNoSnp):
    stallRequestQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_READING_MEM, Memory_Event_Trigger_SendRetry):
  case HASH_FUN(Memory_State_WAITING_NET_DATA, Memory_Event_Trigger_SendRetry):
  case HASH_FUN(Memory_State_SENDING_NET_DATA, Memory_Event_Trigger_SendRetry):
  case HASH_FUN(Memory_State_READY, Memory_Event_Trigger_SendRetry):
    if (!(*m_rspOut_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    sendRetryAck(m_tbe_ptr, addr);
    popTriggerQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_READING_MEM, Memory_Event_Trigger_SendPCrdGrant):
  case HASH_FUN(Memory_State_WAITING_NET_DATA, Memory_Event_Trigger_SendPCrdGrant):
  case HASH_FUN(Memory_State_SENDING_NET_DATA, Memory_Event_Trigger_SendPCrdGrant):
  case HASH_FUN(Memory_State_READY, Memory_Event_Trigger_SendPCrdGrant):
    if (!(*m_rspOut_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    sendPCrdGrant(m_tbe_ptr, addr);
    popTriggerQueue(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_READING_MEM, Memory_Event_CheckAllocTBE):
  case HASH_FUN(Memory_State_WAITING_NET_DATA, Memory_Event_CheckAllocTBE):
  case HASH_FUN(Memory_State_SENDING_NET_DATA, Memory_Event_CheckAllocTBE):
  case HASH_FUN(Memory_State_READY, Memory_Event_CheckAllocTBE):
    if (!(*m_reqRdy_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    if (!(*m_triggerQueue_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    checkAllocateTBE(m_tbe_ptr, addr);
    return TransitionResult_Valid;

  case HASH_FUN(Memory_State_READING_MEM, Memory_Event_CheckAllocTBE_WithCredit):
  case HASH_FUN(Memory_State_WAITING_NET_DATA, Memory_Event_CheckAllocTBE_WithCredit):
  case HASH_FUN(Memory_State_SENDING_NET_DATA, Memory_Event_CheckAllocTBE_WithCredit):
  case HASH_FUN(Memory_State_READY, Memory_Event_CheckAllocTBE_WithCredit):
    if (!(*m_reqRdy_ptr).areNSlotsAvailable(1, clockEdge()))
        return TransitionResult_ResourceStall;
    checkAllocateTBE_withCredit(m_tbe_ptr, addr);
    return TransitionResult_Valid;

      default:
        panic("Invalid transition\n"
              "%s time: %d addr: %#x event: %s state: %s\n",
              name(), curCycle(), addr, event, state);
    }

    return TransitionResult_Valid;
}

} // namespace ruby
} // namespace gem5
