#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HealBulletsBuff.GE_HealBulletsBuff_C
// (None)

class UClass* UGE_HealBulletsBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HealBulletsBuff_C");

	return Clss;
}


// GE_HealBulletsBuff_C GE_HealBulletsBuff.Default__GE_HealBulletsBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HealBulletsBuff_C* UGE_HealBulletsBuff_C::GetDefaultObj()
{
	static class UGE_HealBulletsBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HealBulletsBuff_C*>(UGE_HealBulletsBuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


