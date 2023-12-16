#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PartyRow.WB_PartyRow_C
// (None)

class UClass* UWB_PartyRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PartyRow_C");

	return Clss;
}


// WB_PartyRow_C WB_PartyRow.Default__WB_PartyRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PartyRow_C* UWB_PartyRow_C::GetDefaultObj()
{
	static class UWB_PartyRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PartyRow_C*>(UWB_PartyRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PartyRow.WB_PartyRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_PartyRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PartyRow.WB_PartyRow_C.OnPartyDisbandedWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PartyId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_PartyRow_C::OnPartyDisbandedWs(const class FString& PartyId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyRow_C", "OnPartyDisbandedWs");

	Params::UWB_PartyRow_C_OnPartyDisbandedWs_Params Parms{};

	Parms.PartyId = PartyId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PartyRow.WB_PartyRow_C.BndEvt__KickPartyMember_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_PartyRow_C::BndEvt__KickPartyMember_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyRow_C", "BndEvt__KickPartyMember_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PartyRow.WB_PartyRow_C.ExecuteUbergraph_WB_PartyRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_PartyId                                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWB_PartyRow_C::ExecuteUbergraph_WB_PartyRow(int32 EntryPoint, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_PartyId, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PartyRow_C", "ExecuteUbergraph_WB_PartyRow");

	Params::UWB_PartyRow_C_ExecuteUbergraph_WB_PartyRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_PartyId = K2Node_CustomEvent_PartyId;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


