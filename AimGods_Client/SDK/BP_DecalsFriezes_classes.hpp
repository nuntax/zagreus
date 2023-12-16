#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x232 - 0x218)
// BlueprintGeneratedClass BP_DecalsFriezes.BP_DecalsFriezes_C
class ABP_DecalsFriezes_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Decal_A;                                           // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EMeshes_DecalsFriezes             Decal_Choice;                                      // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMaterials_DecalsFriezes          Material_Choice;                                   // 0x231(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DecalsFriezes_C* GetDefaultObj();

	void UserConstructionScript(const struct FMaterials_DecalsFriezesB& MaterialsFriezesB, class FName Stain_Parameter, class UMaterialInstance* CurrentMaterial, class UMaterialInstance* AtlasClassicalA, class UMaterialInstance* AtlasClassicalB, const struct FMeshes_DecalsFriezes& MeshesFriezes, const struct FMaterials_DecalsFriezesA& MaterialsFriezesA, const class FString& DecalName, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class UMaterialInstance* CallFunc_Array_Get_Item, class UMaterialInstance* CallFunc_Array_Get_Item_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, class UStaticMesh* CallFunc_Array_Get_Item_2, bool CallFunc_SetStaticMesh_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_DecalsFriezes(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


