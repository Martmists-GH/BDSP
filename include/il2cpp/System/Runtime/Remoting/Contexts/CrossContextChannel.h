#pragma once

#include "il2cpp.h"

System_Runtime_Remoting_Messaging_IMessage_o* System_Runtime_Remoting_Contexts_CrossContextChannel__SyncProcessMessage (System_Runtime_Remoting_Contexts_CrossContextChannel_o* __this, System_Runtime_Remoting_Messaging_IMessage_o* msg, const MethodInfo* method_info);
System_Runtime_Remoting_Messaging_IMessageCtrl_o* System_Runtime_Remoting_Contexts_CrossContextChannel__AsyncProcessMessage (System_Runtime_Remoting_Contexts_CrossContextChannel_o* __this, System_Runtime_Remoting_Messaging_IMessage_o* msg, System_Runtime_Remoting_Messaging_IMessageSink_o* replySink, const MethodInfo* method_info);
void System_Runtime_Remoting_Contexts_CrossContextChannel___ctor (System_Runtime_Remoting_Contexts_CrossContextChannel_o* __this, const MethodInfo* method_info);