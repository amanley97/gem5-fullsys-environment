/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/a599m019/gem5-fullsys-enviroment/gem5/src/mem/slicc/symbols/Type.py:935
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/logging.hh"
#include "mem/ruby/protocol/Cache_Event.hh"

namespace gem5
{

namespace ruby
{

// Code for output operator
::std::ostream&
operator<<(::std::ostream& out, const Cache_Event& obj)
{
    out << Cache_Event_to_string(obj);
    out << ::std::flush;
    return out;
}

// Code to convert state to a string
std::string
Cache_Event_to_string(const Cache_Event& obj)
{
    switch(obj) {
      case Cache_Event_AllocRequest:
        return "AllocRequest";
      case Cache_Event_AllocRequestWithCredit:
        return "AllocRequestWithCredit";
      case Cache_Event_AllocSeqRequest:
        return "AllocSeqRequest";
      case Cache_Event_AllocSeqDvmRequest:
        return "AllocSeqDvmRequest";
      case Cache_Event_AllocPfRequest:
        return "AllocPfRequest";
      case Cache_Event_AllocSnoop:
        return "AllocSnoop";
      case Cache_Event_AllocDvmSnoop:
        return "AllocDvmSnoop";
      case Cache_Event_Load:
        return "Load";
      case Cache_Event_Store:
        return "Store";
      case Cache_Event_Prefetch:
        return "Prefetch";
      case Cache_Event_ReadShared:
        return "ReadShared";
      case Cache_Event_ReadNotSharedDirty:
        return "ReadNotSharedDirty";
      case Cache_Event_ReadUnique:
        return "ReadUnique";
      case Cache_Event_ReadUnique_PoC:
        return "ReadUnique_PoC";
      case Cache_Event_ReadOnce:
        return "ReadOnce";
      case Cache_Event_CleanUnique:
        return "CleanUnique";
      case Cache_Event_Evict:
        return "Evict";
      case Cache_Event_WriteBackFull:
        return "WriteBackFull";
      case Cache_Event_WriteEvictFull:
        return "WriteEvictFull";
      case Cache_Event_WriteCleanFull:
        return "WriteCleanFull";
      case Cache_Event_WriteUnique:
        return "WriteUnique";
      case Cache_Event_WriteUniquePtl_PoC:
        return "WriteUniquePtl_PoC";
      case Cache_Event_WriteUniqueFull_PoC:
        return "WriteUniqueFull_PoC";
      case Cache_Event_WriteUniqueFull_PoC_Alloc:
        return "WriteUniqueFull_PoC_Alloc";
      case Cache_Event_SnpCleanInvalid:
        return "SnpCleanInvalid";
      case Cache_Event_SnpShared:
        return "SnpShared";
      case Cache_Event_SnpSharedFwd:
        return "SnpSharedFwd";
      case Cache_Event_SnpNotSharedDirtyFwd:
        return "SnpNotSharedDirtyFwd";
      case Cache_Event_SnpUnique:
        return "SnpUnique";
      case Cache_Event_SnpUniqueFwd:
        return "SnpUniqueFwd";
      case Cache_Event_SnpOnce:
        return "SnpOnce";
      case Cache_Event_SnpOnceFwd:
        return "SnpOnceFwd";
      case Cache_Event_SnpStalled:
        return "SnpStalled";
      case Cache_Event_DvmTlbi_Initiate:
        return "DvmTlbi_Initiate";
      case Cache_Event_DvmSync_Initiate:
        return "DvmSync_Initiate";
      case Cache_Event_DvmSync_ExternCompleted:
        return "DvmSync_ExternCompleted";
      case Cache_Event_CompAck:
        return "CompAck";
      case Cache_Event_Comp_I:
        return "Comp_I";
      case Cache_Event_Comp_UC:
        return "Comp_UC";
      case Cache_Event_Comp_SC:
        return "Comp_SC";
      case Cache_Event_CompDBIDResp:
        return "CompDBIDResp";
      case Cache_Event_DBIDResp:
        return "DBIDResp";
      case Cache_Event_Comp:
        return "Comp";
      case Cache_Event_ReadReceipt:
        return "ReadReceipt";
      case Cache_Event_RespSepData:
        return "RespSepData";
      case Cache_Event_SnpResp_I:
        return "SnpResp_I";
      case Cache_Event_SnpResp_I_Fwded_UC:
        return "SnpResp_I_Fwded_UC";
      case Cache_Event_SnpResp_I_Fwded_UD_PD:
        return "SnpResp_I_Fwded_UD_PD";
      case Cache_Event_SnpResp_SC:
        return "SnpResp_SC";
      case Cache_Event_SnpResp_SC_Fwded_SC:
        return "SnpResp_SC_Fwded_SC";
      case Cache_Event_SnpResp_SC_Fwded_SD_PD:
        return "SnpResp_SC_Fwded_SD_PD";
      case Cache_Event_SnpResp_UC_Fwded_I:
        return "SnpResp_UC_Fwded_I";
      case Cache_Event_SnpResp_UD_Fwded_I:
        return "SnpResp_UD_Fwded_I";
      case Cache_Event_SnpResp_SC_Fwded_I:
        return "SnpResp_SC_Fwded_I";
      case Cache_Event_SnpResp_SD_Fwded_I:
        return "SnpResp_SD_Fwded_I";
      case Cache_Event_RetryAck:
        return "RetryAck";
      case Cache_Event_RetryAck_PoC:
        return "RetryAck_PoC";
      case Cache_Event_PCrdGrant:
        return "PCrdGrant";
      case Cache_Event_PCrdGrant_PoC:
        return "PCrdGrant_PoC";
      case Cache_Event_RetryAck_Hazard:
        return "RetryAck_Hazard";
      case Cache_Event_RetryAck_PoC_Hazard:
        return "RetryAck_PoC_Hazard";
      case Cache_Event_PCrdGrant_Hazard:
        return "PCrdGrant_Hazard";
      case Cache_Event_PCrdGrant_PoC_Hazard:
        return "PCrdGrant_PoC_Hazard";
      case Cache_Event_SnpDvmOpSync_P1:
        return "SnpDvmOpSync_P1";
      case Cache_Event_SnpDvmOpSync_P2:
        return "SnpDvmOpSync_P2";
      case Cache_Event_SnpDvmOpNonSync_P1:
        return "SnpDvmOpNonSync_P1";
      case Cache_Event_SnpDvmOpNonSync_P2:
        return "SnpDvmOpNonSync_P2";
      case Cache_Event_CompData_I:
        return "CompData_I";
      case Cache_Event_CompData_UC:
        return "CompData_UC";
      case Cache_Event_CompData_SC:
        return "CompData_SC";
      case Cache_Event_CompData_UD_PD:
        return "CompData_UD_PD";
      case Cache_Event_CompData_SD_PD:
        return "CompData_SD_PD";
      case Cache_Event_DataSepResp_UC:
        return "DataSepResp_UC";
      case Cache_Event_CBWrData_I:
        return "CBWrData_I";
      case Cache_Event_CBWrData_UC:
        return "CBWrData_UC";
      case Cache_Event_CBWrData_SC:
        return "CBWrData_SC";
      case Cache_Event_CBWrData_UD_PD:
        return "CBWrData_UD_PD";
      case Cache_Event_CBWrData_SD_PD:
        return "CBWrData_SD_PD";
      case Cache_Event_NCBWrData:
        return "NCBWrData";
      case Cache_Event_SnpRespData_I:
        return "SnpRespData_I";
      case Cache_Event_SnpRespData_I_PD:
        return "SnpRespData_I_PD";
      case Cache_Event_SnpRespData_SC:
        return "SnpRespData_SC";
      case Cache_Event_SnpRespData_SC_PD:
        return "SnpRespData_SC_PD";
      case Cache_Event_SnpRespData_SD:
        return "SnpRespData_SD";
      case Cache_Event_SnpRespData_UC:
        return "SnpRespData_UC";
      case Cache_Event_SnpRespData_UD:
        return "SnpRespData_UD";
      case Cache_Event_SnpRespData_SC_Fwded_SC:
        return "SnpRespData_SC_Fwded_SC";
      case Cache_Event_SnpRespData_SC_Fwded_SD_PD:
        return "SnpRespData_SC_Fwded_SD_PD";
      case Cache_Event_SnpRespData_SC_PD_Fwded_SC:
        return "SnpRespData_SC_PD_Fwded_SC";
      case Cache_Event_SnpRespData_I_Fwded_SD_PD:
        return "SnpRespData_I_Fwded_SD_PD";
      case Cache_Event_SnpRespData_I_PD_Fwded_SC:
        return "SnpRespData_I_PD_Fwded_SC";
      case Cache_Event_SnpRespData_I_Fwded_SC:
        return "SnpRespData_I_Fwded_SC";
      case Cache_Event_Evict_Stale:
        return "Evict_Stale";
      case Cache_Event_WriteBackFull_Stale:
        return "WriteBackFull_Stale";
      case Cache_Event_WriteEvictFull_Stale:
        return "WriteEvictFull_Stale";
      case Cache_Event_WriteCleanFull_Stale:
        return "WriteCleanFull_Stale";
      case Cache_Event_CleanUnique_Stale:
        return "CleanUnique_Stale";
      case Cache_Event_CheckCacheFill:
        return "CheckCacheFill";
      case Cache_Event_Local_Eviction:
        return "Local_Eviction";
      case Cache_Event_LocalHN_Eviction:
        return "LocalHN_Eviction";
      case Cache_Event_Global_Eviction:
        return "Global_Eviction";
      case Cache_Event_TagArrayRead:
        return "TagArrayRead";
      case Cache_Event_TagArrayWrite:
        return "TagArrayWrite";
      case Cache_Event_DataArrayRead:
        return "DataArrayRead";
      case Cache_Event_DataArrayWrite:
        return "DataArrayWrite";
      case Cache_Event_DataArrayWriteOnFill:
        return "DataArrayWriteOnFill";
      case Cache_Event_ReadHitPipe:
        return "ReadHitPipe";
      case Cache_Event_ReadMissPipe:
        return "ReadMissPipe";
      case Cache_Event_WriteFEPipe:
        return "WriteFEPipe";
      case Cache_Event_WriteBEPipe:
        return "WriteBEPipe";
      case Cache_Event_FillPipe:
        return "FillPipe";
      case Cache_Event_SnpSharedPipe:
        return "SnpSharedPipe";
      case Cache_Event_SnpInvPipe:
        return "SnpInvPipe";
      case Cache_Event_SnpOncePipe:
        return "SnpOncePipe";
      case Cache_Event_SendReadShared:
        return "SendReadShared";
      case Cache_Event_SendReadOnce:
        return "SendReadOnce";
      case Cache_Event_SendReadNoSnp:
        return "SendReadNoSnp";
      case Cache_Event_SendReadNoSnpDMT:
        return "SendReadNoSnpDMT";
      case Cache_Event_SendReadUnique:
        return "SendReadUnique";
      case Cache_Event_SendCompAck:
        return "SendCompAck";
      case Cache_Event_SendCompData:
        return "SendCompData";
      case Cache_Event_WaitCompAck:
        return "WaitCompAck";
      case Cache_Event_SendRespSepData:
        return "SendRespSepData";
      case Cache_Event_SendWriteBackOrWriteEvict:
        return "SendWriteBackOrWriteEvict";
      case Cache_Event_SendWriteClean:
        return "SendWriteClean";
      case Cache_Event_SendWriteNoSnp:
        return "SendWriteNoSnp";
      case Cache_Event_SendWriteNoSnpPartial:
        return "SendWriteNoSnpPartial";
      case Cache_Event_SendWriteUnique:
        return "SendWriteUnique";
      case Cache_Event_SendWBData:
        return "SendWBData";
      case Cache_Event_SendWUData:
        return "SendWUData";
      case Cache_Event_SendWUDataCB:
        return "SendWUDataCB";
      case Cache_Event_SendCompDBIDResp:
        return "SendCompDBIDResp";
      case Cache_Event_SendCompDBIDRespStale:
        return "SendCompDBIDRespStale";
      case Cache_Event_SendCompDBIDResp_WU:
        return "SendCompDBIDResp_WU";
      case Cache_Event_SendDBIDResp_WU:
        return "SendDBIDResp_WU";
      case Cache_Event_SendComp_WU:
        return "SendComp_WU";
      case Cache_Event_SendEvict:
        return "SendEvict";
      case Cache_Event_SendCompIResp:
        return "SendCompIResp";
      case Cache_Event_SendCleanUnique:
        return "SendCleanUnique";
      case Cache_Event_SendCompUCResp:
        return "SendCompUCResp";
      case Cache_Event_SendCompUCRespStale:
        return "SendCompUCRespStale";
      case Cache_Event_CheckUpgrade_FromStore:
        return "CheckUpgrade_FromStore";
      case Cache_Event_CheckUpgrade_FromCU:
        return "CheckUpgrade_FromCU";
      case Cache_Event_CheckUpgrade_FromRU:
        return "CheckUpgrade_FromRU";
      case Cache_Event_SendSnpShared:
        return "SendSnpShared";
      case Cache_Event_SendSnpSharedFwdToOwner:
        return "SendSnpSharedFwdToOwner";
      case Cache_Event_SendSnpSharedFwdToSharer:
        return "SendSnpSharedFwdToSharer";
      case Cache_Event_SendSnpOnce:
        return "SendSnpOnce";
      case Cache_Event_SendSnpOnceFwd:
        return "SendSnpOnceFwd";
      case Cache_Event_SendSnpUnique:
        return "SendSnpUnique";
      case Cache_Event_SendSnpUniqueRetToSrc:
        return "SendSnpUniqueRetToSrc";
      case Cache_Event_SendSnpUniqueFwd:
        return "SendSnpUniqueFwd";
      case Cache_Event_SendSnpCleanInvalid:
        return "SendSnpCleanInvalid";
      case Cache_Event_SendSnpCleanInvalidNoReq:
        return "SendSnpCleanInvalidNoReq";
      case Cache_Event_SendSnpData:
        return "SendSnpData";
      case Cache_Event_SendSnpIResp:
        return "SendSnpIResp";
      case Cache_Event_SendInvSnpResp:
        return "SendInvSnpResp";
      case Cache_Event_SendSnpUniqueFwdCompData:
        return "SendSnpUniqueFwdCompData";
      case Cache_Event_SendSnpSharedFwdCompData:
        return "SendSnpSharedFwdCompData";
      case Cache_Event_SendSnpNotSharedDirtyFwdCompData:
        return "SendSnpNotSharedDirtyFwdCompData";
      case Cache_Event_SendSnpOnceFwdCompData:
        return "SendSnpOnceFwdCompData";
      case Cache_Event_SendSnpFwdedData:
        return "SendSnpFwdedData";
      case Cache_Event_SendSnpFwdedResp:
        return "SendSnpFwdedResp";
      case Cache_Event_DvmSync_Send:
        return "DvmSync_Send";
      case Cache_Event_SendRetryAck:
        return "SendRetryAck";
      case Cache_Event_SendPCrdGrant:
        return "SendPCrdGrant";
      case Cache_Event_DoRetry:
        return "DoRetry";
      case Cache_Event_DoRetry_Hazard:
        return "DoRetry_Hazard";
      case Cache_Event_LoadHit:
        return "LoadHit";
      case Cache_Event_StoreHit:
        return "StoreHit";
      case Cache_Event_UseTimeout:
        return "UseTimeout";
      case Cache_Event_RestoreFromHazard:
        return "RestoreFromHazard";
      case Cache_Event_TX_Data:
        return "TX_Data";
      case Cache_Event_MaintainCoherence:
        return "MaintainCoherence";
      case Cache_Event_FinishCleanUnique:
        return "FinishCleanUnique";
      case Cache_Event_FinishCopyBack_Stale:
        return "FinishCopyBack_Stale";
      case Cache_Event_ActionStalledOnHazard:
        return "ActionStalledOnHazard";
      case Cache_Event_Final:
        return "Final";
      case Cache_Event_null:
        return "null";
      default:
        panic("Invalid range for type Cache_Event");
    }
    // Appease the compiler since this function has a return value
    return "";
}

// Code to convert from a string to the enumeration
Cache_Event
string_to_Cache_Event(const std::string& str)
{
    if (str == "AllocRequest") {
        return Cache_Event_AllocRequest;
    } else if (str == "AllocRequestWithCredit") {
        return Cache_Event_AllocRequestWithCredit;
    } else if (str == "AllocSeqRequest") {
        return Cache_Event_AllocSeqRequest;
    } else if (str == "AllocSeqDvmRequest") {
        return Cache_Event_AllocSeqDvmRequest;
    } else if (str == "AllocPfRequest") {
        return Cache_Event_AllocPfRequest;
    } else if (str == "AllocSnoop") {
        return Cache_Event_AllocSnoop;
    } else if (str == "AllocDvmSnoop") {
        return Cache_Event_AllocDvmSnoop;
    } else if (str == "Load") {
        return Cache_Event_Load;
    } else if (str == "Store") {
        return Cache_Event_Store;
    } else if (str == "Prefetch") {
        return Cache_Event_Prefetch;
    } else if (str == "ReadShared") {
        return Cache_Event_ReadShared;
    } else if (str == "ReadNotSharedDirty") {
        return Cache_Event_ReadNotSharedDirty;
    } else if (str == "ReadUnique") {
        return Cache_Event_ReadUnique;
    } else if (str == "ReadUnique_PoC") {
        return Cache_Event_ReadUnique_PoC;
    } else if (str == "ReadOnce") {
        return Cache_Event_ReadOnce;
    } else if (str == "CleanUnique") {
        return Cache_Event_CleanUnique;
    } else if (str == "Evict") {
        return Cache_Event_Evict;
    } else if (str == "WriteBackFull") {
        return Cache_Event_WriteBackFull;
    } else if (str == "WriteEvictFull") {
        return Cache_Event_WriteEvictFull;
    } else if (str == "WriteCleanFull") {
        return Cache_Event_WriteCleanFull;
    } else if (str == "WriteUnique") {
        return Cache_Event_WriteUnique;
    } else if (str == "WriteUniquePtl_PoC") {
        return Cache_Event_WriteUniquePtl_PoC;
    } else if (str == "WriteUniqueFull_PoC") {
        return Cache_Event_WriteUniqueFull_PoC;
    } else if (str == "WriteUniqueFull_PoC_Alloc") {
        return Cache_Event_WriteUniqueFull_PoC_Alloc;
    } else if (str == "SnpCleanInvalid") {
        return Cache_Event_SnpCleanInvalid;
    } else if (str == "SnpShared") {
        return Cache_Event_SnpShared;
    } else if (str == "SnpSharedFwd") {
        return Cache_Event_SnpSharedFwd;
    } else if (str == "SnpNotSharedDirtyFwd") {
        return Cache_Event_SnpNotSharedDirtyFwd;
    } else if (str == "SnpUnique") {
        return Cache_Event_SnpUnique;
    } else if (str == "SnpUniqueFwd") {
        return Cache_Event_SnpUniqueFwd;
    } else if (str == "SnpOnce") {
        return Cache_Event_SnpOnce;
    } else if (str == "SnpOnceFwd") {
        return Cache_Event_SnpOnceFwd;
    } else if (str == "SnpStalled") {
        return Cache_Event_SnpStalled;
    } else if (str == "DvmTlbi_Initiate") {
        return Cache_Event_DvmTlbi_Initiate;
    } else if (str == "DvmSync_Initiate") {
        return Cache_Event_DvmSync_Initiate;
    } else if (str == "DvmSync_ExternCompleted") {
        return Cache_Event_DvmSync_ExternCompleted;
    } else if (str == "CompAck") {
        return Cache_Event_CompAck;
    } else if (str == "Comp_I") {
        return Cache_Event_Comp_I;
    } else if (str == "Comp_UC") {
        return Cache_Event_Comp_UC;
    } else if (str == "Comp_SC") {
        return Cache_Event_Comp_SC;
    } else if (str == "CompDBIDResp") {
        return Cache_Event_CompDBIDResp;
    } else if (str == "DBIDResp") {
        return Cache_Event_DBIDResp;
    } else if (str == "Comp") {
        return Cache_Event_Comp;
    } else if (str == "ReadReceipt") {
        return Cache_Event_ReadReceipt;
    } else if (str == "RespSepData") {
        return Cache_Event_RespSepData;
    } else if (str == "SnpResp_I") {
        return Cache_Event_SnpResp_I;
    } else if (str == "SnpResp_I_Fwded_UC") {
        return Cache_Event_SnpResp_I_Fwded_UC;
    } else if (str == "SnpResp_I_Fwded_UD_PD") {
        return Cache_Event_SnpResp_I_Fwded_UD_PD;
    } else if (str == "SnpResp_SC") {
        return Cache_Event_SnpResp_SC;
    } else if (str == "SnpResp_SC_Fwded_SC") {
        return Cache_Event_SnpResp_SC_Fwded_SC;
    } else if (str == "SnpResp_SC_Fwded_SD_PD") {
        return Cache_Event_SnpResp_SC_Fwded_SD_PD;
    } else if (str == "SnpResp_UC_Fwded_I") {
        return Cache_Event_SnpResp_UC_Fwded_I;
    } else if (str == "SnpResp_UD_Fwded_I") {
        return Cache_Event_SnpResp_UD_Fwded_I;
    } else if (str == "SnpResp_SC_Fwded_I") {
        return Cache_Event_SnpResp_SC_Fwded_I;
    } else if (str == "SnpResp_SD_Fwded_I") {
        return Cache_Event_SnpResp_SD_Fwded_I;
    } else if (str == "RetryAck") {
        return Cache_Event_RetryAck;
    } else if (str == "RetryAck_PoC") {
        return Cache_Event_RetryAck_PoC;
    } else if (str == "PCrdGrant") {
        return Cache_Event_PCrdGrant;
    } else if (str == "PCrdGrant_PoC") {
        return Cache_Event_PCrdGrant_PoC;
    } else if (str == "RetryAck_Hazard") {
        return Cache_Event_RetryAck_Hazard;
    } else if (str == "RetryAck_PoC_Hazard") {
        return Cache_Event_RetryAck_PoC_Hazard;
    } else if (str == "PCrdGrant_Hazard") {
        return Cache_Event_PCrdGrant_Hazard;
    } else if (str == "PCrdGrant_PoC_Hazard") {
        return Cache_Event_PCrdGrant_PoC_Hazard;
    } else if (str == "SnpDvmOpSync_P1") {
        return Cache_Event_SnpDvmOpSync_P1;
    } else if (str == "SnpDvmOpSync_P2") {
        return Cache_Event_SnpDvmOpSync_P2;
    } else if (str == "SnpDvmOpNonSync_P1") {
        return Cache_Event_SnpDvmOpNonSync_P1;
    } else if (str == "SnpDvmOpNonSync_P2") {
        return Cache_Event_SnpDvmOpNonSync_P2;
    } else if (str == "CompData_I") {
        return Cache_Event_CompData_I;
    } else if (str == "CompData_UC") {
        return Cache_Event_CompData_UC;
    } else if (str == "CompData_SC") {
        return Cache_Event_CompData_SC;
    } else if (str == "CompData_UD_PD") {
        return Cache_Event_CompData_UD_PD;
    } else if (str == "CompData_SD_PD") {
        return Cache_Event_CompData_SD_PD;
    } else if (str == "DataSepResp_UC") {
        return Cache_Event_DataSepResp_UC;
    } else if (str == "CBWrData_I") {
        return Cache_Event_CBWrData_I;
    } else if (str == "CBWrData_UC") {
        return Cache_Event_CBWrData_UC;
    } else if (str == "CBWrData_SC") {
        return Cache_Event_CBWrData_SC;
    } else if (str == "CBWrData_UD_PD") {
        return Cache_Event_CBWrData_UD_PD;
    } else if (str == "CBWrData_SD_PD") {
        return Cache_Event_CBWrData_SD_PD;
    } else if (str == "NCBWrData") {
        return Cache_Event_NCBWrData;
    } else if (str == "SnpRespData_I") {
        return Cache_Event_SnpRespData_I;
    } else if (str == "SnpRespData_I_PD") {
        return Cache_Event_SnpRespData_I_PD;
    } else if (str == "SnpRespData_SC") {
        return Cache_Event_SnpRespData_SC;
    } else if (str == "SnpRespData_SC_PD") {
        return Cache_Event_SnpRespData_SC_PD;
    } else if (str == "SnpRespData_SD") {
        return Cache_Event_SnpRespData_SD;
    } else if (str == "SnpRespData_UC") {
        return Cache_Event_SnpRespData_UC;
    } else if (str == "SnpRespData_UD") {
        return Cache_Event_SnpRespData_UD;
    } else if (str == "SnpRespData_SC_Fwded_SC") {
        return Cache_Event_SnpRespData_SC_Fwded_SC;
    } else if (str == "SnpRespData_SC_Fwded_SD_PD") {
        return Cache_Event_SnpRespData_SC_Fwded_SD_PD;
    } else if (str == "SnpRespData_SC_PD_Fwded_SC") {
        return Cache_Event_SnpRespData_SC_PD_Fwded_SC;
    } else if (str == "SnpRespData_I_Fwded_SD_PD") {
        return Cache_Event_SnpRespData_I_Fwded_SD_PD;
    } else if (str == "SnpRespData_I_PD_Fwded_SC") {
        return Cache_Event_SnpRespData_I_PD_Fwded_SC;
    } else if (str == "SnpRespData_I_Fwded_SC") {
        return Cache_Event_SnpRespData_I_Fwded_SC;
    } else if (str == "Evict_Stale") {
        return Cache_Event_Evict_Stale;
    } else if (str == "WriteBackFull_Stale") {
        return Cache_Event_WriteBackFull_Stale;
    } else if (str == "WriteEvictFull_Stale") {
        return Cache_Event_WriteEvictFull_Stale;
    } else if (str == "WriteCleanFull_Stale") {
        return Cache_Event_WriteCleanFull_Stale;
    } else if (str == "CleanUnique_Stale") {
        return Cache_Event_CleanUnique_Stale;
    } else if (str == "CheckCacheFill") {
        return Cache_Event_CheckCacheFill;
    } else if (str == "Local_Eviction") {
        return Cache_Event_Local_Eviction;
    } else if (str == "LocalHN_Eviction") {
        return Cache_Event_LocalHN_Eviction;
    } else if (str == "Global_Eviction") {
        return Cache_Event_Global_Eviction;
    } else if (str == "TagArrayRead") {
        return Cache_Event_TagArrayRead;
    } else if (str == "TagArrayWrite") {
        return Cache_Event_TagArrayWrite;
    } else if (str == "DataArrayRead") {
        return Cache_Event_DataArrayRead;
    } else if (str == "DataArrayWrite") {
        return Cache_Event_DataArrayWrite;
    } else if (str == "DataArrayWriteOnFill") {
        return Cache_Event_DataArrayWriteOnFill;
    } else if (str == "ReadHitPipe") {
        return Cache_Event_ReadHitPipe;
    } else if (str == "ReadMissPipe") {
        return Cache_Event_ReadMissPipe;
    } else if (str == "WriteFEPipe") {
        return Cache_Event_WriteFEPipe;
    } else if (str == "WriteBEPipe") {
        return Cache_Event_WriteBEPipe;
    } else if (str == "FillPipe") {
        return Cache_Event_FillPipe;
    } else if (str == "SnpSharedPipe") {
        return Cache_Event_SnpSharedPipe;
    } else if (str == "SnpInvPipe") {
        return Cache_Event_SnpInvPipe;
    } else if (str == "SnpOncePipe") {
        return Cache_Event_SnpOncePipe;
    } else if (str == "SendReadShared") {
        return Cache_Event_SendReadShared;
    } else if (str == "SendReadOnce") {
        return Cache_Event_SendReadOnce;
    } else if (str == "SendReadNoSnp") {
        return Cache_Event_SendReadNoSnp;
    } else if (str == "SendReadNoSnpDMT") {
        return Cache_Event_SendReadNoSnpDMT;
    } else if (str == "SendReadUnique") {
        return Cache_Event_SendReadUnique;
    } else if (str == "SendCompAck") {
        return Cache_Event_SendCompAck;
    } else if (str == "SendCompData") {
        return Cache_Event_SendCompData;
    } else if (str == "WaitCompAck") {
        return Cache_Event_WaitCompAck;
    } else if (str == "SendRespSepData") {
        return Cache_Event_SendRespSepData;
    } else if (str == "SendWriteBackOrWriteEvict") {
        return Cache_Event_SendWriteBackOrWriteEvict;
    } else if (str == "SendWriteClean") {
        return Cache_Event_SendWriteClean;
    } else if (str == "SendWriteNoSnp") {
        return Cache_Event_SendWriteNoSnp;
    } else if (str == "SendWriteNoSnpPartial") {
        return Cache_Event_SendWriteNoSnpPartial;
    } else if (str == "SendWriteUnique") {
        return Cache_Event_SendWriteUnique;
    } else if (str == "SendWBData") {
        return Cache_Event_SendWBData;
    } else if (str == "SendWUData") {
        return Cache_Event_SendWUData;
    } else if (str == "SendWUDataCB") {
        return Cache_Event_SendWUDataCB;
    } else if (str == "SendCompDBIDResp") {
        return Cache_Event_SendCompDBIDResp;
    } else if (str == "SendCompDBIDRespStale") {
        return Cache_Event_SendCompDBIDRespStale;
    } else if (str == "SendCompDBIDResp_WU") {
        return Cache_Event_SendCompDBIDResp_WU;
    } else if (str == "SendDBIDResp_WU") {
        return Cache_Event_SendDBIDResp_WU;
    } else if (str == "SendComp_WU") {
        return Cache_Event_SendComp_WU;
    } else if (str == "SendEvict") {
        return Cache_Event_SendEvict;
    } else if (str == "SendCompIResp") {
        return Cache_Event_SendCompIResp;
    } else if (str == "SendCleanUnique") {
        return Cache_Event_SendCleanUnique;
    } else if (str == "SendCompUCResp") {
        return Cache_Event_SendCompUCResp;
    } else if (str == "SendCompUCRespStale") {
        return Cache_Event_SendCompUCRespStale;
    } else if (str == "CheckUpgrade_FromStore") {
        return Cache_Event_CheckUpgrade_FromStore;
    } else if (str == "CheckUpgrade_FromCU") {
        return Cache_Event_CheckUpgrade_FromCU;
    } else if (str == "CheckUpgrade_FromRU") {
        return Cache_Event_CheckUpgrade_FromRU;
    } else if (str == "SendSnpShared") {
        return Cache_Event_SendSnpShared;
    } else if (str == "SendSnpSharedFwdToOwner") {
        return Cache_Event_SendSnpSharedFwdToOwner;
    } else if (str == "SendSnpSharedFwdToSharer") {
        return Cache_Event_SendSnpSharedFwdToSharer;
    } else if (str == "SendSnpOnce") {
        return Cache_Event_SendSnpOnce;
    } else if (str == "SendSnpOnceFwd") {
        return Cache_Event_SendSnpOnceFwd;
    } else if (str == "SendSnpUnique") {
        return Cache_Event_SendSnpUnique;
    } else if (str == "SendSnpUniqueRetToSrc") {
        return Cache_Event_SendSnpUniqueRetToSrc;
    } else if (str == "SendSnpUniqueFwd") {
        return Cache_Event_SendSnpUniqueFwd;
    } else if (str == "SendSnpCleanInvalid") {
        return Cache_Event_SendSnpCleanInvalid;
    } else if (str == "SendSnpCleanInvalidNoReq") {
        return Cache_Event_SendSnpCleanInvalidNoReq;
    } else if (str == "SendSnpData") {
        return Cache_Event_SendSnpData;
    } else if (str == "SendSnpIResp") {
        return Cache_Event_SendSnpIResp;
    } else if (str == "SendInvSnpResp") {
        return Cache_Event_SendInvSnpResp;
    } else if (str == "SendSnpUniqueFwdCompData") {
        return Cache_Event_SendSnpUniqueFwdCompData;
    } else if (str == "SendSnpSharedFwdCompData") {
        return Cache_Event_SendSnpSharedFwdCompData;
    } else if (str == "SendSnpNotSharedDirtyFwdCompData") {
        return Cache_Event_SendSnpNotSharedDirtyFwdCompData;
    } else if (str == "SendSnpOnceFwdCompData") {
        return Cache_Event_SendSnpOnceFwdCompData;
    } else if (str == "SendSnpFwdedData") {
        return Cache_Event_SendSnpFwdedData;
    } else if (str == "SendSnpFwdedResp") {
        return Cache_Event_SendSnpFwdedResp;
    } else if (str == "DvmSync_Send") {
        return Cache_Event_DvmSync_Send;
    } else if (str == "SendRetryAck") {
        return Cache_Event_SendRetryAck;
    } else if (str == "SendPCrdGrant") {
        return Cache_Event_SendPCrdGrant;
    } else if (str == "DoRetry") {
        return Cache_Event_DoRetry;
    } else if (str == "DoRetry_Hazard") {
        return Cache_Event_DoRetry_Hazard;
    } else if (str == "LoadHit") {
        return Cache_Event_LoadHit;
    } else if (str == "StoreHit") {
        return Cache_Event_StoreHit;
    } else if (str == "UseTimeout") {
        return Cache_Event_UseTimeout;
    } else if (str == "RestoreFromHazard") {
        return Cache_Event_RestoreFromHazard;
    } else if (str == "TX_Data") {
        return Cache_Event_TX_Data;
    } else if (str == "MaintainCoherence") {
        return Cache_Event_MaintainCoherence;
    } else if (str == "FinishCleanUnique") {
        return Cache_Event_FinishCleanUnique;
    } else if (str == "FinishCopyBack_Stale") {
        return Cache_Event_FinishCopyBack_Stale;
    } else if (str == "ActionStalledOnHazard") {
        return Cache_Event_ActionStalledOnHazard;
    } else if (str == "Final") {
        return Cache_Event_Final;
    } else if (str == "null") {
        return Cache_Event_null;
    } else {
        panic("Invalid string conversion for %s, type Cache_Event", str);
    }
}

// Code to increment an enumeration type
Cache_Event&
operator++(Cache_Event& e)
{
    assert(e < Cache_Event_NUM);
    return e = Cache_Event(e+1);
}
} // namespace ruby
} // namespace gem5
