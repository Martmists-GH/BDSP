#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_ClientPublicInformation___ctor (Dpr_Battle_Logic_ClientPublicInformation_o* __this, Dpr_Battle_Logic_POKECON_o* pokecon, const MethodInfo* method_info);
void Dpr_Battle_Logic_ClientPublicInformation__InitPartyInformation (Dpr_Battle_Logic_ClientPublicInformation_o* __this, Dpr_Battle_Logic_ClientPublicInformation_Party_o* party, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_ClientPublicInformation__GetPokemonID (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t memberIndex, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_ClientPublicInformation__GetPokemonMonsterNo (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t memberIndex, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_ClientPublicInformation__GetPokemonFormNo (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t memberIndex, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_ClientPublicInformation__GetPokemonSex (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t memberIndex, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_ClientPublicInformation__GetPokemonLevel (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t memberIndex, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_ClientPublicInformation__GetPokemonSick (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t memberIndex, const MethodInfo* method_info);
bool Dpr_Battle_Logic_ClientPublicInformation__HavePokemonItem (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t memberIndex, const MethodInfo* method_info);
bool Dpr_Battle_Logic_ClientPublicInformation__IsPokemonAppearedOnBattleField (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t memberIndex, const MethodInfo* method_info);
Dpr_Battle_Logic_ClientPublicInformation_Pokemon_o* Dpr_Battle_Logic_ClientPublicInformation__GetPublishedPokemonByMemberIndex (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t memberIndex, const MethodInfo* method_info);
Dpr_Battle_Logic_ClientPublicInformation_Pokemon_o* Dpr_Battle_Logic_ClientPublicInformation__GetPublishedPokemonByMemberIndexConst (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t memberIndex, const MethodInfo* method_info);
void Dpr_Battle_Logic_ClientPublicInformation__PublishPokemon (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t memberIndex, uint8_t battlePokeId, int32_t monsno, uint16_t formno, uint8_t sex, uint8_t level, bool haveItem, const MethodInfo* method_info);
void Dpr_Battle_Logic_ClientPublicInformation__SetPokemonAppearedOnBattleField (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t battlePokeId, const MethodInfo* method_info);
void Dpr_Battle_Logic_ClientPublicInformation__SetPokemonHaveItem (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t battlePokeId, bool haveItem, const MethodInfo* method_info);
void Dpr_Battle_Logic_ClientPublicInformation__SetPokemonFormNo (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t battlePokeId, uint16_t formno, const MethodInfo* method_info);
Dpr_Battle_Logic_ClientPublicInformation_Pokemon_o* Dpr_Battle_Logic_ClientPublicInformation__GetPublishedPokemonByBattlePokeId (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t battlePokeId, const MethodInfo* method_info);
Dpr_Battle_Logic_ClientPublicInformation_Pokemon_o* Dpr_Battle_Logic_ClientPublicInformation__GetPublishedPokemonByBattlePokeIdConst (Dpr_Battle_Logic_ClientPublicInformation_o* __this, uint8_t battlePokeId, const MethodInfo* method_info);
