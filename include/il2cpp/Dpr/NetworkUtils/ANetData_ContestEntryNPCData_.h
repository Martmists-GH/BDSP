#pragma once

#include "il2cpp.h"

uint8_t Dpr_NetworkUtils_ANetData_ContestEntryNPCData___get_GetDataID (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ContestEntryNPCData____ctor (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ContestEntryNPCData___CreateDataBuffer (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ContestEntryNPCData____Debug_ChangeFromStarionIndex (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, int32_t idx, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_ContestEntryNPCData___get_FromStationIndex (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_ContestEntryNPCData___SendReliableData (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_ContestEntryNPCData___SendReliableDataToAll (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_ContestEntryNPCData___SendUnReliableData (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, int32_t sendStationIndex, int32_t transportType, const MethodInfo* method_info);
int32_t Dpr_NetworkUtils_ANetData_ContestEntryNPCData___SendUnReliableDataToAll (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, int32_t transportType, const MethodInfo* method_info);
INL1_PacketWriterRe_o* Dpr_NetworkUtils_ANetData_ContestEntryNPCData___CreateReliableData (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, const MethodInfo* method_info);
INL1_PacketWriter_o* Dpr_NetworkUtils_ANetData_ContestEntryNPCData___CreateUnReliableData (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ContestEntryNPCData___WriteSendData (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, INL1_PacketWriter_o* appendTarget, const MethodInfo* method_info);
System_Byte_array* Dpr_NetworkUtils_ANetData_ContestEntryNPCData___ConvertStructToBytes (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ContestEntryNPCData___ReceivePacket (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ContestEntryNPCData___ReadRecieveData (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
Dpr_Contest_ContestEntryNPCData_o Dpr_NetworkUtils_ANetData_ContestEntryNPCData___ConvertBytesToStruct (Dpr_NetworkUtils_ANetData_ContestEntryNPCData__o* __this, INL1_PacketReader_o* pr, const MethodInfo* method_info);
void Dpr_NetworkUtils_ANetData_ContestEntryNPCData____cctor (const MethodInfo* method_info);