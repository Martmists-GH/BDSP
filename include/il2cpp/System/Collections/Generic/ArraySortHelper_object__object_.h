#pragma once

#include "il2cpp.h"

System_Collections_Generic_ArraySortHelper_TKey__TValue__o* System_Collections_Generic_ArraySortHelper_object__object___get_Default (const MethodInfo* method_info);
System_Collections_Generic_ArraySortHelper_TKey__TValue__o* System_Collections_Generic_ArraySortHelper_object__object___CreateArraySortHelper (const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object__object___Sort (System_Collections_Generic_ArraySortHelper_object__object__o* __this, System_Object_array* keys, System_Object_array* values, int32_t index, int32_t length, System_Collections_Generic_IComparer_TKey__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object__object___SwapIfGreaterWithItems (System_Object_array* keys, System_Object_array* values, System_Collections_Generic_IComparer_TKey__o* comparer, int32_t a, int32_t b, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object__object___Swap (System_Object_array* keys, System_Object_array* values, int32_t i, int32_t j, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object__object___IntrospectiveSort (System_Object_array* keys, System_Object_array* values, int32_t left, int32_t length, System_Collections_Generic_IComparer_TKey__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object__object___IntroSort (System_Object_array* keys, System_Object_array* values, int32_t lo, int32_t hi, int32_t depthLimit, System_Collections_Generic_IComparer_TKey__o* comparer, const MethodInfo* method_info);
int32_t System_Collections_Generic_ArraySortHelper_object__object___PickPivotAndPartition (System_Object_array* keys, System_Object_array* values, int32_t lo, int32_t hi, System_Collections_Generic_IComparer_TKey__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object__object___Heapsort (System_Object_array* keys, System_Object_array* values, int32_t lo, int32_t hi, System_Collections_Generic_IComparer_TKey__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object__object___DownHeap (System_Object_array* keys, System_Object_array* values, int32_t i, int32_t n, int32_t lo, System_Collections_Generic_IComparer_TKey__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object__object___InsertionSort (System_Object_array* keys, System_Object_array* values, int32_t lo, int32_t hi, System_Collections_Generic_IComparer_TKey__o* comparer, const MethodInfo* method_info);
void System_Collections_Generic_ArraySortHelper_object__object____ctor (System_Collections_Generic_ArraySortHelper_object__object__o* __this, const MethodInfo* method_info);
