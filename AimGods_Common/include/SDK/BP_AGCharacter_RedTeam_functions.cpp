#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AGCharacter_RedTeam.BP_AGCharacter_RedTeam_C
// (Actor, Pawn)

class UClass* ABP_AGCharacter_RedTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AGCharacter_RedTeam_C");

	return Clss;
}


// BP_AGCharacter_RedTeam_C BP_AGCharacter_RedTeam.Default__BP_AGCharacter_RedTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AGCharacter_RedTeam_C* ABP_AGCharacter_RedTeam_C::GetDefaultObj()
{
	static class ABP_AGCharacter_RedTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AGCharacter_RedTeam_C*>(ABP_AGCharacter_RedTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


