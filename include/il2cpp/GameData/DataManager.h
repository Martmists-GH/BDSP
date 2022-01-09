#pragma once

#include "il2cpp.h"

System_Collections_IEnumerator_o* GameData_DataManager__StartUpLoad (const MethodInfo* method_info);
System_Collections_IEnumerator_o* GameData_DataManager__Load (System_String_o* assetBundleName, const MethodInfo* method_info);
bool GameData_DataManager__IsLoaded (const MethodInfo* method_info);
XLSXContent_PokemonInfo_SheetCatalog_o* GameData_DataManager__GetPokemonCatalog (int32_t monsNo, int32_t formNo, uint8_t sex, bool isRare, bool isEgg, const MethodInfo* method_info);
XLSXContent_PokemonInfo_SheetCatalog_o* GameData_DataManager__GetPokemonCatalog (int32_t uniqueId, const MethodInfo* method_info);
int32_t GameData_DataManager__GetUniqueID (Pml_PokePara_PokemonParam_o* pokemonParam, const MethodInfo* method_info);
int32_t GameData_DataManager__GetUniqueID (int32_t monsNo, int32_t formNo, uint8_t sex, uint8_t rareType, bool isEgg, const MethodInfo* method_info);
int32_t GameData_DataManager__GetUniqueID (int32_t monsNo, int32_t formNo, uint8_t sex, bool isRare, bool isEgg, const MethodInfo* method_info);
bool GameData_DataManager__IsEggByUniqueID (int32_t uniqueId, const MethodInfo* method_info);
XLSXContent_SealTable_SheetSealData_o* GameData_DataManager__GetSealData (int32_t sealId, const MethodInfo* method_info);
XLSXContent_SealTable_SheetEffectPositionOffset_o* GameData_DataManager__GetSealEffectPositionOffset (int32_t size, const MethodInfo* method_info);
XLSXContent_SealTable_SheetFixedPositionEffect_o* GameData_DataManager__GetFixedSealEffectData (int32_t sealID, const MethodInfo* method_info);
XLSXContent_CharacterDressData_SheetData_o* GameData_DataManager__GetCharacterDressData (int32_t dressId, const MethodInfo* method_info);
XLSXContent_ShopTable_SheetBoutiqueShop_o* GameData_DataManager__GetBoutiqueShopData (int32_t dressId, const MethodInfo* method_info);
XLSXContent_KinomiData_SheetData_o* GameData_DataManager__GetKinomiDataByItemNo (uint16_t itemNo, const MethodInfo* method_info);
float GameData_DataManager__GetFieldCommonParam (int32_t paramIndex, const MethodInfo* method_info);
System_Collections_IEnumerator_o* GameData_DataManager__Load_statueeffectdata (const MethodInfo* method_info);
void GameData_DataManager___ctor (GameData_DataManager_o* __this, const MethodInfo* method_info);
void GameData_DataManager___cctor (const MethodInfo* method_info);
