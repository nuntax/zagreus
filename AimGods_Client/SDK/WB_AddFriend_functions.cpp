#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_AddFriend.WB_AddFriend_C
// (None)

class UClass* UWB_AddFriend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_AddFriend_C");

	return Clss;
}


// WB_AddFriend_C WB_AddFriend.Default__WB_AddFriend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_AddFriend_C* UWB_AddFriend_C::GetDefaultObj()
{
	static class UWB_AddFriend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_AddFriend_C*>(UWB_AddFriend_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_AddFriend.WB_AddFriend_C.BndEvt__WB_SendFriendRequestDialog_K2Node_ComponentBoundEvent_0_FriendSearchOperationDone__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_AddFriend_C::BndEvt__WB_SendFriendRequestDialog_K2Node_ComponentBoundEvent_0_FriendSearchOperationDone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AddFriend_C", "BndEvt__WB_SendFriendRequestDialog_K2Node_ComponentBoundEvent_0_FriendSearchOperationDone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_AddFriend.WB_AddFriend_C.BndEvt__AddFriendBtnA_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_AddFriend_C::BndEvt__AddFriendBtnA_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AddFriend_C", "BndEvt__AddFriendBtnA_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_AddFriend.WB_AddFriend_C.BndEvt__WB_SendFriendRequestDialog_K2Node_ComponentBoundEvent_2_CloseWindow__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_AddFriend_C::BndEvt__WB_SendFriendRequestDialog_K2Node_ComponentBoundEvent_2_CloseWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AddFriend_C", "BndEvt__WB_SendFriendRequestDialog_K2Node_ComponentBoundEvent_2_CloseWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_AddFriend.WB_AddFriend_C.ExecuteUbergraph_WB_AddFriend
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AddFriend_C::ExecuteUbergraph_WB_AddFriend(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AddFriend_C", "ExecuteUbergraph_WB_AddFriend");

	Params::UWB_AddFriend_C_ExecuteUbergraph_WB_AddFriend_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


