#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x128 - 0x28)
// Class MagicLeapAR.LuminARUObjectManager
class ULuminARUObjectManager : public UObject
{
public:
	TArray<class UARPin*>                        AllAnchors;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_252[0xF0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULuminARUObjectManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MagicLeapAR.LuminARSessionFunctionLibrary
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULuminARSessionFunctionLibrary* GetDefaultObj();

	void StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration);
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapAR.LuminARFrameFunctionLibrary
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULuminARFrameFunctionLibrary* GetDefaultObj();

	bool LuminARLineTrace(class UObject* WorldContextObject, struct FVector2D& ScreenPosition, TSet<enum class ELuminARLineTraceChannel> TraceChannels, TArray<struct FARTraceResult>* OutHitResults);
	enum class ELuminARTrackingState GetTrackingState();
	void GetLightEstimation(struct FLuminARLightEstimate* OutLightEstimate);
};

// 0x30 (0xD8 - 0xA8)
// Class MagicLeapAR.LuminARSessionConfig
class ULuminARSessionConfig : public UARSessionConfig
{
public:
	int32                                        MaxPlaneQueryResults;                              // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinPlaneArea;                                      // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArbitraryOrientationPlaneDetection;               // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PlaneSearchExtents;                                // 0xB4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EMagicLeapPlaneQueryFlags> PlaneQueryFlags;                                   // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bDiscardZeroExtentPlanes;                          // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULuminARSessionConfig* GetDefaultObj();

};

}


