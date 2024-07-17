#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_OutgoingPartyInvite.WB_OutgoingPartyInvite_C
// (None)

class UClass* UWB_OutgoingPartyInvite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_OutgoingPartyInvite_C");

	return Clss;
}


// WB_OutgoingPartyInvite_C WB_OutgoingPartyInvite.Default__WB_OutgoingPartyInvite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_OutgoingPartyInvite_C* UWB_OutgoingPartyInvite_C::GetDefaultObj()
{
	static class UWB_OutgoingPartyInvite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_OutgoingPartyInvite_C*>(UWB_OutgoingPartyInvite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_OutgoingPartyInvite.WB_OutgoingPartyInvite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_OutgoingPartyInvite_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_OutgoingPartyInvite_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_OutgoingPartyInvite.WB_OutgoingPartyInvite_C.BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_OutgoingPartyInvite_C::BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_OutgoingPartyInvite_C", "BndEvt__DeclinePartyInvite_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_OutgoingPartyInvite.WB_OutgoingPartyInvite_C.ExecuteUbergraph_WB_OutgoingPartyInvite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAGPartySubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWB_OutgoingPartyInvite_C::ExecuteUbergraph_WB_OutgoingPartyInvite(int32 EntryPoint, class UAGPartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_OutgoingPartyInvite_C", "ExecuteUbergraph_WB_OutgoingPartyInvite");

	Params::UWB_OutgoingPartyInvite_C_ExecuteUbergraph_WB_OutgoingPartyInvite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


