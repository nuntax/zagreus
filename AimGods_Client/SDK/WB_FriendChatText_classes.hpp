#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x251 - 0x230)
// WidgetBlueprintGeneratedClass WB_FriendChatText.WB_FriendChatText_C
class UWB_FriendChatText_C : public UUserWidget
{
public:
	class UTextBlock*                            MessageWidget;                                     // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ActualText;                                        // 0x238(0x18)(Edit, BlueprintVisible, Net, ExposeOnSpawn)
	bool                                         bIsFromMe;                                         // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWB_FriendChatText_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	struct FSlateColor Get_MessageWidget_ColorAndOpacity(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
};

}


