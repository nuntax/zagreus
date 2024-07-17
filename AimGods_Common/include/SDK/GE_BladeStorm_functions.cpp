#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BladeStorm.GE_BladeStorm_C
// (None)

class UClass* UGE_BladeStorm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BladeStorm_C");

	return Clss;
}


// GE_BladeStorm_C GE_BladeStorm.Default__GE_BladeStorm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BladeStorm_C* UGE_BladeStorm_C::GetDefaultObj()
{
	static class UGE_BladeStorm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BladeStorm_C*>(UGE_BladeStorm_C::StaticClass()->DefaultObject);

	return Default;
}

}


