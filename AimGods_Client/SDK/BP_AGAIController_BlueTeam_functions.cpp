#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AGAIController_BlueTeam.BP_AGAIController_BlueTeam_C
// (Actor)

class UClass* ABP_AGAIController_BlueTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AGAIController_BlueTeam_C");

	return Clss;
}


// BP_AGAIController_BlueTeam_C BP_AGAIController_BlueTeam.Default__BP_AGAIController_BlueTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AGAIController_BlueTeam_C* ABP_AGAIController_BlueTeam_C::GetDefaultObj()
{
	static class ABP_AGAIController_BlueTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AGAIController_BlueTeam_C*>(ABP_AGAIController_BlueTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


