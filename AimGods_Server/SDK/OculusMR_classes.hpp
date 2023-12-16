#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x220 - 0x218)
// Class OculusMR.OculusMR_BoundaryActor
class AOculusMR_BoundaryActor : public AActor
{
public:
	class UOculusMR_BoundaryMeshComponent*       BoundaryMeshComponent;                             // 0x218(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AOculusMR_BoundaryActor* GetDefaultObj();

};

// 0x30 (0x430 - 0x400)
// Class OculusMR.OculusMR_BoundaryMeshComponent
class UOculusMR_BoundaryMeshComponent : public UMeshComponent
{
public:
	enum class EOculusMR_BoundaryType            BoundaryType;                                      // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_341[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BottomZ;                                           // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TopZ;                                              // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_343[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             WhiteMaterial;                                     // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AOculusMR_CastingCameraActor*          CastingCameraActor;                                // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_344[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOculusMR_BoundaryMeshComponent* GetDefaultObj();

};

// 0x100 (0x330 - 0x230)
// Class OculusMR.OculusMR_CastingCameraActor
class AOculusMR_CastingCameraActor : public ASceneCapture2D
{
public:
	class UVRNotificationsComponent*             VRNotificationComponent;                           // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            CameraColorTexture;                                // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            CameraDepthTexture;                                // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOculusMR_PlaneMeshComponent*          PlaneMeshComponent;                                // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             ChromaKeyMaterial;                                 // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             ChromaKeyLitMaterial;                              // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             OpaqueColoredMaterial;                             // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ChromaKeyMaterialInstance;                         // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ChromaKeyLitMaterialInstance;                      // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              CameraFrameMaterialInstance;                       // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              BackdropMaterialInstance;                          // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AOculusMR_BoundaryActor*               BoundaryActor;                                     // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASceneCapture2D*                       BoundarySceneCaptureActor;                         // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            DefaultTexture_White;                              // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_351[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTextureRenderTarget2D*>        BackgroundRenderTargets;                           // 0x2F8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class ASceneCapture2D*                       ForegroundCaptureActor;                            // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UTextureRenderTarget2D*>        ForegroundRenderTargets;                           // 0x310(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UOculusMR_Settings*                    MRSettings;                                        // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOculusMR_State*                       MRState;                                           // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AOculusMR_CastingCameraActor* GetDefaultObj();

};

// 0x20 (0x420 - 0x400)
// Class OculusMR.OculusMR_PlaneMeshComponent
class UOculusMR_PlaneMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_35E[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOculusMR_PlaneMeshComponent* GetDefaultObj();

	bool SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle>& Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle>& Triangles);
};

// 0xA0 (0xC8 - 0x28)
// Class OculusMR.OculusMR_Settings
class UOculusMR_Settings : public UObject
{
public:
	enum class EOculusMR_ClippingReference       ClippingReference;                                 // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTrackedCameraResolution;                       // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WidthPerView;                                      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeightPerView;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CastingLatency;                                    // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                BackdropColor;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandPoseStateLatency;                              // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ChromaKeyColor;                                    // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChromaKeySimilarity;                               // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChromaKeySmoothRange;                              // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChromaKeySpillRange;                               // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOculusMR_VirtualGreenScreenType  VirtualGreenScreenType;                            // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DynamicLightingDepthSmoothFactor;                  // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DynamicLightingDepthVariationClampingValue;        // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOculusMR_PostProcessEffects      ExternalCompositionPostProcessEffects;             // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCasting;                                        // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EOculusMR_CompositionMethod       CompositionMethod;                                 // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EOculusMR_CameraDeviceEnum        CapturingCamera;                                   // 0x5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseDynamicLighting;                               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EOculusMR_DepthQuality            DepthQuality;                                      // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D3[0x66];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOculusMR_Settings* GetDefaultObj();

	void SetUseDynamicLighting(bool Val);
	void SetIsCasting(bool Val);
	void SetDepthQuality(enum class EOculusMR_DepthQuality Val);
	void SetCompositionMethod(enum class EOculusMR_CompositionMethod Val);
	void SetCapturingCamera(enum class EOculusMR_CameraDeviceEnum Val);
	void SaveToIni();
	void LoadFromIni();
	bool GetUseDynamicLighting();
	bool GetIsCasting();
	enum class EOculusMR_DepthQuality GetDepthQuality();
	enum class EOculusMR_CompositionMethod GetCompositionMethod();
	enum class EOculusMR_CameraDeviceEnum GetCapturingCamera();
	int32 GetBindToTrackedCameraIndex();
	void BindToTrackedCameraIndexIfAvailable(int32 InTrackedCameraIndex);
};

// 0x80 (0xA8 - 0x28)
// Class OculusMR.OculusMR_State
class UOculusMR_State : public UObject
{
public:
	struct FTrackedCamera                        TrackedCamera;                                     // 0x28(0x70)(NativeAccessSpecifierPublic)
	class USceneComponent*                       TrackingReferenceComponent;                        // 0x98(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ChangeCameraStateRequested;                        // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BindToTrackedCameraIndexRequested;                 // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOculusMR_State* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OculusMR.OculusMRFunctionLibrary
class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOculusMRFunctionLibrary* GetDefaultObj();

	void SetTrackingReferenceComponent(class USceneComponent* Component);
	bool IsMrcEnabled();
	bool IsMrcActive();
	class USceneComponent* GetTrackingReferenceComponent();
	class UOculusMR_Settings* GetOculusMRSettings();
};

}


