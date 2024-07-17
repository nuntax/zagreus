#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LoadoutDragAndDropPayload.BP_LoadoutDragAndDropPayload_C
// (None)

class UClass* UBP_LoadoutDragAndDropPayload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LoadoutDragAndDropPayload_C");

	return Clss;
}


// BP_LoadoutDragAndDropPayload_C BP_LoadoutDragAndDropPayload.Default__BP_LoadoutDragAndDropPayload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_LoadoutDragAndDropPayload_C* UBP_LoadoutDragAndDropPayload_C::GetDefaultObj()
{
	static class UBP_LoadoutDragAndDropPayload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_LoadoutDragAndDropPayload_C*>(UBP_LoadoutDragAndDropPayload_C::StaticClass()->DefaultObject);

	return Default;
}

}


