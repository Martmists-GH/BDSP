#pragma once

#include "il2cpp.h"

bool Dpr_SubContents_Utils__get_PushA (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PushB (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PushX (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PushY (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PushR (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PushL (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PushZL (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PushZR (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PushPulsMinus (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PushRStick (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PushAorB (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PressA (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PressB (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PressX (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PressY (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PressR (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PressL (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PressZR (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_PressZL (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_KeyLeft (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_KeyRight (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_KeyDown (const MethodInfo* method_info);
bool Dpr_SubContents_Utils__get_KeyUp (const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_SubContents_Utils__LoadEffect (int32_t id, UnityEngine_Events_UnityAction_EffectData__o* OnLoad, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_SubContents_Utils__LoadEffect (int32_t id, UnityEngine_Events_UnityAction_EffectData__o* OnLoad, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_SubContents_Utils__LoadEffect (int32_t id, UnityEngine_Events_UnityAction_EffectData__o* OnLoad, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_SubContents_Utils__LoadAsset (System_String_o* path, System_Action_Object__o* OnLoad, bool isVariant, bool useAssetUnloader, const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__GetPokemonAssetbundleName (System_String_o* AssetBundleName, const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__GetBattlePokemonAssetbundleName (System_String_o* AssetBundleName, const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__GetAssetNamebyPath (System_String_o* AssetBundlePath, const MethodInfo* method_info);
XLSXContent_PokemonInfo_SheetCatalog_o* Dpr_SubContents_Utils__GetPokemonCatalog (Pml_PokePara_PokemonParam_o* p, const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__GetBallModelPath (uint8_t ballId, const MethodInfo* method_info);
void Dpr_SubContents_Utils__DrawMessage (Dpr_MsgWindow_MsgWindowParam_o* param, Dpr_MsgWindow_MsgWindow_o** window, const MethodInfo* method_info);
Dpr_MsgWindow_MsgWindowParam_o* Dpr_SubContents_Utils__CreateMsgWindowParam (System_String_o* msgFileName, System_String_o* labelName, bool inputClose, bool inputEnable, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__GetUISortingOrderMax (const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__KinomiID_to_ItemID (int32_t kinomiID, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_SubContents_Utils__ZukanTouroku (Pml_PokePara_PokemonParam_o* p, Dpr_Demo_DemoSceneManager_o* manager, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_SubContents_Utils__ZukanTouroku (Pml_PokePara_PokemonParam_o* p, Dpr_Demo_DemoSceneManager_o* manager, bool isGetMons, const MethodInfo* method_info);
Audio_AudioInstance_o* Dpr_SubContents_Utils__PlayVoice (int32_t monsNo, int32_t formNo, int32_t voiceNo, UnityEngine_Events_UnityAction_AudioInstance__o* onFinished, const MethodInfo* method_info);
Audio_AudioInstance_o* Dpr_SubContents_Utils__PlayVoiceEV (int32_t monsNo, int32_t formNo, int32_t voiceNo, UnityEngine_Events_UnityAction_AudioInstance__o* onFinished, UnityEngine_Transform_o* t, const MethodInfo* method_info);
Audio_AudioInstance_o* Dpr_SubContents_Utils__PlayVoice (int32_t monsNo, int32_t formNo, int32_t voiceNo, Dpr_SubContents_VoicePlayerAmbient_o* voicePlayer, const MethodInfo* method_info);
void Dpr_SubContents_Utils__StopVoice (const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__GetVoiceID_EV (int32_t monsNo, int32_t formNo, int32_t voiceNo, const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__GetVoiceID (int32_t monsNo, int32_t formNo, int32_t voiceNo, const MethodInfo* method_info);
bool Dpr_SubContents_Utils__IsPikaV (int32_t monsNo, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayVoicePikaBui_NakayoshiRank (int32_t monsNo, int32_t FriendRank, Dpr_SubContents_VoicePlayerAmbient_o* voicePlayer, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__GetVoicePikaBui_NakayoshiRank (int32_t monsNo, int32_t FriendRank, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__GetNakayoshiRankMotion (int32_t FriendRank, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayVoicePikaBui_Notice (int32_t monsNo, int32_t FriendRank, Dpr_SubContents_VoicePlayerAmbient_o* voicePlayer, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayVoicePikaBui_Poffin (int32_t monsNo, int32_t motionID, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayVoicePikaBui_Yobiyose (int32_t monsNo, Dpr_SubContents_VoicePlayerAmbient_o* voicePlayer, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayVoicePikaBui_Kaisan (int32_t monsNo, Dpr_SubContents_VoicePlayerAmbient_o* voicePlayer, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayVoicePikaBui_Roar (int32_t monsNo, Dpr_SubContents_VoicePlayerAmbient_o* voicePlayer, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayVoicePikaBui_Drowse (int32_t monsNo, int32_t sequence, Dpr_SubContents_VoicePlayerAmbient_o* voicePlayer, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayVoicePikaBui_Touch (int32_t monsNo, Dpr_SubContents_VoicePlayerAmbient_o* voicePlayer, const MethodInfo* method_info);
bool Dpr_SubContents_Utils__IsExistAnim (int32_t index, AnimationPlayer_o* animPlayer, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__GetExistAnim (FieldObjectEntity_o* entity, System_Int32_array* AnimationIdList, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__GetExistAnim (AnimationPlayer_o* animPlayer, System_Int32_array* AnimationIdList, const MethodInfo* method_info);
void Dpr_SubContents_Utils__WaitFrame (int32_t frame, System_Action_o* act, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_SubContents_Utils__WaitFrameCoroutine (int32_t frame, System_Action_o* act, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__GetNakayoshiRank (uint32_t friendship, const MethodInfo* method_info);
void Dpr_SubContents_Utils__ArrayDestroy (System_Object_array* objects, const MethodInfo* method_info);
float Dpr_SubContents_Utils__Vector2ToAngle (UnityEngine_Vector2_o input, float offset, const MethodInfo* method_info);
bool Dpr_SubContents_Utils__IsInDistance (UnityEngine_Vector3_o pos1, UnityEngine_Vector3_o pos2, float targetDistance, const MethodInfo* method_info);
void Dpr_SubContents_Utils__GetAttribute (UnityEngine_Vector3_o pos, int32_t* code, int32_t* stop, const MethodInfo* method_info);
bool Dpr_SubContents_Utils__CheckAttributeEnterable (UnityEngine_Vector2Int_o pos, const MethodInfo* method_info);
bool Dpr_SubContents_Utils__CheckAttributeEnterable (UnityEngine_Vector3_o pos, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__GetWallDir (UnityEngine_Vector2Int_o pos, const MethodInfo* method_info);
bool Dpr_SubContents_Utils__IsAdjacent (UnityEngine_Vector2Int_o pos, UnityEngine_Vector2Int_o targetPos, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__isEnterbleAttribute (UnityEngine_Vector3_o pos, int32_t moveType, bool isFureai, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__isEnterbleAttribute (int32_t code, int32_t stop, int32_t moveType, const MethodInfo* method_info);
bool Dpr_SubContents_Utils__isNotExistsCollision (UnityEngine_Vector3_o pos, const MethodInfo* method_info);
void Dpr_SubContents_Utils__GuruguruRisingStart (const MethodInfo* method_info);
void Dpr_SubContents_Utils__GuruguruFallStart (const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_SubContents_Utils__PlayerGuruguruStop (float angle, float height, bool isRising, System_Action_o* OnComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_SubContents_Utils__PlayerFallStop (float height, bool isRising, System_Action_o* OnComplete, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_SubContents_Utils__OtherPlayerRising (float height, FieldObjectEntity_o* entity, System_Action_o* OnComplete, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayerGuruguru (float deltaTime, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayerRising (float deltaTime, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayerFall (float deltaTime, const MethodInfo* method_info);
float Dpr_SubContents_Utils__GetGuruGuruHeight (int32_t zoneID, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayGuruguruSE (bool isRising, const MethodInfo* method_info);
System_Collections_IEnumerator_o* Dpr_SubContents_Utils__CreateNPC (UnityEngine_Vector2Int_o grid, System_String_o* assetPath, System_Action_FieldObjectEntity__o* OnLoad, const MethodInfo* method_info);
void Dpr_SubContents_Utils__BGM_FadeOut (float duration, System_Action_o* OnComplete, const MethodInfo* method_info);
void Dpr_SubContents_Utils__PlayCurrentFieldBGM (bool isIgnoreEvent, const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__CheckNGTrainerName (System_String_o** trainerName, int32_t langId, const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__CheckNGTrainerName (System_String_o** trainerName, int32_t langId, int32_t cassetVersion, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__GetPersonNameLength (const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__CheckNGPokeName (System_String_o** nickname, int32_t monsNo, int32_t langId, const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__CheckNGPokeName (Pml_PokePara_PokemonParam_o* param, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__GetMonsNameLength (const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__CheckNGGroupName (System_String_o** groupName, int32_t langId, int32_t cassetVersion, const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__GetReplacedNGName (int32_t cassetVersion, const MethodInfo* method_info);
void Dpr_SubContents_Utils__OpenPasswordSoftwareKeyboard (System_Action_bool__string__o* result, const MethodInfo* method_info);
int32_t Dpr_SubContents_Utils__GetPokeRarityNum (int32_t monsNo, const MethodInfo* method_info);
bool Dpr_SubContents_Utils__CheckInvalidTradePoke (int32_t monsNo, const MethodInfo* method_info);
System_String_o* Dpr_SubContents_Utils__GetPlayerIdText (uint32_t id, const MethodInfo* method_info);
uint32_t Dpr_SubContents_Utils__GetPlayerPartyCount (const MethodInfo* method_info);
Pml_PokePara_PokemonParam_o* Dpr_SubContents_Utils__UpdateTranerMemo (Pml_PokePara_PokemonParam_o* updateParam, const MethodInfo* method_info);
void Dpr_SubContents_Utils___cctor (const MethodInfo* method_info);
bool Dpr_SubContents_Utils___PlayerGuruguruStop_g__CheckHeight_117_0 (Dpr_SubContents_Utils___c__DisplayClass117_0_o* , const MethodInfo* method_info);
bool Dpr_SubContents_Utils___PlayerFallStop_g__CheckHeight_118_0 (Dpr_SubContents_Utils___c__DisplayClass118_0_o* , const MethodInfo* method_info);
bool Dpr_SubContents_Utils___OtherPlayerRising_g__CheckHeight_119_0 (Dpr_SubContents_Utils___c__DisplayClass119_0_o* , const MethodInfo* method_info);