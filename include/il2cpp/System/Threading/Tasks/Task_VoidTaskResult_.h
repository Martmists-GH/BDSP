#pragma once

#include "il2cpp.h"

void System_Threading_Tasks_Task_VoidTaskResult____ctor (System_Threading_Tasks_Task_VoidTaskResult__o* __this, const MethodInfo* method_info);
void System_Threading_Tasks_Task_VoidTaskResult____ctor (System_Threading_Tasks_Task_VoidTaskResult__o* __this, System_Threading_Tasks_VoidTaskResult_o result, const MethodInfo* method_info);
void System_Threading_Tasks_Task_VoidTaskResult____ctor (System_Threading_Tasks_Task_VoidTaskResult__o* __this, bool canceled, System_Threading_Tasks_VoidTaskResult_o result, int32_t creationOptions, System_Threading_CancellationToken_o ct, const MethodInfo* method_info);
void System_Threading_Tasks_Task_VoidTaskResult____ctor (System_Threading_Tasks_Task_VoidTaskResult__o* __this, System_Func_object__TResult__o* function, Il2CppObject* state, System_Threading_CancellationToken_o cancellationToken, int32_t creationOptions, const MethodInfo* method_info);
void System_Threading_Tasks_Task_VoidTaskResult____ctor (System_Threading_Tasks_Task_VoidTaskResult__o* __this, System_Delegate_o* valueSelector, Il2CppObject* state, System_Threading_Tasks_Task_o* parent, System_Threading_CancellationToken_o cancellationToken, int32_t creationOptions, int32_t internalOptions, System_Threading_Tasks_TaskScheduler_o* scheduler, const MethodInfo* method_info);
bool System_Threading_Tasks_Task_VoidTaskResult___TrySetResult (System_Threading_Tasks_Task_VoidTaskResult__o* __this, System_Threading_Tasks_VoidTaskResult_o result, const MethodInfo* method_info);
System_Threading_Tasks_VoidTaskResult_o System_Threading_Tasks_Task_VoidTaskResult___get_Result (System_Threading_Tasks_Task_VoidTaskResult__o* __this, const MethodInfo* method_info);
System_Threading_Tasks_VoidTaskResult_o System_Threading_Tasks_Task_VoidTaskResult___get_ResultOnSuccess (System_Threading_Tasks_Task_VoidTaskResult__o* __this, const MethodInfo* method_info);
System_Threading_Tasks_VoidTaskResult_o System_Threading_Tasks_Task_VoidTaskResult___GetResultCore (System_Threading_Tasks_Task_VoidTaskResult__o* __this, bool waitCompletionNotification, const MethodInfo* method_info);
bool System_Threading_Tasks_Task_VoidTaskResult___TrySetException (System_Threading_Tasks_Task_VoidTaskResult__o* __this, Il2CppObject* exceptionObject, const MethodInfo* method_info);
bool System_Threading_Tasks_Task_VoidTaskResult___TrySetCanceled (System_Threading_Tasks_Task_VoidTaskResult__o* __this, System_Threading_CancellationToken_o tokenToRecord, const MethodInfo* method_info);
bool System_Threading_Tasks_Task_VoidTaskResult___TrySetCanceled (System_Threading_Tasks_Task_VoidTaskResult__o* __this, System_Threading_CancellationToken_o tokenToRecord, Il2CppObject* cancellationException, const MethodInfo* method_info);
void System_Threading_Tasks_Task_VoidTaskResult___InnerInvoke (System_Threading_Tasks_Task_VoidTaskResult__o* __this, const MethodInfo* method_info);
System_Runtime_CompilerServices_TaskAwaiter_TResult__o System_Threading_Tasks_Task_VoidTaskResult___GetAwaiter (System_Threading_Tasks_Task_VoidTaskResult__o* __this, const MethodInfo* method_info);
System_Runtime_CompilerServices_ConfiguredTaskAwaitable_TResult__o System_Threading_Tasks_Task_VoidTaskResult___ConfigureAwait (System_Threading_Tasks_Task_VoidTaskResult__o* __this, bool continueOnCapturedContext, const MethodInfo* method_info);
void System_Threading_Tasks_Task_VoidTaskResult____cctor (const MethodInfo* method_info);
