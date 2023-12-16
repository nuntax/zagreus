#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WB_AGSaveGame.WB_AGSaveGame_C
// (None)

class UClass* UWB_AGSaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_AGSaveGame_C");

	return Clss;
}


// WB_AGSaveGame_C WB_AGSaveGame.Default__WB_AGSaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_AGSaveGame_C* UWB_AGSaveGame_C::GetDefaultObj()
{
	static class UWB_AGSaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_AGSaveGame_C*>(UWB_AGSaveGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


