#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_Break.GEC_Break_C
// (None)

class UClass* UGEC_Break_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_Break_C");

	return Clss;
}


// GEC_Break_C GEC_Break.Default__GEC_Break_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_Break_C* UGEC_Break_C::GetDefaultObj()
{
	static class UGEC_Break_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_Break_C*>(UGEC_Break_C::StaticClass()->DefaultObject);

	return Default;
}

}


