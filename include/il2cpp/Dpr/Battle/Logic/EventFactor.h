#pragma once

#include "il2cpp.h"

void Dpr_Battle_Logic_EventFactor___ctor (Dpr_Battle_Logic_EventFactor_o* __this, uint16_t factorID, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__CopyFrom (Dpr_Battle_Logic_EventFactor_o* __this, Dpr_Battle_Logic_EventFactor_o** src, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__Clear (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_EventFactor__GetInstanceID (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__ClearWork (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
System_Int32_array* Dpr_Battle_Logic_EventFactor__GetWork (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
int32_t Dpr_Battle_Logic_EventFactor__GetWorkValue (Dpr_Battle_Logic_EventFactor_o* __this, uint8_t workIdx, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetWorkValue (Dpr_Battle_Logic_EventFactor_o* __this, uint8_t workIdx, int32_t value, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetTmpItemFlag (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetRecallEnable (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__ResetRecallEnable (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_EventFactor__GetPokeID (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__AttachSkipCheckHandler (Dpr_Battle_Logic_EventFactor_o* __this, Dpr_Battle_Logic_EventFactor_SkipCheckHandler_o* handler, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__DetachSkipCheckHandler (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_SkipCheckHandler_o* Dpr_Battle_Logic_EventFactor__GetSkipCheckHandler (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__ConvertForIsolate (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventFactor__IsIsolateMode (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventFactor__Sleep (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventFactor__Wake (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__Link (Dpr_Battle_Logic_EventFactor_o* __this, Dpr_Battle_Logic_EventFactor_o* next, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__Unlink (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventFactor__GetNext (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_o* Dpr_Battle_Logic_EventFactor__GetPrev (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_EventFactor__GetEventLevel (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetEventLevel (Dpr_Battle_Logic_EventFactor_o* __this, uint16_t value, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_EventFactor__GetFactorType (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_EventFactor__GetPriority (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_EventFactor__GetDependID (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_EventFactor__GetSubID (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventFactor__GetExistFlag (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventFactor__GetRemoveReserveFlag (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventFactor__GetCallingFlag (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventFactor__GetRecallEnableFlag (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventFactor__GetSleepFlag (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_EventFactor__GetTempItemFlag (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* Dpr_Battle_Logic_EventFactor__GetHandlerTable (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_EventFactor__GetHandlerNum (Dpr_Battle_Logic_EventFactor_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetFactorType (Dpr_Battle_Logic_EventFactor_o* __this, uint8_t type, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetPriority (Dpr_Battle_Logic_EventFactor_o* __this, uint32_t value, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetSubID (Dpr_Battle_Logic_EventFactor_o* __this, uint16_t value, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetDependID (Dpr_Battle_Logic_EventFactor_o* __this, uint8_t value, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetPokeID (Dpr_Battle_Logic_EventFactor_o* __this, uint8_t pokeID, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetExistFlag (Dpr_Battle_Logic_EventFactor_o* __this, bool value, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetRemoveReserverFlag (Dpr_Battle_Logic_EventFactor_o* __this, bool value, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetCallingFlag (Dpr_Battle_Logic_EventFactor_o* __this, bool value, const MethodInfo* method_info);
void Dpr_Battle_Logic_EventFactor__SetHandlerTable (Dpr_Battle_Logic_EventFactor_o* __this, Dpr_Battle_Logic_EventFactor_EventHandlerTable_array* handlerTable, uint8_t handlerNum, const MethodInfo* method_info);