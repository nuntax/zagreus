#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AGPlayerController.BP_AGPlayerController_C
// (Actor, PlayerController)

class UClass* ABP_AGPlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AGPlayerController_C");

	return Clss;
}


// BP_AGPlayerController_C BP_AGPlayerController.Default__BP_AGPlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AGPlayerController_C* ABP_AGPlayerController_C::GetDefaultObj()
{
	static class ABP_AGPlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AGPlayerController_C*>(ABP_AGPlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AGPlayerController.BP_AGPlayerController_C.LoadSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping                            (None)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_1                          (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_2                          (None)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_3                          (None)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_4                          (None)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_5                          (None)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_6                          (None)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping_7                          (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_AGSaveGame_C*            K2Node_DynamicCast_AsWB_AGSave_Game                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AGPlayerController_C::LoadSettings(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_2, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_3, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_4, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_5, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_6, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping_7, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UWB_AGSaveGame_C* K2Node_DynamicCast_AsWB_AGSave_Game, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "LoadSettings");

	Params::ABP_AGPlayerController_C_LoadSettings_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance = K2Node_DynamicCast_AsBP_AGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping = K2Node_MakeStruct_InputAxisKeyMapping;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_1 = K2Node_MakeStruct_InputAxisKeyMapping_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_2 = K2Node_MakeStruct_InputAxisKeyMapping_2;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_3 = K2Node_MakeStruct_InputAxisKeyMapping_3;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_4 = K2Node_MakeStruct_InputAxisKeyMapping_4;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_5 = K2Node_MakeStruct_InputAxisKeyMapping_5;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_6 = K2Node_MakeStruct_InputAxisKeyMapping_6;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping_7 = K2Node_MakeStruct_InputAxisKeyMapping_7;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_AGSave_Game = K2Node_DynamicCast_AsWB_AGSave_Game;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_SettingMenu_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_AGPlayerController_C::InpActEvt_SettingMenu_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "InpActEvt_SettingMenu_K2Node_InputActionEvent_4");

	Params::ABP_AGPlayerController_C_InpActEvt_SettingMenu_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_ShowPlayersState_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_AGPlayerController_C::InpActEvt_ShowPlayersState_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "InpActEvt_ShowPlayersState_K2Node_InputActionEvent_3");

	Params::ABP_AGPlayerController_C_InpActEvt_ShowPlayersState_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_ShowPlayersState_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_AGPlayerController_C::InpActEvt_ShowPlayersState_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "InpActEvt_ShowPlayersState_K2Node_InputActionEvent_2");

	Params::ABP_AGPlayerController_C_InpActEvt_ShowPlayersState_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_ü_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_AGPlayerController_C::InpActEvt___K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "InpActEvt_ü_K2Node_InputKeyEvent_3");

	Params::ABP_AGPlayerController_C_InpActEvt___K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_ö_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_AGPlayerController_C::InpActEvt___K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "InpActEvt_ö_K2Node_InputKeyEvent_2");

	Params::ABP_AGPlayerController_C_InpActEvt___K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_ä_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_AGPlayerController_C::InpActEvt___K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "InpActEvt_ä_K2Node_InputKeyEvent_1");

	Params::ABP_AGPlayerController_C_InpActEvt___K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_F10_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_AGPlayerController_C::InpActEvt_F10_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "InpActEvt_F10_K2Node_InputKeyEvent_0");

	Params::ABP_AGPlayerController_C_InpActEvt_F10_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_CheatOpenShop_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_AGPlayerController_C::InpActEvt_CheatOpenShop_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "InpActEvt_CheatOpenShop_K2Node_InputActionEvent_1");

	Params::ABP_AGPlayerController_C_InpActEvt_CheatOpenShop_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.InpActEvt_CheatGold_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_AGPlayerController_C::InpActEvt_CheatGold_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "InpActEvt_CheatGold_K2Node_InputActionEvent_0");

	Params::ABP_AGPlayerController_C_InpActEvt_CheatGold_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AGPlayerController_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "ReceiveEndPlay");

	Params::ABP_AGPlayerController_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowGameplayWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AGCharacter_C*           PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AGPlayerController_C::ShowGameplayWidget(class ABP_AGCharacter_C* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "ShowGameplayWidget");

	Params::ABP_AGPlayerController_C_ShowGameplayWidget_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowEndGameScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bRedTeamWon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AGPlayerController_C::ShowEndGameScreen(bool bRedTeamWon, int32 Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "ShowEndGameScreen");

	Params::ABP_AGPlayerController_C_ShowEndGameScreen_Params Parms{};

	Parms.bRedTeamWon = bRedTeamWon;
	Parms.Position = Position;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.CloseWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::CloseWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "CloseWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.GetKillFeedText
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        DeathPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bKillerIsRedTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bVictimIsRedTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AGPlayerController_C::GetKillFeedText(class FText Killer, class FText DeathPlayer, bool bKillerIsRedTeam, bool bVictimIsRedTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "GetKillFeedText");

	Params::ABP_AGPlayerController_C_GetKillFeedText_Params Parms{};

	Parms.Killer = Killer;
	Parms.DeathPlayer = DeathPlayer;
	Parms.bKillerIsRedTeam = bKillerIsRedTeam;
	Parms.bVictimIsRedTeam = bVictimIsRedTeam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.UpdateKillFeed
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Victim                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bKillerIsRedTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bVictimIsRedTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AGPlayerController_C::UpdateKillFeed(class FText Killer, class FText Victim, bool bKillerIsRedTeam, bool bVictimIsRedTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "UpdateKillFeed");

	Params::ABP_AGPlayerController_C_UpdateKillFeed_Params Parms{};

	Parms.Killer = Killer;
	Parms.Victim = Victim;
	Parms.bKillerIsRedTeam = bKillerIsRedTeam;
	Parms.bVictimIsRedTeam = bVictimIsRedTeam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.ClearWidgets
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::ClearWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "ClearWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.PauseGame
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::PauseGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "PauseGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowKillingSpreeMessage
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::ShowKillingSpreeMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "ShowKillingSpreeMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.CloseScores
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::CloseScores()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "CloseScores");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.RemoveAllWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::RemoveAllWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "RemoveAllWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.BPKicked
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::BPKicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "BPKicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.BPCloseCharacterSelection
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::BPCloseCharacterSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "BPCloseCharacterSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.CloseCharacterSelection
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::CloseCharacterSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "CloseCharacterSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.Kicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::Kicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "Kicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.Show Hit Indicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Damager_Loc                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AGPlayerController_C::Show_Hit_Indicator(const struct FVector& Damager_Loc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "Show Hit Indicator");

	Params::ABP_AGPlayerController_C_Show_Hit_Indicator_Params Parms{};

	Parms.Damager_Loc = Damager_Loc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.BPCloseWidgets
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::BPCloseWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "BPCloseWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowRespawnScreen_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RespawnTimer                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AGPlayerController_C::ShowRespawnScreen_1(float RespawnTimer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "ShowRespawnScreen_1");

	Params::ABP_AGPlayerController_C_ShowRespawnScreen_1_Params Parms{};

	Parms.RespawnTimer = RespawnTimer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowRespawnScreen
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              RespawnTimer                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AGPlayerController_C::ShowRespawnScreen(float RespawnTimer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "ShowRespawnScreen");

	Params::ABP_AGPlayerController_C_ShowRespawnScreen_Params Parms{};

	Parms.RespawnTimer = RespawnTimer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.Client Remove Widgets
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::Client_Remove_Widgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "Client Remove Widgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.OnPostMatchBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bRedTeamWon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AGPlayerController_C::OnPostMatchBegin(bool bRedTeamWon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "OnPostMatchBegin");

	Params::ABP_AGPlayerController_C_OnPostMatchBegin_Params Parms{};

	Parms.bRedTeamWon = bRedTeamWon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.Open Shop UI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::Open_Shop_UI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "Open Shop UI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.Close Shop UI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::Close_Shop_UI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "Close Shop UI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.On Begin Recall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::On_Begin_Recall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "On Begin Recall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.On End Recall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::On_End_Recall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "On End Recall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.OnDowntimeNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_AGPlayerController_C::OnDowntimeNotification(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "OnDowntimeNotification");

	Params::ABP_AGPlayerController_C_OnDowntimeNotification_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.AddCheatManagerWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::AddCheatManagerWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "AddCheatManagerWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.OnPreMatchBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PrematchTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AGPlayerController_C::OnPreMatchBegin(float PrematchTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "OnPreMatchBegin");

	Params::ABP_AGPlayerController_C_OnPreMatchBegin_Params Parms{};

	Parms.PrematchTime = PrematchTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.OnEndGameStatsRecieved
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameStatsPayload>   EndGameStats                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               bIsCustomGame                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AGPlayerController_C::OnEndGameStatsRecieved(TArray<struct FGameStatsPayload>& EndGameStats, bool bIsCustomGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "OnEndGameStatsRecieved");

	Params::ABP_AGPlayerController_C_OnEndGameStatsRecieved_Params Parms{};

	Parms.EndGameStats = EndGameStats;
	Parms.bIsCustomGame = bIsCustomGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.ShowTextChat
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGPlayerController_C::ShowTextChat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "ShowTextChat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.UpdateChat
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bTeamChat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AGPlayerController_C::UpdateChat(class FText Sender, class FText Text, bool bTeamChat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "UpdateChat");

	Params::ABP_AGPlayerController_C_UpdateChat_Params Parms{};

	Parms.Sender = Sender;
	Parms.Text = Text;
	Parms.bTeamChat = bTeamChat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.ServerSendChatMessage
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextToSend                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bTeamChat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           SenderPC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AGPlayerController_C::ServerSendChatMessage(class FText TextToSend, bool bTeamChat, class APlayerController* SenderPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "ServerSendChatMessage");

	Params::ABP_AGPlayerController_C_ServerSendChatMessage_Params Parms{};

	Parms.TextToSend = TextToSend;
	Parms.bTeamChat = bTeamChat;
	Parms.SenderPC = SenderPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.ExecuteUbergraph_BP_AGPlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bRedTeamWon_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Position                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AGCharacter_C*           K2Node_DynamicCast_AsBP_AGCharacter                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGCharacter_C*           K2Node_DynamicCast_AsBP_AGCharacter_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Killer_1                                      (None)
// class FText                        K2Node_CustomEvent_DeathPlayer                                   (None)
// bool                               K2Node_CustomEvent_bKillerIsRedTeam_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bVictimIsRedTeam_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Killer                                        (None)
// class FText                        K2Node_CustomEvent_Victim                                        (None)
// bool                               K2Node_CustomEvent_bKillerIsRedTeam                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bVictimIsRedTeam                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Gameplay_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AGCharacter_C*           K2Node_CustomEvent_PlayerPawn                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGamePaused_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_KillingSpreeMessage_C*   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGCharacter_C*           K2Node_DynamicCast_AsBP_AGCharacter_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAGCharacter*                K2Node_DynamicCast_AsAGCharacter                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Damager_Loc                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_RespawnScreen_C*         CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerStart*>        CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class APlayerStart*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_RespawnTimer_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RespawnTimer                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_RespawnScreen_C*         CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bRedTeamWon                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AGGameState_C*           K2Node_DynamicCast_AsBP_AGGame_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRedTeam_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_PostMatch_C*             CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_Shop_C*                  CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Message                                       (ZeroConstructor, HasGetValueTypeHash)
// class UAGGameInstance*             K2Node_DynamicCast_AsAGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_DowntimeStart_C*         CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAGGameState*                K2Node_DynamicCast_AsAGGame_State                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGPlayerController_C*    K2Node_DynamicCast_AsBP_AGPlayer_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class ABP_AGGameState_C*           K2Node_DynamicCast_AsBP_AGGame_State_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_PrematchTime                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameStatsPayload>   K2Node_CustomEvent_EndGameStats                                  (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               K2Node_CustomEvent_bIsCustomGame                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AGGameState_C*           K2Node_DynamicCast_AsBP_AGGame_State_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AGGameInstance_C*        K2Node_DynamicCast_AsBP_AGGame_Instance_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameStatsPayload           K2Node_MakeStruct_GameStatsPayload                               (None)
// TArray<struct FGameStatsPayload>   K2Node_MakeArray_Array_1                                         (ConstParm, ZeroConstructor, ReferenceParm)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// class AAGGameState*                K2Node_DynamicCast_AsAGGame_State_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetPlayerName_ReturnValue                               (None)
// class APlayerController*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGPlayerController_C*    K2Node_DynamicCast_AsBP_AGPlayer_Controller_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Sender                                        (None)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// bool                               K2Node_CustomEvent_bTeamChat_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_TextToSend                                    (None)
// bool                               K2Node_CustomEvent_bTeamChat                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           K2Node_CustomEvent_SenderPC                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGPlayerController_C*    K2Node_DynamicCast_AsBP_AGPlayer_Controller_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSameTeam_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AGPlayerController_C::ExecuteUbergraph_BP_AGPlayerController(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_4, bool K2Node_CustomEvent_bRedTeamWon_1, int32 K2Node_CustomEvent_Position, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 Temp_int_Array_Index_Variable, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_2, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_3, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsDead_ReturnValue, class FText K2Node_CustomEvent_Killer_1, class FText K2Node_CustomEvent_DeathPlayer, bool K2Node_CustomEvent_bKillerIsRedTeam_1, bool K2Node_CustomEvent_bVictimIsRedTeam_1, class FText K2Node_CustomEvent_Killer, class FText K2Node_CustomEvent_Victim, bool K2Node_CustomEvent_bKillerIsRedTeam, bool K2Node_CustomEvent_bVictimIsRedTeam, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_Gameplay_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_AGCharacter_C* K2Node_CustomEvent_PlayerPawn, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsGamePaused_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, class UWB_KillingSpreeMessage_C* CallFunc_Create_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class ABP_AGCharacter_C* K2Node_DynamicCast_AsBP_AGCharacter_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsDead_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, class AAGCharacter* K2Node_DynamicCast_AsAGCharacter, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, const struct FVector& K2Node_CustomEvent_Damager_Loc, bool CallFunc_IsValid_ReturnValue_3, class UWB_RespawnScreen_C* CallFunc_Create_ReturnValue_2, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerStart* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, float K2Node_Event_RespawnTimer_1, float K2Node_Event_RespawnTimer, bool CallFunc_IsLocalPlayerController_ReturnValue, class UWB_RespawnScreen_C* CallFunc_Create_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool K2Node_CustomEvent_bRedTeamWon, class ABP_AGGameState_C* K2Node_DynamicCast_AsBP_AGGame_State, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsRedTeam_ReturnValue, class UWB_PostMatch_C* CallFunc_Create_ReturnValue_4, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsLocalController_ReturnValue, class UWB_Shop_C* CallFunc_Create_ReturnValue_5, bool CallFunc_IsLocalController_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, const class FString& K2Node_CustomEvent_Message, class UAGGameInstance* K2Node_DynamicCast_AsAGGame_Instance, bool K2Node_DynamicCast_bSuccess_9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWB_DowntimeStart_C* CallFunc_Create_ReturnValue_6, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AAGGameState* K2Node_DynamicCast_AsAGGame_State, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsValid_ReturnValue_8, class APlayerController* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_HasAuthority_ReturnValue, const struct FKey& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ABP_AGGameState_C* K2Node_DynamicCast_AsBP_AGGame_State_1, bool K2Node_DynamicCast_bSuccess_12, float K2Node_CustomEvent_PrematchTime, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_2, bool CallFunc_IsPackagedForDistribution_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, TArray<struct FGameStatsPayload>& K2Node_CustomEvent_EndGameStats, bool K2Node_CustomEvent_bIsCustomGame, class ABP_AGGameState_C* K2Node_DynamicCast_AsBP_AGGame_State_2, bool K2Node_DynamicCast_bSuccess_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, class UBP_AGGameInstance_C* K2Node_DynamicCast_AsBP_AGGame_Instance_4, bool K2Node_DynamicCast_bSuccess_14, const struct FGameStatsPayload& K2Node_MakeStruct_GameStatsPayload, TArray<struct FGameStatsPayload>& K2Node_MakeArray_Array_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_4, const struct FKey& K2Node_InputActionEvent_Key_1, class AAGGameState* K2Node_DynamicCast_AsAGGame_State_1, bool K2Node_DynamicCast_bSuccess_15, class FText CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key_1, bool CallFunc_IsValid_ReturnValue_11, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& K2Node_InputKeyEvent_Key_3, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_12, class FText K2Node_CustomEvent_Sender, class FText K2Node_CustomEvent_Text, bool K2Node_CustomEvent_bTeamChat_1, class FText K2Node_CustomEvent_TextToSend, bool K2Node_CustomEvent_bTeamChat, class APlayerController* K2Node_CustomEvent_SenderPC, class ABP_AGPlayerController_C* K2Node_DynamicCast_AsBP_AGPlayer_Controller_2, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_IsSameTeam_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "ExecuteUbergraph_BP_AGPlayerController");

	Params::ABP_AGPlayerController_C_ExecuteUbergraph_BP_AGPlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.K2Node_CustomEvent_bRedTeamWon_1 = K2Node_CustomEvent_bRedTeamWon_1;
	Parms.K2Node_CustomEvent_Position = K2Node_CustomEvent_Position;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance = K2Node_DynamicCast_AsBP_AGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_1 = K2Node_DynamicCast_AsBP_AGGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_AGCharacter = K2Node_DynamicCast_AsBP_AGCharacter;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_2 = K2Node_DynamicCast_AsBP_AGGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_3 = K2Node_DynamicCast_AsBP_AGGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGCharacter_1 = K2Node_DynamicCast_AsBP_AGCharacter_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.K2Node_CustomEvent_Killer_1 = K2Node_CustomEvent_Killer_1;
	Parms.K2Node_CustomEvent_DeathPlayer = K2Node_CustomEvent_DeathPlayer;
	Parms.K2Node_CustomEvent_bKillerIsRedTeam_1 = K2Node_CustomEvent_bKillerIsRedTeam_1;
	Parms.K2Node_CustomEvent_bVictimIsRedTeam_1 = K2Node_CustomEvent_bVictimIsRedTeam_1;
	Parms.K2Node_CustomEvent_Killer = K2Node_CustomEvent_Killer;
	Parms.K2Node_CustomEvent_Victim = K2Node_CustomEvent_Victim;
	Parms.K2Node_CustomEvent_bKillerIsRedTeam = K2Node_CustomEvent_bKillerIsRedTeam;
	Parms.K2Node_CustomEvent_bVictimIsRedTeam = K2Node_CustomEvent_bVictimIsRedTeam;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerPawn = K2Node_CustomEvent_PlayerPawn;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsGamePaused_ReturnValue = CallFunc_IsGamePaused_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_AGCharacter_2 = K2Node_DynamicCast_AsBP_AGCharacter_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsDead_ReturnValue_1 = CallFunc_IsDead_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_2 = CallFunc_GetPlayerPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsAGCharacter = K2Node_DynamicCast_AsAGCharacter;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CustomEvent_Damager_Loc = K2Node_CustomEvent_Damager_Loc;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Event_RespawnTimer_1 = K2Node_Event_RespawnTimer_1;
	Parms.K2Node_Event_RespawnTimer = K2Node_Event_RespawnTimer;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CustomEvent_bRedTeamWon = K2Node_CustomEvent_bRedTeamWon;
	Parms.K2Node_DynamicCast_AsBP_AGGame_State = K2Node_DynamicCast_AsBP_AGGame_State;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_IsRedTeam_ReturnValue = CallFunc_IsRedTeam_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_IsLocalController_ReturnValue_1 = CallFunc_IsLocalController_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_DynamicCast_AsAGGame_Instance = K2Node_DynamicCast_AsAGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAGGame_State = K2Node_DynamicCast_AsAGGame_State;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_Controller = K2Node_DynamicCast_AsBP_AGPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameState_ReturnValue_2 = CallFunc_GetGameState_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsBP_AGGame_State_1 = K2Node_DynamicCast_AsBP_AGGame_State_1;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_CustomEvent_PrematchTime = K2Node_CustomEvent_PrematchTime;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue = CallFunc_IsPackagedForDistribution_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_GetGameState_ReturnValue_3 = CallFunc_GetGameState_ReturnValue_3;
	Parms.K2Node_CustomEvent_EndGameStats = K2Node_CustomEvent_EndGameStats;
	Parms.K2Node_CustomEvent_bIsCustomGame = K2Node_CustomEvent_bIsCustomGame;
	Parms.K2Node_DynamicCast_AsBP_AGGame_State_2 = K2Node_DynamicCast_AsBP_AGGame_State_2;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_AGGame_Instance_4 = K2Node_DynamicCast_AsBP_AGGame_Instance_4;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_MakeStruct_GameStatsPayload = K2Node_MakeStruct_GameStatsPayload;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetGameState_ReturnValue_4 = CallFunc_GetGameState_ReturnValue_4;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_DynamicCast_AsAGGame_State_1 = K2Node_DynamicCast_AsAGGame_State_1;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_Controller_1 = K2Node_DynamicCast_AsBP_AGPlayer_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_CustomEvent_Sender = K2Node_CustomEvent_Sender;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_bTeamChat_1 = K2Node_CustomEvent_bTeamChat_1;
	Parms.K2Node_CustomEvent_TextToSend = K2Node_CustomEvent_TextToSend;
	Parms.K2Node_CustomEvent_bTeamChat = K2Node_CustomEvent_bTeamChat;
	Parms.K2Node_CustomEvent_SenderPC = K2Node_CustomEvent_SenderPC;
	Parms.K2Node_DynamicCast_AsBP_AGPlayer_Controller_2 = K2Node_DynamicCast_AsBP_AGPlayer_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_IsSameTeam_ReturnValue = CallFunc_IsSameTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGPlayerController.BP_AGPlayerController_C.OnInputBindingChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BindingName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        NewKey                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_AGPlayerController_C::OnInputBindingChanged__DelegateSignature(class FName BindingName, const struct FKey& NewKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerController_C", "OnInputBindingChanged__DelegateSignature");

	Params::ABP_AGPlayerController_C_OnInputBindingChanged__DelegateSignature_Params Parms{};

	Parms.BindingName = BindingName;
	Parms.NewKey = NewKey;

	UObject::ProcessEvent(Func, &Parms);

}

}


