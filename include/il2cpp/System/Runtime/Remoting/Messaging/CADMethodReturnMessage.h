#pragma once

#include "il2cpp.h"

System_Runtime_Remoting_Messaging_CADMethodReturnMessage_o* System_Runtime_Remoting_Messaging_CADMethodReturnMessage__Create (System_Runtime_Remoting_Messaging_IMessage_o* callMsg, const MethodInfo* method_info);
void System_Runtime_Remoting_Messaging_CADMethodReturnMessage___ctor (System_Runtime_Remoting_Messaging_CADMethodReturnMessage_o* __this, System_Runtime_Remoting_Messaging_IMethodReturnMessage_o* retMsg, const MethodInfo* method_info);
System_Collections_ArrayList_o* System_Runtime_Remoting_Messaging_CADMethodReturnMessage__GetArguments (System_Runtime_Remoting_Messaging_CADMethodReturnMessage_o* __this, const MethodInfo* method_info);
System_Object_array* System_Runtime_Remoting_Messaging_CADMethodReturnMessage__GetArgs (System_Runtime_Remoting_Messaging_CADMethodReturnMessage_o* __this, System_Collections_ArrayList_o* args, const MethodInfo* method_info);
Il2CppObject* System_Runtime_Remoting_Messaging_CADMethodReturnMessage__GetReturnValue (System_Runtime_Remoting_Messaging_CADMethodReturnMessage_o* __this, System_Collections_ArrayList_o* args, const MethodInfo* method_info);
System_Exception_o* System_Runtime_Remoting_Messaging_CADMethodReturnMessage__GetException (System_Runtime_Remoting_Messaging_CADMethodReturnMessage_o* __this, System_Collections_ArrayList_o* args, const MethodInfo* method_info);
int32_t System_Runtime_Remoting_Messaging_CADMethodReturnMessage__get_PropertiesCount (System_Runtime_Remoting_Messaging_CADMethodReturnMessage_o* __this, const MethodInfo* method_info);