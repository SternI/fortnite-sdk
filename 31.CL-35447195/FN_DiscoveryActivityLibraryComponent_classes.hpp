#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DiscoveryActivityLibraryComponent
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/DiscoveryActivityLibraryComponent.DiscoveryActivityLibraryComponent_C
	// Inherited from UActivityLibraryComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xD0 - 0xD0)
	class UDiscoveryActivityLibraryComponent_C : public UActivityLibraryComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/DiscoveryActivityLibraryComponent.DiscoveryActivityLibraryComponent_C");
			return ret;
		}
	};

}