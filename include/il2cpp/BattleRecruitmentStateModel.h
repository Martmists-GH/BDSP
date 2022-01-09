#pragma once

#include "il2cpp.h"

int32_t BattleRecruitmentStateModel__get_currentState (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__set_currentState (BattleRecruitmentStateModel_o* __this, int32_t value, const MethodInfo* method_info);
int32_t BattleRecruitmentStateModel__get_sexId (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__set_sexId (BattleRecruitmentStateModel_o* __this, int32_t value, const MethodInfo* method_info);
OnlinePlayerCharacter_o* BattleRecruitmentStateModel__get_opcCharacter (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__set_opcCharacter (BattleRecruitmentStateModel_o* __this, OnlinePlayerCharacter_o* value, const MethodInfo* method_info);
UnionBattleContextMenu_o* BattleRecruitmentStateModel__get_contextMenu (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__set_contextMenu (BattleRecruitmentStateModel_o* __this, UnionBattleContextMenu_o* value, const MethodInfo* method_info);
UnionBattleRuleWindow_o* BattleRecruitmentStateModel__get_unionBattleRuleWindow (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__set_unionBattleRuleWindow (BattleRecruitmentStateModel_o* __this, UnionBattleRuleWindow_o* value, const MethodInfo* method_info);
void BattleRecruitmentStateModel___ctor (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__Start (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__SetMsgWindow (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__SetFadeCallBack (BattleRecruitmentStateModel_o* __this, System_Action_o* fadeAction, const MethodInfo* method_info);
void BattleRecruitmentStateModel__InitCharaState (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__ChangeBattleRecruitmentState (BattleRecruitmentStateModel_o* __this, int32_t state, const MethodInfo* method_info);
void BattleRecruitmentStateModel__ShowMessageBattleRecuruiment (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__ShowMessageSpoken (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
bool BattleRecruitmentStateModel__IsCancelable (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__BattleRecruitmentCancel (BattleRecruitmentStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method_info);
void BattleRecruitmentStateModel__BattleSpokenCancel (BattleRecruitmentStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method_info);
void BattleRecruitmentStateModel__TargetBattleRuleCheckCancel (BattleRecruitmentStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method_info);
void BattleRecruitmentStateModel__BattleRuleSelectWait (BattleRecruitmentStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method_info);
void BattleRecruitmentStateModel__BattleRuleCheckCancel (BattleRecruitmentStateModel_o* __this, CancelModel_o cancelModel, const MethodInfo* method_info);
void BattleRecruitmentStateModel__CancelMine (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__CancelOpponent (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__Battle (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__CloseWindow (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
void BattleRecruitmentStateModel__OpenSwitchMsg (BattleRecruitmentStateModel_o* __this, int32_t sexId, const MethodInfo* method_info);
void BattleRecruitmentStateModel__OpenSwitchFadeMsg (BattleRecruitmentStateModel_o* __this, int32_t sexId, const MethodInfo* method_info);
void BattleRecruitmentStateModel__OpenSwitchCancelMsg (BattleRecruitmentStateModel_o* __this, bool isCancel, const MethodInfo* method_info);
void BattleRecruitmentStateModel__ShowBattleRecruitmentYesNoMenu (BattleRecruitmentStateModel_o* __this, int32_t stationIndex, const MethodInfo* method_info);
void BattleRecruitmentStateModel__SetBattleStateWindowText (BattleRecruitmentStateModel_o* __this, System_String_o* nameTxt, int32_t battleModeID, int32_t langId, const MethodInfo* method_info);
void BattleRecruitmentStateModel__ShowBattleStateWindow (BattleRecruitmentStateModel_o* __this, int32_t index, int32_t battleModeID, const MethodInfo* method_info);
void BattleRecruitmentStateModel__HideBattleStateWindow (BattleRecruitmentStateModel_o* __this, const MethodInfo* method_info);
