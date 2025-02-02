#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DataRegistry
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/DataRegistry.EDataRegistryAcquireStatus
	enum EDataRegistryAcquireStatus
	{
		EDataRegistryAcquireStatus__NotStarted = 0,
		EDataRegistryAcquireStatus__WaitingForInitialAcquire = 1,
		EDataRegistryAcquireStatus__InitialAcquireFinished = 2,
		EDataRegistryAcquireStatus__WaitingForResources = 3,
		EDataRegistryAcquireStatus__AcquireFinished = 4,
		EDataRegistryAcquireStatus__AcquireError = 5,
		EDataRegistryAcquireStatus__DoesNotExist = 6,
	};


	// Enum /Script/DataRegistry.EMetaDataRegistrySourceAssetUsage
	enum EMetaDataRegistrySourceAssetUsage
	{
		EMetaDataRegistrySourceAssetUsage__NoAssets = 0,
		EMetaDataRegistrySourceAssetUsage__SearchAssets = 1,
		EMetaDataRegistrySourceAssetUsage__RegisterAssets = 2,
		EMetaDataRegistrySourceAssetUsage__SearchAndRegisterAssets = 3,
	};


	// Enum /Script/DataRegistry.EDataRegistrySubsystemGetItemResult
	enum EDataRegistrySubsystemGetItemResult
	{
		EDataRegistrySubsystemGetItemResult__Found = 0,
		EDataRegistrySubsystemGetItemResult__NotFound = 1,
	};


	// Enum /Script/DataRegistry.EDataRegistryAvailability
	enum EDataRegistryAvailability
	{
		EDataRegistryAvailability__DoesNotExist = 0,
		EDataRegistryAvailability__Unknown = 1,
		EDataRegistryAvailability__Remote = 2,
		EDataRegistryAvailability__OnDisk = 3,
		EDataRegistryAvailability__LocalAsset = 4,
		EDataRegistryAvailability__PreCached = 5,
	};

}
