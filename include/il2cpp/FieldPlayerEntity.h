#pragma once

#include "il2cpp.h"

System_String_o* FieldPlayerEntity__get_entityType (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_rodRenderers (FieldPlayerEntity_o* __this, UnityEngine_Renderer_array* value, const MethodInfo* method_info);
UnityEngine_Renderer_o* FieldPlayerEntity__get_podRenderer (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_podRenderer (FieldPlayerEntity_o* __this, UnityEngine_Renderer_o* value, const MethodInfo* method_info);
void FieldPlayerEntity__set_meshGroup (FieldPlayerEntity_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method_info);
UnityEngine_GameObject_o* FieldPlayerEntity__get_bicycleObject (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_bicycleObject (FieldPlayerEntity_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method_info);
void FieldPlayerEntity__set_beadaruRenderer (FieldPlayerEntity_o* __this, UnityEngine_Renderer_o* value, const MethodInfo* method_info);
void FieldPlayerEntity__set_mukuhawkRenderer (FieldPlayerEntity_o* __this, UnityEngine_Renderer_o* value, const MethodInfo* method_info);
UnityEngine_Color_array* FieldPlayerEntity__get_bicycleColors (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_bicycleColors (FieldPlayerEntity_o* __this, UnityEngine_Color_array* value, const MethodInfo* method_info);
UnityEngine_Renderer_o* FieldPlayerEntity__get_bicycleRenderer (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_bicycleRenderer (FieldPlayerEntity_o* __this, UnityEngine_Renderer_o* value, const MethodInfo* method_info);
int32_t FieldPlayerEntity__get_bicycleMaterialIndex (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_bicycleMaterialIndex (FieldPlayerEntity_o* __this, int32_t value, const MethodInfo* method_info);
int32_t FieldPlayerEntity__get_bicycleColorIndex (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_bicycleColorIndex (FieldPlayerEntity_o* __this, int32_t value, const MethodInfo* method_info);
void FieldPlayerEntity__ChangeVariation (FieldPlayerEntity_o* __this, int32_t index, const MethodInfo* method_info);
int32_t FieldPlayerEntity__get_hatVariation (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_hatVariation (FieldPlayerEntity_o* __this, int32_t value, const MethodInfo* method_info);
int32_t FieldPlayerEntity__get_shoesVariation (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_shoesVariation (FieldPlayerEntity_o* __this, int32_t value, const MethodInfo* method_info);
int32_t FieldPlayerEntity__get_rodVariation (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_rodVariation (FieldPlayerEntity_o* __this, int32_t value, const MethodInfo* method_info);
bool FieldPlayerEntity__get_podVisibility (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_podVisibility (FieldPlayerEntity_o* __this, bool value, const MethodInfo* method_info);
bool FieldPlayerEntity__get_beadaruVisibility (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_beadaruVisibility (FieldPlayerEntity_o* __this, bool value, const MethodInfo* method_info);
bool FieldPlayerEntity__get_mukuhawkVisibility (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_mukuhawkVisibility (FieldPlayerEntity_o* __this, bool value, const MethodInfo* method_info);
void FieldPlayerEntity__set_DashFlag (FieldPlayerEntity_o* __this, bool value, const MethodInfo* method_info);
bool FieldPlayerEntity__get_DashFlag (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
System_Func_FieldPlayerEntity__bool__o* FieldPlayerEntity__get_LateUpdateEvent (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_LateUpdateEvent (FieldPlayerEntity_o* __this, System_Func_FieldPlayerEntity__bool__o* value, const MethodInfo* method_info);
void FieldPlayerEntity__set_MoveSpeed (FieldPlayerEntity_o* __this, float value, const MethodInfo* method_info);
float FieldPlayerEntity__get_MoveSpeed (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_FashionTableID (FieldPlayerEntity_o* __this, int32_t value, const MethodInfo* method_info);
int32_t FieldPlayerEntity__get_FashionTableID (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__Awake (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__OnEnable (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__OnFootSE (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__OnFootEffect (FieldPlayerEntity_o* __this, int32_t index, const MethodInfo* method_info);
void FieldPlayerEntity__OnUpdate (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldPlayerEntity__OnLateUpdate (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckMapCollision_AfterCharacterHit (FieldPlayerEntity_o* __this, UnityEngine_Vector3_o moveVelocity, UnityEngine_Vector3_o* afterMoveVector, UnityEngine_Vector3_o* hitNormal, const MethodInfo* method_info);
bool FieldPlayerEntity__IsOverlapObstacle (FieldPlayerEntity_o* __this, UnityEngine_Vector3_o moveVelocity, const MethodInfo* method_info);
bool FieldPlayerEntity__SwitchToNext (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__ProcessSequence (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldPlayerEntity__GetInputVectorIgnoreUpdateInputAngle (FieldPlayerEntity_o* __this, UnityEngine_Vector2_o* stickL, float* stickPowerSq, float deltatime, bool* analogstick, const MethodInfo* method_info);
void FieldPlayerEntity__GetInputVector (FieldPlayerEntity_o* __this, UnityEngine_Vector2_o* stickL, float* stickPowerSq, float deltatime, bool* analogstick, const MethodInfo* method_info);
bool FieldPlayerEntity__IsStickInput (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__GetCrossKeyVector (FieldPlayerEntity_o* __this, UnityEngine_Vector2_o* stickL, float* stickPowerSq, float deltatime, const MethodInfo* method_info);
void FieldPlayerEntity__StopCrossUpdate (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateCrossInputMove (FieldPlayerEntity_o* __this, UnityEngine_Vector2_o* stickL, float* stickPowerSq, float deltatime, const MethodInfo* method_info);
void FieldPlayerEntity__LateUpdateCrossInput (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__LimitedCrossInput (FieldPlayerEntity_o* __this, UnityEngine_Vector2_o* stick, const MethodInfo* method_info);
float FieldPlayerEntity__InputAtanAngle (FieldPlayerEntity_o* __this, UnityEngine_Vector2_o* stickL, const MethodInfo* method_info);
float FieldPlayerEntity__InputYawAngle (FieldPlayerEntity_o* __this, float angle, const MethodInfo* method_info);
float FieldPlayerEntity__UpdateInputAngle (FieldPlayerEntity_o* __this, UnityEngine_Vector2_o* stickL, const MethodInfo* method_info);
bool FieldPlayerEntity__IsInputStop (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateInputOperation (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
int32_t FieldPlayerEntity__CheckGridCollisionCore (FieldPlayerEntity_o* __this, UnityEngine_Vector2Int_o grid, const MethodInfo* method_info);
float FieldPlayerEntity__GetMoveSpeed (FieldPlayerEntity_o* __this, bool isDash, float deltatime, bool gear, bool colHit, bool isdebug, const MethodInfo* method_info);
bool FieldPlayerEntity__CanEntryAttribute (FieldPlayerEntity_o* __this, UnityEngine_Vector2Int_o grid, float height, const MethodInfo* method_info);
bool FieldPlayerEntity__CanEntryAttribute (UnityEngine_Vector2Int_o grid, float height, bool isRideBicyclelse, bool isSwim, const MethodInfo* method_info);
bool FieldPlayerEntity__CanEntryAttributeCommon (int32_t code, int32_t stop, const MethodInfo* method_info);
bool FieldPlayerEntity__CanEntryAttributeBycJump (int32_t code, int32_t stop, UnityEngine_Vector3_o forward, UnityEngine_Vector3_o* jumpvector, const MethodInfo* method_info);
bool FieldPlayerEntity__IsBicJumpObjectEntity (FieldPlayerEntity_o* __this, UnityEngine_Vector2Int_o* grid, float vectolx, const MethodInfo* method_info);
bool FieldPlayerEntity__CanEntryNomoseGymWaterGrid (FieldPlayerEntity_o* __this, UnityEngine_Vector2Int_o grid, float height, const MethodInfo* method_info);
void FieldPlayerEntity__OnEventEnter (FieldPlayerEntity_o* __this, float deltaTime, FieldEventEntity_o* eventEntity, const MethodInfo* method_info);
void FieldPlayerEntity__OnEventStay (FieldPlayerEntity_o* __this, float deltaTime, FieldEventEntity_o* eventEntity, const MethodInfo* method_info);
void FieldPlayerEntity__OnEventLeave (FieldPlayerEntity_o* __this, float deltaTime, FieldEventEntity_o* eventEntity, const MethodInfo* method_info);
void FieldPlayerEntity__OnGroundTrigger (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__SetNormalForm (FieldPlayerEntity_o* __this, System_Action_o* onfinish, const MethodInfo* method_info);
void FieldPlayerEntity__SettingAttributeFlags (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__HitSeRequest (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__HitSEReset (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__LaetPlayHitSE (FieldPlayerEntity_o* __this, float time, const MethodInfo* method_info);
bool FieldPlayerEntity__DashJudgment (FieldPlayerEntity_o* __this, double inputforce, const MethodInfo* method_info);
void FieldPlayerEntity__SetEventCorrectionMove (FieldPlayerEntity_o* __this, UnityEngine_Vector3_o position, float angle, const MethodInfo* method_info);
void FieldPlayerEntity__StartEventCorrectionMove (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__IsEventCorrectionMoveEnd (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__CorrectionMove (FieldPlayerEntity_o* __this, UnityEngine_Vector3_o position, float deltaTime, const MethodInfo* method_info);
bool FieldPlayerEntity__CorrectionRotate (FieldPlayerEntity_o* __this, float angle, const MethodInfo* method_info);
bool FieldPlayerEntity__IsIgnoreWalkCountZone (FieldPlayerEntity_o* __this, int32_t zoneId, const MethodInfo* method_info);
bool FieldPlayerEntity__IsIgnoreEggHatchCountZone (FieldPlayerEntity_o* __this, int32_t zoneId, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateWalkCount (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__NoWalkUpdateAttribute (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__IsEncount (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__ChangeForm (FieldPlayerEntity_o* __this, int32_t form, System_Action_o* onFinish, const MethodInfo* method_info);
void FieldPlayerEntity__ChangeAnime (FieldPlayerEntity_o* __this, float time, const MethodInfo* method_info);
void FieldPlayerEntity__JumpPlayerActionEvent (FieldPlayerEntity_o* __this, System_String_o* label, const MethodInfo* method_info);
void FieldPlayerEntity__KairikiPushObject (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldPlayerEntity__LimitHeight (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__WorkApplyVisibility (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__StopCrossInputAndBicycle (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateIdle (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
int32_t FieldPlayerEntity__GetNextGesture (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayIdle (FieldPlayerEntity_o* __this, float duration, const MethodInfo* method_info);
void FieldPlayerEntity__PlayIdle (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__GetIdleAnimationIndex (FieldPlayerEntity_o* __this, int32_t* index, float* duration, const MethodInfo* method_info);
bool FieldPlayerEntity__IsIdle (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__GetWalkAnimationIndex (FieldPlayerEntity_o* __this, int32_t* index, float* duration, const MethodInfo* method_info);
void FieldPlayerEntity__PlayWalk (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__IsWalk (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayRun (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__IsRun (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayWallWalk (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayNaminoriStart (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayNaminoriEnd (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayNaminoriLoop (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayJumpStart (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayJumpLoop (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayJumpEnd (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayHandOver (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlaySit (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlaySquat (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayGetPause (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayPoketchStart (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayPoketchLoop (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayPoketchEnd (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__IsPlayPoketchLoop (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlaySwampStart (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlaySwampLoop (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlaySwampEnd (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlaySpin (FieldPlayerEntity_o* __this, bool restart, const MethodInfo* method_info);
void FieldPlayerEntity__PlayWatering (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayWateringLoop (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayWateringEnd (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayFlyStart (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayFlyEnd (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayRockClimbUp (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayRockClimbDown (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__IsFishingStart (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayFishingStart (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayFishingLoop (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayFishingHit (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayFishingHitLoop (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayFishingEnd (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayFishingSuccess (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayFishingSuccessLoop (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__BicycleDecelerate (FieldPlayerEntity_o* __this, float deltatime, const MethodInfo* method_info);
void FieldPlayerEntity__SetRideBicycle (FieldPlayerEntity_o* __this, System_Action_o* onfinish, const MethodInfo* method_info);
bool FieldPlayerEntity__IsRideBicycle (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__ChangeBicycleGear (FieldPlayerEntity_o* __this, bool gear, const MethodInfo* method_info);
bool FieldPlayerEntity__GetBicycleGear (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__StopBicycleDecelerate (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__MaxBicycleDecelerate (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__SetIceFloorDirty (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckIceFloor (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldPlayerEntity__CalcIceMoveDirection (FieldPlayerEntity_o* __this, UnityEngine_Vector3_o inputVector, const MethodInfo* method_info);
void FieldPlayerEntity__StartIceFloor (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__EndIceFloor (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateIceFloor (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldPlayerEntity__CalcAdjustIceFloorMoveDirection (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__CheckColSnowBall (FieldPlayerEntity_o* __this, UnityEngine_Vector3_o direction, float speed, const MethodInfo* method_info);
void FieldPlayerEntity__CrashSnowBall (FieldPlayerEntity_o* __this, FieldObjectEntity_o* entity, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckColIceFloor (FieldPlayerEntity_o* __this, UnityEngine_Vector3_o direction, float speed, UnityEngine_Vector3_o* outVelocity, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckColNpcIceFloor (FieldPlayerEntity_o* __this, UnityEngine_Vector3_o direction, float speed, const MethodInfo* method_info);
float FieldPlayerEntity__UpdateIceSpeed (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldPlayerEntity__CheckIceSlope (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
UnityEngine_Vector2Int_o FieldPlayerEntity__CheckIceSlopeFloor (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__IsIceGrid (FieldPlayerEntity_o* __this, UnityEngine_Vector2Int_o grid, float height, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckMoveFloor (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
int32_t FieldPlayerEntity__CheckMoveFloorGrid (FieldPlayerEntity_o* __this, UnityEngine_Vector2Int_o grid, float height, const MethodInfo* method_info);
void FieldPlayerEntity__StartMoveFloor (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__EndMoveFloor (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateMoveFloor (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldPlayerEntity__GetMoveFloorDirection (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckColMoveFloor (FieldPlayerEntity_o* __this, UnityEngine_Vector3_o direction, float speed, UnityEngine_Vector3_o* outVelocity, const MethodInfo* method_info);
void FieldPlayerEntity__ChangeSwim (FieldPlayerEntity_o* __this, bool swim, const MethodInfo* method_info);
bool FieldPlayerEntity__IsSwim (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldPlayerEntity__CalcCheckFrontGridDirection (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckSwim (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
int32_t FieldPlayerEntity__CheckGridCollisionCheckSwimCore (FieldPlayerEntity_o* __this, UnityEngine_Vector2Int_o grid, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldPlayerEntity__CalcSwimTargetPosition (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
int32_t FieldPlayerEntity__CheckGridCollisionCalcSwimCore (FieldPlayerEntity_o* __this, UnityEngine_Vector2Int_o grid, float waterPositionY, const MethodInfo* method_info);
bool FieldPlayerEntity__UpdateSwim (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckEndSwim (FieldPlayerEntity_o* __this, UnityEngine_Vector2_o inputDir, const MethodInfo* method_info);
int32_t FieldPlayerEntity__CheckGridCollisionEndSwimCore (FieldPlayerEntity_o* __this, UnityEngine_Vector2Int_o grid, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldPlayerEntity__CalcSwimEndTargetPosition (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
int32_t FieldPlayerEntity__CheckGridCollisionCalcSwimEndCore (FieldPlayerEntity_o* __this, UnityEngine_Vector2Int_o grid, float landPositionY, const MethodInfo* method_info);
void FieldPlayerEntity__RequestStartSwimEvent (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__RequestEndSwimEvent (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__StartSwimEvent (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__EndSwimEvent (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__AppearSwimBiidaru (FieldPlayerEntity_o* __this, float ofs, float time, const MethodInfo* method_info);
void FieldPlayerEntity__DisappearSwimBiidaru (FieldPlayerEntity_o* __this, float ofs, float time, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateSwimEffect (FieldPlayerEntity_o* __this, float time, const MethodInfo* method_info);
void FieldPlayerEntity__PlaySwimEffect (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayNaminoriLoopSE (FieldPlayerEntity_o* __this, float time, const MethodInfo* method_info);
void FieldPlayerEntity__PlayWaterFallUpEffect (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayWaterFallDownEffect (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__PlayWaterFallEffectCommon (FieldPlayerEntity_o* __this, float yawAngle, const MethodInfo* method_info);
void FieldPlayerEntity__StopSwimEffect (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__IsBusySwimEffect (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateParts (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldPlayerEntity__LateUpdateParts (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
UnityEngine_Transform_o* FieldPlayerEntity__get_BiidaruTransform (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_BiidaruTransform (FieldPlayerEntity_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method_info);
void FieldPlayerEntity__ResetBiidaruOffset (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__MoveBiidaruOffset (FieldPlayerEntity_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, float time, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateBiidaru (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateBiidaruNode (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
Dpr_FieldFloatMove_o* FieldPlayerEntity__get_VisiblePodMove (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__set_VisiblePodMove (FieldPlayerEntity_o* __this, Dpr_FieldFloatMove_o* value, const MethodInfo* method_info);
void FieldPlayerEntity__VisiblePod (FieldPlayerEntity_o* __this, bool visible, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateVisiblePod (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
UnityEngine_Transform_o* FieldPlayerEntity__GetPodEffectAttachTransform (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckRockClimbing (FieldPlayerEntity_o* __this, FieldObjectEntity_o* eventObject, const MethodInfo* method_info);
void FieldPlayerEntity__CalcRockClimbingTargetPosition (FieldPlayerEntity_o* __this, FieldObjectEntity_o* eventObject, UnityEngine_Vector3_o* climbStart, UnityEngine_Vector3_o* climbEnd, UnityEngine_Vector3_o* standPos, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldPlayerEntity__CalcRockClimbingAnotherTalkPosition (FieldPlayerEntity_o* __this, FieldObjectEntity_o* eventObject, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldPlayerEntity__CalcRockClimbingDirection (FieldPlayerEntity_o* __this, FieldObjectEntity_o* eventObject, const MethodInfo* method_info);
void FieldPlayerEntity__PlayRockClimbEffect (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__StopRockClimbEffect (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckSwampDeep (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
void FieldPlayerEntity__StartSwampDeep (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__EndSwampDeep (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__UpdateSwampDeep (FieldPlayerEntity_o* __this, float deltaTime, const MethodInfo* method_info);
bool FieldPlayerEntity__IsSwampDeepGrid (FieldPlayerEntity_o* __this, UnityEngine_Vector2Int_o grid, float height, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckWaterfallDown (FieldPlayerEntity_o* __this, UnityEngine_Vector2_o inputDir, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldPlayerEntity__CalcWaterfallDownTargetPosition (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
bool FieldPlayerEntity__CheckWaterfallUp (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
UnityEngine_Vector3_o FieldPlayerEntity__CalcWaterfallUpTargetPosition (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__WaterfallUpEvent (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity__WaterfallDownEvent (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity___ctor (FieldPlayerEntity_o* __this, const MethodInfo* method_info);
void FieldPlayerEntity___cctor (const MethodInfo* method_info);
float FieldPlayerEntity___UpdateInputOperation_g__CalcMoveSpeed_125_0 (FieldPlayerEntity_o* __this, bool dashFlag, bool colHit, FieldPlayerEntity___c__DisplayClass125_0_o* , const MethodInfo* method_info);
void FieldPlayerEntity___PlaySwimEffect_b__304_0 (FieldPlayerEntity_o* __this, Effect_EffectInstance_o* instance, const MethodInfo* method_info);
void FieldPlayerEntity___PlayWaterFallEffectCommon_b__308_0 (FieldPlayerEntity_o* __this, Effect_EffectInstance_o* instance, const MethodInfo* method_info);
void FieldPlayerEntity___PlayRockClimbEffect_b__337_0 (FieldPlayerEntity_o* __this, Effect_EffectInstance_o* instance, const MethodInfo* method_info);
void FieldPlayerEntity___UpdateSwampDeep_b__350_0 (FieldPlayerEntity_o* __this, Effect_EffectInstance_o* eff, const MethodInfo* method_info);