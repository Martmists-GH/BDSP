#pragma once

#include "il2cpp.h"

int32_t Dpr_SequenceEditor_SequenceCameraSystem__get_CameraState (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem__set_CameraState (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, int32_t value, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem___ctor (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, Dpr_SequenceEditor_ISequenceViewSystem_o* viewSystem, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem__OnUpdate (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem__OnLateUpdate (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, float deltaTime, const MethodInfo* method_info);
Dpr_SequenceEditor_SequenceCameraObject_o* Dpr_SequenceEditor_SequenceCameraSystem__GetBattleCamera (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, int32_t type, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem__PlayCameraAnimation (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, Dpr_Battle_View_Playables_CameraFilePlayable_o* pAnimFile, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem__StopCameraAnimation (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, int32_t state, bool isKeep, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem__DestroyCameraAnimation (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem__SetCameraAnimationSpeed (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, float speed, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem__SetCameraAnimationScale (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, UnityEngine_Vector3_o scale, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem__SetCameraAnimationRotateY_Deg (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, float rot, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem__SetCameraAnimationCheckGround (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, bool value, const MethodInfo* method_info);
bool Dpr_SequenceEditor_SequenceCameraSystem__GetCameraAnimationCheckGround (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem__SetCameraPosOverCheck (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, bool value, const MethodInfo* method_info);
bool Dpr_SequenceEditor_SequenceCameraSystem__GetCameraPosOverCheck (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, const MethodInfo* method_info);
void Dpr_SequenceEditor_SequenceCameraSystem___PlayCameraAnimation_b__59_0 (Dpr_SequenceEditor_SequenceCameraSystem_o* __this, const MethodInfo* method_info);
