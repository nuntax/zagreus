#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionBarDragAndDropPayload.BP_ActionBarDragAndDropPayload_C
// (None)

class UClass* UBP_ActionBarDragAndDropPayload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionBarDragAndDropPayload_C");

	return Clss;
}


// BP_ActionBarDragAndDropPayload_C BP_ActionBarDragAndDropPayload.Default__BP_ActionBarDragAndDropPayload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionBarDragAndDropPayload_C* UBP_ActionBarDragAndDropPayload_C::GetDefaultObj()
{
	static class UBP_ActionBarDragAndDropPayload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionBarDragAndDropPayload_C*>(UBP_ActionBarDragAndDropPayload_C::StaticClass()->DefaultObject);

	return Default;
}

}


