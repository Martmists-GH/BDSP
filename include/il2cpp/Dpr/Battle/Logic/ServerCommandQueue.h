#pragma once

#include "il2cpp.h"

uint8_t Dpr_Battle_Logic_ServerCommandQueue__SC_ARGFMT_GetArgCount (uint8_t format, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue___ctor (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__Initialize (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__Copy (Dpr_Battle_Logic_ServerCommandQueue_o* __this, void* data, uint16_t dataLength, const MethodInfo* method_info);
void* Dpr_Battle_Logic_ServerCommandQueue__GetData (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_ServerCommandQueue__GetDataSize (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
bool Dpr_Battle_Logic_ServerCommandQueue__IsContainActCommand (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint16_t startPos, uint16_t endPos, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_ServerCommandQueue__Read (Dpr_Battle_Logic_ServerCommandQueue_o* __this, System_Int32_array* args, uint32_t argsBufferSize, uint32_t* cmdReadState, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_ServerCommandQueue__Read (Dpr_Battle_Logic_ServerCommandQueue_o* __this, System_Int32_array* args, uint32_t argsBufferSize, const MethodInfo* method_info);
bool Dpr_Battle_Logic_ServerCommandQueue__IsReadFinished (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__Put_Common (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint16_t cmd, System_Int32_array* LegacyParamArray, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__Put_MsgImpl (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint16_t cmd, System_Int32_array* inArgs, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__Put_WazaSyncChapter (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_ServerCommandQueue__ReservePutPos (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint16_t cmd, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__Put_ToReservedPos (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint16_t pos, uint16_t cmd, System_Int32_array* LegacyParamArray, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__Put_ToReservedPos_Msg (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint16_t pos, uint16_t cmd, System_Int32_array* inArgs, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__put_reserved_pos_core (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint16_t pos, uint16_t cmd, System_Int32_array* args, uint32_t argsNum, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_ServerCommandQueue__PushReadState (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__PopReadState (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint32_t state, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__ReplaceWithSkipCmd (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint32_t pos, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__Put_ExArgStart (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint8_t argsNum, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__Put_ExArgOnly (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint8_t arg, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_ServerCommandQueue__Read_ExArgOnly (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__Put_ExAssignClient_Start (Dpr_Battle_Logic_ServerCommandQueue_o* __this, int32_t clientID, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__Put_ExAssignClient_End (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__put_core (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint16_t cmd, uint8_t format, System_Int32_array* args, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__read_core (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint8_t format, System_Int32_array* args, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__scque_put1byte (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint8_t data, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__scque_put2byte (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint16_t data, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__scque_put3byte (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint32_t data, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__scque_put4byte (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint32_t data, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_ServerCommandQueue__scque_read1byte (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_ServerCommandQueue__scque_read2byte (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_ServerCommandQueue__scque_read3byte (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_ServerCommandQueue__scque_read4byte (Dpr_Battle_Logic_ServerCommandQueue_o* __this, const MethodInfo* method_info);
uint8_t Dpr_Battle_Logic_ServerCommandQueue__pack1_2args (Dpr_Battle_Logic_ServerCommandQueue_o* __this, int32_t arg1, int32_t arg2, int32_t bits1, int32_t bits2, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_ServerCommandQueue__pack_3args (Dpr_Battle_Logic_ServerCommandQueue_o* __this, int32_t bytes, int32_t arg1, int32_t arg2, int32_t arg3, int32_t bits1, int32_t bits2, int32_t bits3, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_ServerCommandQueue__pack_4args (Dpr_Battle_Logic_ServerCommandQueue_o* __this, int32_t bytes, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t bits1, int32_t bits2, int32_t bits3, int32_t bits4, const MethodInfo* method_info);
uint32_t Dpr_Battle_Logic_ServerCommandQueue__pack_5args (Dpr_Battle_Logic_ServerCommandQueue_o* __this, int32_t bytes, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t bits1, int32_t bits2, int32_t bits3, int32_t bits4, int32_t bits5, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__unpack1_2args (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint8_t pack, int32_t bits1, int32_t bits2, System_Int32_array* args, int32_t idx_start, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__unpack_3args (Dpr_Battle_Logic_ServerCommandQueue_o* __this, int32_t bytes, uint32_t pack, int32_t bits1, int32_t bits2, int32_t bits3, System_Int32_array* args, int32_t idx_start, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__unpack_4args (Dpr_Battle_Logic_ServerCommandQueue_o* __this, int32_t bytes, uint32_t pack, int32_t bits1, int32_t bits2, int32_t bits3, int32_t bits4, System_Int32_array* args, int32_t idx_start, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue__unpack_5args (Dpr_Battle_Logic_ServerCommandQueue_o* __this, int32_t bytes, uint32_t pack, int32_t bits1, int32_t bits2, int32_t bits3, int32_t bits4, int32_t bits5, System_Int32_array* args, int32_t idx_start, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_ServerCommandQueue___que_replace_ex_cmd (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint16_t reserveCmd, uint16_t replaceCmd, uint8_t exVarCount, const MethodInfo* method_info);
uint16_t Dpr_Battle_Logic_ServerCommandQueue__scque_readcmd_support_skip (Dpr_Battle_Logic_ServerCommandQueue_o* __this, uint32_t* cmdReadState, const MethodInfo* method_info);
void Dpr_Battle_Logic_ServerCommandQueue___cctor (const MethodInfo* method_info);