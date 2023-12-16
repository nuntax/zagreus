#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AGPlayerState.BP_AGPlayerState_C
// (Actor)

class UClass* ABP_AGPlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AGPlayerState_C");

	return Clss;
}


// BP_AGPlayerState_C BP_AGPlayerState.Default__BP_AGPlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AGPlayerState_C* ABP_AGPlayerState_C::GetDefaultObj()
{
	static class ABP_AGPlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AGPlayerState_C*>(ABP_AGPlayerState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AGPlayerState.BP_AGPlayerState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AGPlayerState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerState_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AGPlayerState.BP_AGPlayerState_C.ExecuteUbergraph_BP_AGPlayerState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AGPlayerState_C::ExecuteUbergraph_BP_AGPlayerState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGPlayerState_C", "ExecuteUbergraph_BP_AGPlayerState");

	Params::ABP_AGPlayerState_C_ExecuteUbergraph_BP_AGPlayerState_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


