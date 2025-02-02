#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UnstableLiquidGunRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct UnstableLiquidGunRuntime.LiquidRibbonSplineSegment
	// Size: 0x78 (0x78 - 0x0)
	struct FLiquidRibbonSplineSegment	
	{
	public:
		FVector A; // 0x0(0x18)
		FVector B; // 0x18(0x18)
		FVector C; // 0x30(0x18)
		FVector D; // 0x48(0x18)
		float DirectLength; // 0x60(0x4)
		bool bHasDetachment; // 0x64(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x65(0x3) UNKNOWN PROPERTY
		TArray PointPositions; // 0x68(0x10)
	};


	// Struct UnstableLiquidGunRuntime.LiquidRibbonSplineDetachment
	// Size: 0xB8 (0xB8 - 0x0)
	struct FLiquidRibbonSplineDetachment	
	{
	public:
		int32_t FirstRibbonID; // 0x0(0x4)
		int32_t SecondRibbonID; // 0x4(0x4)
		float TimeDetached; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FLiquidRibbonSplineSegment Segment; // 0x10(0x78)
		FVector SegmentStartPoint; // 0x88(0x18)
		FVector SegmentEndPoint; // 0xA0(0x18)
	};

}
