#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Execute.GEC_Execute_C
// (None)

class UClass* UGEC_Execute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Execute_C");

	return Clss;
}


// GEC_Execute_C GEC_Execute.Default__GEC_Execute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Execute_C* UGEC_Execute_C::GetDefaultObj()
{
	static class UGEC_Execute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Execute_C*>(UGEC_Execute_C::StaticClass()->DefaultObject);

	return Default;
}

}


