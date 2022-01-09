#pragma once

#include "il2cpp.h"

float Dpr_Field_Walking_WalkingCharacterModel__get_bodySize (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__set_bodySize (Dpr_Field_Walking_WalkingCharacterModel_o* __this, float value, const MethodInfo* method_info);
int32_t Dpr_Field_Walking_WalkingCharacterModel__get_CollidedCount (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__set_CollidedCount (Dpr_Field_Walking_WalkingCharacterModel_o* __this, int32_t value, const MethodInfo* method_info);
bool Dpr_Field_Walking_WalkingCharacterModel__get_isStopUpdate (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__set_isStopUpdate (Dpr_Field_Walking_WalkingCharacterModel_o* __this, bool value, const MethodInfo* method_info);
System_Type_o* Dpr_Field_Walking_WalkingCharacterModel__get_nowState (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
Dpr_Field_Walking_AI_o* Dpr_Field_Walking_WalkingCharacterModel__get_AI (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__add_OnChangeState (Dpr_Field_Walking_WalkingCharacterModel_o* __this, System_Action_o* value, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__remove_OnChangeState (Dpr_Field_Walking_WalkingCharacterModel_o* __this, System_Action_o* value, const MethodInfo* method_info);
FieldObjectEntity_o* Dpr_Field_Walking_WalkingCharacterModel__get_entity (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
UnityEngine_Transform_o* Dpr_Field_Walking_WalkingCharacterModel__get_transform (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
bool Dpr_Field_Walking_WalkingCharacterModel__get_isDestroyed (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__set_isDestroyed (Dpr_Field_Walking_WalkingCharacterModel_o* __this, bool value, const MethodInfo* method_info);
bool Dpr_Field_Walking_WalkingCharacterModel__get_isIgnoreJump (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
bool Dpr_Field_Walking_WalkingCharacterModel__CheckState_PokeWalkingState_ (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
bool Dpr_Field_Walking_WalkingCharacterModel__CheckState_ReturnState_ (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
bool Dpr_Field_Walking_WalkingCharacterModel__CheckState_SanpoPairState_ (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
bool Dpr_Field_Walking_WalkingCharacterModel__CheckState_SanpoState_ (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
bool Dpr_Field_Walking_WalkingCharacterModel__CheckState_object_ (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__Update (Dpr_Field_Walking_WalkingCharacterModel_o* __this, Dpr_Field_Walking_WalkingCharacterModel_o* Target, float baseOffsetScale, float baseSpeed, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel___ctor (Dpr_Field_Walking_WalkingCharacterModel_o* __this, Dpr_Field_Walking_WalkData_o* walkData, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__SetController (Dpr_Field_Walking_WalkingCharacterModel_o* __this, Dpr_Field_Walking_WalkingCharacterController_o* controller, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__SetPokemonParam (Dpr_Field_Walking_WalkingCharacterModel_o* __this, Pml_PokePara_PokemonParam_o* pokePara, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__Destroy (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__GetBodySize (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
System_Collections_Generic_List_Vector3__o* Dpr_Field_Walking_WalkingCharacterModel__GetRoute (Dpr_Field_Walking_WalkingCharacterModel_o* __this, UnityEngine_Vector3_o goalPos, int32_t SearchDistance, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__CreateRoute (Dpr_Field_Walking_WalkingCharacterModel_o* __this, UnityEngine_Vector3_o goalPos, int32_t SearchDistance, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_Field_Walking_WalkingCharacterModel__WaitforAnimationFinish (Dpr_Field_Walking_WalkingCharacterModel_o* __this, Dpr_Field_Walking_WalkingCharacterModel_CancelCheck_o* cancelCheck, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__Warp (Dpr_Field_Walking_WalkingCharacterModel_o* __this, UnityEngine_Vector3_o pos, bool immidiate, const MethodInfo* method_info);
DG_Tweening_Tweener_o* Dpr_Field_Walking_WalkingCharacterModel__Enter (Dpr_Field_Walking_WalkingCharacterModel_o* __this, UnityEngine_Vector3_o pos, bool dontSE, const MethodInfo* method_info);
DG_Tweening_Tweener_o* Dpr_Field_Walking_WalkingCharacterModel__Enter (Dpr_Field_Walking_WalkingCharacterModel_o* __this, bool dontSE, const MethodInfo* method_info);
DG_Tweening_Tween_o* Dpr_Field_Walking_WalkingCharacterModel__Exit (Dpr_Field_Walking_WalkingCharacterModel_o* __this, bool dontSE, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel__CreateWarpEffect (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
UnityEngine_Transform_o* Dpr_Field_Walking_WalkingCharacterModel__CreateEffectPosTransform (Dpr_Field_Walking_WalkingCharacterModel_o* __this, UnityEngine_Vector3_o pos, float duration, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel___Enter_b__56_0 (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel___Enter_b__56_1 (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCharacterModel___Exit_b__57_0 (Dpr_Field_Walking_WalkingCharacterModel_o* __this, const MethodInfo* method_info);