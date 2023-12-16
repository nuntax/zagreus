#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_CustomGamesScreen.WB_CustomGamesScreen_C
// (None)

class UClass* UWB_CustomGamesScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_CustomGamesScreen_C");

	return Clss;
}


// WB_CustomGamesScreen_C WB_CustomGamesScreen.Default__WB_CustomGamesScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_CustomGamesScreen_C* UWB_CustomGamesScreen_C::GetDefaultObj()
{
	static class UWB_CustomGamesScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_CustomGamesScreen_C*>(UWB_CustomGamesScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.SetTeamButtonsEnabledState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_2                            (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CustomGamesScreen_C::SetTeamButtonsEnabledState(bool bIsEnabled, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "SetTeamButtonsEnabledState");

	Params::UWB_CustomGamesScreen_C_SetTeamButtonsEnabledState_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetAllChildren_ReturnValue_2 = CallFunc_GetAllChildren_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.SetRdyStartButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGGameliftSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsReady_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AllPlayersReady_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CustomGamesScreen_C::SetRdyStartButton(class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UAGGameliftSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_GetIsReady_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_AllPlayersReady_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "SetRdyStartButton");

	Params::UWB_CustomGamesScreen_C_SetRdyStartButton_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetIsReady_ReturnValue = CallFunc_GetIsReady_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AllPlayersReady_ReturnValue = CallFunc_AllPlayersReady_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.PopulateTeams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCustomGamePlayer>   Players                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomGamePlayer           CallFunc_Array_Get_Item                                          (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_CustomGames_TeamPlayer_C*K2Node_DynamicCast_AsWB_Custom_Games_Team_Player                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_CustomGames_TeamPlayer_C*K2Node_DynamicCast_AsWB_Custom_Games_Team_Player_1               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_2                            (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_CustomGames_TeamPlayer_C*K2Node_DynamicCast_AsWB_Custom_Games_Team_Player_2               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CustomGamesScreen_C::PopulateTeams(TArray<struct FCustomGamePlayer>& Players, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, const struct FCustomGamePlayer& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_Array_Get_Item_2, class UWB_CustomGames_TeamPlayer_C* K2Node_DynamicCast_AsWB_Custom_Games_Team_Player, bool K2Node_DynamicCast_bSuccess, class UWB_CustomGames_TeamPlayer_C* K2Node_DynamicCast_AsWB_Custom_Games_Team_Player_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, class UWidget* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UWB_CustomGames_TeamPlayer_C* K2Node_DynamicCast_AsWB_Custom_Games_Team_Player_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "PopulateTeams");

	Params::UWB_CustomGamesScreen_C_PopulateTeams_Params Parms{};

	Parms.Players = Players;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_DynamicCast_AsWB_Custom_Games_Team_Player = K2Node_DynamicCast_AsWB_Custom_Games_Team_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWB_Custom_Games_Team_Player_1 = K2Node_DynamicCast_AsWB_Custom_Games_Team_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllChildren_ReturnValue_2 = CallFunc_GetAllChildren_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsWB_Custom_Games_Team_Player_2 = K2Node_DynamicCast_AsWB_Custom_Games_Team_Player_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__Btn_LeaveGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::BndEvt__Btn_LeaveGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "BndEvt__Btn_LeaveGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.CreateCustomGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::CreateCustomGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "CreateCustomGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCreateCustomGame
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGame                 CurrentGame                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_CustomGamesScreen_C::OnCreateCustomGame(struct FCustomGame& CurrentGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnCreateCustomGame");

	Params::UWB_CustomGamesScreen_C_OnCreateCustomGame_Params Parms{};

	Parms.CurrentGame = CurrentGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnSendInvite
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOutgoingCustomGameInvite   Invite                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_CustomGamesScreen_C::OnSendInvite(struct FOutgoingCustomGameInvite& Invite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnSendInvite");

	Params::UWB_CustomGamesScreen_C_OnSendInvite_Params Parms{};

	Parms.Invite = Invite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnAcceptInvite
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGame                 CurrentGame                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_CustomGamesScreen_C::OnAcceptInvite(struct FCustomGame& CurrentGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnAcceptInvite");

	Params::UWB_CustomGamesScreen_C_OnAcceptInvite_Params Parms{};

	Parms.CurrentGame = CurrentGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGameDisbandedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::OnCustomGameDisbandedWs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnCustomGameDisbandedWs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerJoinedCustomGameWs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer           Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_CustomGamesScreen_C::OnPlayerJoinedCustomGameWs(struct FCustomGamePlayer& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnPlayerJoinedCustomGameWs");

	Params::UWB_CustomGamesScreen_C_OnPlayerJoinedCustomGameWs_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__Btn_Rdy_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::BndEvt__Btn_Rdy_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "BndEvt__Btn_Rdy_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnMatchmakingStatusChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingStatus      NewStatus                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CustomGamesScreen_C::OnMatchmakingStatusChanged(enum class EMatchmakingStatus& NewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnMatchmakingStatusChanged");

	Params::UWB_CustomGamesScreen_C_OnMatchmakingStatusChanged_Params Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerKickedWs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFCustomGameTeam        Team                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_CustomGamesScreen_C::OnPlayerKickedWs(enum class EFCustomGameTeam& Team, const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnPlayerKickedWs");

	Params::UWB_CustomGamesScreen_C_OnPlayerKickedWs_Params Parms{};

	Parms.Team = Team;
	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnPlayerReadyStateChangedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bIsReady                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CustomGamesScreen_C::OnPlayerReadyStateChangedWs(const class FString& PlayerId, bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnPlayerReadyStateChangedWs");

	Params::UWB_CustomGamesScreen_C_OnPlayerReadyStateChangedWs_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.bIsReady = bIsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.DescribeGameSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::DescribeGameSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "DescribeGameSession");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnDescribeGameSessionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::OnDescribeGameSessionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnDescribeGameSessionComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::OnCustomGamePlacementStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnCustomGamePlacementStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementCancelled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::OnCustomGamePlacementCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnCustomGamePlacementCancelled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.OnCustomGamePlacementFulfilled
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGamePlayer           Player                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      PlayerSessionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FCustomGamePlacementInfo    PlacementInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_CustomGamesScreen_C::OnCustomGamePlacementFulfilled(struct FCustomGamePlayer& Player, const class FString& PlayerSessionId, const class FString& Team, struct FCustomGamePlacementInfo& PlacementInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "OnCustomGamePlacementFulfilled");

	Params::UWB_CustomGamesScreen_C_OnCustomGamePlacementFulfilled_Params Parms{};

	Parms.Player = Player;
	Parms.PlayerSessionId = PlayerSessionId;
	Parms.Team = Team;
	Parms.PlacementInfo = PlacementInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__WB_MainMenu_Custom_Play_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::BndEvt__WB_MainMenu_Custom_Play_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "BndEvt__WB_MainMenu_Custom_Play_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "BndEvt__WB_MainMenu_CustomMatch_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.LeaveCustomGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::LeaveCustomGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "LeaveCustomGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.ExecuteUbergraph_WB_CustomGamesScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FCustomGame                 K2Node_CustomEvent_CurrentGame_1                                 (ConstParm)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UWB_Outgoing_CustomGames_Invite_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOutgoingCustomGameInvite   K2Node_CustomEvent_Invite                                        (ConstParm)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomGame                 K2Node_CustomEvent_CurrentGame                                   (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FCustomGamePlayer           K2Node_CustomEvent_Player_1                                      (ConstParm)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Outgoing_CustomGames_Invite_C*K2Node_DynamicCast_AsWB_Outgoing_Custom_Games_Invite             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGGameliftSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsReady_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// enum class EMatchmakingStatus      K2Node_CustomEvent_NewStatus                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsReady_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFCustomGameTeam        K2Node_CustomEvent_Team_1                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerId_1                                    (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_PlayerId                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsReady                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IBPi_ButtonManager_C>CallFunc_GetButtonManager_ButtonManager                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_13                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FCustomGamePlayer           K2Node_CustomEvent_Player                                        (ConstParm)
// class FString                      K2Node_CustomEvent_PlayerSessionId                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Team                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FCustomGamePlacementInfo    K2Node_CustomEvent_PlacementInfo                                 (ConstParm)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_14                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_15                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_16                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_17                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CustomGamesScreen_C::ExecuteUbergraph_WB_CustomGamesScreen(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FCustomGame& K2Node_CustomEvent_CurrentGame_1, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWB_Outgoing_CustomGames_Invite_C* CallFunc_Create_ReturnValue, const struct FOutgoingCustomGameInvite& K2Node_CustomEvent_Invite, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const struct FCustomGame& K2Node_CustomEvent_CurrentGame, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FCustomGamePlayer& K2Node_CustomEvent_Player_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, class UWidget* CallFunc_Array_Get_Item, class UWB_Outgoing_CustomGames_Invite_C* K2Node_DynamicCast_AsWB_Outgoing_Custom_Games_Invite, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, class UAGGameliftSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, bool CallFunc_GetIsReady_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EMatchmakingStatus K2Node_CustomEvent_NewStatus, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_11, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_GetIsReady_ReturnValue_1, enum class EFCustomGameTeam K2Node_CustomEvent_Team_1, const class FString& K2Node_CustomEvent_PlayerId_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_12, const class FString& K2Node_CustomEvent_PlayerId, bool K2Node_CustomEvent_bIsReady, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, TScriptInterface<class IBPi_ButtonManager_C> CallFunc_GetButtonManager_ButtonManager, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FCustomGamePlayer& K2Node_CustomEvent_Player, const class FString& K2Node_CustomEvent_PlayerSessionId, const class FString& K2Node_CustomEvent_Team, const struct FCustomGamePlacementInfo& K2Node_CustomEvent_PlacementInfo, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_16, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_17)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "ExecuteUbergraph_WB_CustomGamesScreen");

	Params::UWB_CustomGamesScreen_C_ExecuteUbergraph_WB_CustomGamesScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance = K2Node_DynamicCast_AsBP_AGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_CurrentGame_1 = K2Node_CustomEvent_CurrentGame_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Invite = K2Node_CustomEvent_Invite;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.K2Node_CustomEvent_CurrentGame = K2Node_CustomEvent_CurrentGame;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_1 = K2Node_DynamicCast_AsBP_AGGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Player_1 = K2Node_CustomEvent_Player_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWB_Outgoing_Custom_Games_Invite = K2Node_DynamicCast_AsWB_Outgoing_Custom_Games_Invite;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_7 = CallFunc_GetGameInstanceSubsystem_ReturnValue_7;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_8 = CallFunc_GetGameInstanceSubsystem_ReturnValue_8;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_9 = CallFunc_GetGameInstanceSubsystem_ReturnValue_9;
	Parms.CallFunc_GetIsReady_ReturnValue = CallFunc_GetIsReady_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_10 = CallFunc_GetGameInstanceSubsystem_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NewStatus = K2Node_CustomEvent_NewStatus;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_11 = CallFunc_GetGameInstanceSubsystem_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_2 = K2Node_DynamicCast_AsBP_AGGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetIsReady_ReturnValue_1 = CallFunc_GetIsReady_ReturnValue_1;
	Parms.K2Node_CustomEvent_Team_1 = K2Node_CustomEvent_Team_1;
	Parms.K2Node_CustomEvent_PlayerId_1 = K2Node_CustomEvent_PlayerId_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_12 = CallFunc_GetGameInstanceSubsystem_ReturnValue_12;
	Parms.K2Node_CustomEvent_PlayerId = K2Node_CustomEvent_PlayerId;
	Parms.K2Node_CustomEvent_bIsReady = K2Node_CustomEvent_bIsReady;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetButtonManager_ButtonManager = CallFunc_GetButtonManager_ButtonManager;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_13 = CallFunc_GetGameInstanceSubsystem_ReturnValue_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.K2Node_CustomEvent_PlayerSessionId = K2Node_CustomEvent_PlayerSessionId;
	Parms.K2Node_CustomEvent_Team = K2Node_CustomEvent_Team;
	Parms.K2Node_CustomEvent_PlacementInfo = K2Node_CustomEvent_PlacementInfo;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_14 = CallFunc_GetGameInstanceSubsystem_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_15 = CallFunc_GetGameInstanceSubsystem_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_16 = CallFunc_GetGameInstanceSubsystem_ReturnValue_16;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_17 = CallFunc_GetGameInstanceSubsystem_ReturnValue_17;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_CustomGamesScreen.WB_CustomGamesScreen_C.CustomGameLoadFriends__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_CustomGamesScreen_C::CustomGameLoadFriends__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_CustomGamesScreen_C", "CustomGameLoadFriends__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


