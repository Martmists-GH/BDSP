#pragma once

#include "il2cpp.h"

void UnityEngine_UI_CanvasUpdateRegistry___ctor (UnityEngine_UI_CanvasUpdateRegistry_o* __this, const MethodInfo* method_info);
UnityEngine_UI_CanvasUpdateRegistry_o* UnityEngine_UI_CanvasUpdateRegistry__get_instance (const MethodInfo* method_info);
bool UnityEngine_UI_CanvasUpdateRegistry__ObjectValidForUpdate (UnityEngine_UI_CanvasUpdateRegistry_o* __this, UnityEngine_UI_ICanvasElement_o* element, const MethodInfo* method_info);
void UnityEngine_UI_CanvasUpdateRegistry__CleanInvalidItems (UnityEngine_UI_CanvasUpdateRegistry_o* __this, const MethodInfo* method_info);
void UnityEngine_UI_CanvasUpdateRegistry__PerformUpdate (UnityEngine_UI_CanvasUpdateRegistry_o* __this, const MethodInfo* method_info);
int32_t UnityEngine_UI_CanvasUpdateRegistry__ParentCount (UnityEngine_Transform_o* child, const MethodInfo* method_info);
int32_t UnityEngine_UI_CanvasUpdateRegistry__SortLayoutList (UnityEngine_UI_ICanvasElement_o* x, UnityEngine_UI_ICanvasElement_o* y, const MethodInfo* method_info);
void UnityEngine_UI_CanvasUpdateRegistry__RegisterCanvasElementForLayoutRebuild (UnityEngine_UI_ICanvasElement_o* element, const MethodInfo* method_info);
bool UnityEngine_UI_CanvasUpdateRegistry__TryRegisterCanvasElementForLayoutRebuild (UnityEngine_UI_ICanvasElement_o* element, const MethodInfo* method_info);
bool UnityEngine_UI_CanvasUpdateRegistry__InternalRegisterCanvasElementForLayoutRebuild (UnityEngine_UI_CanvasUpdateRegistry_o* __this, UnityEngine_UI_ICanvasElement_o* element, const MethodInfo* method_info);
void UnityEngine_UI_CanvasUpdateRegistry__RegisterCanvasElementForGraphicRebuild (UnityEngine_UI_ICanvasElement_o* element, const MethodInfo* method_info);
bool UnityEngine_UI_CanvasUpdateRegistry__TryRegisterCanvasElementForGraphicRebuild (UnityEngine_UI_ICanvasElement_o* element, const MethodInfo* method_info);
bool UnityEngine_UI_CanvasUpdateRegistry__InternalRegisterCanvasElementForGraphicRebuild (UnityEngine_UI_CanvasUpdateRegistry_o* __this, UnityEngine_UI_ICanvasElement_o* element, const MethodInfo* method_info);
void UnityEngine_UI_CanvasUpdateRegistry__UnRegisterCanvasElementForRebuild (UnityEngine_UI_ICanvasElement_o* element, const MethodInfo* method_info);
void UnityEngine_UI_CanvasUpdateRegistry__InternalUnRegisterCanvasElementForLayoutRebuild (UnityEngine_UI_CanvasUpdateRegistry_o* __this, UnityEngine_UI_ICanvasElement_o* element, const MethodInfo* method_info);
void UnityEngine_UI_CanvasUpdateRegistry__InternalUnRegisterCanvasElementForGraphicRebuild (UnityEngine_UI_CanvasUpdateRegistry_o* __this, UnityEngine_UI_ICanvasElement_o* element, const MethodInfo* method_info);
bool UnityEngine_UI_CanvasUpdateRegistry__IsRebuildingLayout (const MethodInfo* method_info);
bool UnityEngine_UI_CanvasUpdateRegistry__IsRebuildingGraphics (const MethodInfo* method_info);
void UnityEngine_UI_CanvasUpdateRegistry___cctor (const MethodInfo* method_info);