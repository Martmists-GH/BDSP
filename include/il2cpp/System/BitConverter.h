#pragma once

#include "il2cpp.h"

bool System_BitConverter__AmILittleEndian (const MethodInfo* method_info);
System_Byte_array* System_BitConverter__GetBytes (int16_t value, const MethodInfo* method_info);
System_Byte_array* System_BitConverter__GetBytes (int32_t value, const MethodInfo* method_info);
System_Byte_array* System_BitConverter__GetBytes (int64_t value, const MethodInfo* method_info);
System_Byte_array* System_BitConverter__GetBytes (uint64_t value, const MethodInfo* method_info);
System_Byte_array* System_BitConverter__GetBytes (float value, const MethodInfo* method_info);
int16_t System_BitConverter__ToInt16 (System_Byte_array* value, int32_t startIndex, const MethodInfo* method_info);
int32_t System_BitConverter__ToInt32 (System_Byte_array* value, int32_t startIndex, const MethodInfo* method_info);
int64_t System_BitConverter__ToInt64 (System_Byte_array* value, int32_t startIndex, const MethodInfo* method_info);
uint16_t System_BitConverter__ToUInt16 (System_Byte_array* value, int32_t startIndex, const MethodInfo* method_info);
uint32_t System_BitConverter__ToUInt32 (System_Byte_array* value, int32_t startIndex, const MethodInfo* method_info);
uint64_t System_BitConverter__ToUInt64 (System_Byte_array* value, int32_t startIndex, const MethodInfo* method_info);
float System_BitConverter__ToSingle (System_Byte_array* value, int32_t startIndex, const MethodInfo* method_info);
double System_BitConverter__ToDouble (System_Byte_array* value, int32_t startIndex, const MethodInfo* method_info);
uint16_t System_BitConverter__GetHexValue (int32_t i, const MethodInfo* method_info);
System_String_o* System_BitConverter__ToString (System_Byte_array* value, int32_t startIndex, int32_t length, const MethodInfo* method_info);
System_String_o* System_BitConverter__ToString (System_Byte_array* value, const MethodInfo* method_info);
int64_t System_BitConverter__DoubleToInt64Bits (double value, const MethodInfo* method_info);
double System_BitConverter__Int64BitsToDouble (int64_t value, const MethodInfo* method_info);
void System_BitConverter___cctor (const MethodInfo* method_info);
