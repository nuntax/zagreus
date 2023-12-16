#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_NoDamageInSpawn.GE_NoDamageInSpawn_C
// (None)

class UClass* UGE_NoDamageInSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_NoDamageInSpawn_C");

	return Clss;
}


// GE_NoDamageInSpawn_C GE_NoDamageInSpawn.Default__GE_NoDamageInSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_NoDamageInSpawn_C* UGE_NoDamageInSpawn_C::GetDefaultObj()
{
	static class UGE_NoDamageInSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_NoDamageInSpawn_C*>(UGE_NoDamageInSpawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


