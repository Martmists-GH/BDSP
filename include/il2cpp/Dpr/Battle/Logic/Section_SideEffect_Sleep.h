#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_SideEffect_Sleep___ctor (Dpr_Battle_Logic_Section_SideEffect_Sleep_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_SideEffect_Sleep__Execute (Dpr_Battle_Logic_Section_SideEffect_Sleep_o* __this, Dpr_Battle_Logic_Section_SideEffect_Sleep_Result_o* result, Dpr_Battle_Logic_Section_SideEffect_Sleep_Description_o** description, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_SideEffect_Sleep__sleepSideEffects (Dpr_Battle_Logic_Section_SideEffect_Sleep_o* __this, int32_t side, System_Byte_array* sideEffectBitFlag, bool wakeUpFlag, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_SideEffect_Sleep__sleepSideEffect (Dpr_Battle_Logic_Section_SideEffect_Sleep_o* __this, int32_t side, int32_t effect, bool wakeUpFlag, const MethodInfo* method_info);
