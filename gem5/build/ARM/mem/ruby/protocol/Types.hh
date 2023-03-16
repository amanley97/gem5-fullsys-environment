/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/SymbolTable.py:148
 */

#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"
#include "mem/ruby/protocol/WriteMask.hh"
#include "mem/ruby/protocol/DataBlock.hh"
#include "mem/ruby/protocol/AccessPermission.hh"
#include "mem/ruby/protocol/TesterStatus.hh"
#include "mem/ruby/protocol/InvalidateGeneratorStatus.hh"
#include "mem/ruby/protocol/SeriesRequestGeneratorStatus.hh"
#include "mem/ruby/protocol/LockStatus.hh"
#include "mem/ruby/protocol/SequencerStatus.hh"
#include "mem/ruby/protocol/TransitionResult.hh"
#include "mem/ruby/protocol/RubyRequestType.hh"
#include "mem/ruby/protocol/HtmCallbackMode.hh"
#include "mem/ruby/protocol/HtmFailedInCacheReason.hh"
#include "mem/ruby/protocol/SequencerRequestType.hh"
#include "mem/ruby/protocol/CacheRequestType.hh"
#include "mem/ruby/protocol/CacheResourceType.hh"
#include "mem/ruby/protocol/DirectoryRequestType.hh"
#include "mem/ruby/protocol/DMASequencerRequestType.hh"
#include "mem/ruby/protocol/MemoryControlRequestType.hh"
#include "mem/ruby/protocol/MachineType.hh"
#include "mem/ruby/protocol/MessageSizeType.hh"
#include "mem/ruby/protocol/AccessType.hh"
#include "mem/ruby/protocol/RubyAccessMode.hh"
#include "mem/ruby/protocol/PrefetchBit.hh"
#include "mem/ruby/protocol/SequencerMsg.hh"
#include "mem/ruby/protocol/MaskPredictorType.hh"
#include "mem/ruby/protocol/MaskPredictorIndex.hh"
#include "mem/ruby/protocol/MaskPredictorTraining.hh"
#include "mem/ruby/protocol/RequestStatus.hh"
#include "mem/ruby/protocol/LinkDirection.hh"
#include "mem/ruby/protocol/MachineID.hh"
#include "mem/ruby/protocol/Set.hh"
#include "mem/ruby/protocol/NetDest.hh"
#include "mem/ruby/protocol/Sequencer.hh"
#include "mem/ruby/protocol/HTMSequencer.hh"
#include "mem/ruby/protocol/RubyRequest.hh"
#include "mem/ruby/protocol/DirectoryMemory.hh"
#include "mem/ruby/protocol/CacheMemory.hh"
#include "mem/ruby/protocol/WireBuffer.hh"
#include "mem/ruby/protocol/DMASequencer.hh"
#include "mem/ruby/protocol/TimerTable.hh"
#include "mem/ruby/protocol/RubyPrefetcher.hh"
#include "mem/ruby/protocol/BoolVec.hh"
#include "mem/ruby/protocol/MemoryRequestType.hh"
#include "mem/ruby/protocol/MemoryMsg.hh"
#include "mem/ruby/protocol/CHIRequestType.hh"
#include "mem/ruby/protocol/CHIRequestMsg.hh"
#include "mem/ruby/protocol/CHIResponseType.hh"
#include "mem/ruby/protocol/CHIResponseMsg.hh"
#include "mem/ruby/protocol/CHIDataType.hh"
#include "mem/ruby/protocol/CHIDataMsg.hh"
#include "mem/ruby/protocol/Cache_State.hh"
#include "mem/ruby/protocol/Cache_Event.hh"
#include "mem/ruby/protocol/Cache_CacheEntry.hh"
#include "mem/ruby/protocol/Cache_DirEntry.hh"
#include "mem/ruby/protocol/ExpectedMap.hh"
#include "mem/ruby/protocol/Cache_RetryQueueEntry.hh"
#include "mem/ruby/protocol/TriggerQueue.hh"
#include "mem/ruby/protocol/Cache_TBE.hh"
#include "mem/ruby/protocol/TBETable.hh"
#include "mem/ruby/protocol/TBEStorage.hh"
#include "mem/ruby/protocol/PerfectCacheMemory.hh"
#include "mem/ruby/protocol/Cache_RetryTriggerMsg.hh"
#include "mem/ruby/protocol/Cache_TriggerMsg.hh"
#include "mem/ruby/protocol/Cache_ReplacementMsg.hh"
#include "mem/ruby/protocol/Cache_RequestType.hh"
#include "mem/ruby/protocol/Memory_State.hh"
#include "mem/ruby/protocol/Memory_Event.hh"
#include "mem/ruby/protocol/Memory_TBE.hh"
#include "mem/ruby/protocol/TBETable.hh"
#include "mem/ruby/protocol/TBEStorage.hh"
#include "mem/ruby/protocol/Memory_TriggerMsg.hh"
#include "mem/ruby/protocol/Memory_RetryQueueEntry.hh"
#include "mem/ruby/protocol/TriggerQueue.hh"
#include "mem/ruby/protocol/MiscNode_State.hh"
#include "mem/ruby/protocol/MiscNode_Event.hh"
#include "mem/ruby/protocol/ExpectedMap.hh"
#include "mem/ruby/protocol/MiscNode_RetryQueueEntry.hh"
#include "mem/ruby/protocol/TriggerQueue.hh"
#include "mem/ruby/protocol/MiscNode_TBE.hh"
#include "mem/ruby/protocol/MN_TBETable.hh"
#include "mem/ruby/protocol/TBEStorage.hh"
#include "mem/ruby/protocol/MN_TBEStorage.hh"
#include "mem/ruby/protocol/MiscNode_RetryTriggerMsg.hh"
#include "mem/ruby/protocol/MiscNode_TriggerMsg.hh"