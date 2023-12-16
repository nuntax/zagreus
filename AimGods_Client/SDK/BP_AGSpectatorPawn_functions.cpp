#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AGSpectatorPawn.BP_AGSpectatorPawn_C
// (Actor, Pawn)

class UClass* ABP_AGSpectatorPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AGSpectatorPawn_C");

	return Clss;
}


// BP_AGSpectatorPawn_C BP_AGSpectatorPawn.Default__BP_AGSpectatorPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AGSpectatorPawn_C* ABP_AGSpectatorPawn_C::GetDefaultObj()
{
	static class ABP_AGSpectatorPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AGSpectatorPawn_C*>(ABP_AGSpectatorPawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


