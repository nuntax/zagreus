#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DamageVolume.GE_DamageVolume_C
// (None)

class UClass* UGE_DamageVolume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DamageVolume_C");

	return Clss;
}


// GE_DamageVolume_C GE_DamageVolume.Default__GE_DamageVolume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DamageVolume_C* UGE_DamageVolume_C::GetDefaultObj()
{
	static class UGE_DamageVolume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DamageVolume_C*>(UGE_DamageVolume_C::StaticClass()->DefaultObject);

	return Default;
}

}


