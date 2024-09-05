#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ZoneGraphAnnotations
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ZoneGraphAnnotations.RegisteredZoneGraphAnnotation
	// Size: 0x10 (0x10 - 0x0)
	struct FRegisteredZoneGraphAnnotation	
	{
	public:
		UZoneGraphAnnotationComponent* AnnotationComponent; // 0x0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct ZoneGraphAnnotations.ZoneGraphAnnotationEventBase
	// Size: 0x1 (0x1 - 0x0)
	struct FZoneGraphAnnotationEventBase	
	{
	public:
	};


	// Struct ZoneGraphAnnotations.ZoneGraphDisturbanceArea
	// Inherited from FZoneGraphAnnotationEventBase
	// Size: 0x28 (0x28 - 0x0)
	struct FZoneGraphDisturbanceArea : public FZoneGraphAnnotationEventBase	
	{
	public:
		FVector Position; // 0x0(0x18)
		float Radius; // 0x18(0x4)
		float duration; // 0x1C(0x4)
		uint32_t InstigatorId; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct ZoneGraphAnnotations.ZoneGraphObstacleDisturbanceArea
	// Inherited from FZoneGraphAnnotationEventBase
	// Size: 0x30 (0x30 - 0x0)
	struct FZoneGraphObstacleDisturbanceArea : public FZoneGraphAnnotationEventBase	
	{
	public:
		FVector Position; // 0x0(0x18)
		float Radius; // 0x18(0x4)
		float ObstacleRadius; // 0x1C(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
		EZoneGraphObstacleDisturbanceAreaAction Action; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};

}