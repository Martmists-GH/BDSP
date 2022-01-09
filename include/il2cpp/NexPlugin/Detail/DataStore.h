#pragma once

#include "il2cpp.h"

System_Collections_Generic_List_Dictionary_sbyte__DataStoreRatingInfo___o* NexPlugin_Detail_DataStore__DataStore_ExchangeRatingInfosList (intptr_t src, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_PostObjectAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStorePreparePostParamInt_o* pParam, intptr_t pUpBuf, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__PostObjectAsync_byte_ (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStorePreparePostParam_o* param, System_Byte_array* array, int32_t timeOut, NexPlugin_DataStore_PostCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_PostMetaAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStorePreparePostParamInt_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__PostMetaAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStorePreparePostParam_o* param, int32_t timeOut, NexPlugin_DataStore_PostCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_PostMetaAsyncByDataID (uint32_t asyncId, intptr_t pNgsFacade, uint64_t dataId, NexPlugin_Detail_DataStore_DataStorePreparePostParamInt_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__PostMetaAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint64_t dataId, NexPlugin_DataStorePreparePostParam_o* param, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_PostMetaAsyncByDataList (uint32_t asyncId, intptr_t pNgsFacade, int32_t useOneParam, NexPlugin_Detail_CppArray_o* dataIds, NexPlugin_Detail_CppArray_o* param, int32_t transactional, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__PostMetaAsync (uint32_t* asyncId, intptr_t pNgsFacade, bool useOneParam, System_Collections_Generic_List_ulong__o* dataIds, System_Collections_Generic_List_DataStorePreparePostParam__o* param, bool transactional, int32_t timeOut, NexPlugin_DataStore_ResultListCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_CompleteSuspendedPostObjectAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__CompleteSuspendedPostObjectAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_ulong__o* dataIds, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_SearchObjectAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStoreSearchParamInt_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__SearchObjectAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStoreSearchParam_o* param, int32_t timeOut, NexPlugin_DataStore_SearchObjectCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_SearchObjectLightAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStoreSearchParamInt_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__SearchObjectLightAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStoreSearchParam_o* param, int32_t timeOut, NexPlugin_DataStore_SearchObjectCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_DeleteObjectAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStoreDeleteParamInt_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DeleteObjectAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStoreDeleteParam_o* param, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_DeleteObjectAsyncByDataList (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* param, int32_t transactional, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DeleteObjectAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_DataStoreDeleteParam__o* param, bool transactional, int32_t timeOut, NexPlugin_DataStore_ResultListCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_UpdateObjectAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStorePrepareUpdateParamInt_o* pParam, intptr_t pUpBuf, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__UpdateObjectAsync_byte_ (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStorePrepareUpdateParam_o* param, System_Byte_array* array, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_GetObjectAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStorePrepareGetParamInt_o* pParam, uint64_t getBufSize, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__GetObjectAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStorePrepareGetParam_o* param, uint64_t getBufSize, int32_t timeOut, NexPlugin_DataStore_GetObjectCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_TouchObjectAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStoreTouchObjectParamInt_o* param, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__TouchObjectAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStoreTouchObjectParam_o* param, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_GetMetaAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStoreGetMetaParamInt_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__GetMetaAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStoreGetMetaParam_o* param, int32_t timeOut, NexPlugin_DataStore_GetMetaCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_GetMetaAsyncByDataList (uint32_t asyncId, intptr_t pNgsFacade, int32_t useDataIds, NexPlugin_Detail_CppArray_o* dataIds, NexPlugin_Detail_CppArray_o* param, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__GetMetaAsync (uint32_t* asyncId, intptr_t pNgsFacade, bool useDataIds, System_Collections_Generic_List_ulong__o* dataIds, System_Collections_Generic_List_DataStoreGetMetaParam__o* param, int32_t timeOut, NexPlugin_DataStore_GetMetaListCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_ChangeMetaAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStoreChangeMetaParamInt_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__ChangeMetaAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStoreChangeMetaParam_o* param, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_ChangeMetaAsyncByDataList (uint32_t asyncId, intptr_t pNgsFacade, int32_t useDataIds, NexPlugin_Detail_CppArray_o* dataIds, NexPlugin_Detail_CppArray_o* param, int32_t transactional, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__ChangeMetaAsync (uint32_t* asyncId, intptr_t pNgsFacade, bool useDataIds, System_Collections_Generic_List_ulong__o* dataIds, System_Collections_Generic_List_DataStoreChangeMetaParam__o* param, bool transactional, int32_t timeOut, NexPlugin_DataStore_ResultListCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_RateObjectAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStoreRatingTargetInt_o* pTarget, NexPlugin_Detail_DataStore_DataStoreRateObjectParamInt_o* pRateParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__RateObjectAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStoreRatingTarget_o* target, NexPlugin_DataStoreRateObjectParam_o* param, int32_t timeOut, NexPlugin_DataStore_RatingInfoCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_RateObjectAsyncByDataList (uint32_t asyncId, intptr_t pNgsFacade, int32_t useOneObjectParam, NexPlugin_Detail_CppArray_o* target, NexPlugin_Detail_CppArray_o* param, int32_t transactional, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__RateObjectAsync (uint32_t* asyncId, intptr_t pNgsFacade, bool useOneObjectParam, System_Collections_Generic_List_DataStoreRatingTarget__o* target, System_Collections_Generic_List_DataStoreRateObjectParam__o* param, bool transactional, int32_t timeOut, NexPlugin_DataStore_RatingInfoListCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_RateObjectWithPostingAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStoreRatingTargetInt_o* pParam, NexPlugin_Detail_DataStore_DataStoreRateObjectParamInt_o* pObject, NexPlugin_Detail_DataStore_DataStorePreparePostParamInt_o* pPostParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__RateObjectWithPostingAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStoreRatingTarget_o* pParam, NexPlugin_DataStoreRateObjectParam_o* pObject, NexPlugin_DataStorePreparePostParam_o* pPostParam, int32_t timeOut, NexPlugin_DataStore_RatingInfoCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_RateObjectsWithPostingAsync (uint32_t asyncId, intptr_t pNgsFacade, int32_t useOneParam, NexPlugin_Detail_CppArray_o* pParam, NexPlugin_Detail_CppArray_o* pObject, NexPlugin_Detail_CppArray_o* pPostParam, int32_t transactional, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__RateObjectsWithPostingAsync (uint32_t* asyncId, intptr_t pNgsFacade, bool useOneParam, System_Collections_Generic_List_DataStoreRatingTarget__o* pParam, System_Collections_Generic_List_DataStoreRateObjectParam__o* pObject, System_Collections_Generic_List_DataStorePreparePostParam__o* pPostParam, bool transactional, int32_t timeOut, NexPlugin_DataStore_RatingInfoListCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_GetRatingAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStoreRatingTargetInt_o* target, uint64_t accessPassword, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__GetRatingAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStoreRatingTarget_o* target, uint64_t accessPassword, int32_t timeOut, NexPlugin_DataStore_RatingInfoCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_GetRatingAllSlotAsync (uint32_t asyncId, intptr_t pNgsFacade, uint64_t dataId, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__GetRatingAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint64_t dataId, int32_t timeOut, NexPlugin_DataStore_RatingInfoAllSlotCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_GetRatingAsyncByDataList (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* dataIds, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__GetRatingAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_ulong__o* dataIds, int32_t timeOut, NexPlugin_DataStore_RatingInfosListCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_GetRatingWithLogAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStoreRatingTargetInt_o* target, uint64_t accessPassword, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__GetRatingAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStoreRatingTarget_o* target, uint64_t accessPassword, int32_t timeOut, NexPlugin_DataStore_RatingInfoWithLogCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_ResetRatingAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_DataStore_DataStoreRatingTargetInt_o* target, uint64_t accessPassword, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__ResetRatingAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_DataStoreRatingTarget_o* target, uint64_t accessPassword, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_ResetRatingAllSlotAsync (uint32_t asyncId, intptr_t pNgsFacade, uint64_t dataId, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__ResetRatingAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint64_t dataId, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_ResetRatingAsyncByDataList (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* dataIds, int32_t transactional, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__ResetRatingAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_ulong__o* dataIds, bool transactional, int32_t timeOut, NexPlugin_DataStore_ResultListCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_GetPersistenceInfoAsync (uint32_t asyncId, intptr_t pNgsFacade, uint64_t principalId, uint16_t slotId, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__GetPersistenceInfoAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint64_t principalId, uint16_t persistenceSlotId, int32_t timeOut, NexPlugin_DataStore_GetPersistenceInfoCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_GetPersistenceInfoAsyncByDataList (uint32_t asyncId, intptr_t pNgsFacade, uint64_t principalId, NexPlugin_Detail_CppArray_o* persistenceSlotIds, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__GetPersistenceInfoAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint64_t principalId, System_Collections_Generic_List_ushort__o* persistenceSlotIds, int32_t timeOut, NexPlugin_DataStore_GetPersistenceInfoListCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_PerpetuateObjectAsync (uint32_t asyncId, intptr_t pNgsFacade, uint16_t slotId, uint64_t dataId, int32_t deleteFlag, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__PerpetuateObjectAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint16_t persistenceSlotId, uint64_t dataId, bool deleteLastObject, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_UnperpetuateObjectAsync (uint32_t asyncId, intptr_t pNgsFacade, uint16_t slotId, int32_t deleteFlag, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__UnperpetuateObjectAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint16_t persistenceSlotId, bool deleteLastObject, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_GetPasswordInfoAsync (uint32_t asyncId, intptr_t pNgsFacade, uint64_t dataId, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__GetPasswordInfoAsync (uint32_t* asyncId, intptr_t pNgsFacade, uint64_t dataId, int32_t timeOut, NexPlugin_DataStore_GetPasswordInfoCB_o* callback, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__DataStore_GetPasswordInfoAsyncByDataList (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_CppArray_o* pParam, int32_t timeOut, const MethodInfo* method_info);
bool NexPlugin_Detail_DataStore__GetPasswordInfoAsync (uint32_t* asyncId, intptr_t pNgsFacade, System_Collections_Generic_List_ulong__o* dataIds, int32_t timeOut, NexPlugin_DataStore_GetPasswordInfoListCB_o* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_PostResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_ResultListResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_SearchObjectResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_GetObjectResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_GetMetaResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_GetMetaByDataListResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_RatingInfoResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_RatingInfoAllSlotResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_RatingInfoListResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_RatingInfosListResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_RatingInfoWithLogResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_GetPersistenceInfoResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_GetPersistenceInfoListResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_GetPasswordInfoResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__DataStore_GetPasswordInfoListResult (NexPlugin_Detail_AsyncResultInt_o* asyncResult, Il2CppObject* callback, const MethodInfo* method_info);
void NexPlugin_Detail_DataStore__Callback (NexPlugin_Detail_AsyncResultInt_o res, Il2CppObject* callback, const MethodInfo* method_info);