#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_IntimidatingRoar.GEC_IntimidatingRoar_C
// (None)

class UClass* UGEC_IntimidatingRoar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_IntimidatingRoar_C");

	return Clss;
}


// GEC_IntimidatingRoar_C GEC_IntimidatingRoar.Default__GEC_IntimidatingRoar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_IntimidatingRoar_C* UGEC_IntimidatingRoar_C::GetDefaultObj()
{
	static class UGEC_IntimidatingRoar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_IntimidatingRoar_C*>(UGEC_IntimidatingRoar_C::StaticClass()->DefaultObject);

	return Default;
}

}


