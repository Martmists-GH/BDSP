#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_AiPokeChangeJudge___ctor (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, Dpr_Battle_Logic_AiScript_o* aiScript, Dpr_Battle_Logic_MainModule_o* mainModule, Dpr_Battle_Logic_BattleEnv_o* pBattleEnv, Dpr_Battle_Logic_BattleSimulator_o* pBattleSimulator, uint64_t randSeed, uint32_t scriptBit, uint8_t myClientID, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiPokeChangeJudge__Dispose (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiPokeChangeJudge__StartJudge (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* targetFrontPoke, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiPokeChangeJudge__UpdateJudge (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiPokeChangeJudge__InitJudgePokeData (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiPokeChangeJudge__StartScript (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_AiPokeChangeJudge__GetCurrentJudgePokeParam (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiPokeChangeJudge__RegisterScriptResult (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_AiPokeChangeJudge__SetupJudgeResult (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_AiPokeChangeJudge__GetBestScoredJudgePokeIndex (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_AiPokeChangeJudge__IsJudgeFinished (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_AiPokeChangeJudge_JudgeResult_o* Dpr_Battle_Logic_AiPokeChangeJudge__GetJudgeResult (Dpr_Battle_Logic_AiPokeChangeJudge_o* __this, const MethodInfo* method_info);
