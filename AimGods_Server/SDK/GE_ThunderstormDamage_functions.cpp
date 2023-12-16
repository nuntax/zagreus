#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ThunderstormDamage.GE_ThunderstormDamage_C
// (None)

class UClass* UGE_ThunderstormDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ThunderstormDamage_C");

	return Clss;
}


// GE_ThunderstormDamage_C GE_ThunderstormDamage.Default__GE_ThunderstormDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ThunderstormDamage_C* UGE_ThunderstormDamage_C::GetDefaultObj()
{
	static class UGE_ThunderstormDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ThunderstormDamage_C*>(UGE_ThunderstormDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


