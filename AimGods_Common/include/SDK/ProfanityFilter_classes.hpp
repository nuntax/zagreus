#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class ProfanityFilter.ProfanityFilterFunctionLibrary
class UProfanityFilterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	uint8                                        Pad_1BC[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProfanityFilterFunctionLibrary* GetDefaultObj();

	class FString FilterProfanity_String(const class FString& InString, uint8 InMinimumSeverity);
	bool ContainsProfanity_Text(class FText InText, uint8 InMinimumSeverity);
	bool ContainsProfanity_String(const class FString& InString, uint8 InMinimumSeverity);
	bool ContainsProfanity_Name(class FName InName, uint8 InMinimumSeverity);
};

}


