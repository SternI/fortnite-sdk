#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ItemizedPropSpawnerParentRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/ItemizedPropSpawnerParentRuntime.EItemizedPropSpawnerTargetingFailedReason
	enum EItemizedPropSpawnerTargetingFailedReason
	{
		EItemizedPropSpawnerTargetingFailedReason__None = 0,
		EItemizedPropSpawnerTargetingFailedReason__TooHigh = 1,
		EItemizedPropSpawnerTargetingFailedReason__TooClose = 2,
		EItemizedPropSpawnerTargetingFailedReason__Obstructed = 3,
		EItemizedPropSpawnerTargetingFailedReason__TargetNotWalkable = 4,
		EItemizedPropSpawnerTargetingFailedReason__TargetBlocksSpawn = 5,
		EItemizedPropSpawnerTargetingFailedReason__TooCloseForHeight = 6,
		EItemizedPropSpawnerTargetingFailedReason__InvalidIndestructible = 7,
		EItemizedPropSpawnerTargetingFailedReason__NoValidTargetsFound = 8,
		EItemizedPropSpawnerTargetingFailedReason__Unknown = 9,
	};


	// Enum /Script/ItemizedPropSpawnerParentRuntime.EItemizedPropSpawnerChunkLocation
	enum EItemizedPropSpawnerChunkLocation
	{
		EItemizedPropSpawnerChunkLocation__Left = 0,
		EItemizedPropSpawnerChunkLocation__CenterLeft = 1,
		EItemizedPropSpawnerChunkLocation__Center = 2,
		EItemizedPropSpawnerChunkLocation__CenterRight = 3,
		EItemizedPropSpawnerChunkLocation__Right = 4,
	};

}
