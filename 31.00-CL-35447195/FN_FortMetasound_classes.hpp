#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortMetasound
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FortMetasound.FortMetaSoundCacheDefinition
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortMetaSoundCacheDefinition : public UDataAsset	
	{
	public:
		FFortMetaSoundCache Cache; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortMetasound.FortMetaSoundCacheDefinition");
			return ret;
		}
	};


	// Class FortMetasound.FortGameFeatureAction_PrecacheMetaSounds
	// Inherited from UGameFeatureAction_AudioActionBase -> UGameFeatureAction -> UObject
	// Size: 0x70 (0xA8 - 0x38)
	class UFortGameFeatureAction_PrecacheMetaSounds : public UGameFeatureAction_AudioActionBase	
	{
	public:
		bool bDefineCacheInline; // 0x38(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		UFortMetaSoundCacheDefinition CacheDefinition; // 0x40(0x8)
		FFortMetaSoundCache InlineCacheDefinition; // 0x48(0x10)
		TMap CachedMetaSoundsForDevice; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortMetasound.FortGameFeatureAction_PrecacheMetaSounds");
			return ret;
		}
	};


	// Class FortMetasound.FortMetaSoundInterfaceSubsystem
	// Inherited from UAudioEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xC0 (0xF0 - 0x30)
	class UFortMetaSoundInterfaceSubsystem : public UAudioEngineSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0xC0]; // 0x30(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortMetasound.FortMetaSoundInterfaceSubsystem");
			return ret;
		}
	};

}
