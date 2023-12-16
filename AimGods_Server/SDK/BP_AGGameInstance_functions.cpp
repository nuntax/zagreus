#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AGGameInstance.BP_AGGameInstance_C
// (None)

class UClass* UBP_AGGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AGGameInstance_C");

	return Clss;
}


// BP_AGGameInstance_C BP_AGGameInstance.Default__BP_AGGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AGGameInstance_C* UBP_AGGameInstance_C::GetDefaultObj()
{
	static class UBP_AGGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AGGameInstance_C*>(UBP_AGGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AGGameInstance.BP_AGGameInstance_C.OnFailure_D7E6F33944FC88F0975CC29A0A147795
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::OnFailure_D7E6F33944FC88F0975CC29A0A147795()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "OnFailure_D7E6F33944FC88F0975CC29A0A147795");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.OnSuccess_D7E6F33944FC88F0975CC29A0A147795
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::OnSuccess_D7E6F33944FC88F0975CC29A0A147795()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "OnSuccess_D7E6F33944FC88F0975CC29A0A147795");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowSettingsMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_MainMenu_C*              MainMenuWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AGGameInstance_C::ShowSettingsMenu(class UWB_MainMenu_C* MainMenuWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "ShowSettingsMenu");

	Params::UBP_AGGameInstance_C_ShowSettingsMenu_Params Parms{};

	Parms.MainMenuWidget = MainMenuWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ENetworkFailure         FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsServer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AGGameInstance_C::HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "HandleNetworkError");

	Params::UBP_AGGameInstance_C_HandleNetworkError_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.bIsServer = bIsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::ShowLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "ShowLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.HandleTravelError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ETravelFailure          FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AGGameInstance_C::HandleTravelError(enum class ETravelFailure FailureType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "HandleTravelError");

	Params::UBP_AGGameInstance_C_HandleTravelError_Params Parms{};

	Parms.FailureType = FailureType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.DestroySessionCaller
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AGGameInstance_C::DestroySessionCaller(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "DestroySessionCaller");

	Params::UBP_AGGameInstance_C_DestroySessionCaller_Params Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowGameplayWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::ShowGameplayWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "ShowGameplayWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowIngameMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::ShowIngameMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "ShowIngameMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowMainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::ShowMainMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "ShowMainMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowEndGameMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RedTeamWon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AGGameInstance_C::ShowEndGameMenu(bool RedTeamWon, int32 Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "ShowEndGameMenu");

	Params::UBP_AGGameInstance_C_ShowEndGameMenu_Params Parms{};

	Parms.RedTeamWon = RedTeamWon;
	Parms.Position = Position;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowPlayerScores
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::ShowPlayerScores()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "ShowPlayerScores");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowErrorMessageMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ErrorMessage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_AGGameInstance_C::ShowErrorMessageMenu(const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "ShowErrorMessageMenu");

	Params::UBP_AGGameInstance_C_ShowErrorMessageMenu_Params Parms{};

	Parms.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.HidePlayerScores
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::HidePlayerScores()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "HidePlayerScores");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.CloseIngame Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::CloseIngame_Menu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "CloseIngame Menu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.SetVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AudioVolume                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundClass*                 SoundClass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AGGameInstance_C::SetVolume(float AudioVolume, class USoundClass* SoundClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "SetVolume");

	Params::UBP_AGGameInstance_C_SetVolume_Params Parms{};

	Parms.AudioVolume = AudioVolume;
	Parms.SoundClass = SoundClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.BPRemoveSettingsMenu
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::BPRemoveSettingsMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "BPRemoveSettingsMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ShowLogin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::ShowLogin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "ShowLogin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.LeaveCustomGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::LeaveCustomGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "LeaveCustomGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.JoinCustomGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::JoinCustomGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "JoinCustomGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AGGameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.ExecuteUbergraph_BP_AGGameInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETravelFailure          K2Node_Event_FailureType                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Gameplay_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ENetworkFailure         K2Node_Event_FailureType_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsServer                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_MainMenu_C*              CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InGameMenu_C*            CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_RedTeamWon                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Position                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_PlayerScores_C*          CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ErrorMessage                                  (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_ErrorMessage_C*          CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_SettingsMenu_C*          CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_MainMenu_C*              K2Node_CustomEvent_MainMenuWidget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_LoadingScreen_C*         CallFunc_Create_ReturnValue_6                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_AudioVolume                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundClass*                 K2Node_CustomEvent_SoundClass                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGChatSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Login_C*                 CallFunc_Create_ReturnValue_7                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWebSocketManager*           CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_AGGameInstance_C::ExecuteUbergraph_BP_AGGameInstance(int32 EntryPoint, enum class ETravelFailure K2Node_Event_FailureType, class APlayerController* K2Node_CustomEvent_PlayerController, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_Gameplay_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class ENetworkFailure K2Node_Event_FailureType_1, bool K2Node_Event_bIsServer, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UWB_MainMenu_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UWB_InGameMenu_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsInViewport_ReturnValue, bool K2Node_CustomEvent_RedTeamWon, int32 K2Node_CustomEvent_Position, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class UWB_PlayerScores_C* CallFunc_Create_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, const class FString& K2Node_CustomEvent_ErrorMessage, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UWB_ErrorMessage_C* CallFunc_Create_ReturnValue_4, class UWB_SettingsMenu_C* CallFunc_Create_ReturnValue_5, class UWB_MainMenu_C* K2Node_CustomEvent_MainMenuWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class UWB_LoadingScreen_C* CallFunc_Create_ReturnValue_6, bool CallFunc_IsInViewport_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_CustomEvent_AudioVolume, class USoundClass* K2Node_CustomEvent_SoundClass, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class UAGChatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UWB_Login_C* CallFunc_Create_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_12, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class UWebSocketManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "ExecuteUbergraph_BP_AGGameInstance");

	Params::UBP_AGGameInstance_C_ExecuteUbergraph_BP_AGGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FailureType = K2Node_Event_FailureType;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_FailureType_1 = K2Node_Event_FailureType_1;
	Parms.K2Node_Event_bIsServer = K2Node_Event_bIsServer;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.K2Node_CustomEvent_RedTeamWon = K2Node_CustomEvent_RedTeamWon;
	Parms.K2Node_CustomEvent_Position = K2Node_CustomEvent_Position;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CustomEvent_ErrorMessage = K2Node_CustomEvent_ErrorMessage;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.K2Node_CustomEvent_MainMenuWidget = K2Node_CustomEvent_MainMenuWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_Create_ReturnValue_6 = CallFunc_Create_ReturnValue_6;
	Parms.CallFunc_IsInViewport_ReturnValue_1 = CallFunc_IsInViewport_ReturnValue_1;
	Parms.CallFunc_IsInViewport_ReturnValue_2 = CallFunc_IsInViewport_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_AudioVolume = K2Node_CustomEvent_AudioVolume;
	Parms.K2Node_CustomEvent_SoundClass = K2Node_CustomEvent_SoundClass;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_7 = CallFunc_Create_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AGGameInstance.BP_AGGameInstance_C.InputBindingChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BindingName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        New_Key                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_AGGameInstance_C::InputBindingChanged__DelegateSignature(class FName BindingName, const struct FKey& New_Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGGameInstance_C", "InputBindingChanged__DelegateSignature");

	Params::UBP_AGGameInstance_C_InputBindingChanged__DelegateSignature_Params Parms{};

	Parms.BindingName = BindingName;
	Parms.New_Key = New_Key;

	UObject::ProcessEvent(Func, &Parms);

}

}


