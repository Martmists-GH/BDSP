#pragma once

#include "il2cpp.h"

void DG_Tweening_Plugins_Vector2Plugin__Reset (DG_Tweening_Plugins_Vector2Plugin_o* __this, DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o* t, const MethodInfo* method_info);
void DG_Tweening_Plugins_Vector2Plugin__SetFrom (DG_Tweening_Plugins_Vector2Plugin_o* __this, DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o* t, bool isRelative, const MethodInfo* method_info);
void DG_Tweening_Plugins_Vector2Plugin__SetFrom (DG_Tweening_Plugins_Vector2Plugin_o* __this, DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o* t, UnityEngine_Vector2_o fromValue, bool setImmediately, const MethodInfo* method_info);
UnityEngine_Vector2_o DG_Tweening_Plugins_Vector2Plugin__ConvertToStartValue (DG_Tweening_Plugins_Vector2Plugin_o* __this, DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o* t, UnityEngine_Vector2_o value, const MethodInfo* method_info);
void DG_Tweening_Plugins_Vector2Plugin__SetRelativeEndValue (DG_Tweening_Plugins_Vector2Plugin_o* __this, DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o* t, const MethodInfo* method_info);
void DG_Tweening_Plugins_Vector2Plugin__SetChangeValue (DG_Tweening_Plugins_Vector2Plugin_o* __this, DG_Tweening_Core_TweenerCore_Vector2__Vector2__VectorOptions__o* t, const MethodInfo* method_info);
float DG_Tweening_Plugins_Vector2Plugin__GetSpeedBasedDuration (DG_Tweening_Plugins_Vector2Plugin_o* __this, DG_Tweening_Plugins_Options_VectorOptions_o options, float unitsXSecond, UnityEngine_Vector2_o changeValue, const MethodInfo* method_info);
void DG_Tweening_Plugins_Vector2Plugin__EvaluateAndApply (DG_Tweening_Plugins_Vector2Plugin_o* __this, DG_Tweening_Plugins_Options_VectorOptions_o options, DG_Tweening_Tween_o* t, bool isRelative, DG_Tweening_Core_DOGetter_Vector2__o* getter, DG_Tweening_Core_DOSetter_Vector2__o* setter, float elapsed, UnityEngine_Vector2_o startValue, UnityEngine_Vector2_o changeValue, float duration, bool usingInversePosition, int32_t updateNotice, const MethodInfo* method_info);
void DG_Tweening_Plugins_Vector2Plugin___ctor (DG_Tweening_Plugins_Vector2Plugin_o* __this, const MethodInfo* method_info);
