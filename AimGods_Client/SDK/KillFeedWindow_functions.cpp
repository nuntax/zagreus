#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass KillFeedWindow.KillFeedWindow_C
// (None)

class UClass* UKillFeedWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KillFeedWindow_C");

	return Clss;
}


// KillFeedWindow_C KillFeedWindow.Default__KillFeedWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKillFeedWindow_C* UKillFeedWindow_C::GetDefaultObj()
{
	static class UKillFeedWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKillFeedWindow_C*>(UKillFeedWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KillFeedWindow.KillFeedWindow_C.SetTextToSend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bTeam                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Dead                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        TexToSend                                                        (Parm, OutParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UKillFeedWindow_C::SetTextToSend(bool bTeam, class FText Killer, class FText Dead, class FText* TexToSend, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillFeedWindow_C", "SetTextToSend");

	Params::UKillFeedWindow_C_SetTextToSend_Params Parms{};

	Parms.bTeam = bTeam;
	Parms.Killer = Killer;
	Parms.Dead = Dead;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TexToSend != nullptr)
		*TexToSend = Parms.TexToSend;

}


// Function KillFeedWindow.KillFeedWindow_C.UpdateKillFeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Killer                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Victim                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bKillerIsRedTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bVictimIsRedTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKillFeedWindow_C::UpdateKillFeed(class FText Killer, class FText Victim, bool bKillerIsRedTeam, bool bVictimIsRedTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillFeedWindow_C", "UpdateKillFeed");

	Params::UKillFeedWindow_C_UpdateKillFeed_Params Parms{};

	Parms.Killer = Killer;
	Parms.Victim = Victim;
	Parms.bKillerIsRedTeam = bKillerIsRedTeam;
	Parms.bVictimIsRedTeam = bVictimIsRedTeam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillFeedWindow.KillFeedWindow_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UKillFeedWindow_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillFeedWindow_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KillFeedWindow.KillFeedWindow_C.ExecuteUbergraph_KillFeedWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Killer                                        (ConstParm)
// class FText                        K2Node_CustomEvent_Victim                                        (ConstParm)
// bool                               K2Node_CustomEvent_bKillerIsRedTeam                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bVictimIsRedTeam                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKillFeedText_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillFeedWindow_C::ExecuteUbergraph_KillFeedWindow(int32 EntryPoint, class FText K2Node_CustomEvent_Killer, class FText K2Node_CustomEvent_Victim, bool K2Node_CustomEvent_bKillerIsRedTeam, bool K2Node_CustomEvent_bVictimIsRedTeam, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UKillFeedText_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillFeedWindow_C", "ExecuteUbergraph_KillFeedWindow");

	Params::UKillFeedWindow_C_ExecuteUbergraph_KillFeedWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Killer = K2Node_CustomEvent_Killer;
	Parms.K2Node_CustomEvent_Victim = K2Node_CustomEvent_Victim;
	Parms.K2Node_CustomEvent_bKillerIsRedTeam = K2Node_CustomEvent_bKillerIsRedTeam;
	Parms.K2Node_CustomEvent_bVictimIsRedTeam = K2Node_CustomEvent_bVictimIsRedTeam;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


