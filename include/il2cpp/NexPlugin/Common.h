#pragma once

#include "il2cpp.h"

bool NexPlugin_Common__IsInitializedNex (const MethodInfo* method_info);
bool NexPlugin_Common__IsNetworkConnected (const MethodInfo* method_info);
bool NexPlugin_Common__InitializeNexPlugin (uint32_t pluginMemSize, const MethodInfo* method_info);
bool NexPlugin_Common__FinalizeNexPlugin (const MethodInfo* method_info);
bool NexPlugin_Common__InitializeNexAsync (uint32_t* asyncId, int32_t threadMode, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Common__InitializeNex (int32_t threadMode, const MethodInfo* method_info);
bool NexPlugin_Common__FinalizeNexAsync (uint32_t* asyncId, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Common__FinalizeNex (const MethodInfo* method_info);
void NexPlugin_Common__SetTerminateImmediately (bool bTerminate, const MethodInfo* method_info);
bool NexPlugin_Common__GetTerminateImmediately (const MethodInfo* method_info);
bool NexPlugin_Common__SetThreadCoreNo (int32_t coreNo, const MethodInfo* method_info);
uint32_t NexPlugin_Common__Dispatch (uint32_t dispatchTimeout, System_Nullable_Common_DispachFlag__o dispatchFlags, const MethodInfo* method_info);
void NexPlugin_Common__DispatchAll (const MethodInfo* method_info);
uint32_t NexPlugin_Common__GetReadyJobsSize (const MethodInfo* method_info);
bool NexPlugin_Common__UpdateAsyncResult (const MethodInfo* method_info);
void NexPlugin_Common__Wait (uint32_t dispatchTimeout, System_Nullable_Common_DispachFlag__o dispatchFlags, const MethodInfo* method_info);
void NexPlugin_Common__DumpMemory (const MethodInfo* method_info);
int32_t NexPlugin_Common__GetNexAsyncCallCount (const MethodInfo* method_info);
void NexPlugin_Common__DumpNexAsyncCallList (const MethodInfo* method_info);
int32_t NexPlugin_Common__GetAllocedCount (const MethodInfo* method_info);
int32_t NexPlugin_Common__GetUsedAllocsize (const MethodInfo* method_info);
