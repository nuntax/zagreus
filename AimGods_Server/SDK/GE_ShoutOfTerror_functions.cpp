#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ShoutOfTerror.GE_ShoutOfTerror_C
// (None)

class UClass* UGE_ShoutOfTerror_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ShoutOfTerror_C");

	return Clss;
}


// GE_ShoutOfTerror_C GE_ShoutOfTerror.Default__GE_ShoutOfTerror_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ShoutOfTerror_C* UGE_ShoutOfTerror_C::GetDefaultObj()
{
	static class UGE_ShoutOfTerror_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ShoutOfTerror_C*>(UGE_ShoutOfTerror_C::StaticClass()->DefaultObject);

	return Default;
}

}


