#pragma once

#include "il2cpp.h"

int32_t XMenuTopItem__get_itemType (XMenuTopItem_o* __this, const MethodInfo* method_info);
bool XMenuTopItem__get_isNew (XMenuTopItem_o* __this, const MethodInfo* method_info);
void XMenuTopItem__Setup (XMenuTopItem_o* __this, int32_t itemType, bool isActived, bool isNew, bool enabled, const MethodInfo* method_info);
void XMenuTopItem__OnDestroy (XMenuTopItem_o* __this, const MethodInfo* method_info);
void XMenuTopItem__PlayAnimation (XMenuTopItem_o* __this, int32_t shortNameHash, const MethodInfo* method_info);
void XMenuTopItem__EnableSwapMode (XMenuTopItem_o* __this, bool enabled, const MethodInfo* method_info);
void XMenuTopItem__Select (XMenuTopItem_o* __this, bool enabled, const MethodInfo* method_info);
void XMenuTopItem__ShowName (XMenuTopItem_o* __this, bool enabled, const MethodInfo* method_info);
void XMenuTopItem__Decide (XMenuTopItem_o* __this, UnityEngine_Events_UnityAction_XMenuTopItem__o* onDecided, const MethodInfo* method_info);
System_Collections_IEnumerator_o* XMenuTopItem__OpDecide (XMenuTopItem_o* __this, UnityEngine_Events_UnityAction_XMenuTopItem__o* onDecided, const MethodInfo* method_info);
void XMenuTopItem___ctor (XMenuTopItem_o* __this, const MethodInfo* method_info);
void XMenuTopItem___cctor (const MethodInfo* method_info);
bool XMenuTopItem___OpDecide_b__25_0 (XMenuTopItem_o* __this, const MethodInfo* method_info);
