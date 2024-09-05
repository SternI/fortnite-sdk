#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameFeatures
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GameFeatures.GameFeatureComponentEntry
	// Size: 0x48 (0x48 - 0x0)
	struct FGameFeatureComponentEntry	
	{
	public:
		TWeakObjectPtr ActorClass; // 0x0(0x20)
		TWeakObjectPtr ComponentClass; // 0x20(0x20)
		bool bClientComponent : 1; // 0x40:0(0x1)
		bool bServerComponent : 1; // 0x40:1(0x1)
		char AdditionFlags; // 0x41(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x42(0x6) UNKNOWN PROPERTY
	};


	// Struct GameFeatures.DataRegistrySourceToAdd
	// Size: 0x50 (0x50 - 0x0)
	struct FDataRegistrySourceToAdd	
	{
	public:
		FName RegistryToAddTo; // 0x0(0x4)
		int32_t AssetPriority; // 0x4(0x4)
		bool bClientSource : 1; // 0x8:0(0x1)
		bool bServerSource : 1; // 0x8:1(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr DataTableToAdd; // 0x10(0x20)
		TWeakObjectPtr CurveTableToAdd; // 0x30(0x20)
	};


	// Struct GameFeatures.GameFeaturePluginStateMachineProperties
	// Size: 0xE0 (0xE0 - 0x0)
	struct FGameFeaturePluginStateMachineProperties	
	{
	public:
		unsigned char UnknownData02_7[0xA0]; // 0x0(0xA0) UNKNOWN PROPERTY
		UGameFeatureData GameFeatureData; // 0xA0(0x8)
		unsigned char UnknownData03_7[0x38]; // 0xA8(0x38) UNKNOWN PROPERTY
	};


	// Struct GameFeatures.GameFeaturePluginIdentifier
	// Size: 0x28 (0x28 - 0x0)
	struct FGameFeaturePluginIdentifier	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct GameFeatures.InstallBundlePluginProtocolOptions
	// Size: 0xC (0xC - 0x0)
	struct FInstallBundlePluginProtocolOptions	
	{
	public:
		unsigned char UnknownData01_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};

}