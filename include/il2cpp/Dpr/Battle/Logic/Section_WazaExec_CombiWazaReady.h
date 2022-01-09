#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady___ctor (Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady__Execute (Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady_o* __this, Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady_Result_o* pResult, Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady_Description_o** description, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady__isCombiWaza (Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady_o* __this, int32_t waza, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady__getCombiPossibleActions (Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady_o* __this, Dpr_Battle_Logic_PokeAction_array* ppActionBuffer, uint32_t* pActionNum, uint8_t attackerID, int32_t waza, uint8_t targetPos, const MethodInfo* method_info);
Dpr_Battle_Logic_PokeAction_o* Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady__getCombiPartnerAction (Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady_o* __this, Dpr_Battle_Logic_PokeAction_array* pActions, uint32_t actionNum, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_WazaExec_CombiWazaReady___cctor (const MethodInfo* method_info);