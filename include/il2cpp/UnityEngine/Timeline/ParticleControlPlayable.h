#pragma once

#include "il2cpp.h"

UnityEngine_Playables_ScriptPlayable_ParticleControlPlayable__o UnityEngine_Timeline_ParticleControlPlayable__Create (UnityEngine_Playables_PlayableGraph_o graph, UnityEngine_ParticleSystem_o* component, uint32_t randomSeed, const MethodInfo* method_info);
UnityEngine_ParticleSystem_o* UnityEngine_Timeline_ParticleControlPlayable__get_particleSystem (UnityEngine_Timeline_ParticleControlPlayable_o* __this, const MethodInfo* method_info);
void UnityEngine_Timeline_ParticleControlPlayable__set_particleSystem (UnityEngine_Timeline_ParticleControlPlayable_o* __this, UnityEngine_ParticleSystem_o* value, const MethodInfo* method_info);
void UnityEngine_Timeline_ParticleControlPlayable__Initialize (UnityEngine_Timeline_ParticleControlPlayable_o* __this, UnityEngine_ParticleSystem_o* ps, uint32_t randomSeed, const MethodInfo* method_info);
void UnityEngine_Timeline_ParticleControlPlayable__SetRandomSeed (UnityEngine_Timeline_ParticleControlPlayable_o* __this, const MethodInfo* method_info);
void UnityEngine_Timeline_ParticleControlPlayable__PrepareFrame (UnityEngine_Timeline_ParticleControlPlayable_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o data, const MethodInfo* method_info);
void UnityEngine_Timeline_ParticleControlPlayable__OnBehaviourPlay (UnityEngine_Timeline_ParticleControlPlayable_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method_info);
void UnityEngine_Timeline_ParticleControlPlayable__OnBehaviourPause (UnityEngine_Timeline_ParticleControlPlayable_o* __this, UnityEngine_Playables_Playable_o playable, UnityEngine_Playables_FrameData_o info, const MethodInfo* method_info);
void UnityEngine_Timeline_ParticleControlPlayable___ctor (UnityEngine_Timeline_ParticleControlPlayable_o* __this, const MethodInfo* method_info);
