#pragma once

#include "il2cpp.h"

void System_RuntimeType__ThrowIfTypeNeverValidGenericArgument (System_RuntimeType_o* type, const MethodInfo* method_info);
void System_RuntimeType__SanityCheckGenericArguments (System_RuntimeType_array* genericArguments, System_RuntimeType_array* genericParamters, const MethodInfo* method_info);
void System_RuntimeType__SplitName (System_String_o* fullname, System_String_o** name, System_String_o** ns, const MethodInfo* method_info);
void System_RuntimeType__FilterHelper (int32_t bindingFlags, System_String_o** name, bool allowPrefixLookup, bool* prefixLookup, bool* ignoreCase, int32_t* listType, const MethodInfo* method_info);
void System_RuntimeType__FilterHelper (int32_t bindingFlags, System_String_o** name, bool* ignoreCase, int32_t* listType, const MethodInfo* method_info);
bool System_RuntimeType__FilterApplyPrefixLookup (System_Reflection_MemberInfo_o* memberInfo, System_String_o* name, bool ignoreCase, const MethodInfo* method_info);
bool System_RuntimeType__FilterApplyBase (System_Reflection_MemberInfo_o* memberInfo, int32_t bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic, System_String_o* name, bool prefixLookup, const MethodInfo* method_info);
bool System_RuntimeType__FilterApplyType (System_Type_o* type, int32_t bindingFlags, System_String_o* name, bool prefixLookup, System_String_o* ns, const MethodInfo* method_info);
bool System_RuntimeType__FilterApplyMethodInfo (System_Reflection_RuntimeMethodInfo_o* method, int32_t bindingFlags, int32_t callConv, System_Type_array* argumentTypes, const MethodInfo* method_info);
bool System_RuntimeType__FilterApplyConstructorInfo (System_Reflection_RuntimeConstructorInfo_o* constructor, int32_t bindingFlags, int32_t callConv, System_Type_array* argumentTypes, const MethodInfo* method_info);
bool System_RuntimeType__FilterApplyMethodBase (System_Reflection_MethodBase_o* methodBase, int32_t methodFlags, int32_t bindingFlags, int32_t callConv, System_Type_array* argumentTypes, const MethodInfo* method_info);
void System_RuntimeType___ctor (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__IsSpecialSerializableType (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_RuntimeType_ListBuilder_MethodInfo__o System_RuntimeType__GetMethodCandidates (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, int32_t callConv, System_Type_array* types, bool allowPrefixLookup, const MethodInfo* method_info);
System_RuntimeType_ListBuilder_ConstructorInfo__o System_RuntimeType__GetConstructorCandidates (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, int32_t callConv, System_Type_array* types, bool allowPrefixLookup, const MethodInfo* method_info);
System_RuntimeType_ListBuilder_PropertyInfo__o System_RuntimeType__GetPropertyCandidates (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, System_Type_array* types, bool allowPrefixLookup, const MethodInfo* method_info);
System_RuntimeType_ListBuilder_EventInfo__o System_RuntimeType__GetEventCandidates (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, bool allowPrefixLookup, const MethodInfo* method_info);
System_RuntimeType_ListBuilder_FieldInfo__o System_RuntimeType__GetFieldCandidates (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, bool allowPrefixLookup, const MethodInfo* method_info);
System_RuntimeType_ListBuilder_Type__o System_RuntimeType__GetNestedTypeCandidates (System_RuntimeType_o* __this, System_String_o* fullname, int32_t bindingAttr, bool allowPrefixLookup, const MethodInfo* method_info);
System_Reflection_MethodInfo_array* System_RuntimeType__GetMethods (System_RuntimeType_o* __this, int32_t bindingAttr, const MethodInfo* method_info);
System_Reflection_ConstructorInfo_array* System_RuntimeType__GetConstructors (System_RuntimeType_o* __this, int32_t bindingAttr, const MethodInfo* method_info);
System_Reflection_FieldInfo_array* System_RuntimeType__GetFields (System_RuntimeType_o* __this, int32_t bindingAttr, const MethodInfo* method_info);
System_Reflection_MethodInfo_o* System_RuntimeType__GetMethodImpl (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, System_Reflection_Binder_o* binder, int32_t callConv, System_Type_array* types, System_Reflection_ParameterModifier_array* modifiers, const MethodInfo* method_info);
System_Reflection_ConstructorInfo_o* System_RuntimeType__GetConstructorImpl (System_RuntimeType_o* __this, int32_t bindingAttr, System_Reflection_Binder_o* binder, int32_t callConvention, System_Type_array* types, System_Reflection_ParameterModifier_array* modifiers, const MethodInfo* method_info);
System_Reflection_PropertyInfo_o* System_RuntimeType__GetPropertyImpl (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, System_Reflection_Binder_o* binder, System_Type_o* returnType, System_Type_array* types, System_Reflection_ParameterModifier_array* modifiers, const MethodInfo* method_info);
System_Reflection_EventInfo_o* System_RuntimeType__GetEvent (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, const MethodInfo* method_info);
System_Reflection_FieldInfo_o* System_RuntimeType__GetField (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__GetNestedType (System_RuntimeType_o* __this, System_String_o* fullname, int32_t bindingAttr, const MethodInfo* method_info);
System_Reflection_MemberInfo_array* System_RuntimeType__GetMember (System_RuntimeType_o* __this, System_String_o* name, int32_t type, int32_t bindingAttr, const MethodInfo* method_info);
System_Reflection_Module_o* System_RuntimeType__get_Module (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Reflection_RuntimeModule_o* System_RuntimeType__GetRuntimeModule (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Reflection_Assembly_o* System_RuntimeType__get_Assembly (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Reflection_RuntimeAssembly_o* System_RuntimeType__GetRuntimeAssembly (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_RuntimeTypeHandle_o System_RuntimeType__get_TypeHandle (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__IsInstanceOfType (System_RuntimeType_o* __this, Il2CppObject* o, const MethodInfo* method_info);
bool System_RuntimeType__IsSubclassOf (System_RuntimeType_o* __this, System_Type_o* type, const MethodInfo* method_info);
bool System_RuntimeType__IsAssignableFrom (System_RuntimeType_o* __this, System_Type_o* c, const MethodInfo* method_info);
bool System_RuntimeType__IsEquivalentTo (System_RuntimeType_o* __this, System_Type_o* other, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__get_BaseType (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_RuntimeType_o* System_RuntimeType__GetBaseType (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__get_UnderlyingSystemType (System_RuntimeType_o* __this, const MethodInfo* method_info);
int32_t System_RuntimeType__GetAttributeFlagsImpl (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__IsContextfulImpl (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__IsByRefImpl (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__IsPrimitiveImpl (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__IsPointerImpl (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__IsCOMObjectImpl (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__IsValueTypeImpl (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__get_IsEnum (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__HasElementTypeImpl (System_RuntimeType_o* __this, const MethodInfo* method_info);
int32_t System_RuntimeType__get_GenericParameterAttributes (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__get_IsSzArray (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__IsArrayImpl (System_RuntimeType_o* __this, const MethodInfo* method_info);
int32_t System_RuntimeType__GetArrayRank (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__GetElementType (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_String_array* System_RuntimeType__GetEnumNames (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Array_o* System_RuntimeType__GetEnumValues (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__GetEnumUnderlyingType (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__IsEnumDefined (System_RuntimeType_o* __this, Il2CppObject* value, const MethodInfo* method_info);
System_String_o* System_RuntimeType__GetEnumName (System_RuntimeType_o* __this, Il2CppObject* value, const MethodInfo* method_info);
System_RuntimeType_array* System_RuntimeType__GetGenericArgumentsInternal (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_array* System_RuntimeType__GetGenericArguments (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__MakeGenericType (System_RuntimeType_o* __this, System_Type_array* instantiation, const MethodInfo* method_info);
bool System_RuntimeType__get_IsGenericTypeDefinition (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__get_IsGenericParameter (System_RuntimeType_o* __this, const MethodInfo* method_info);
int32_t System_RuntimeType__get_GenericParameterPosition (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__GetGenericTypeDefinition (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__get_IsGenericType (System_RuntimeType_o* __this, const MethodInfo* method_info);
Il2CppObject* System_RuntimeType__InvokeMember (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingFlags, System_Reflection_Binder_o* binder, Il2CppObject* target, System_Object_array* providedArgs, System_Reflection_ParameterModifier_array* modifiers, System_Globalization_CultureInfo_o* culture, System_String_array* namedParams, const MethodInfo* method_info);
bool System_RuntimeType__Equals (System_RuntimeType_o* __this, Il2CppObject* obj, const MethodInfo* method_info);
bool System_RuntimeType__op_Equality (System_RuntimeType_o* left, System_RuntimeType_o* right, const MethodInfo* method_info);
bool System_RuntimeType__op_Inequality (System_RuntimeType_o* left, System_RuntimeType_o* right, const MethodInfo* method_info);
Il2CppObject* System_RuntimeType__Clone (System_RuntimeType_o* __this, const MethodInfo* method_info);
void System_RuntimeType__GetObjectData (System_RuntimeType_o* __this, System_Runtime_Serialization_SerializationInfo_o* info, System_Runtime_Serialization_StreamingContext_o context, const MethodInfo* method_info);
System_Object_array* System_RuntimeType__GetCustomAttributes (System_RuntimeType_o* __this, bool inherit, const MethodInfo* method_info);
System_Object_array* System_RuntimeType__GetCustomAttributes (System_RuntimeType_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
bool System_RuntimeType__IsDefined (System_RuntimeType_o* __this, System_Type_o* attributeType, bool inherit, const MethodInfo* method_info);
System_Collections_Generic_IList_CustomAttributeData__o* System_RuntimeType__GetCustomAttributesData (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_String_o* System_RuntimeType__FormatTypeName (System_RuntimeType_o* __this, bool serialization, const MethodInfo* method_info);
int32_t System_RuntimeType__get_MemberType (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__get_ReflectedType (System_RuntimeType_o* __this, const MethodInfo* method_info);
int32_t System_RuntimeType__get_MetadataToken (System_RuntimeType_o* __this, const MethodInfo* method_info);
void System_RuntimeType__CreateInstanceCheckThis (System_RuntimeType_o* __this, const MethodInfo* method_info);
Il2CppObject* System_RuntimeType__CreateInstanceImpl (System_RuntimeType_o* __this, int32_t bindingAttr, System_Reflection_Binder_o* binder, System_Object_array* args, System_Globalization_CultureInfo_o* culture, System_Object_array* activationAttributes, int32_t* stackMark, const MethodInfo* method_info);
Il2CppObject* System_RuntimeType__CreateInstanceDefaultCtor (System_RuntimeType_o* __this, bool publicOnly, bool skipCheckThis, bool fillCache, int32_t* stackMark, const MethodInfo* method_info);
System_Reflection_MonoCMethod_o* System_RuntimeType__GetDefaultConstructor (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_String_o* System_RuntimeType__GetDefaultMemberName (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Reflection_RuntimeConstructorInfo_o* System_RuntimeType__GetSerializationCtor (System_RuntimeType_o* __this, const MethodInfo* method_info);
Il2CppObject* System_RuntimeType__CreateInstanceSlow (System_RuntimeType_o* __this, bool publicOnly, bool skipCheckThis, bool fillCache, int32_t* stackMark, const MethodInfo* method_info);
Il2CppObject* System_RuntimeType__CreateInstanceMono (System_RuntimeType_o* __this, bool nonPublic, const MethodInfo* method_info);
Il2CppObject* System_RuntimeType__CheckValue (System_RuntimeType_o* __this, Il2CppObject* value, System_Reflection_Binder_o* binder, System_Globalization_CultureInfo_o* culture, int32_t invokeAttr, const MethodInfo* method_info);
Il2CppObject* System_RuntimeType__TryConvertToType (System_RuntimeType_o* __this, Il2CppObject* value, bool* failed, const MethodInfo* method_info);
Il2CppObject* System_RuntimeType__IsConvertibleToPrimitiveType (Il2CppObject* value, System_Type_o* targetType, const MethodInfo* method_info);
System_String_o* System_RuntimeType__GetCachedName (System_RuntimeType_o* __this, int32_t kind, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__make_array_type (System_RuntimeType_o* __this, int32_t rank, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__MakeArrayType (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__MakeArrayType (System_RuntimeType_o* __this, int32_t rank, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__make_byref_type (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__MakeByRefType (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__MakePointerType (System_Type_o* type, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__MakePointerType (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__get_ContainsGenericParameters (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_array* System_RuntimeType__GetGenericParameterConstraints (System_RuntimeType_o* __this, const MethodInfo* method_info);
Il2CppObject* System_RuntimeType__CreateInstanceForAnotherGenericParameter (System_Type_o* genericType, System_RuntimeType_o* genericArgument, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__MakeGenericType (System_Type_o* gt, System_Type_array* types, const MethodInfo* method_info);
intptr_t System_RuntimeType__GetMethodsByName_native (System_RuntimeType_o* __this, intptr_t namePtr, int32_t bindingAttr, bool ignoreCase, const MethodInfo* method_info);
System_Reflection_RuntimeMethodInfo_array* System_RuntimeType__GetMethodsByName (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, bool ignoreCase, System_RuntimeType_o* reflectedType, const MethodInfo* method_info);
intptr_t System_RuntimeType__GetPropertiesByName_native (System_RuntimeType_o* __this, intptr_t name, int32_t bindingAttr, bool icase, const MethodInfo* method_info);
intptr_t System_RuntimeType__GetConstructors_native (System_RuntimeType_o* __this, int32_t bindingAttr, const MethodInfo* method_info);
System_Reflection_RuntimeConstructorInfo_array* System_RuntimeType__GetConstructors_internal (System_RuntimeType_o* __this, int32_t bindingAttr, System_RuntimeType_o* reflectedType, const MethodInfo* method_info);
System_Reflection_RuntimePropertyInfo_array* System_RuntimeType__GetPropertiesByName (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, bool icase, System_RuntimeType_o* reflectedType, const MethodInfo* method_info);
int32_t System_RuntimeType__GetTypeCodeImpl (System_RuntimeType_o* __this, const MethodInfo* method_info);
int32_t System_RuntimeType__GetTypeCodeImplInternal (System_Type_o* type, const MethodInfo* method_info);
System_String_o* System_RuntimeType__ToString (System_RuntimeType_o* __this, const MethodInfo* method_info);
bool System_RuntimeType__IsGenericCOMObjectImpl (System_RuntimeType_o* __this, const MethodInfo* method_info);
Il2CppObject* System_RuntimeType__CreateInstanceInternal (System_Type_o* type, const MethodInfo* method_info);
System_Reflection_MethodBase_o* System_RuntimeType__get_DeclaringMethod (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_String_o* System_RuntimeType__getFullName (System_RuntimeType_o* __this, bool full_name, bool assembly_qualified, const MethodInfo* method_info);
System_Type_array* System_RuntimeType__GetGenericArgumentsInternal (System_RuntimeType_o* __this, bool runtimeArray, const MethodInfo* method_info);
int32_t System_RuntimeType__GetGenericParameterAttributes (System_RuntimeType_o* __this, const MethodInfo* method_info);
int32_t System_RuntimeType__GetGenericParameterPosition (System_RuntimeType_o* __this, const MethodInfo* method_info);
intptr_t System_RuntimeType__GetEvents_native (System_RuntimeType_o* __this, intptr_t name, int32_t bindingAttr, const MethodInfo* method_info);
intptr_t System_RuntimeType__GetFields_native (System_RuntimeType_o* __this, intptr_t name, int32_t bindingAttr, const MethodInfo* method_info);
System_Reflection_RuntimeFieldInfo_array* System_RuntimeType__GetFields_internal (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, System_RuntimeType_o* reflectedType, const MethodInfo* method_info);
System_Reflection_RuntimeEventInfo_array* System_RuntimeType__GetEvents_internal (System_RuntimeType_o* __this, System_String_o* name, int32_t bindingAttr, System_RuntimeType_o* reflectedType, const MethodInfo* method_info);
System_Type_array* System_RuntimeType__GetInterfaces (System_RuntimeType_o* __this, const MethodInfo* method_info);
intptr_t System_RuntimeType__GetNestedTypes_native (System_RuntimeType_o* __this, intptr_t name, int32_t bindingAttr, const MethodInfo* method_info);
System_RuntimeType_array* System_RuntimeType__GetNestedTypes_internal (System_RuntimeType_o* __this, System_String_o* displayName, int32_t bindingAttr, const MethodInfo* method_info);
System_String_o* System_RuntimeType__get_AssemblyQualifiedName (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_Type_o* System_RuntimeType__get_DeclaringType (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_String_o* System_RuntimeType__get_Name (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_String_o* System_RuntimeType__get_Namespace (System_RuntimeType_o* __this, const MethodInfo* method_info);
int32_t System_RuntimeType__GetHashCode (System_RuntimeType_o* __this, const MethodInfo* method_info);
System_String_o* System_RuntimeType__get_FullName (System_RuntimeType_o* __this, const MethodInfo* method_info);
void System_RuntimeType___cctor (const MethodInfo* method_info);