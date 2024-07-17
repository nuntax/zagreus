#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_NewsFeedRow.WB_NewsFeedRow_C
// (None)

class UClass* UWB_NewsFeedRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_NewsFeedRow_C");

	return Clss;
}


// WB_NewsFeedRow_C WB_NewsFeedRow.Default__WB_NewsFeedRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_NewsFeedRow_C* UWB_NewsFeedRow_C::GetDefaultObj()
{
	static class UWB_NewsFeedRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_NewsFeedRow_C*>(UWB_NewsFeedRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


