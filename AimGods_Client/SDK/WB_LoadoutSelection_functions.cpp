#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_LoadoutSelection.WB_LoadoutSelection_C
// (None)

class UClass* UWB_LoadoutSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_LoadoutSelection_C");

	return Clss;
}


// WB_LoadoutSelection_C WB_LoadoutSelection.Default__WB_LoadoutSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_LoadoutSelection_C* UWB_LoadoutSelection_C::GetDefaultObj()
{
	static class UWB_LoadoutSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_LoadoutSelection_C*>(UWB_LoadoutSelection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_LoadoutSelection.WB_LoadoutSelection_C.WelcomeAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_LoadoutSelection_C::WelcomeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutSelection_C", "WelcomeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadoutSelection.WB_LoadoutSelection_C.BndEvt__Button_226_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_LoadoutSelection_C::BndEvt__Button_226_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutSelection_C", "BndEvt__Button_226_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadoutSelection.WB_LoadoutSelection_C.ExecuteUbergraph_WB_LoadoutSelection
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LoadoutSelection_C::ExecuteUbergraph_WB_LoadoutSelection(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutSelection_C", "ExecuteUbergraph_WB_LoadoutSelection");

	Params::UWB_LoadoutSelection_C_ExecuteUbergraph_WB_LoadoutSelection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_LoadoutSelection.WB_LoadoutSelection_C.CloseWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_LoadoutSelection_C::CloseWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadoutSelection_C", "CloseWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


