#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Explosion.GEC_Explosion_C
// (None)

class UClass* UGEC_Explosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Explosion_C");

	return Clss;
}


// GEC_Explosion_C GEC_Explosion.Default__GEC_Explosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Explosion_C* UGEC_Explosion_C::GetDefaultObj()
{
	static class UGEC_Explosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Explosion_C*>(UGEC_Explosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


