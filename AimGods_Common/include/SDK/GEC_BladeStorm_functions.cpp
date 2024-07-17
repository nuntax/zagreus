#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_BladeStorm.GEC_BladeStorm_C
// (None)

class UClass* UGEC_BladeStorm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_BladeStorm_C");

	return Clss;
}


// GEC_BladeStorm_C GEC_BladeStorm.Default__GEC_BladeStorm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_BladeStorm_C* UGEC_BladeStorm_C::GetDefaultObj()
{
	static class UGEC_BladeStorm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_BladeStorm_C*>(UGEC_BladeStorm_C::StaticClass()->DefaultObject);

	return Default;
}

}


