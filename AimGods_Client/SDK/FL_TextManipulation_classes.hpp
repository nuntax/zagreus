#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FL_TextManipulation.FL_TextManipulation_C
class UFL_TextManipulation_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFL_TextManipulation_C* GetDefaultObj();

	void Truncate_Text_Box(class FText& TextToTruncate, int32 NumCharsToTruncateAt, class UEditableTextBox*& Text_Box, class UObject* __WorldContext, class FText* TruncatedText, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


