#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CommChannelsDebugRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CommChannelsDebugRuntime.CommChannelsDebugDrawSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UCommChannelsDebugDrawSubsystem : public UTickableWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommChannelsDebugRuntime.CommChannelsDebugDrawSubsystem");
			return ret;
		}
	};

}