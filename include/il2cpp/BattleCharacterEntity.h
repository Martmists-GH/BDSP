#pragma once

#include "il2cpp.h"

System_String_o* BattleCharacterEntity__get_entityType (BattleCharacterEntity_o* __this, const MethodInfo* method_info);
Dpr_Battle_View_TrainerSimpleParam_o BattleCharacterEntity__get_TrainerSimpleParam (BattleCharacterEntity_o* __this, const MethodInfo* method_info);
void BattleCharacterEntity__set_TrainerSimpleParam (BattleCharacterEntity_o* __this, Dpr_Battle_View_TrainerSimpleParam_o value, const MethodInfo* method_info);
void BattleCharacterEntity__Awake (BattleCharacterEntity_o* __this, const MethodInfo* method_info);
void BattleCharacterEntity__OnDestroy (BattleCharacterEntity_o* __this, const MethodInfo* method_info);
void BattleCharacterEntity__OnEnable (BattleCharacterEntity_o* __this, const MethodInfo* method_info);
void BattleCharacterEntity__OnDisable (BattleCharacterEntity_o* __this, const MethodInfo* method_info);
void BattleCharacterEntity__Initialize (BattleCharacterEntity_o* __this, Dpr_Battle_View_TrainerSimpleParam_o param, bool isContest, const MethodInfo* method_info);
void BattleCharacterEntity__SetSkinColor (BattleCharacterEntity_o* __this, int32_t colorId, const MethodInfo* method_info);
int32_t BattleCharacterEntity__GetSkinColor (BattleCharacterEntity_o* __this, const MethodInfo* method_info);
void BattleCharacterEntity__CreateShadowCastSystem (BattleCharacterEntity_o* __this, const MethodInfo* method_info);
void BattleCharacterEntity__SetCaputureDemo (BattleCharacterEntity_o* __this, const MethodInfo* method_info);
void BattleCharacterEntity__OnUpdate (BattleCharacterEntity_o* __this, float deltaTime, const MethodInfo* method_info);
void BattleCharacterEntity__ProcessSequence (BattleCharacterEntity_o* __this, float deltaTime, const MethodInfo* method_info);
void BattleCharacterEntity__RequestSequence (BattleCharacterEntity_o* __this, int32_t sequenceID, const MethodInfo* method_info);
void BattleCharacterEntity__RequestAnimationState (BattleCharacterEntity_o* __this, int32_t state, float duration, float startTime, bool isLoop, const MethodInfo* method_info);
Dpr_Playables_BattleAnimationPlayer_o* BattleCharacterEntity__GetAnimationPlayer (BattleCharacterEntity_o* __this, const MethodInfo* method_info);
void BattleCharacterEntity__SetAnimationSpeed (BattleCharacterEntity_o* __this, float animationSpeed, const MethodInfo* method_info);
void BattleCharacterEntity__SetRenderActive (BattleCharacterEntity_o* __this, bool isActive, const MethodInfo* method_info);
void BattleCharacterEntity___ctor (BattleCharacterEntity_o* __this, const MethodInfo* method_info);
