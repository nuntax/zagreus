#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C
// (None)

class UClass* UWB_Incoming_CustomGames_Invite_List_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Incoming_CustomGames_Invite_List_C");

	return Clss;
}


// WB_Incoming_CustomGames_Invite_List_C WB_Incoming_CustomGames_Invite_List.Default__WB_Incoming_CustomGames_Invite_List_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Incoming_CustomGames_Invite_List_C* UWB_Incoming_CustomGames_Invite_List_C::GetDefaultObj()
{
	static class UWB_Incoming_CustomGames_Invite_List_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Incoming_CustomGames_Invite_List_C*>(UWB_Incoming_CustomGames_Invite_List_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Incoming_CustomGames_Invite_List_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_List_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnGetIncomingInvites
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FIncomingCustomGameInvite>CustomGameInvites                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWB_Incoming_CustomGames_Invite_List_C::OnGetIncomingInvites(TArray<struct FIncomingCustomGameInvite>& CustomGameInvites)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_List_C", "OnGetIncomingInvites");

	Params::UWB_Incoming_CustomGames_Invite_List_C_OnGetIncomingInvites_Params Parms{};

	Parms.CustomGameInvites = CustomGameInvites;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnCustomGameInviteReceivedWs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIncomingCustomGameInvite   CustomGameInvite                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_Incoming_CustomGames_Invite_List_C::OnCustomGameInviteReceivedWs(struct FIncomingCustomGameInvite& CustomGameInvite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_List_C", "OnCustomGameInviteReceivedWs");

	Params::UWB_Incoming_CustomGames_Invite_List_C_OnCustomGameInviteReceivedWs_Params Parms{};

	Parms.CustomGameInvite = CustomGameInvite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.UpdateCustomGameNotifications
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Incoming_CustomGames_Invite_List_C::UpdateCustomGameNotifications()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_List_C", "UpdateCustomGameNotifications");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnAcceptInvite
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomGame                 CurrentGame                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_Incoming_CustomGames_Invite_List_C::OnAcceptInvite(struct FCustomGame& CurrentGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_List_C", "OnAcceptInvite");

	Params::UWB_Incoming_CustomGames_Invite_List_C_OnAcceptInvite_Params Parms{};

	Parms.CurrentGame = CurrentGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.OnCustomGameInviteCancelledWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InviteId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_Incoming_CustomGames_Invite_List_C::OnCustomGameInviteCancelledWs(const class FString& InviteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_List_C", "OnCustomGameInviteCancelledWs");

	Params::UWB_Incoming_CustomGames_Invite_List_C_OnCustomGameInviteCancelledWs_Params Parms{};

	Parms.InviteId = InviteId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.ClearOutInvites
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Incoming_CustomGames_Invite_List_C::ClearOutInvites()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_List_C", "ClearOutInvites");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Incoming_CustomGames_Invite_C*K2Node_DynamicCast_AsWB_Incoming_Custom_Games_Invite             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIncomingCustomGameInvite>K2Node_CustomEvent_CustomGameInvites                             (ConstParm, ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FIncomingCustomGameInvite   CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Incoming_CustomGames_Invite_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIncomingCustomGameInvite   K2Node_CustomEvent_CustomGameInvite                              (ConstParm)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Incoming_CustomGames_Invite_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomGame                 K2Node_CustomEvent_CurrentGame                                   (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_InviteId                                      (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGCustomGameSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Incoming_CustomGames_Invite_List_C::ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWB_Incoming_CustomGames_Invite_C* K2Node_DynamicCast_AsWB_Incoming_Custom_Games_Invite, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FIncomingCustomGameInvite>& K2Node_CustomEvent_CustomGameInvites, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FIncomingCustomGameInvite& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_Incoming_CustomGames_Invite_C* CallFunc_Create_ReturnValue, const struct FIncomingCustomGameInvite& K2Node_CustomEvent_CustomGameInvite, class UPanelSlot* CallFunc_AddChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWB_Incoming_CustomGames_Invite_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FCustomGame& K2Node_CustomEvent_CurrentGame, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const class FString& K2Node_CustomEvent_InviteId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UAGCustomGameSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_List_C", "ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List");

	Params::UWB_Incoming_CustomGames_Invite_List_C_ExecuteUbergraph_WB_Incoming_CustomGames_Invite_List_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Incoming_Custom_Games_Invite = K2Node_DynamicCast_AsWB_Incoming_Custom_Games_Invite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_CustomGameInvites = K2Node_CustomEvent_CustomGameInvites;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_CustomGameInvite = K2Node_CustomEvent_CustomGameInvite;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_CustomEvent_CurrentGame = K2Node_CustomEvent_CurrentGame;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.K2Node_CustomEvent_InviteId = K2Node_CustomEvent_InviteId;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Incoming_CustomGames_Invite_List.WB_Incoming_CustomGames_Invite_List_C.CustomGame_WeHaveSomething__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Incoming_CustomGames_Invite_List_C::CustomGame_WeHaveSomething__DelegateSignature(int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Incoming_CustomGames_Invite_List_C", "CustomGame_WeHaveSomething__DelegateSignature");

	Params::UWB_Incoming_CustomGames_Invite_List_C_CustomGame_WeHaveSomething__DelegateSignature_Params Parms{};

	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}

}


