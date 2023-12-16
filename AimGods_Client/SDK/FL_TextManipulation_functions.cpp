#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FL_TextManipulation.FL_TextManipulation_C
// (None)

class UClass* UFL_TextManipulation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FL_TextManipulation_C");

	return Clss;
}


// FL_TextManipulation_C FL_TextManipulation.Default__FL_TextManipulation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFL_TextManipulation_C* UFL_TextManipulation_C::GetDefaultObj()
{
	static class UFL_TextManipulation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFL_TextManipulation_C*>(UFL_TextManipulation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FL_TextManipulation.FL_TextManipulation_C.Truncate Text Box
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextToTruncate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              NumCharsToTruncateAt                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEditableTextBox*            Text_Box                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TruncatedText                                                    (Parm, OutParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UFL_TextManipulation_C::Truncate_Text_Box(class FText& TextToTruncate, int32 NumCharsToTruncateAt, class UEditableTextBox*& Text_Box, class UObject* __WorldContext, class FText* TruncatedText, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_TextManipulation_C", "Truncate Text Box");

	Params::UFL_TextManipulation_C_Truncate_Text_Box_Params Parms{};

	Parms.TextToTruncate = TextToTruncate;
	Parms.NumCharsToTruncateAt = NumCharsToTruncateAt;
	Parms.Text_Box = Text_Box;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TruncatedText != nullptr)
		*TruncatedText = Parms.TruncatedText;

}

}


