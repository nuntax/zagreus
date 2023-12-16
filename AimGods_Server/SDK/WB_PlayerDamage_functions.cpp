#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PlayerDamage.WB_PlayerDamage_C
// (None)

class UClass* UWB_PlayerDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PlayerDamage_C");

	return Clss;
}


// WB_PlayerDamage_C WB_PlayerDamage.Default__WB_PlayerDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PlayerDamage_C* UWB_PlayerDamage_C::GetDefaultObj()
{
	static class UWB_PlayerDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PlayerDamage_C*>(UWB_PlayerDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PlayerDamage.WB_PlayerDamage_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Heal_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UWB_PlayerDamage_C::Initialize(bool Heal_, float Number, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerDamage_C", "Initialize");

	Params::UWB_PlayerDamage_C_Initialize_Params Parms{};

	Parms.Heal_ = Heal_;
	Parms.Number = Number;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerDamage.WB_PlayerDamage_C.Finished_A6AC22264894A303AC45448B5334C92A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PlayerDamage_C::Finished_A6AC22264894A303AC45448B5334C92A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerDamage_C", "Finished_A6AC22264894A303AC45448B5334C92A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerDamage.WB_PlayerDamage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_PlayerDamage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerDamage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PlayerDamage.WB_PlayerDamage_C.Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Heal_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PlayerDamage_C::Spawn(bool Heal_, float Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerDamage_C", "Spawn");

	Params::UWB_PlayerDamage_C_Spawn_Params Parms{};

	Parms.Heal_ = Heal_;
	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PlayerDamage.WB_PlayerDamage_C.ExecuteUbergraph_WB_PlayerDamage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Heal_                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Number                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PlayerDamage_C::ExecuteUbergraph_WB_PlayerDamage(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool K2Node_CustomEvent_Heal_, float K2Node_CustomEvent_Number, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PlayerDamage_C", "ExecuteUbergraph_WB_PlayerDamage");

	Params::UWB_PlayerDamage_C_ExecuteUbergraph_WB_PlayerDamage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.K2Node_CustomEvent_Heal_ = K2Node_CustomEvent_Heal_;
	Parms.K2Node_CustomEvent_Number = K2Node_CustomEvent_Number;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


