#pragma once

#include "il2cpp.h"

Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_Handler_Side__GetEventFactor (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t side, int32_t sideEffect, const MethodInfo* method_info);
Dpr_Battle_Logic_Handler_Side_HandlerGetFunc_o* Dpr_Battle_Logic_Handler_Side__getHandlerGetFunc (int32_t sideEffect, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__Add (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t side, int32_t sideEffect, Dpr_Battle_Logic_BTL_SICKCONT_o* contParam, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Handler_Side__Remove (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t side, int32_t sideEffect, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Handler_Side__Sleep (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t side, int32_t sideEffect, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Handler_Side__Weak (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t side, int32_t sideEffect, const MethodInfo* method_info);
bool Dpr_Battle_Logic_Handler_Side__IsExist (Dpr_Battle_Logic_EventSystem_o* pEventSystem, int32_t side, int32_t effect, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__GetSickCont (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, Dpr_Battle_Logic_BTL_SICKCONT_o* sickcont, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_Reflector (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_Reflector (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_Hikarinokabe (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_HikariNoKabe (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_AuroraVeil (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_AuroraVeil (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__common_wallEffect (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, int32_t dmgType, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_Sinpinomamori (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_SinpiNoMamori_CheckFail (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_SinpiNoMamori_FixFail (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_SiroiKiri (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_SiroiKiri_CheckFail (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_SiroiKiri_FixFail (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_Oikaze (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_Oikaze (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_Omajinai (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_Omajinai (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_StealthRock (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_StealthRock (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_Handler_Side__stealthRock_CalcDamage (Dpr_Battle_Logic_BTL_POKEPARAM_o* target, uint8_t damageType, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_StealthRock_Hagane (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_StealthRock_Hagane (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_WideGuard (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_WideGuard (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_FastGuard (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_FastGuard (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_FastGuard_Dmg (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_FastGuard_MsgAfterCritical (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_TatamiGaeshi (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_TatamiGaeshi (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_TatamiGaeshi_DmgG (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_Tatamigaeshi_MsgAfterCritical (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_TrickGuard (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_TrickGuard (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_Makibisi (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_Makibisi (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_Dokubisi (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_Dokubisi (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_NebaNebaNet (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_NebaNebaNet (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_SpotLight (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_SpotLight_TemptTarget (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_Rainbow (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_Rainbow (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_Rainbow_Shrink (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_Burning (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_Burning (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_Moor (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_Moor (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_GShock_Honoo (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_GShock_Honoo (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_Handler_Side__ADD_SIDE_GShock_Iwa (const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side__handler_side_GShock_Iwa (Dpr_Battle_Logic_EventFactor_EventHandlerArgs_o** args, uint8_t mySide, const MethodInfo* method_info);
void Dpr_Battle_Logic_Handler_Side___cctor (const MethodInfo* method_info);
