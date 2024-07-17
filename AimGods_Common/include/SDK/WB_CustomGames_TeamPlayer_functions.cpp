#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C
// (None)

class UClass* UWB_CustomGames_TeamPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_CustomGames_TeamPlayer_C");

	return Clss;
}


// WB_CustomGames_TeamPlayer_C WB_CustomGames_TeamPlayer.Default__WB_CustomGames_TeamPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_CustomGames_TeamPlayer_C* UWB_CustomGames_TeamPlayer_C::GetDefaultObj()
{
	static class UWB_CustomGames_TeamPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_CustomGames_TeamPlayer_C*>(UWB_CustomGames_TeamPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFCustomGameTeam        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CustomGames_TeamPlayer_C::Initialize(enum class EFCustomGameTeam Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "Initialize");

	Params::UWB_CustomGames_TeamPlayer_C_Initialize_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.SetKickBtnVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLeader_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CustomGames_TeamPlayer_C::SetKickBtnVisibility(class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetIsLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "SetKickBtnVisibility");

	Params::UWB_CustomGames_TeamPlayer_C_SetKickBtnVisibility_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIsLeader_ReturnValue = CallFunc_GetIsLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.RemovePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CustomGames_TeamPlayer_C::RemovePlayer(const struct FCustomGamePlayer& Player, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "RemovePlayer");

	Params::UWB_CustomGames_TeamPlayer_C_RemovePlayer_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.SetPlayerIfMatches
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CustomGames_TeamPlayer_C::SetPlayerIfMatches(struct FCustomGamePlayer& Player, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "SetPlayerIfMatches");

	Params::UWB_CustomGames_TeamPlayer_C_SetPlayerIfMatches_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_CustomGames_TeamPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.BndEvt__Btn_Row_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_CustomGames_TeamPlayer_C::BndEvt__Btn_Row_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "BndEvt__Btn_Row_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerChangedTeamWs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer           Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_CustomGames_TeamPlayer_C::OnPlayerChangedTeamWs(struct FCustomGamePlayer& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "OnPlayerChangedTeamWs");

	Params::UWB_CustomGames_TeamPlayer_C_OnPlayerChangedTeamWs_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.RefreshVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_CustomGames_TeamPlayer_C::RefreshVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "RefreshVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.TrySetPlayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer           Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_CustomGames_TeamPlayer_C::TrySetPlayer(struct FCustomGamePlayer& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "TrySetPlayer");

	Params::UWB_CustomGames_TeamPlayer_C_TrySetPlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerJoinedCustomGameWs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer           Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_CustomGames_TeamPlayer_C::OnPlayerJoinedCustomGameWs(struct FCustomGamePlayer& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "OnPlayerJoinedCustomGameWs");

	Params::UWB_CustomGames_TeamPlayer_C_OnPlayerJoinedCustomGameWs_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerLeftCustomGameWs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer           Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_CustomGames_TeamPlayer_C::OnPlayerLeftCustomGameWs(struct FCustomGamePlayer& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "OnPlayerLeftCustomGameWs");

	Params::UWB_CustomGames_TeamPlayer_C_OnPlayerLeftCustomGameWs_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerReadyStateChangedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bIsReady                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CustomGames_TeamPlayer_C::OnPlayerReadyStateChangedWs(const class FString& PlayerId, bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "OnPlayerReadyStateChangedWs");

	Params::UWB_CustomGames_TeamPlayer_C_OnPlayerReadyStateChangedWs_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.bIsReady = bIsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.BndEvt__Btn_Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_CustomGames_TeamPlayer_C::BndEvt__Btn_Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "BndEvt__Btn_Kick_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.OnPlayerKickedWs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFCustomGameTeam        Team                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_CustomGames_TeamPlayer_C::OnPlayerKickedWs(enum class EFCustomGameTeam& Team, const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "OnPlayerKickedWs");

	Params::UWB_CustomGames_TeamPlayer_C_OnPlayerKickedWs_Params Parms{};

	Parms.Team = Team;
	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CustomGames_TeamPlayer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "PreConstruct");

	Params::UWB_CustomGames_TeamPlayer_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGames_TeamPlayer.WB_CustomGames_TeamPlayer_C.ExecuteUbergraph_WB_CustomGames_TeamPlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FCustomGamePlayer           K2Node_CustomEvent_Player_3                                      (ConstParm)
// struct FCustomGamePlayer           K2Node_CustomEvent_Player_2                                      (ConstParm)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomGamePlayer           K2Node_CustomEvent_Player_1                                      (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomGamePlayer           K2Node_CustomEvent_Player                                        (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerId_1                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsReady                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFCustomGameTeam        K2Node_CustomEvent_Team                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerId                                      (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CustomGames_TeamPlayer_C::ExecuteUbergraph_WB_CustomGames_TeamPlayer(int32 EntryPoint, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FCustomGamePlayer& K2Node_CustomEvent_Player_3, const struct FCustomGamePlayer& K2Node_CustomEvent_Player_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const struct FCustomGamePlayer& K2Node_CustomEvent_Player_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, const struct FCustomGamePlayer& K2Node_CustomEvent_Player, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, const class FString& K2Node_CustomEvent_PlayerId_1, bool K2Node_CustomEvent_bIsReady, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, enum class EFCustomGameTeam K2Node_CustomEvent_Team, const class FString& K2Node_CustomEvent_PlayerId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGames_TeamPlayer_C", "ExecuteUbergraph_WB_CustomGames_TeamPlayer");

	Params::UWB_CustomGames_TeamPlayer_C_ExecuteUbergraph_WB_CustomGames_TeamPlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Player_3 = K2Node_CustomEvent_Player_3;
	Parms.K2Node_CustomEvent_Player_2 = K2Node_CustomEvent_Player_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.K2Node_CustomEvent_Player_1 = K2Node_CustomEvent_Player_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.K2Node_CustomEvent_PlayerId_1 = K2Node_CustomEvent_PlayerId_1;
	Parms.K2Node_CustomEvent_bIsReady = K2Node_CustomEvent_bIsReady;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.K2Node_CustomEvent_Team = K2Node_CustomEvent_Team;
	Parms.K2Node_CustomEvent_PlayerId = K2Node_CustomEvent_PlayerId;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


