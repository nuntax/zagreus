#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x128 - 0xB0)
// Class MagicLeap.InAppPurchaseComponent
class UInAppPurchaseComponent : public UActorComponent
{
public:
	UMulticastInlineDelegateProperty_            InAppPurchaseLogMessage;                           // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            GetItemsDetailsSuccess;                            // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            GetItemsDetailsFailure;                            // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            PurchaseConfirmationSuccess;                       // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            PurchaseConfirmationFailure;                       // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            GetPurchaseHistorySuccess;                         // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            GetPurchaseHistoryFailure;                         // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_497[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInAppPurchaseComponent* GetDefaultObj();

	bool TryPurchaseItemAsync(struct FPurchaseItemDetails& ItemDetails);
	bool TryGetPurchaseHistoryAsync(int32 InNumPages);
	bool TryGetItemsDetailsAsync(TArray<class FString>& ItemIDs);
	void PurchaseConfirmationSuccess__DelegateSignature(struct FPurchaseConfirmation& PurchaseConfirmations);
	void PurchaseConfirmationFailure__DelegateSignature();
	void InAppPurchaseLogMessage__DelegateSignature(const class FString& LogMessage);
	void GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FPurchaseConfirmation>& PurchaseHistory);
	void GetPurchaseHistoryFailure__DelegateSignature();
	void GetItemsDetailsSuccess__DelegateSignature(TArray<struct FPurchaseItemDetails>& ItemsDetails);
	void GetItemsDetailsFailure__DelegateSignature();
};

// 0x30 (0x170 - 0x140)
// Class MagicLeap.LuminApplicationLifecycleComponent
class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
{
public:
	UMulticastInlineDelegateProperty_            DeviceHasReactivatedDelegate;                      // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            DeviceWillEnterRealityModeDelegate;                // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            DeviceWillGoInStandbyDelegate;                     // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULuminApplicationLifecycleComponent* GetDefaultObj();

};

// 0x90 (0x1D0 - 0x140)
// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
{
public:
	UMulticastInlineDelegateProperty_            OnHeadTrackingLost;                                // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastInlineDelegateProperty_            OnHeadTrackingRecovered;                           // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastInlineDelegateProperty_            OnHeadTrackingRecoveryFailed;                      // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastInlineDelegateProperty_            OnHeadTrackingNewSessionStarted;                   // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49D[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapHeadTrackingNotificationsComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MagicLeap.MagicLeapHMDFunctionLibrary
class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapHMDFunctionLibrary* GetDefaultObj();

	void SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor);
	void SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor);
	void SetBaseRotation(struct FRotator& InBaseRotation);
	void SetBasePosition(struct FVector& InBasePosition);
	void SetBaseOrientation(struct FQuat& InBaseOrientation);
	bool SetAppReady();
	bool IsRunningOnMagicLeapHMD();
	int32 GetMLSDKVersionRevision();
	int32 GetMLSDKVersionMinor();
	int32 GetMLSDKVersionMajor();
	class FString GetMLSDKVersion();
	bool GetHeadTrackingState(struct FMagicLeapHeadTrackingState* State);
	bool GetHeadTrackingMapEvents(TSet<enum class EMagicLeapHeadTrackingMapEvent>* MapEvents);
};

// 0x8 (0x30 - 0x28)
// Class MagicLeap.MagicLeapSettings
class UMagicLeapSettings : public UObject
{
public:
	bool                                         bEnableZI;                                         // 0x28(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseVulkanForZI;                                   // 0x29(0x1)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMLAudioForZI;                                  // 0x2A(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BE[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
class IMagicLeapMeshBlockSelectorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMagicLeapMeshBlockSelectorInterface* GetDefaultObj();

	void SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);
};

// 0x90 (0x280 - 0x1F0)
// Class MagicLeap.MeshTrackerComponent
class UMeshTrackerComponent : public USceneComponent
{
public:
	uint8                                        Pad_4CC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnMeshTrackerUpdated;                              // 0x1F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         ScanWorld;                                         // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapMeshType                MeshType;                                          // 0x209(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBoxComponent*                         BoundingVolume;                                    // 0x210(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapMeshLOD                 LevelOfDetail;                                     // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PerimeterOfGapsToFill;                             // 0x21C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Planarize;                                         // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DisconnectedSectionArea;                           // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequestNormals;                                    // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequestVertexConfidence;                           // 0x229(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapMeshVertexColorMode     VertexColorMode;                                   // 0x22A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D2[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FColor>                        BlockVertexColors;                                 // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          VertexColorFromConfidenceZero;                     // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          VertexColorFromConfidenceOne;                      // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoveOverlappingTriangles;                        // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMRMeshComponent*                      MRMesh;                                            // 0x268(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BricksPerFrame;                                    // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D4[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshTrackerComponent* GetDefaultObj();

	void SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh);
	void OnMeshTrackerUpdated__DelegateSignature(const struct FGuid& ID, TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector>& Normals, TArray<float>& Confidence);
	int32 GetNumQueuedBlockUpdates();
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void DisconnectBlockSelector();
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectBlockSelector(TScriptInterface<class IMagicLeapMeshBlockSelectorInterface> Selector);
};

// 0x68 (0x118 - 0xB0)
// Class MagicLeap.MagicLeapRaycastComponent
class UMagicLeapRaycastComponent : public UActorComponent
{
public:
	uint8                                        Pad_4DE[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapRaycastComponent* GetDefaultObj();

	bool RequestRaycast(struct FMagicLeapRaycastQueryParams& RequestParams, UDelegateProperty_& ResultDelegate);
	void RaycastResultDelegate__DelegateSignature(const struct FMagicLeapRaycastHitResult& HitResult);
};

// 0x0 (0x28 - 0x28)
// Class MagicLeap.MagicLeapRaycastFunctionLibrary
class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapRaycastFunctionLibrary* GetDefaultObj();

	struct FMagicLeapRaycastQueryParams MakeRaycastQueryParams(const struct FVector& Position, const struct FVector& Direction, const struct FVector& UpVector, int32 Width, int32 Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32 UserData);
};

}


