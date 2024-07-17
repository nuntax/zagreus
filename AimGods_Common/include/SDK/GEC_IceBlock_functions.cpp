#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GEC_IceBlock.GEC_IceBlock_C
// (None)

class UClass* UGEC_IceBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GEC_IceBlock_C");

	return Clss;
}


// GEC_IceBlock_C GEC_IceBlock.Default__GEC_IceBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGEC_IceBlock_C* UGEC_IceBlock_C::GetDefaultObj()
{
	static class UGEC_IceBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGEC_IceBlock_C*>(UGEC_IceBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


