#pragma once

#include "il2cpp.h"

void INL1_IlcaNetSession___cctor (const MethodInfo* method_info);
void INL1_IlcaNetSession__DebugDispSet (const MethodInfo* method_info);
void INL1_IlcaNetSession__DebugDispClear (const MethodInfo* method_info);
bool INL1_IlcaNetSession__Init (UnityEngine_MonoBehaviour_o* callobj, const MethodInfo* method_info);
bool INL1_IlcaNetSession__Init (UnityEngine_MonoBehaviour_o* callobj, INL1_IlcaNetSession_IlcaNetSessionFinalCallback_o* finalCallback, const MethodInfo* method_info);
void INL1_IlcaNetSession__SessionFinalCallbackSet (INL1_IlcaNetSession_IlcaNetSessionFinalCallback_o* finalRequestCallback, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionEventCallbackFuncSet (INL1_IlcaNetSession_IlcaNetSessionEventCallback_o* func, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionEventCallbackFuncSet (INL1_IlcaNetSession_IlcaNetSessionEventCallback_o* func, int32_t callBackMode, const MethodInfo* method_info);
bool INL1_IlcaNetSession__NetworkInitAsync (INL1_IlcaNetSessionSetting_o* setting, const MethodInfo* method_info);
void INL1_IlcaNetSession__NetworkInitAsyncNexWait (const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__State (const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__Update (const MethodInfo* method_info);
void INL1_IlcaNetSession__UpdateBottom (const MethodInfo* method_info);
bool INL1_IlcaNetSession__NetworkFinalRequestAsync (const MethodInfo* method_info);
bool INL1_IlcaNetSession__NetworkFinalAsync (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SettingSet (INL1_IlcaNetSessionSetting_o* setting, const MethodInfo* method_info);
void INL1_IlcaNetSession__CleanUpCore (const MethodInfo* method_info);
void INL1_IlcaNetSession__NetworkTransportInit (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameFrontRnoInit (const MethodInfo* method_info);
void INL1_IlcaNetSession__StationIndexCasheInit (const MethodInfo* method_info);
void INL1_IlcaNetSession__SystemCallBackInit (const MethodInfo* method_info);
void INL1_IlcaNetSession__SystemCallBackFinal (const MethodInfo* method_info);
void INL1_IlcaNetSession__SessionEventUserCallbackInit (const MethodInfo* method_info);
void INL1_IlcaNetSession__SessionEventUserCallbackInitAll (const MethodInfo* method_info);
void INL1_IlcaNetSession__SessonOpenCloseInit (const MethodInfo* method_info);
bool INL1_IlcaNetSession__IsHost (const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__ThisStationIndex (const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__HostStationIndex (const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__NumStation (const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__NumGamer (const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__PlayerNumMaxCurrentlySetting (const MethodInfo* method_info);
bool INL1_IlcaNetSession__IsSessionOnStageInConnected (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionOnStageCheck (PiaPluginSession_SessionStatus_o** session, const MethodInfo* method_info);
void INL1_IlcaNetSession__MatchingBlockRelease (const MethodInfo* method_info);
uint32_t INL1_IlcaNetSession__GetSendUnreliableDataSizeMax (const MethodInfo* method_info);
uint32_t INL1_IlcaNetSession__SessionID (const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__CallbackQueueNum (const MethodInfo* method_info);
uint32_t INL1_IlcaNetSession__ErrorResultGet (const MethodInfo* method_info);
PiaPlugin_Result_o INL1_IlcaNetSession__ErrorResultGetForFamily (const MethodInfo* method_info);
uint32_t INL1_IlcaNetSession__SessionListSizeGet (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionListPropertyGet (uint32_t index, INL1_IlcaNetSessionProperty_o** pro, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionSearchRetryAsync (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionJoinAsync (uint32_t index, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionJoinAsync (uint32_t index, System_String_o* password, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionJoinAsyncCore (uint32_t index, System_String_o* password, uint32_t sessionId, int32_t nextState, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionCreateAsync (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionCreateAsync (System_String_o* password, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionCreateAsyncCore (System_String_o* password, int32_t nextState, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionRandomAsync (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionUpdateApplicationDataBufferAsync (System_Byte_array* appData, int32_t appDataSize, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionCloseHostAsync (INL1_IlcaNetSession_UserSessionOpenCloseAsyncCompleteCallback_o* callback, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionOpenHostAsync (INL1_IlcaNetSession_UserSessionOpenCloseAsyncCompleteCallback_o* callback, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionOpenCloseHostAsyncCore (int32_t nowstate, int32_t targetstate, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionOpenCloseHostAsyncCompleted (const MethodInfo* method_info);
bool INL1_IlcaNetSession__IsSessionOpenCloseHost (int32_t state, const MethodInfo* method_info);
bool INL1_IlcaNetSession__IsSessionToOpenCloseHost (int32_t state, const MethodInfo* method_info);
bool INL1_IlcaNetSession__IsSessionClose (const MethodInfo* method_info);
bool INL1_IlcaNetSession__IsSessionOpen (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionLeaveRequestAsync (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionRestartRequestAsync (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionLeaveRequestAsync (int32_t state, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionLeaveDefaultCheck (int32_t state, const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionLeaveAsyncCore (int32_t state, const MethodInfo* method_info);
bool INL1_IlcaNetSession__NetGamerNameGet (PiaPluginSession_SessionEvent_o* ev, System_String_o** gamerName, uint8_t* nameStringLanguage, const MethodInfo* method_info);
bool INL1_IlcaNetSession__CleanupRecoveryToLoggedIn (const MethodInfo* method_info);
bool INL1_IlcaNetSession__CleanupRecoveryToLoggedIn2phase (const MethodInfo* method_info);
void INL1_IlcaNetSession__DangerousEmergencyCall (const MethodInfo* method_info);
void INL1_IlcaNetSession__DangerousEmergencyError (int32_t level, const MethodInfo* method_info);
void INL1_IlcaNetSession__DangerousEmergencyErrorCore (const MethodInfo* method_info);
void INL1_IlcaNetSession__AnalysisResultPrintCore (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionFinalizeProcessMovingCheck (const MethodInfo* method_info);
bool INL1_IlcaNetSession__EmergencyCheckFromFamilyClass (const MethodInfo* method_info);
bool INL1_IlcaNetSession__NetworkFinalRequestCheck (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SessionLeaveRequestCheck (const MethodInfo* method_info);
void INL1_IlcaNetSession__SessionStatusCheckForFamilyClass (const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__UpdateCore (const MethodInfo* method_info);
void INL1_IlcaNetSession__UpdateDispatchWorkerTh (const MethodInfo* method_info);
bool INL1_IlcaNetSession__UpdateDispatchWorkerSet (int32_t apid, bool PriorityMode2, const MethodInfo* method_info);
void INL1_IlcaNetSession__UpdateDispatchWorkerThSuspend (const MethodInfo* method_info);
bool INL1_IlcaNetSession__UpdateDispatchWorkerSetSuspend (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SuspendON (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SuspendOFFRequest (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SuspendOFF (const MethodInfo* method_info);
bool INL1_IlcaNetSession__SuspendFinishCheck (bool first, const MethodInfo* method_info);
void INL1_IlcaNetSession__UpdateDispatchCore (bool first, const MethodInfo* method_info);
void INL1_IlcaNetSession__DispatchAftre (bool first, System_Collections_Generic_List_PiaPluginSession_SessionEvent__o* sessionEventList, const MethodInfo* method_info);
void INL1_IlcaNetSession__SessionToTransportSet (bool first, System_Collections_Generic_List_PiaPluginSession_SessionEvent__o* sessionEventList, const MethodInfo* method_info);
void INL1_IlcaNetSession__NetStationBootCheck (const MethodInfo* method_info);
void INL1_IlcaNetSession__UpdateSwitchCore (const MethodInfo* method_info);
bool INL1_IlcaNetSession__IsAllNetworkAsyncCompleted (const MethodInfo* method_info);
void INL1_IlcaNetSession__SessionStateSet (int32_t sessionEnum, const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__SessionStateNow (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameStateChangeSet (int32_t setState, const MethodInfo* method_info);
void INL1_IlcaNetSession__GameStateChangeSet (int32_t setState, int32_t waitAsycId, int32_t setNextState, const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__GameStateNow (const MethodInfo* method_info);
void INL1_IlcaNetSession__CallBackExtension (System_Collections_Generic_List_PiaPluginSession_SessionEvent__o* sessionEventList, bool first, const MethodInfo* method_info);
bool INL1_IlcaNetSession__CallbackEventQueueCheck (const MethodInfo* method_info);
void INL1_IlcaNetSession__CallbackEventQueueCore (System_Collections_Generic_List_PiaPluginSession_SessionEvent__o** sessionEventList, const MethodInfo* method_info);
void INL1_IlcaNetSession__CallBackExtensionCore (PiaPluginSession_SessionEvent_o* ev, int32_t i, System_String_o* str, const MethodInfo* method_info);
void INL1_IlcaNetSession__CallBackExtensionCoreEventJoin (INL1_IlcaNetGamer_o** gamer, PiaPluginSession_SessionEvent_o* ev, const MethodInfo* method_info);
void INL1_IlcaNetSession__CallBackNetGamerLastEventLeave (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_AsyncWaitCore (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_NexPiaInitialize (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_NetworkStartedUp (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_NetworkStartedUp_NexCallBack (NexPlugin_AsyncResult_o* asyncResult, const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_NetworkStartedUp_after (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_LoggedIn (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_LoggedInAfter (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_WaitWorker (int32_t mode, const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_LoggedInReturnStep (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_SessionStartedUp (const MethodInfo* method_info);
void INL1_IlcaNetSession__CreateSessionSet (System_String_o* password, const MethodInfo* method_info);
void INL1_IlcaNetSession__SearchSessionSet (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_BrowseSession (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_CreateOrJoinSessionBefore (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_BrowseSessionAfter_InternetRandomAikotoba (const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__getproListCompIDIndex (INL1_IlcaNetSession_getProListMod_o* a, INL1_IlcaNetSession_getProListMod_o* b, const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__getproListCompPlayerNumIndex (INL1_IlcaNetSession_getProListMod_o* a, INL1_IlcaNetSession_getProListMod_o* b, const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_BrowseSessionAfter_LocalRandom2 (const MethodInfo* method_info);
bool INL1_IlcaNetSession__OverPasswordMagicNumberIDCheck (System_Byte_array** c, int32_t i, const MethodInfo* method_info);
uint32_t INL1_IlcaNetSession__OverPasswordSizeGet (System_Byte_array** c, int32_t i, const MethodInfo* method_info);
bool INL1_IlcaNetSession__OverPasswordCompare (System_Byte_array** c1, int32_t i, System_Byte_array** c2, int32_t j, uint32_t size, const MethodInfo* method_info);
void INL1_IlcaNetSession__ToGameFrontBeforeLocalRandom (const MethodInfo* method_info);
void INL1_IlcaNetSession__ToGameFront (const MethodInfo* method_info);
void INL1_IlcaNetSession__ToGameInit (const MethodInfo* method_info);
void INL1_IlcaNetSession__autoRetryRandomMatchmakeCounterReset (const MethodInfo* method_info);
bool INL1_IlcaNetSession__AutoRetryCheck (PiaPlugin_Result_o result, const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_JoinProcessAll (const MethodInfo* method_info);
bool INL1_IlcaNetSession__InternetRandomMatchCheck (const MethodInfo* method_info);
bool INL1_IlcaNetSession__InternetRandomAikotobaMatchCheck (const MethodInfo* method_info);
bool INL1_IlcaNetSession__LocalRandomMatchCheck (const MethodInfo* method_info);
bool INL1_IlcaNetSession__LanRandomMatchCheck (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_GameFrontBefore_LocalRandom (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_GameFront (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_Game (const MethodInfo* method_info);
bool INL1_IlcaNetSession__CheckSessionOpenCloseStatus (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_LogoutCore (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_LogoutWaitWorker (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_PiaFrameworkFinalize (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_PiaFrameworkFinalizeWorkerTh (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_PiaFrameworkFinalizeCoreAfter (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_ErrorHandling (bool direct, const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_ErrorHandlingCoreToCrash (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_ErrorHandlingCoreToError (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_ErrorHandlingCoreViewer (PiaPlugin_Result_o res, const MethodInfo* method_info);
void INL1_IlcaNetSession__HandleError (PiaPlugin_Result_o errorResult, const MethodInfo* method_info);
void INL1_IlcaNetSession__HandleErrorCore (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_HandleErrorWaitWorker (const MethodInfo* method_info);
void INL1_IlcaNetSession__GameState_HandleErrorWait (const MethodInfo* method_info);
int32_t INL1_IlcaNetSession__MyConvertHandlingTypeToStat (int32_t handle, const MethodInfo* method_info);
void INL1_IlcaNetSession___ctor (INL1_IlcaNetSession_o* __this, const MethodInfo* method_info);