#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NetCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class NetCore.NetAnalyticsAggregatorConfig
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNetAnalyticsAggregatorConfig : public UObject	
	{
	public:
		TArray NetAnalyticsData; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetCore.NetAnalyticsAggregatorConfig");
			return ret;
		}
	};


	// Class NetCore.StatePerObjectConfig
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UStatePerObjectConfig : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
		FString PerObjectConfigSection; // 0x50(0x10)
		bool bEnabled; // 0x60(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetCore.StatePerObjectConfig");
			return ret;
		}
	};


	// Class NetCore.EscalationManagerConfig
	// Inherited from UStatePerObjectConfig -> UObject
	// Size: 0x20 (0x88 - 0x68)
	class UEscalationManagerConfig : public UStatePerObjectConfig	
	{
	public:
		TArray EscalationSeverity; // 0x68(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NetCore.EscalationManagerConfig");
			return ret;
		}
	};

}
