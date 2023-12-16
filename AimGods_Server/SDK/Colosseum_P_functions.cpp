#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Colosseum_P.Colosseum_P_C
// (Actor)

class UClass* AColosseum_P_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Colosseum_P_C");

	return Clss;
}


// Colosseum_P_C Colosseum_P.Default__Colosseum_P_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AColosseum_P_C* AColosseum_P_C::GetDefaultObj()
{
	static class AColosseum_P_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AColosseum_P_C*>(AColosseum_P_C::StaticClass()->DefaultObject);

	return Default;
}

}


