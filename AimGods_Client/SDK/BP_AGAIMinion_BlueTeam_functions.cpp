#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AGAIMinion_BlueTeam.BP_AGAIMinion_BlueTeam_C
// (Actor, Pawn)

class UClass* ABP_AGAIMinion_BlueTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AGAIMinion_BlueTeam_C");

	return Clss;
}


// BP_AGAIMinion_BlueTeam_C BP_AGAIMinion_BlueTeam.Default__BP_AGAIMinion_BlueTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AGAIMinion_BlueTeam_C* ABP_AGAIMinion_BlueTeam_C::GetDefaultObj()
{
	static class ABP_AGAIMinion_BlueTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AGAIMinion_BlueTeam_C*>(ABP_AGAIMinion_BlueTeam_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AGAIMinion_BlueTeam.BP_AGAIMinion_BlueTeam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AGAIMinion_BlueTeam_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AGAIMinion_BlueTeam_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


