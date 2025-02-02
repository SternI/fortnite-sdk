#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FNE_UILibrary
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct FNE_UILibrary.FNE_UIBlockTiming
	// Size: 0x2C (0x2C - 0x0)
	struct FFNE_UIBlockTiming	
	{
	public:
		float Hovering; // 0x0(0x4)
		float Unhovering; // 0x4(0x4)
		float Focusing; // 0x8(0x4)
		float Unfocusing; // 0xC(0x4)
		float Pressing; // 0x10(0x4)
		float Releasing; // 0x14(0x4)
		float Disabling; // 0x18(0x4)
		float Enabling; // 0x1C(0x4)
		float Selecting; // 0x20(0x4)
		float DeselectingIdle; // 0x24(0x4)
		float DeselectingFocused; // 0x28(0x4)
	};

}
