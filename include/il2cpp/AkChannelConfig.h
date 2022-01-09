#pragma once

#include "il2cpp.h"

void AkChannelConfig___ctor (AkChannelConfig_o* __this, intptr_t cPtr, bool cMemoryOwn, const MethodInfo* method_info);
intptr_t AkChannelConfig__getCPtr (AkChannelConfig_o* obj, const MethodInfo* method_info);
void AkChannelConfig__setCPtr (AkChannelConfig_o* __this, intptr_t cPtr, const MethodInfo* method_info);
void AkChannelConfig__Finalize (AkChannelConfig_o* __this, const MethodInfo* method_info);
void AkChannelConfig__Dispose (AkChannelConfig_o* __this, const MethodInfo* method_info);
void AkChannelConfig__set_uNumChannels (AkChannelConfig_o* __this, uint32_t value, const MethodInfo* method_info);
uint32_t AkChannelConfig__get_uNumChannels (AkChannelConfig_o* __this, const MethodInfo* method_info);
void AkChannelConfig__set_eConfigType (AkChannelConfig_o* __this, uint32_t value, const MethodInfo* method_info);
uint32_t AkChannelConfig__get_eConfigType (AkChannelConfig_o* __this, const MethodInfo* method_info);
void AkChannelConfig__set_uChannelMask (AkChannelConfig_o* __this, uint32_t value, const MethodInfo* method_info);
uint32_t AkChannelConfig__get_uChannelMask (AkChannelConfig_o* __this, const MethodInfo* method_info);
void AkChannelConfig___ctor (AkChannelConfig_o* __this, const MethodInfo* method_info);
void AkChannelConfig___ctor (AkChannelConfig_o* __this, uint32_t in_uNumChannels, uint32_t in_uChannelMask, const MethodInfo* method_info);
void AkChannelConfig__Clear (AkChannelConfig_o* __this, const MethodInfo* method_info);
void AkChannelConfig__SetStandard (AkChannelConfig_o* __this, uint32_t in_uChannelMask, const MethodInfo* method_info);
void AkChannelConfig__SetStandardOrAnonymous (AkChannelConfig_o* __this, uint32_t in_uNumChannels, uint32_t in_uChannelMask, const MethodInfo* method_info);
void AkChannelConfig__SetAnonymous (AkChannelConfig_o* __this, uint32_t in_uNumChannels, const MethodInfo* method_info);
void AkChannelConfig__SetAmbisonic (AkChannelConfig_o* __this, uint32_t in_uNumChannels, const MethodInfo* method_info);
bool AkChannelConfig__IsValid (AkChannelConfig_o* __this, const MethodInfo* method_info);
uint32_t AkChannelConfig__Serialize (AkChannelConfig_o* __this, const MethodInfo* method_info);
void AkChannelConfig__Deserialize (AkChannelConfig_o* __this, uint32_t in_uChannelConfig, const MethodInfo* method_info);
AkChannelConfig_o* AkChannelConfig__RemoveLFE (AkChannelConfig_o* __this, const MethodInfo* method_info);
AkChannelConfig_o* AkChannelConfig__RemoveCenter (AkChannelConfig_o* __this, const MethodInfo* method_info);
bool AkChannelConfig__IsChannelConfigSupported (AkChannelConfig_o* __this, const MethodInfo* method_info);
