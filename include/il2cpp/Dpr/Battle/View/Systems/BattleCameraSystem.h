#pragma once

#include "il2cpp.h"

int32_t Dpr_Battle_View_Systems_BattleCameraSystem__get_WaitCameraState (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem__set_WaitCameraState (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, int32_t value, const MethodInfo* method_info);
bool Dpr_Battle_View_Systems_BattleCameraSystem__get_IsPlayWaitCamera (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_View_Systems_BattleCameraSystem__get_IsPlayedWaitCameraOnce (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem___ctor (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, Dpr_Battle_View_Systems_BattleViewSystem_o* pViewSystem, UnityEngine_Camera_o* camera, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem__OnLateUpdate (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem__InitializeWaitCamera (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem__ClearWaitCameraWork (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem__LateUpdateWaitCamera (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem__StartWaitCamera (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem__StartLoopWaitCamera (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Battle_View_Systems_BattleCameraSystem__RunWaitCameraForSequence (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, bool isLoop, const MethodInfo* method_info);
XLSXContent_BattleWaitCameraData_SheetWaitCameraData_o* Dpr_Battle_View_Systems_BattleCameraSystem__LotteryWaitCamera (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_View_Systems_BattleCameraSystem__CanPlayWaitCameraData (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, XLSXContent_BattleWaitCameraData_SheetWaitCameraData_o* data, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem__StopCamera (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem__EndWaitCamera (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem__StopWaitCameraCoroutine (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_Battle_View_Systems_BattleCameraSystem__ResetWaitCameraParam (Dpr_Battle_View_Systems_BattleCameraSystem_o* __this, const MethodInfo* method_info);
