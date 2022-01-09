#pragma once

#include "il2cpp.h"

void System_Security_Cryptography_X509Certificates_X509KeyUsageExtension___ctor (System_Security_Cryptography_X509Certificates_X509KeyUsageExtension_o* __this, const MethodInfo* method_info);
void System_Security_Cryptography_X509Certificates_X509KeyUsageExtension___ctor (System_Security_Cryptography_X509Certificates_X509KeyUsageExtension_o* __this, System_Security_Cryptography_AsnEncodedData_o* encodedKeyUsage, bool critical, const MethodInfo* method_info);
void System_Security_Cryptography_X509Certificates_X509KeyUsageExtension___ctor (System_Security_Cryptography_X509Certificates_X509KeyUsageExtension_o* __this, int32_t keyUsages, bool critical, const MethodInfo* method_info);
int32_t System_Security_Cryptography_X509Certificates_X509KeyUsageExtension__get_KeyUsages (System_Security_Cryptography_X509Certificates_X509KeyUsageExtension_o* __this, const MethodInfo* method_info);
void System_Security_Cryptography_X509Certificates_X509KeyUsageExtension__CopyFrom (System_Security_Cryptography_X509Certificates_X509KeyUsageExtension_o* __this, System_Security_Cryptography_AsnEncodedData_o* asnEncodedData, const MethodInfo* method_info);
int32_t System_Security_Cryptography_X509Certificates_X509KeyUsageExtension__GetValidFlags (System_Security_Cryptography_X509Certificates_X509KeyUsageExtension_o* __this, int32_t flags, const MethodInfo* method_info);
int32_t System_Security_Cryptography_X509Certificates_X509KeyUsageExtension__Decode (System_Security_Cryptography_X509Certificates_X509KeyUsageExtension_o* __this, System_Byte_array* extension, const MethodInfo* method_info);
System_Byte_array* System_Security_Cryptography_X509Certificates_X509KeyUsageExtension__Encode (System_Security_Cryptography_X509Certificates_X509KeyUsageExtension_o* __this, const MethodInfo* method_info);
System_String_o* System_Security_Cryptography_X509Certificates_X509KeyUsageExtension__ToString (System_Security_Cryptography_X509Certificates_X509KeyUsageExtension_o* __this, bool multiLine, const MethodInfo* method_info);