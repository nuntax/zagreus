#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_ShoutOfTerror.GEC_ShoutOfTerror_C
// (None)

class UClass* UGEC_ShoutOfTerror_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_ShoutOfTerror_C");

	return Clss;
}


// GEC_ShoutOfTerror_C GEC_ShoutOfTerror.Default__GEC_ShoutOfTerror_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_ShoutOfTerror_C* UGEC_ShoutOfTerror_C::GetDefaultObj()
{
	static class UGEC_ShoutOfTerror_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_ShoutOfTerror_C*>(UGEC_ShoutOfTerror_C::StaticClass()->DefaultObject);

	return Default;
}

}


