#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBP_FinalWeapon.AnimBP_FinalWeapon_C
// (None)

class UClass* UAnimBP_FinalWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBP_FinalWeapon_C");

	return Clss;
}


// AnimBP_FinalWeapon_C AnimBP_FinalWeapon.Default__AnimBP_FinalWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBP_FinalWeapon_C* UAnimBP_FinalWeapon_C::GetDefaultObj()
{
	static class UAnimBP_FinalWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBP_FinalWeapon_C*>(UAnimBP_FinalWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBP_FinalWeapon.AnimBP_FinalWeapon_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBP_FinalWeapon_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_FinalWeapon_C", "AnimGraph");

	Params::UAnimBP_FinalWeapon_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBP_FinalWeapon.AnimBP_FinalWeapon_C.ExecuteUbergraph_AnimBP_FinalWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_FinalWeapon_C::ExecuteUbergraph_AnimBP_FinalWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBP_FinalWeapon_C", "ExecuteUbergraph_AnimBP_FinalWeapon");

	Params::UAnimBP_FinalWeapon_C_ExecuteUbergraph_AnimBP_FinalWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


