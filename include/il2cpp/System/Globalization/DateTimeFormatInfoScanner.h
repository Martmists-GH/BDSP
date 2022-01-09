#pragma once

#include "il2cpp.h"

System_Collections_Generic_Dictionary_string__string__o* System_Globalization_DateTimeFormatInfoScanner__get_KnownWords (const MethodInfo* method_info);
int32_t System_Globalization_DateTimeFormatInfoScanner__SkipWhiteSpacesAndNonLetter (System_String_o* pattern, int32_t currentIndex, const MethodInfo* method_info);
void System_Globalization_DateTimeFormatInfoScanner__AddDateWordOrPostfix (System_Globalization_DateTimeFormatInfoScanner_o* __this, System_String_o* formatPostfix, System_String_o* str, const MethodInfo* method_info);
int32_t System_Globalization_DateTimeFormatInfoScanner__AddDateWords (System_Globalization_DateTimeFormatInfoScanner_o* __this, System_String_o* pattern, int32_t index, System_String_o* formatPostfix, const MethodInfo* method_info);
int32_t System_Globalization_DateTimeFormatInfoScanner__ScanRepeatChar (System_String_o* pattern, uint16_t ch, int32_t index, int32_t* count, const MethodInfo* method_info);
void System_Globalization_DateTimeFormatInfoScanner__AddIgnorableSymbols (System_Globalization_DateTimeFormatInfoScanner_o* __this, System_String_o* text, const MethodInfo* method_info);
void System_Globalization_DateTimeFormatInfoScanner__ScanDateWord (System_Globalization_DateTimeFormatInfoScanner_o* __this, System_String_o* pattern, const MethodInfo* method_info);
System_String_array* System_Globalization_DateTimeFormatInfoScanner__GetDateWordsOfDTFI (System_Globalization_DateTimeFormatInfoScanner_o* __this, System_Globalization_DateTimeFormatInfo_o* dtfi, const MethodInfo* method_info);
int32_t System_Globalization_DateTimeFormatInfoScanner__GetFormatFlagGenitiveMonth (System_String_array* monthNames, System_String_array* genitveMonthNames, System_String_array* abbrevMonthNames, System_String_array* genetiveAbbrevMonthNames, const MethodInfo* method_info);
int32_t System_Globalization_DateTimeFormatInfoScanner__GetFormatFlagUseSpaceInMonthNames (System_String_array* monthNames, System_String_array* genitveMonthNames, System_String_array* abbrevMonthNames, System_String_array* genetiveAbbrevMonthNames, const MethodInfo* method_info);
int32_t System_Globalization_DateTimeFormatInfoScanner__GetFormatFlagUseSpaceInDayNames (System_String_array* dayNames, System_String_array* abbrevDayNames, const MethodInfo* method_info);
int32_t System_Globalization_DateTimeFormatInfoScanner__GetFormatFlagUseHebrewCalendar (int32_t calID, const MethodInfo* method_info);
bool System_Globalization_DateTimeFormatInfoScanner__EqualStringArrays (System_String_array* array1, System_String_array* array2, const MethodInfo* method_info);
bool System_Globalization_DateTimeFormatInfoScanner__ArrayElementsHaveSpace (System_String_array* array, const MethodInfo* method_info);
bool System_Globalization_DateTimeFormatInfoScanner__ArrayElementsBeginWithDigit (System_String_array* array, const MethodInfo* method_info);
void System_Globalization_DateTimeFormatInfoScanner___ctor (System_Globalization_DateTimeFormatInfoScanner_o* __this, const MethodInfo* method_info);