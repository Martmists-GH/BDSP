#pragma once

#include "il2cpp.h"

UnityEngine_UIElements_IFocusRing_o* UnityEngine_UIElements_FocusController__get_focusRing (UnityEngine_UIElements_FocusController_o* __this, const MethodInfo* method_info);
UnityEngine_UIElements_Focusable_o* UnityEngine_UIElements_FocusController__GetLeafFocusedElement (UnityEngine_UIElements_FocusController_o* __this, const MethodInfo* method_info);
void UnityEngine_UIElements_FocusController__DoFocusChange (UnityEngine_UIElements_FocusController_o* __this, UnityEngine_UIElements_Focusable_o* f, const MethodInfo* method_info);
void UnityEngine_UIElements_FocusController__AboutToReleaseFocus (UnityEngine_UIElements_FocusController_o* __this, UnityEngine_UIElements_Focusable_o* focusable, UnityEngine_UIElements_Focusable_o* willGiveFocusTo, UnityEngine_UIElements_FocusChangeDirection_o* direction, const MethodInfo* method_info);
void UnityEngine_UIElements_FocusController__ReleaseFocus (UnityEngine_UIElements_FocusController_o* __this, UnityEngine_UIElements_Focusable_o* focusable, UnityEngine_UIElements_Focusable_o* willGiveFocusTo, UnityEngine_UIElements_FocusChangeDirection_o* direction, const MethodInfo* method_info);
void UnityEngine_UIElements_FocusController__AboutToGrabFocus (UnityEngine_UIElements_FocusController_o* __this, UnityEngine_UIElements_Focusable_o* focusable, UnityEngine_UIElements_Focusable_o* willTakeFocusFrom, UnityEngine_UIElements_FocusChangeDirection_o* direction, const MethodInfo* method_info);
void UnityEngine_UIElements_FocusController__GrabFocus (UnityEngine_UIElements_FocusController_o* __this, UnityEngine_UIElements_Focusable_o* focusable, UnityEngine_UIElements_Focusable_o* willTakeFocusFrom, UnityEngine_UIElements_FocusChangeDirection_o* direction, const MethodInfo* method_info);
void UnityEngine_UIElements_FocusController__SwitchFocus (UnityEngine_UIElements_FocusController_o* __this, UnityEngine_UIElements_Focusable_o* newFocusedElement, UnityEngine_UIElements_FocusChangeDirection_o* direction, const MethodInfo* method_info);
UnityEngine_UIElements_Focusable_o* UnityEngine_UIElements_FocusController__SwitchFocusOnEvent (UnityEngine_UIElements_FocusController_o* __this, UnityEngine_UIElements_EventBase_o* e, const MethodInfo* method_info);
int32_t UnityEngine_UIElements_FocusController__get_imguiKeyboardControl (UnityEngine_UIElements_FocusController_o* __this, const MethodInfo* method_info);
void UnityEngine_UIElements_FocusController__set_imguiKeyboardControl (UnityEngine_UIElements_FocusController_o* __this, int32_t value, const MethodInfo* method_info);
void UnityEngine_UIElements_FocusController__SyncIMGUIFocus (UnityEngine_UIElements_FocusController_o* __this, int32_t imguiKeyboardControlID, UnityEngine_UIElements_Focusable_o* imguiContainerHavingKeyboardControl, bool forceSwitch, const MethodInfo* method_info);
