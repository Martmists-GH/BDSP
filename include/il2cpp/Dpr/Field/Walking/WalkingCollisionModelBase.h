#pragma once

#include "il2cpp.h"

void Dpr_Field_Walking_WalkingCollisionModelBase___ctor (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, Dpr_Field_Walking_WalkData_o* walkData, const MethodInfo* method_info);
float Dpr_Field_Walking_WalkingCollisionModelBase__get_bodySize (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCollisionModelBase__set_bodySize (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, float value, const MethodInfo* method_info);
FieldObjectEntity_o* Dpr_Field_Walking_WalkingCollisionModelBase__get_entity (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, const MethodInfo* method_info);
int32_t Dpr_Field_Walking_WalkingCollisionModelBase__get_CollidedCount (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCollisionModelBase__set_CollidedCount (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, int32_t value, const MethodInfo* method_info);
UnityEngine_Transform_o* Dpr_Field_Walking_WalkingCollisionModelBase__get_transform (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCollisionModelBase__CollisionUpdate (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, float deltaTime, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCollisionModelBase__ExCollisionUpdate (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, float deltaTime, System_Collections_Generic_List_FureaiPokeModel__o* characters, const MethodInfo* method_info);
bool Dpr_Field_Walking_WalkingCollisionModelBase__ObjectCollisionUpdate (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, float deltaTime, bool isIgnoreJump, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCollisionModelBase__UpdateCollisionCount (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, const MethodInfo* method_info);
bool Dpr_Field_Walking_WalkingCollisionModelBase__CheckCollision (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, FieldObjectEntity_o* target, float radius, float speed, bool CheckWeight, bool isCheckOnly, int32_t targetPriority, bool isCheckHeight, const MethodInfo* method_info);
void Dpr_Field_Walking_WalkingCollisionModelBase__LateUpdate (Dpr_Field_Walking_WalkingCollisionModelBase_o* __this, float deltaTime, const MethodInfo* method_info);