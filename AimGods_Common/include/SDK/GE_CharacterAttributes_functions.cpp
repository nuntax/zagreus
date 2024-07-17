#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CharacterAttributes.GE_CharacterAttributes_C
// (None)

class UClass* UGE_CharacterAttributes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CharacterAttributes_C");

	return Clss;
}


// GE_CharacterAttributes_C GE_CharacterAttributes.Default__GE_CharacterAttributes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CharacterAttributes_C* UGE_CharacterAttributes_C::GetDefaultObj()
{
	static class UGE_CharacterAttributes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CharacterAttributes_C*>(UGE_CharacterAttributes_C::StaticClass()->DefaultObject);

	return Default;
}

}


