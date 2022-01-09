#pragma once

#include "il2cpp.h"

System_Threading_CancellationToken_o System_Threading_CancellationToken__get_None (const MethodInfo* method_info);
bool System_Threading_CancellationToken__get_IsCancellationRequested (System_Threading_CancellationToken_o __this, const MethodInfo* method_info);
bool System_Threading_CancellationToken__get_CanBeCanceled (System_Threading_CancellationToken_o __this, const MethodInfo* method_info);
void System_Threading_CancellationToken___ctor (System_Threading_CancellationToken_o __this, System_Threading_CancellationTokenSource_o* source, const MethodInfo* method_info);
void System_Threading_CancellationToken__ActionToActionObjShunt (Il2CppObject* obj, const MethodInfo* method_info);
System_Threading_CancellationTokenRegistration_o System_Threading_CancellationToken__InternalRegisterWithoutEC (System_Threading_CancellationToken_o __this, System_Action_object__o* callback, Il2CppObject* state, const MethodInfo* method_info);
System_Threading_CancellationTokenRegistration_o System_Threading_CancellationToken__Register (System_Threading_CancellationToken_o __this, System_Action_object__o* callback, Il2CppObject* state, bool useSynchronizationContext, bool useExecutionContext, const MethodInfo* method_info);
bool System_Threading_CancellationToken__Equals (System_Threading_CancellationToken_o __this, System_Threading_CancellationToken_o other, const MethodInfo* method_info);
bool System_Threading_CancellationToken__Equals (System_Threading_CancellationToken_o __this, Il2CppObject* other, const MethodInfo* method_info);
int32_t System_Threading_CancellationToken__GetHashCode (System_Threading_CancellationToken_o __this, const MethodInfo* method_info);
bool System_Threading_CancellationToken__op_Equality (System_Threading_CancellationToken_o left, System_Threading_CancellationToken_o right, const MethodInfo* method_info);
bool System_Threading_CancellationToken__op_Inequality (System_Threading_CancellationToken_o left, System_Threading_CancellationToken_o right, const MethodInfo* method_info);
void System_Threading_CancellationToken__ThrowIfCancellationRequested (System_Threading_CancellationToken_o __this, const MethodInfo* method_info);
void System_Threading_CancellationToken__ThrowIfSourceDisposed (System_Threading_CancellationToken_o __this, const MethodInfo* method_info);
void System_Threading_CancellationToken__ThrowOperationCanceledException (System_Threading_CancellationToken_o __this, const MethodInfo* method_info);
void System_Threading_CancellationToken__ThrowObjectDisposedException (const MethodInfo* method_info);
void System_Threading_CancellationToken___cctor (const MethodInfo* method_info);