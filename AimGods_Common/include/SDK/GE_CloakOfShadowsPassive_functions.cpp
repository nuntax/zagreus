#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CloakOfShadowsPassive.GE_CloakOfShadowsPassive_C
// (None)

class UClass* UGE_CloakOfShadowsPassive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CloakOfShadowsPassive_C");

	return Clss;
}


// GE_CloakOfShadowsPassive_C GE_CloakOfShadowsPassive.Default__GE_CloakOfShadowsPassive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CloakOfShadowsPassive_C* UGE_CloakOfShadowsPassive_C::GetDefaultObj()
{
	static class UGE_CloakOfShadowsPassive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CloakOfShadowsPassive_C*>(UGE_CloakOfShadowsPassive_C::StaticClass()->DefaultObject);

	return Default;
}

}


