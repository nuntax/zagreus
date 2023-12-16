#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AsyncLoadingScreen.AsyncLoadingScreenLibrary
class UAsyncLoadingScreenLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAsyncLoadingScreenLibrary* GetDefaultObj();

	void SetDisplayTipTextIndex(int32 TipTextIndex);
	void SetDisplayMovieIndex(int32 MovieIndex);
	void SetDisplayBackgroundIndex(int32 BackgroundIndex);
};

// 0xAC8 (0xB00 - 0x38)
// Class AsyncLoadingScreen.LoadingScreenSettings
class ULoadingScreenSettings : public UDeveloperSettings
{
public:
	struct FALoadingScreenSettings               StartupLoadingScreen;                              // 0x38(0x330)(Edit, Config, NativeAccessSpecifierPublic)
	struct FALoadingScreenSettings               DefaultLoadingScreen;                              // 0x368(0x330)(Edit, Config, NativeAccessSpecifierPublic)
	struct FClassicLayoutSettings                Classic;                                           // 0x698(0xA8)(Edit, Config, NativeAccessSpecifierPublic)
	struct FCenterLayoutSettings                 Center;                                            // 0x740(0xA0)(Edit, Config, NativeAccessSpecifierPublic)
	struct FLetterboxLayoutSettings              Letterbox;                                         // 0x7E0(0x138)(Edit, Config, NativeAccessSpecifierPublic)
	struct FSidebarLayoutSettings                Sidebar;                                           // 0x918(0xB0)(Edit, Config, NativeAccessSpecifierPublic)
	struct FDualSidebarLayoutSettings            DualSidebar;                                       // 0x9C8(0x138)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULoadingScreenSettings* GetDefaultObj();

};

}


