#pragma once

#include "il2cpp.h"

void UnionContextMenu__set_systemController (UnionContextMenu_o* __this, UnionSystemController_o* value, const MethodInfo* method_info);
UnionSystemController_o* UnionContextMenu__get_systemController (UnionContextMenu_o* __this, const MethodInfo* method_info);
void UnionContextMenu___ctor (UnionContextMenu_o* __this, const MethodInfo* method_info);
void UnionContextMenu__Clear (UnionContextMenu_o* __this, const MethodInfo* method_info);
void UnionContextMenu__SetZoneID (UnionContextMenu_o* __this, int32_t zoneId, const MethodInfo* method_info);
void UnionContextMenu__SetCallBack (UnionContextMenu_o* __this, System_Action_o* leaveUnion, System_Action_OpcState_OnlineState__NetStateModel_StateModelType__o* createStateModel, const MethodInfo* method_info);
System_String_o* UnionContextMenu__GetUnionMenuText (UnionContextMenu_o* __this, int32_t index, const MethodInfo* method_info);
void UnionContextMenu__CreateContextMenu (UnionContextMenu_o* __this, OnlinePlayerCharacter_o* onlinePlayerCharacter, const MethodInfo* method_info);
void UnionContextMenu__CreateEmoticonSelctContextMenu (UnionContextMenu_o* __this, OnlinePlayerCharacter_o* onlinePlayerCharacter, System_String_o* mFileName, System_String_array* MenuMessagesList, const MethodInfo* method_info);
void UnionContextMenu__CreateContextBattleTypeMenu (UnionContextMenu_o* __this, OnlinePlayerCharacter_o* onlinePlayerCharacter, const MethodInfo* method_info);
void UnionContextMenu__SendStateData (UnionContextMenu_o* __this, OnlinePlayerCharacter_o* onlinePlayerCharacter, int32_t state, const MethodInfo* method_info);
void UnionContextMenu__SendTransitionData (UnionContextMenu_o* __this, int32_t targetIndex, int32_t isRecruitment, const MethodInfo* method_info);
void UnionContextMenu__SendCancelData (UnionContextMenu_o* __this, int32_t targetIndex, int32_t state, const MethodInfo* method_info);
void UnionContextMenu__ShowYesNoWindow (UnionContextMenu_o* __this, System_Action_int__o* SelectFunc, const MethodInfo* method_info);
void UnionContextMenu__CloseContextWindow (UnionContextMenu_o* __this, const MethodInfo* method_info);
Dpr_UI_ContextMenuWindow_o* UnionContextMenu__GetOpenMenu (UnionContextMenu_o* __this, const MethodInfo* method_info);
void UnionContextMenu__SetIsOpen (UnionContextMenu_o* __this, bool isOpen, const MethodInfo* method_info);
bool UnionContextMenu__IsOpen (UnionContextMenu_o* __this, const MethodInfo* method_info);
void UnionContextMenu__SetUnderModeInputActive (UnionContextMenu_o* __this, const MethodInfo* method_info);
void UnionContextMenu___cctor (const MethodInfo* method_info);
