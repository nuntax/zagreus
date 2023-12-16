#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CloakOfShadow_Cleanse.GE_CloakOfShadow_Cleanse_C
// (None)

class UClass* UGE_CloakOfShadow_Cleanse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CloakOfShadow_Cleanse_C");

	return Clss;
}


// GE_CloakOfShadow_Cleanse_C GE_CloakOfShadow_Cleanse.Default__GE_CloakOfShadow_Cleanse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CloakOfShadow_Cleanse_C* UGE_CloakOfShadow_Cleanse_C::GetDefaultObj()
{
	static class UGE_CloakOfShadow_Cleanse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CloakOfShadow_Cleanse_C*>(UGE_CloakOfShadow_Cleanse_C::StaticClass()->DefaultObject);

	return Default;
}

}


