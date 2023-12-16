#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Thunderstorm.GEC_Thunderstorm_C
// (None)

class UClass* UGEC_Thunderstorm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Thunderstorm_C");

	return Clss;
}


// GEC_Thunderstorm_C GEC_Thunderstorm.Default__GEC_Thunderstorm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Thunderstorm_C* UGEC_Thunderstorm_C::GetDefaultObj()
{
	static class UGEC_Thunderstorm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Thunderstorm_C*>(UGEC_Thunderstorm_C::StaticClass()->DefaultObject);

	return Default;
}

}


