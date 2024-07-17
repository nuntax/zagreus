#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Thorns2.GEC_Thorns2_C
// (None)

class UClass* UGEC_Thorns2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Thorns2_C");

	return Clss;
}


// GEC_Thorns2_C GEC_Thorns2.Default__GEC_Thorns2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Thorns2_C* UGEC_Thorns2_C::GetDefaultObj()
{
	static class UGEC_Thorns2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Thorns2_C*>(UGEC_Thorns2_C::StaticClass()->DefaultObject);

	return Default;
}

}


