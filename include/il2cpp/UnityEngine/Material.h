#pragma once

#include "il2cpp.h"

void UnityEngine_Material__CreateWithShader (UnityEngine_Material_o* self, UnityEngine_Shader_o* shader, const MethodInfo* method_info);
void UnityEngine_Material__CreateWithMaterial (UnityEngine_Material_o* self, UnityEngine_Material_o* source, const MethodInfo* method_info);
void UnityEngine_Material__CreateWithString (UnityEngine_Material_o* self, const MethodInfo* method_info);
void UnityEngine_Material___ctor (UnityEngine_Material_o* __this, UnityEngine_Shader_o* shader, const MethodInfo* method_info);
void UnityEngine_Material___ctor (UnityEngine_Material_o* __this, UnityEngine_Material_o* source, const MethodInfo* method_info);
void UnityEngine_Material___ctor (UnityEngine_Material_o* __this, System_String_o* contents, const MethodInfo* method_info);
UnityEngine_Shader_o* UnityEngine_Material__get_shader (UnityEngine_Material_o* __this, const MethodInfo* method_info);
void UnityEngine_Material__set_shader (UnityEngine_Material_o* __this, UnityEngine_Shader_o* value, const MethodInfo* method_info);
UnityEngine_Color_o UnityEngine_Material__get_color (UnityEngine_Material_o* __this, const MethodInfo* method_info);
void UnityEngine_Material__set_color (UnityEngine_Material_o* __this, UnityEngine_Color_o value, const MethodInfo* method_info);
UnityEngine_Texture_o* UnityEngine_Material__get_mainTexture (UnityEngine_Material_o* __this, const MethodInfo* method_info);
void UnityEngine_Material__set_mainTexture (UnityEngine_Material_o* __this, UnityEngine_Texture_o* value, const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_Material__get_mainTextureOffset (UnityEngine_Material_o* __this, const MethodInfo* method_info);
void UnityEngine_Material__set_mainTextureOffset (UnityEngine_Material_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_Material__get_mainTextureScale (UnityEngine_Material_o* __this, const MethodInfo* method_info);
void UnityEngine_Material__set_mainTextureScale (UnityEngine_Material_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method_info);
int32_t UnityEngine_Material__GetFirstPropertyNameIdByAttribute (UnityEngine_Material_o* __this, int32_t attributeFlag, const MethodInfo* method_info);
bool UnityEngine_Material__HasProperty (UnityEngine_Material_o* __this, int32_t nameID, const MethodInfo* method_info);
bool UnityEngine_Material__HasProperty (UnityEngine_Material_o* __this, System_String_o* name, const MethodInfo* method_info);
int32_t UnityEngine_Material__get_renderQueue (UnityEngine_Material_o* __this, const MethodInfo* method_info);
void UnityEngine_Material__set_renderQueue (UnityEngine_Material_o* __this, int32_t value, const MethodInfo* method_info);
void UnityEngine_Material__EnableKeyword (UnityEngine_Material_o* __this, System_String_o* keyword, const MethodInfo* method_info);
void UnityEngine_Material__DisableKeyword (UnityEngine_Material_o* __this, System_String_o* keyword, const MethodInfo* method_info);
bool UnityEngine_Material__get_enableInstancing (UnityEngine_Material_o* __this, const MethodInfo* method_info);
void UnityEngine_Material__set_enableInstancing (UnityEngine_Material_o* __this, bool value, const MethodInfo* method_info);
int32_t UnityEngine_Material__get_passCount (UnityEngine_Material_o* __this, const MethodInfo* method_info);
void UnityEngine_Material__CopyPropertiesFromMaterial (UnityEngine_Material_o* __this, UnityEngine_Material_o* mat, const MethodInfo* method_info);
System_String_array* UnityEngine_Material__GetShaderKeywords (UnityEngine_Material_o* __this, const MethodInfo* method_info);
void UnityEngine_Material__SetShaderKeywords (UnityEngine_Material_o* __this, System_String_array* names, const MethodInfo* method_info);
System_String_array* UnityEngine_Material__get_shaderKeywords (UnityEngine_Material_o* __this, const MethodInfo* method_info);
void UnityEngine_Material__set_shaderKeywords (UnityEngine_Material_o* __this, System_String_array* value, const MethodInfo* method_info);
int32_t UnityEngine_Material__ComputeCRC (UnityEngine_Material_o* __this, const MethodInfo* method_info);
void UnityEngine_Material__SetFloatImpl (UnityEngine_Material_o* __this, int32_t name, float value, const MethodInfo* method_info);
void UnityEngine_Material__SetColorImpl (UnityEngine_Material_o* __this, int32_t name, UnityEngine_Color_o value, const MethodInfo* method_info);
void UnityEngine_Material__SetMatrixImpl (UnityEngine_Material_o* __this, int32_t name, UnityEngine_Matrix4x4_o value, const MethodInfo* method_info);
void UnityEngine_Material__SetTextureImpl (UnityEngine_Material_o* __this, int32_t name, UnityEngine_Texture_o* value, const MethodInfo* method_info);
float UnityEngine_Material__GetFloatImpl (UnityEngine_Material_o* __this, int32_t name, const MethodInfo* method_info);
UnityEngine_Color_o UnityEngine_Material__GetColorImpl (UnityEngine_Material_o* __this, int32_t name, const MethodInfo* method_info);
UnityEngine_Texture_o* UnityEngine_Material__GetTextureImpl (UnityEngine_Material_o* __this, int32_t name, const MethodInfo* method_info);
UnityEngine_Vector4_o UnityEngine_Material__GetTextureScaleAndOffsetImpl (UnityEngine_Material_o* __this, int32_t name, const MethodInfo* method_info);
void UnityEngine_Material__SetTextureOffsetImpl (UnityEngine_Material_o* __this, int32_t name, UnityEngine_Vector2_o offset, const MethodInfo* method_info);
void UnityEngine_Material__SetTextureScaleImpl (UnityEngine_Material_o* __this, int32_t name, UnityEngine_Vector2_o scale, const MethodInfo* method_info);
void UnityEngine_Material__SetFloat (UnityEngine_Material_o* __this, System_String_o* name, float value, const MethodInfo* method_info);
void UnityEngine_Material__SetFloat (UnityEngine_Material_o* __this, int32_t nameID, float value, const MethodInfo* method_info);
void UnityEngine_Material__SetInt (UnityEngine_Material_o* __this, System_String_o* name, int32_t value, const MethodInfo* method_info);
void UnityEngine_Material__SetInt (UnityEngine_Material_o* __this, int32_t nameID, int32_t value, const MethodInfo* method_info);
void UnityEngine_Material__SetColor (UnityEngine_Material_o* __this, System_String_o* name, UnityEngine_Color_o value, const MethodInfo* method_info);
void UnityEngine_Material__SetColor (UnityEngine_Material_o* __this, int32_t nameID, UnityEngine_Color_o value, const MethodInfo* method_info);
void UnityEngine_Material__SetVector (UnityEngine_Material_o* __this, System_String_o* name, UnityEngine_Vector4_o value, const MethodInfo* method_info);
void UnityEngine_Material__SetVector (UnityEngine_Material_o* __this, int32_t nameID, UnityEngine_Vector4_o value, const MethodInfo* method_info);
void UnityEngine_Material__SetMatrix (UnityEngine_Material_o* __this, int32_t nameID, UnityEngine_Matrix4x4_o value, const MethodInfo* method_info);
void UnityEngine_Material__SetTexture (UnityEngine_Material_o* __this, System_String_o* name, UnityEngine_Texture_o* value, const MethodInfo* method_info);
void UnityEngine_Material__SetTexture (UnityEngine_Material_o* __this, int32_t nameID, UnityEngine_Texture_o* value, const MethodInfo* method_info);
float UnityEngine_Material__GetFloat (UnityEngine_Material_o* __this, System_String_o* name, const MethodInfo* method_info);
float UnityEngine_Material__GetFloat (UnityEngine_Material_o* __this, int32_t nameID, const MethodInfo* method_info);
UnityEngine_Color_o UnityEngine_Material__GetColor (UnityEngine_Material_o* __this, System_String_o* name, const MethodInfo* method_info);
UnityEngine_Color_o UnityEngine_Material__GetColor (UnityEngine_Material_o* __this, int32_t nameID, const MethodInfo* method_info);
UnityEngine_Vector4_o UnityEngine_Material__GetVector (UnityEngine_Material_o* __this, System_String_o* name, const MethodInfo* method_info);
UnityEngine_Vector4_o UnityEngine_Material__GetVector (UnityEngine_Material_o* __this, int32_t nameID, const MethodInfo* method_info);
UnityEngine_Texture_o* UnityEngine_Material__GetTexture (UnityEngine_Material_o* __this, System_String_o* name, const MethodInfo* method_info);
UnityEngine_Texture_o* UnityEngine_Material__GetTexture (UnityEngine_Material_o* __this, int32_t nameID, const MethodInfo* method_info);
void UnityEngine_Material__SetTextureOffset (UnityEngine_Material_o* __this, System_String_o* name, UnityEngine_Vector2_o value, const MethodInfo* method_info);
void UnityEngine_Material__SetTextureOffset (UnityEngine_Material_o* __this, int32_t nameID, UnityEngine_Vector2_o value, const MethodInfo* method_info);
void UnityEngine_Material__SetTextureScale (UnityEngine_Material_o* __this, System_String_o* name, UnityEngine_Vector2_o value, const MethodInfo* method_info);
void UnityEngine_Material__SetTextureScale (UnityEngine_Material_o* __this, int32_t nameID, UnityEngine_Vector2_o value, const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_Material__GetTextureOffset (UnityEngine_Material_o* __this, System_String_o* name, const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_Material__GetTextureOffset (UnityEngine_Material_o* __this, int32_t nameID, const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_Material__GetTextureScale (UnityEngine_Material_o* __this, System_String_o* name, const MethodInfo* method_info);
UnityEngine_Vector2_o UnityEngine_Material__GetTextureScale (UnityEngine_Material_o* __this, int32_t nameID, const MethodInfo* method_info);
void UnityEngine_Material__SetColorImpl_Injected (UnityEngine_Material_o* __this, int32_t name, UnityEngine_Color_o* value, const MethodInfo* method_info);
void UnityEngine_Material__SetMatrixImpl_Injected (UnityEngine_Material_o* __this, int32_t name, UnityEngine_Matrix4x4_o* value, const MethodInfo* method_info);
void UnityEngine_Material__GetColorImpl_Injected (UnityEngine_Material_o* __this, int32_t name, UnityEngine_Color_o* ret, const MethodInfo* method_info);
void UnityEngine_Material__GetTextureScaleAndOffsetImpl_Injected (UnityEngine_Material_o* __this, int32_t name, UnityEngine_Vector4_o* ret, const MethodInfo* method_info);
void UnityEngine_Material__SetTextureOffsetImpl_Injected (UnityEngine_Material_o* __this, int32_t name, UnityEngine_Vector2_o* offset, const MethodInfo* method_info);
void UnityEngine_Material__SetTextureScaleImpl_Injected (UnityEngine_Material_o* __this, int32_t name, UnityEngine_Vector2_o* scale, const MethodInfo* method_info);
