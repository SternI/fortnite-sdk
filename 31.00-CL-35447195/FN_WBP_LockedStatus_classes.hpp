#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WBP_LockedStatus
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_LockedStatus.WBP_LockedStatus_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x31 (0x2E9 - 0x2B8)
	class UWBP_LockedStatus_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UWidgetAnimation Anim_OnHover; // 0x2C0(0x8)
		UWBP_UIKit_StatusIndicator_C StatusIndicator_Locked; // 0x2C8(0x8)
		UWBP_UIKit_Highlight_C WBP_UIKit_Highlight; // 0x2D0(0x8)
		FText LockedReason; // 0x2D8(0x10)
		bool UseNewDesign; // 0x2E8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_LockedStatus.WBP_LockedStatus_C");
			return ret;
		}

		void SetDefaultVisualsState(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608BC00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608BD00
		void On Lock Hover Select(bool bIsHoverSelected); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608BE00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608C000
		void ExecuteUbergraph_WBP_LockedStatus(int32_t EntryPoint); // Flags: Final 0x15DB608BF00
	};

}
