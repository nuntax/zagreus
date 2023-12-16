#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Bleeding2.GEC_Bleeding2_C
// (None)

class UClass* UGEC_Bleeding2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Bleeding2_C");

	return Clss;
}


// GEC_Bleeding2_C GEC_Bleeding2.Default__GEC_Bleeding2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Bleeding2_C* UGEC_Bleeding2_C::GetDefaultObj()
{
	static class UGEC_Bleeding2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Bleeding2_C*>(UGEC_Bleeding2_C::StaticClass()->DefaultObject);

	return Default;
}

}


