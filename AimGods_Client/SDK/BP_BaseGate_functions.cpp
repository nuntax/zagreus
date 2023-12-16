#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BaseGate.BP_BaseGate_C
// (Actor)

class UClass* ABP_BaseGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BaseGate_C");

	return Clss;
}


// BP_BaseGate_C BP_BaseGate.Default__BP_BaseGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BaseGate_C* ABP_BaseGate_C::GetDefaultObj()
{
	static class ABP_BaseGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BaseGate_C*>(ABP_BaseGate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BaseGate.BP_BaseGate_C.OnRep_IsOpen?
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseGate_C::OnRep_IsOpen_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseGate_C", "OnRep_IsOpen?");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseGate.BP_BaseGate_C.OpenGate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_BaseGate_C::OpenGate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseGate_C", "OpenGate__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseGate.BP_BaseGate_C.OpenGate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_BaseGate_C::OpenGate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseGate_C", "OpenGate__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseGate.BP_BaseGate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BaseGate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseGate_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseGate.BP_BaseGate_C.Prematch Begun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PrematchTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseGate_C::Prematch_Begun(float PrematchTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseGate_C", "Prematch Begun");

	Params::ABP_BaseGate_C_Prematch_Begun_Params Parms{};

	Parms.PrematchTime = PrematchTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseGate.BP_BaseGate_C.Open Gate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseGate_C::Open_Gate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseGate_C", "Open Gate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseGate.BP_BaseGate_C.Begin Open Gate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseGate_C::Begin_Open_Gate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseGate_C", "Begin Open Gate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseGate.BP_BaseGate_C.ExecuteUbergraph_BP_BaseGate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PrematchTime                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AGGameState_C*           K2Node_DynamicCast_AsBP_AGGame_State                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_BaseGate_C::ExecuteUbergraph_BP_BaseGate(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_MakeVector_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float K2Node_CustomEvent_PrematchTime, class ABP_AGGameState_C* K2Node_DynamicCast_AsBP_AGGame_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseGate_C", "ExecuteUbergraph_BP_BaseGate");

	Params::ABP_BaseGate_C_ExecuteUbergraph_BP_BaseGate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CustomEvent_PrematchTime = K2Node_CustomEvent_PrematchTime;
	Parms.K2Node_DynamicCast_AsBP_AGGame_State = K2Node_DynamicCast_AsBP_AGGame_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


