#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_DamageDrain_Core___ctor (Dpr_Battle_Logic_Section_DamageDrain_Core_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_DamageDrain_Core__Execute (Dpr_Battle_Logic_Section_DamageDrain_Core_o* __this, Dpr_Battle_Logic_Section_DamageDrain_Core_Result_o* pResult, Dpr_Battle_Logic_Section_DamageDrain_Core_Description_o** description, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_Section_DamageDrain_Core__recalcDrainVolume (Dpr_Battle_Logic_Section_DamageDrain_Core_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_BTL_POKEPARAM_o* target, uint16_t drainHP, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_DamageDrain_Core__recoverHP (Dpr_Battle_Logic_Section_DamageDrain_Core_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, uint16_t drainHP, bool skipSpFailCheck, const MethodInfo* method_info);
