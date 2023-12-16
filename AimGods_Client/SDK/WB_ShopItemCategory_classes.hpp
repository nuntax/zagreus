#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2A0 - 0x230)
// WidgetBlueprintGeneratedClass WB_ShopItemCategory.WB_ShopItemCategory_C
class UWB_ShopItemCategory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            CategoryText;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              ItemBox;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EShopItemCategory                 ItemCategory;                                      // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1490[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EShopItemCategory, class FText> ItemCategoryFriendlyText;                          // 0x250(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWB_ShopItemCategory_C* GetDefaultObj();

	void Construct();
	void Add_Item_To_Category_Box(class UWB_ShopItem_C* Shop_Item);
	void ExecuteUbergraph_WB_ShopItemCategory(int32 EntryPoint, class UWB_ShopItem_C* K2Node_CustomEvent_Shop_Item, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


