#pragma once

#include "il2cpp.h"

void Dpr_UI_ContestMatchingUI__Initialize (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
UnityEngine_Sprite_o* Dpr_UI_ContestMatchingUI__GetSprite (Dpr_UI_ContestMatchingUI_o* __this, System_String_o* texName, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__OnFinalize (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
int32_t Dpr_UI_ContestMatchingUI__get_GetNowViewModelCount (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
bool Dpr_UI_ContestMatchingUI__HasViewModelByIndex (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ShowKeyGuide (Dpr_UI_ContestMatchingUI_o* __this, int32_t patternID, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__CloseKeyGuide (Dpr_UI_ContestMatchingUI_o* __this, System_Action_o* onClosed, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__OnJoinMine (Dpr_UI_ContestMatchingUI_o* __this, int32_t playerIndex, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__OnLeavePlayer (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__OnExitPlayer (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__LoadCharacterModel (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, int32_t trainerType, int32_t colorID, System_String_o* modelPath, System_Action_GameObject__o* onComplete, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__DestroyAllCahracterModel (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__DestroyCharacterModel (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ChangeAllModelMotion (Dpr_UI_ContestMatchingUI_o* __this, int32_t motionIndex, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ChangeModelMotion (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, int32_t motionIndex, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ResetAllPlayerName (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__SetPlayerName (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, System_String_o* name, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__SetPlayerName (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, System_String_o* name, int32_t langId, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__SetEmptyPlayerName (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ShowPreparatioIconReady (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ShowPreparatioIconWait (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__HidePreparatioIcon (Dpr_UI_ContestMatchingUI_o* __this, int32_t index, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ResetPreparatioIcon (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
int32_t Dpr_UI_ContestMatchingUI__get_CountTime (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
bool Dpr_UI_ContestMatchingUI__get_IsFinishCountDown (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_UI_ContestMatchingUI__GetCountDownMinutStr (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
System_String_o* Dpr_UI_ContestMatchingUI__GetCountDownSecondStr (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__StartCountDown (Dpr_UI_ContestMatchingUI_o* __this, float startTime, const MethodInfo* method_info);
bool Dpr_UI_ContestMatchingUI__UpdateCountDown (Dpr_UI_ContestMatchingUI_o* __this, float startTime, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__SetCountDownTime (Dpr_UI_ContestMatchingUI_o* __this, int32_t timeCount, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__CheckShowUICountDown (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__UpdateUITimeText (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ShowCountDownTimer (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__HideCountDownTimer (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__SetTimerActive (Dpr_UI_ContestMatchingUI_o* __this, bool active, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__SetTimerObjActive (Dpr_UI_ContestMatchingUI_o* __this, bool active, const MethodInfo* method_info);
bool Dpr_UI_ContestMatchingUI__IsWindowOpen (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
int32_t Dpr_UI_ContestMatchingUI__GetMsgState (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ShowMessageWindow (Dpr_UI_ContestMatchingUI_o* __this, System_String_o* label, System_Action_o* onFinishMessage, bool isShowloadingIcon, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ShowMsgWindowAndContextMenu (Dpr_UI_ContestMatchingUI_o* __this, System_String_o* label, System_String_array* contextLabels, System_Action_int__o* onSelect, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ShowConfirmYesNoMsg (Dpr_UI_ContestMatchingUI_o* __this, System_String_o* message, System_Action_o* onSelectYes, System_Action_o* onSelectNo, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ShowConfirmLeaveSessionMsg (Dpr_UI_ContestMatchingUI_o* __this, System_Action_o* onSelectYes, System_Action_o* onSelectNo, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ShowAutoCloseMessageWindow (Dpr_UI_ContestMatchingUI_o* __this, System_String_o* label, System_Action_o* onClosed, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__ShowInputCloseMessageWindow (Dpr_UI_ContestMatchingUI_o* __this, System_String_o* label, System_Action_o* onCloseed, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__CloseMessageWindow (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__OpenContextMenu (Dpr_UI_ContestMatchingUI_o* __this, System_String_array* contextLabels, System_Action_int__o* onSelect, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI__CloseContextMenu (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
void Dpr_UI_ContestMatchingUI___ctor (Dpr_UI_ContestMatchingUI_o* __this, const MethodInfo* method_info);
