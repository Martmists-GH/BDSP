#pragma once

#include "il2cpp.h"

bool UgMiniMapComponent__get_isOverAllMode (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent__set_isOverAllMode (UgMiniMapComponent_o* __this, bool value, const MethodInfo* method_info);
bool UgMiniMapComponent__get_isLargeMode (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent__set_isLargeMode (UgMiniMapComponent_o* __this, bool value, const MethodInfo* method_info);
void UgMiniMapComponent__Awake (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent__Start (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent__OnDestroy (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent__Init (const MethodInfo* method_info);
void UgMiniMapComponent__Initialize (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent__SetVisible (UgMiniMapComponent_o* __this, bool isVisible, const MethodInfo* method_info);
void UgMiniMapComponent__UpdateGoneInfo (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent___update (UgMiniMapComponent_o* __this, float time, const MethodInfo* method_info);
void UgMiniMapComponent__OnChengeOtherPlayerZone (UgMiniMapComponent_o* __this, int32_t index, int32_t zoneID, const MethodInfo* method_info);
void UgMiniMapComponent__UpdateOtherPlayersPosition (UgMiniMapComponent_o* __this, bool isForceUpdate, const MethodInfo* method_info);
void UgMiniMapComponent__ToOverAllMap (UgMiniMapComponent_o* __this, Dpr_UnderGround_UgFieldManager_DigData_o* data, const MethodInfo* method_info);
void UgMiniMapComponent__ToAroundMap (UgMiniMapComponent_o* __this, Dpr_UnderGround_UgFieldManager_DigData_o* data, const MethodInfo* method_info);
void UgMiniMapComponent__ToGrayMapGroup (UgMiniMapComponent_o* __this, int32_t mapGroupID, const MethodInfo* method_info);
void UgMiniMapComponent__ToWhiteMapGroup (UgMiniMapComponent_o* __this, int32_t mapGroupID, const MethodInfo* method_info);
bool UgMiniMapComponent__GetMapGroupGoneFlag (UgMiniMapComponent_o* __this, int32_t mapGroupID, const MethodInfo* method_info);
void UgMiniMapComponent__ToLarger (UgMiniMapComponent_o* __this, Dpr_UnderGround_UgFieldManager_DigData_o* data, const MethodInfo* method_info);
void UgMiniMapComponent__ToSmaller (UgMiniMapComponent_o* __this, Dpr_UnderGround_UgFieldManager_DigData_o* data, const MethodInfo* method_info);
void UgMiniMapComponent__UpdateDigPoint (UgMiniMapComponent_o* __this, Dpr_UnderGround_UgFieldManager_DigData_o* data, const MethodInfo* method_info);
void UgMiniMapComponent__ChangeVisibleDigPoint (UgMiniMapComponent_o* __this, Dpr_UnderGround_UgFieldManager_DigData_o* data, bool isVisible, const MethodInfo* method_info);
void UgMiniMapComponent__UpdateSecretBase (UgMiniMapComponent_o* __this, System_Collections_Generic_List_UgFieldManager_SecretBaseModel__o* SecretBases, const MethodInfo* method_info);
void UgMiniMapComponent__UpdateLandMarkIcons (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent__SavePlayReport (UgMiniMapComponent_o* __this, uint32_t landMarkID, const MethodInfo* method_info);
void UgMiniMapComponent__UpdatePlayerPositionSettings (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent__OpenLandMark (UgMiniMapComponent_o* __this, UnityEngine_UI_Image_o* image, const MethodInfo* method_info);
System_Collections_IEnumerator_o* UgMiniMapComponent__WaitFade (UgMiniMapComponent_o* __this, System_Action_o* OnComplete, const MethodInfo* method_info);
void UgMiniMapComponent__UpdateZoneID_Offset (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
UnityEngine_Vector2_o UgMiniMapComponent__GetMapOffset (UgMiniMapComponent_o* __this, int32_t zoneID, const MethodInfo* method_info);
void UgMiniMapComponent__InitAreaGrayScale (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
bool UgMiniMapComponent__CheckLandMarkFlag (UgMiniMapComponent_o* __this, System_String_o* MapName, const MethodInfo* method_info);
void UgMiniMapComponent__UpdateLightStoneCount (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent__UpdateBonusState (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent___ctor (UgMiniMapComponent_o* __this, const MethodInfo* method_info);
void UgMiniMapComponent___cctor (const MethodInfo* method_info);
void UgMiniMapComponent___UpdateDigPoint_b__60_0 (UgMiniMapComponent_o* __this, Dpr_UnderGround_UgFieldManager_DigPointModel_o* x, const MethodInfo* method_info);
