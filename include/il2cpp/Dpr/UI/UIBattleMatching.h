#pragma once

#include "il2cpp.h"

void Dpr_UI_UIBattleMatching__Initialize (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__Setup (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OpenUnionRoom (Dpr_UI_UIBattleMatching_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OpenColiseum (Dpr_UI_UIBattleMatching_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OpenResume (Dpr_UI_UIBattleMatching_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIBattleMatching__OpOpen (Dpr_UI_UIBattleMatching_o* __this, int32_t prevWindowId, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__Close (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIBattleMatching__OpClose (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__SetKeyGuide (Dpr_UI_UIBattleMatching_o* __this, bool decide, bool back, bool cancel, bool complete, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OpenKeyguide (Dpr_UI_UIBattleMatching_o* __this, bool decide, bool back, bool cancel, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__CloseKeyGuide (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__SetTitle (Dpr_UI_UIBattleMatching_o* __this, int32_t type, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__SetPlayer (Dpr_UI_UIBattleMatching_o* __this, int32_t type, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__SetPlayerVS (Dpr_UI_UIBattleMatching_o* __this, int32_t type, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__SetPlayerName (Dpr_UI_UIBattleMatching_o* __this, int32_t index, System_String_o* name, uint32_t language, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__SetPlayerNameVS (Dpr_UI_UIBattleMatching_o* __this, int32_t index, System_String_o* name, uint32_t language, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OpenVSWait (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__CloseVSWait (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ShowPreparationIconReady (Dpr_UI_UIBattleMatching_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ShowPreparationIconWait (Dpr_UI_UIBattleMatching_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__HidePreparationIcon (Dpr_UI_UIBattleMatching_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ResetPreparationIcon (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OnJoinMine (Dpr_UI_UIBattleMatching_o* __this, int32_t playerIndex, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OnLeavePlayer (Dpr_UI_UIBattleMatching_o* __this, int32_t index, const MethodInfo* method_info);
bool Dpr_UI_UIBattleMatching__IsShowAllPlayerModel (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
int32_t Dpr_UI_UIBattleMatching__get_GetNowViewModelCount (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIBattleMatching__HasViewModelByIndex (Dpr_UI_UIBattleMatching_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__LoadCharacterModel (Dpr_UI_UIBattleMatching_o* __this, int32_t index, System_Action_GameObject__o* onComplete, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__LoadCharacterModel (Dpr_UI_UIBattleMatching_o* __this, int32_t index, int32_t trainerType, int32_t colorID, System_String_o* modelPath, System_Action_GameObject__o* onComplete, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__DestroyAllCahracterModel (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__DestroyCharacterModel (Dpr_UI_UIBattleMatching_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ChangeAllModelMotion (Dpr_UI_UIBattleMatching_o* __this, int32_t motionIndex, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ChangeModelMotion (Dpr_UI_UIBattleMatching_o* __this, int32_t index, int32_t motionIndex, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__SetTimerMessage (Dpr_UI_UIBattleMatching_o* __this, System_String_o* label, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__SetTimerMessage (Dpr_UI_UIBattleMatching_o* __this, System_String_o* msbt, System_String_o* label, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__SetActiveTimer (Dpr_UI_UIBattleMatching_o* __this, bool active, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__SetActiveRemainingText (Dpr_UI_UIBattleMatching_o* __this, bool active, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__RemainingWarningText (Dpr_UI_UIBattleMatching_o* __this, bool warning, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__UpdateUITimeText (Dpr_UI_UIBattleMatching_o* __this, System_String_o* minutes, System_String_o* seconds, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OpenRuleWindow (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__CloseRuleWindow (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OpenSelectRuleWindow (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OnRuleMoveX (Dpr_UI_UIBattleMatching_o* __this, bool left, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OnRuleMoveY (Dpr_UI_UIBattleMatching_o* __this, bool up, const MethodInfo* method_info);
bool Dpr_UI_UIBattleMatching__OnRuleDecide (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ShowVS (Dpr_UI_UIBattleMatching_o* __this, System_Action_o* onEnd, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_UI_UIBattleMatching__WaitVS (Dpr_UI_UIBattleMatching_o* __this, System_Action_o* onEnd, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OpenResult (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__CloseResult (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
bool Dpr_UI_UIBattleMatching__IsWindowOpen (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__SetShowMsgTime (Dpr_UI_UIBattleMatching_o* __this, float time, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ShowMessageWindow (Dpr_UI_UIBattleMatching_o* __this, System_String_o* label, System_Action_o* onFinishMessage, bool isShowloadingIcon, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ShowMsgWindowAndContextMenu (Dpr_UI_UIBattleMatching_o* __this, System_String_o* label, System_String_array* contextLabels, System_Action_int__o* onSelect, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ShowMsgWindowAndContextMenu_Custom (Dpr_UI_UIBattleMatching_o* __this, System_String_o* label, System_String_array* contextLabels, System_Action_int__o* onSelect, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ShowConfirmYesNoMsg (Dpr_UI_UIBattleMatching_o* __this, System_String_o* message, System_Action_o* onSelectYes, System_Action_o* onSelectNo, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ShowConfirmLeaveSessionMsg (Dpr_UI_UIBattleMatching_o* __this, System_Action_o* onSelectYes, System_Action_o* onSelectNo, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ShowAutoCloseMessageWindow (Dpr_UI_UIBattleMatching_o* __this, System_String_o* label, System_Action_o* onClosed, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__ShowInputCloseMessageWindow (Dpr_UI_UIBattleMatching_o* __this, System_String_o* label, System_Action_o* onClosed, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__CloseMessageWindow (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OpenContextMenu (Dpr_UI_UIBattleMatching_o* __this, System_String_array* contextLabels, System_Action_int__o* onSelect, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__OpenContextMenu_Custom (Dpr_UI_UIBattleMatching_o* __this, System_String_array* contextLabels, System_Action_int__o* onSelect, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching__CloseContextMenu (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching___ctor (Dpr_UI_UIBattleMatching_o* __this, const MethodInfo* method_info);
void Dpr_UI_UIBattleMatching____n__0 (Dpr_UI_UIBattleMatching_o* __this, int32_t prevWindowId, const MethodInfo* method_info);