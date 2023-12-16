#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AGAIController.BP_AGAIController_C
// (Actor)

class UClass* ABP_AGAIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AGAIController_C");

	return Clss;
}


// BP_AGAIController_C BP_AGAIController.Default__BP_AGAIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AGAIController_C* ABP_AGAIController_C::GetDefaultObj()
{
	static class ABP_AGAIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AGAIController_C*>(ABP_AGAIController_C::StaticClass()->DefaultObject);

	return Default;
}

}


