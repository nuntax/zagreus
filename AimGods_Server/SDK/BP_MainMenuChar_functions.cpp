#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainMenuChar.BP_MainMenuChar_C
// (Actor)

class UClass* ABP_MainMenuChar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainMenuChar_C");

	return Clss;
}


// BP_MainMenuChar_C BP_MainMenuChar.Default__BP_MainMenuChar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MainMenuChar_C* ABP_MainMenuChar_C::GetDefaultObj()
{
	static class ABP_MainMenuChar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MainMenuChar_C*>(ABP_MainMenuChar_C::StaticClass()->DefaultObject);

	return Default;
}

}


