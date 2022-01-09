#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_Section_FightDamage_PluralCount___ctor (Dpr_Battle_Logic_Section_FightDamage_PluralCount_o* __this, Dpr_Battle_Logic_Section_CommonParam_o** commonParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_PluralCount__Execute (Dpr_Battle_Logic_Section_FightDamage_PluralCount_o* __this, Dpr_Battle_Logic_Section_FightDamage_PluralCount_Result_o* pResult, Dpr_Battle_Logic_Section_FightDamage_PluralCount_Description_o** description, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_PluralCount__calcDamage (Dpr_Battle_Logic_Section_FightDamage_PluralCount_o* __this, Dpr_Battle_Logic_DamageCalcResult_o* dmgRec, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_PokeSet_o* targets, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_DmgAffRec_o* affRec, Dpr_Battle_Logic_HITCHECK_PARAM_o* hitCheckParam, uint32_t hitCountIdx, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_Section_FightDamage_PluralCount__getDamageRatio (Dpr_Battle_Logic_Section_FightDamage_PluralCount_o* __this, Dpr_Battle_Logic_HITCHECK_PARAM_o** hitCheckParam, uint32_t hitCountIndex, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_Section_FightDamage_PluralCount__damageSide (Dpr_Battle_Logic_Section_FightDamage_PluralCount_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_ActionDesc_o* actionDesc, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_DamageCalcResult_o* damageRecord, Dpr_Battle_Logic_HITCHECK_PARAM_o* hitCheckParam, Dpr_Battle_Logic_PokeSet_o* pDamagedPokeSet, const MethodInfo* method_info);
Dpr_Battle_Logic_SectionUtil_GWallUpdateResult_o* Dpr_Battle_Logic_Section_FightDamage_PluralCount__updateGWallGauge (Dpr_Battle_Logic_Section_FightDamage_PluralCount_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pAttacker, Dpr_Battle_Logic_PokeSet_o* pDamagedPokeSet, Dpr_Battle_Logic_WazaParam_o* wazaParam, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_PluralCount__checkItemReaction (Dpr_Battle_Logic_Section_FightDamage_PluralCount_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* poke, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_FightDamage_PluralCount__canContinueNextHit (Dpr_Battle_Logic_Section_FightDamage_PluralCount_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* attacker, Dpr_Battle_Logic_PokeSet_o* targets, Dpr_Battle_Logic_WazaParam_o* wazaParam, Dpr_Battle_Logic_HITCHECK_PARAM_o* hitCheckParam, uint32_t attackerPrevSick, uint32_t hitCountIdx, const MethodInfo* method_info);
void Dpr_Battle_Logic_Section_FightDamage_PluralCount__checkBattleTalk (Dpr_Battle_Logic_Section_FightDamage_PluralCount_o* __this, uint8_t pokeID, const MethodInfo* method_info);
Dpr_Battle_Logic_BTL_POKEPARAM_o* Dpr_Battle_Logic_Section_FightDamage_PluralCount__getTarget (Dpr_Battle_Logic_Section_FightDamage_PluralCount_o* __this, Dpr_Battle_Logic_PokeSet_o* pTargets, uint32_t hitCountIdx, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Section_FightDamage_PluralCount__isTargetEnable (Dpr_Battle_Logic_Section_FightDamage_PluralCount_o* __this, Dpr_Battle_Logic_BTL_POKEPARAM_o* pPoke, const MethodInfo* method_info);