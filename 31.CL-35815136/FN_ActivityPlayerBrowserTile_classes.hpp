#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityPlayerBrowserTile
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityPlayerBrowserTile.ActivityPlayerBrowserTile_C
	// Inherited from UFortActivityPlayerBrowserTile -> UFortActivityTileViewTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x1480 - 0x1480)
	class UActivityPlayerBrowserTile_C : public UFortActivityPlayerBrowserTile	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityPlayerBrowserTile.ActivityPlayerBrowserTile_C");
			return ret;
		}
	};

}