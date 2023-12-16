#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_CloakOfShadows.GEC_CloakOfShadows_C
// (None)

class UClass* UGEC_CloakOfShadows_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_CloakOfShadows_C");

	return Clss;
}


// GEC_CloakOfShadows_C GEC_CloakOfShadows.Default__GEC_CloakOfShadows_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_CloakOfShadows_C* UGEC_CloakOfShadows_C::GetDefaultObj()
{
	static class UGEC_CloakOfShadows_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_CloakOfShadows_C*>(UGEC_CloakOfShadows_C::StaticClass()->DefaultObject);

	return Default;
}

}


