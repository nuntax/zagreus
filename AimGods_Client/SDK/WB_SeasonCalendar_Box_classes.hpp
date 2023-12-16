#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x278 - 0x230)
// WidgetBlueprintGeneratedClass WB_SeasonCalendar_Box.WB_SeasonCalendar_Box_C
class UWB_SeasonCalendar_Box_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Head;                                              // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Number;                                            // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  HeadText;                                          // 0x248(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  NumberText;                                        // 0x260(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWB_SeasonCalendar_Box_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void UpdateNumber(class FText NewNumber);
	void ExecuteUbergraph_WB_SeasonCalendar_Box(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_NewNumber);
};

}


