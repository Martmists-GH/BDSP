#pragma once

#include "il2cpp.h"

float Audio_AudioManager__get_duration (Audio_AudioManager_o* __this, const MethodInfo* method_info);
void Audio_AudioManager__OnDestroy (Audio_AudioManager_o* __this, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Audio_AudioManager__Start (Audio_AudioManager_o* __this, const MethodInfo* method_info);
void Audio_AudioManager__OnSettingValueChanged (Audio_AudioManager_o* __this, int32_t configId, int32_t value, const MethodInfo* method_info);
float Audio_AudioManager__GetVolume (Audio_AudioManager_o* __this, int32_t type, int32_t volumeType, const MethodInfo* method_info);
void Audio_AudioManager__SetVolume (Audio_AudioManager_o* __this, int32_t type, float volume, int32_t volumeType, const MethodInfo* method_info);
void Audio_AudioManager__SetVolumeInternal (Audio_AudioManager_o* __this, int32_t type, const MethodInfo* method_info);
void Audio_AudioManager___SetInstanceVolume (Audio_AudioManager_o* __this, Audio_AudioInstance_o* instance, const MethodInfo* method_info);
bool Audio_AudioManager__IsMute (Audio_AudioManager_o* __this, int32_t type, const MethodInfo* method_info);
void Audio_AudioManager__EnableMute (Audio_AudioManager_o* __this, int32_t type, bool isMute, const MethodInfo* method_info);
void Audio_AudioManager__Load (Audio_AudioManager_o* __this, Audio_AudioManager_LoadParam_o loadParam, UnityEngine_Events_UnityAction_AudioData__o* onLoaded, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Audio_AudioManager__OpWaitLoad (Audio_AudioManager_o* __this, Audio_AudioData_o* audioData, UnityEngine_Events_UnityAction_AudioData__o* onLoaded, const MethodInfo* method_info);
void Audio_AudioManager___Unload (Audio_AudioData_o* audioData, const MethodInfo* method_info);
Audio_AudioData_o* Audio_AudioManager__FindAudioData (Audio_AudioManager_o* __this, System_String_o* bankName, const MethodInfo* method_info);
Audio_AudioData_o* Audio_AudioManager__FindAudioData (Audio_AudioManager_o* __this, uint32_t bankId, const MethodInfo* method_info);
void Audio_AudioManager__PlayBgm (Audio_AudioManager_o* __this, const MethodInfo* method_info);
void Audio_AudioManager__StopBgm (Audio_AudioManager_o* __this, const MethodInfo* method_info);
void Audio_AudioManager__SetBgmEvent (Audio_AudioManager_o* __this, System_String_o* eventName, bool isThroughSameEvent, const MethodInfo* method_info);
void Audio_AudioManager__SetBgmEvent (Audio_AudioManager_o* __this, uint32_t eventId, bool isThroughSameEvent, const MethodInfo* method_info);
void Audio_AudioManager__SetBgmState (Audio_AudioManager_o* __this, System_String_o* stateName, const MethodInfo* method_info);
uint32_t Audio_AudioManager__GetIdByName (Audio_AudioManager_o* __this, System_String_o* name, const MethodInfo* method_info);
Audio_AudioInstance_o* Audio_AudioManager__PlaySe (Audio_AudioManager_o* __this, uint32_t playEventId, UnityEngine_Events_UnityAction_AudioInstance__o* onFinished, const MethodInfo* method_info);
Audio_AudioInstance_o* Audio_AudioManager__PlaySe (Audio_AudioManager_o* __this, uint32_t playEventId, uint32_t stopEventId, UnityEngine_Events_UnityAction_AudioInstance__o* onFinished, const MethodInfo* method_info);
Audio_AudioInstance_o* Audio_AudioManager__CreateSe (Audio_AudioManager_o* __this, uint32_t playEventId, uint32_t stopEventId, const MethodInfo* method_info);
Audio_AudioInstance_o* Audio_AudioManager__CreateSe (Audio_AudioManager_o* __this, uint32_t playEventId, uint32_t stopEventId, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Transform_o* attachedTransform, const MethodInfo* method_info);
Audio_AudioInstance_o* Audio_AudioManager__PlayVoice (Audio_AudioManager_o* __this, uint32_t playEventId, UnityEngine_Events_UnityAction_AudioInstance__o* onFinished, const MethodInfo* method_info);
Audio_AudioInstance_o* Audio_AudioManager__PlayVoice (Audio_AudioManager_o* __this, uint32_t playEventId, uint32_t stopEventId, UnityEngine_Transform_o* t, UnityEngine_Events_UnityAction_AudioInstance__o* onFinished, const MethodInfo* method_info);
Audio_AudioInstance_o* Audio_AudioManager__PlayVoice (Audio_AudioManager_o* __this, uint32_t playEventId, uint32_t stopEventId, UnityEngine_Events_UnityAction_AudioInstance__o* onFinished, const MethodInfo* method_info);
Audio_AudioInstance_o* Audio_AudioManager__CreateVoice (Audio_AudioManager_o* __this, uint32_t playEventId, uint32_t stopEventId, const MethodInfo* method_info);
Audio_AudioInstance_o* Audio_AudioManager__CreateVoice (Audio_AudioManager_o* __this, uint32_t playEventId, uint32_t stopEventId, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Transform_o* attachedTransform, const MethodInfo* method_info);
Audio_AudioInstance_o* Audio_AudioManager__CreateInstance (Audio_AudioManager_o* __this, int32_t listenerType, uint32_t playEventId, uint32_t stopEventId, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Transform_o* attachedTransform, const MethodInfo* method_info);
uint32_t Audio_AudioManager__GetCurrentStateId (Audio_AudioManager_o* __this, uint32_t groupId, const MethodInfo* method_info);
UnityEngine_Vector3_o Audio_AudioManager__GetListenerPosition (Audio_AudioManager_o* __this, const MethodInfo* method_info);
void Audio_AudioManager__SetListenerPosition (Audio_AudioManager_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method_info);
UnityEngine_Quaternion_o Audio_AudioManager__GetListenerRotation (Audio_AudioManager_o* __this, const MethodInfo* method_info);
void Audio_AudioManager__SetListenerRotation (Audio_AudioManager_o* __this, UnityEngine_Quaternion_o rotation, const MethodInfo* method_info);
float Audio_AudioManager__GetBgmPlayPosition (Audio_AudioManager_o* __this, const MethodInfo* method_info);
void Audio_AudioManager___RemoveInstance (Audio_AudioManager_o* __this, Audio_AudioInstance_o* instance, const MethodInfo* method_info);
uint32_t Audio_AudioManager__PostEvent (Audio_AudioManager_o* __this, uint32_t eventId, uint32_t callbackFlags, bool isThroughSameEvent, const MethodInfo* method_info);
uint32_t Audio_AudioManager__PostEventInternal (Audio_AudioManager_o* __this, uint32_t eventId, uint32_t callbackFlags, bool isThroughSameEvent, const MethodInfo* method_info);
void Audio_AudioManager__OnPostEvent (Il2CppObject* in_cookie, int32_t in_type, AkCallbackInfo_o* in_info, const MethodInfo* method_info);
uint32_t Audio_AudioManager__RePostEvent (Audio_AudioManager_o* __this, uint32_t eventId, uint32_t callbackFlags, const MethodInfo* method_info);
uint32_t Audio_AudioManager__RePostEventInternal (Audio_AudioManager_o* __this, uint32_t eventId, uint32_t callbackFlags, const MethodInfo* method_info);
void Audio_AudioManager__LateUpdate (Audio_AudioManager_o* __this, const MethodInfo* method_info);
void Audio_AudioManager__EnableUpdateListenerByMainCamera (Audio_AudioManager_o* __this, bool enabled, const MethodInfo* method_info);
bool Audio_AudioManager__IsEnableUpdateListenerByMainCamera (Audio_AudioManager_o* __this, const MethodInfo* method_info);
void Audio_AudioManager__UpdateListenerByMainCamera (Audio_AudioManager_o* __this, const MethodInfo* method_info);
float Audio_AudioManager__GetRTPCValue (Audio_AudioManager_o* __this, uint32_t gameParamId, const MethodInfo* method_info);
void Audio_AudioManager__SetRTPCValue (Audio_AudioManager_o* __this, uint32_t gameParamId, float value, const MethodInfo* method_info);
void Audio_AudioManager__CreateVoiceRTPCDatas (Audio_AudioManager_o* __this, const MethodInfo* method_info);
void Audio_AudioManager___ctor (Audio_AudioManager_o* __this, const MethodInfo* method_info);
void Audio_AudioManager___Start_b__23_0 (Audio_AudioManager_o* __this, Audio_AudioData_o* audioData, const MethodInfo* method_info);