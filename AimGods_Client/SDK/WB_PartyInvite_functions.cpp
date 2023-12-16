#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PartyInvite.WB_PartyInvite_C
// (None)

class UClass* UWB_PartyInvite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PartyInvite_C");

	return Clss;
}


// WB_PartyInvite_C WB_PartyInvite.Default__WB_PartyInvite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PartyInvite_C* UWB_PartyInvite_C::GetDefaultObj()
{
	static class UWB_PartyInvite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PartyInvite_C*>(UWB_PartyInvite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PartyInvite.WB_PartyInvite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_PartyInvite_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PartyInvite.WB_PartyInvite_C.BndEvt__AcceptPartyInvite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PartyInvite_C::BndEvt__AcceptPartyInvite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_C", "BndEvt__AcceptPartyInvite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PartyInvite.WB_PartyInvite_C.OnAcceptPartyInvite
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError                 Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurrentParty               CurrentParty                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_PartyInvite_C::OnAcceptPartyInvite(bool Success, struct FPartyError& Error, struct FCurrentParty& CurrentParty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_C", "OnAcceptPartyInvite");

	Params::UWB_PartyInvite_C_OnAcceptPartyInvite_Params Parms{};

	Parms.Success = Success;
	Parms.Error = Error;
	Parms.CurrentParty = CurrentParty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PartyInvite.WB_PartyInvite_C.BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PartyInvite_C::BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_C", "BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PartyInvite.WB_PartyInvite_C.RemovePartyInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PartyInvite_C::RemovePartyInvite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_C", "RemovePartyInvite");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PartyInvite.WB_PartyInvite_C.ExecuteUbergraph_WB_PartyInvite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_CustomEvent_Success                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPartyError                 K2Node_CustomEvent_Error                                         (ConstParm)
// struct FCurrentParty               K2Node_CustomEvent_CurrentParty                                  (ConstParm)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PartyInvite_C::ExecuteUbergraph_WB_PartyInvite(int32 EntryPoint, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_CustomEvent_Success, const struct FPartyError& K2Node_CustomEvent_Error, const struct FCurrentParty& K2Node_CustomEvent_CurrentParty, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyInvite_C", "ExecuteUbergraph_WB_PartyInvite");

	Params::UWB_PartyInvite_C_ExecuteUbergraph_WB_PartyInvite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.K2Node_CustomEvent_CurrentParty = K2Node_CustomEvent_CurrentParty;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


