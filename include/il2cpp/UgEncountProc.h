#pragma once

#include "il2cpp.h"

UgEncountProc_LotResult_o UgEncountProc__EncountLot (UgEncountProc_LotReuest_o lot, const MethodInfo* method_info);
uint8_t UgEncountProc__LotType (XLSXContent_UgRandMark_Sheettable_o* tbl, const MethodInfo* method_info);
Ug_MonsSize_array* UgEncountProc__LotSize (XLSXContent_UgRandMark_Sheettable_o* tbl, int32_t lotcount, const MethodInfo* method_info);
int32_t UgEncountProc__LotMonster (XLSXContent_UgRandMark_Sheettable_o* tbl, int32_t size, uint8_t type, const MethodInfo* method_info);
void UgEncountProc___ctor (UgEncountProc_o* __this, const MethodInfo* method_info);
