#pragma once

#include "il2cpp.h"

double UnityEngine_Timeline_ScheduleRuntimeClip__get_start (UnityEngine_Timeline_ScheduleRuntimeClip_o* __this, const MethodInfo* method_info);
double UnityEngine_Timeline_ScheduleRuntimeClip__get_duration (UnityEngine_Timeline_ScheduleRuntimeClip_o* __this, const MethodInfo* method_info);
void UnityEngine_Timeline_ScheduleRuntimeClip__SetTime (UnityEngine_Timeline_ScheduleRuntimeClip_o* __this, double time, const MethodInfo* method_info);
UnityEngine_Timeline_TimelineClip_o* UnityEngine_Timeline_ScheduleRuntimeClip__get_clip (UnityEngine_Timeline_ScheduleRuntimeClip_o* __this, const MethodInfo* method_info);
UnityEngine_Playables_Playable_o UnityEngine_Timeline_ScheduleRuntimeClip__get_mixer (UnityEngine_Timeline_ScheduleRuntimeClip_o* __this, const MethodInfo* method_info);
UnityEngine_Playables_Playable_o UnityEngine_Timeline_ScheduleRuntimeClip__get_playable (UnityEngine_Timeline_ScheduleRuntimeClip_o* __this, const MethodInfo* method_info);
void UnityEngine_Timeline_ScheduleRuntimeClip___ctor (UnityEngine_Timeline_ScheduleRuntimeClip_o* __this, UnityEngine_Timeline_TimelineClip_o* clip, UnityEngine_Playables_Playable_o clipPlayable, UnityEngine_Playables_Playable_o parentMixer, double startDelay, double finishTail, const MethodInfo* method_info);
void UnityEngine_Timeline_ScheduleRuntimeClip__Create (UnityEngine_Timeline_ScheduleRuntimeClip_o* __this, UnityEngine_Timeline_TimelineClip_o* clip, UnityEngine_Playables_Playable_o clipPlayable, UnityEngine_Playables_Playable_o parentMixer, double startDelay, double finishTail, const MethodInfo* method_info);
void UnityEngine_Timeline_ScheduleRuntimeClip__set_enable (UnityEngine_Timeline_ScheduleRuntimeClip_o* __this, bool value, const MethodInfo* method_info);
void UnityEngine_Timeline_ScheduleRuntimeClip__EvaluateAt (UnityEngine_Timeline_ScheduleRuntimeClip_o* __this, double localTime, UnityEngine_Playables_FrameData_o frameData, const MethodInfo* method_info);
