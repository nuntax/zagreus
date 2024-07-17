#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
struct UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Params
{
public:
	TArray<struct FOculusMR_PlaneMeshTriangle>   Triangles;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_358[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
struct UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Params
{
public:
	TArray<struct FOculusMR_PlaneMeshTriangle>   Triangles;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMR_Settings.SetUseDynamicLighting
struct UOculusMR_Settings_SetUseDynamicLighting_Params
{
public:
	bool                                         Val;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMR_Settings.SetIsCasting
struct UOculusMR_Settings_SetIsCasting_Params
{
public:
	bool                                         Val;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMR_Settings.SetDepthQuality
struct UOculusMR_Settings_SetDepthQuality_Params
{
public:
	enum class EOculusMR_DepthQuality            Val;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMR_Settings.SetCompositionMethod
struct UOculusMR_Settings_SetCompositionMethod_Params
{
public:
	enum class EOculusMR_CompositionMethod       Val;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMR_Settings.SetCapturingCamera
struct UOculusMR_Settings_SetCapturingCamera_Params
{
public:
	enum class EOculusMR_CameraDeviceEnum        Val;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMR_Settings.GetUseDynamicLighting
struct UOculusMR_Settings_GetUseDynamicLighting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMR_Settings.GetIsCasting
struct UOculusMR_Settings_GetIsCasting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMR_Settings.GetDepthQuality
struct UOculusMR_Settings_GetDepthQuality_Params
{
public:
	enum class EOculusMR_DepthQuality            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMR_Settings.GetCompositionMethod
struct UOculusMR_Settings_GetCompositionMethod_Params
{
public:
	enum class EOculusMR_CompositionMethod       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMR_Settings.GetCapturingCamera
struct UOculusMR_Settings_GetCapturingCamera_Params
{
public:
	enum class EOculusMR_CameraDeviceEnum        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
struct UOculusMR_Settings_GetBindToTrackedCameraIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
struct UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Params
{
public:
	int32                                        InTrackedCameraIndex;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent
struct UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled
struct UOculusMRFunctionLibrary_IsMrcEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OculusMR.OculusMRFunctionLibrary.IsMrcActive
struct UOculusMRFunctionLibrary_IsMrcActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent
struct UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Params
{
public:
	class USceneComponent*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings
struct UOculusMRFunctionLibrary_GetOculusMRSettings_Params
{
public:
	class UOculusMR_Settings*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


