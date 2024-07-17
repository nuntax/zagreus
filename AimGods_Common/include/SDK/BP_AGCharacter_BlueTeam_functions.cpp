#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AGCharacter_BlueTeam.BP_AGCharacter_BlueTeam_C
// (Actor, Pawn)

class UClass* ABP_AGCharacter_BlueTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AGCharacter_BlueTeam_C");

	return Clss;
}


// BP_AGCharacter_BlueTeam_C BP_AGCharacter_BlueTeam.Default__BP_AGCharacter_BlueTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AGCharacter_BlueTeam_C* ABP_AGCharacter_BlueTeam_C::GetDefaultObj()
{
	static class ABP_AGCharacter_BlueTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AGCharacter_BlueTeam_C*>(ABP_AGCharacter_BlueTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


