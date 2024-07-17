#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x230 - 0x1F0)
// Class MagicLeapPlanes.MagicLeapPlanesComponent
class UMagicLeapPlanesComponent : public USceneComponent
{
public:
	TArray<enum class EMagicLeapPlaneQueryFlags> QueryFlags;                                        // 0x1F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UBoxComponent*                         SearchVolume;                                      // 0x200(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinHolePerimeter;                                  // 0x20C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPlaneArea;                                      // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnPlanesQueryResult;                               // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_410[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapPlanesComponent* GetDefaultObj();

	bool RequestPlanesAsync();
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapPlanesFunctionLibrary* GetDefaultObj();

	void ReorderPlaneFlags(TArray<enum class EMagicLeapPlaneQueryFlags>& InPriority, TArray<enum class EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<enum class EMagicLeapPlaneQueryFlags>* OutReorderedFlags);
	void RemoveFlagsNotInQuery(TArray<enum class EMagicLeapPlaneQueryFlags>& InQueryFlags, TArray<enum class EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<enum class EMagicLeapPlaneQueryFlags>* OutFlags);
	bool PlanesQueryBeginAsync(struct FMagicLeapPlanesQuery& Query, UDelegateProperty_& ResultDelegate);
	bool IsTrackerValid();
	struct FTransform GetContentScale(class AActor* ContentActor, struct FMagicLeapPlaneResult& PlaneResult);
	bool DestroyTracker();
	bool CreateTracker();
};

}


