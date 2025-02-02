#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OnlineSubsystemMcp
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct OnlineSubsystemMcp.OnlineIARCLocaleMapping
	// Size: 0x20 (0x20 - 0x0)
	struct FOnlineIARCLocaleMapping	
	{
	public:
		FString LanguageId; // 0x0(0x10)
		FString IARCLocaleId; // 0x10(0x10)
	};


	// Struct OnlineSubsystemMcp.OnlineDiscoveryModeSetDef
	// Size: 0x38 (0x38 - 0x0)
	struct FOnlineDiscoveryModeSetDef	
	{
	public:
		FOnlineLinkId ModeSetId; // 0x0(0x18)
		FString SubModeLinkType; // 0x18(0x10)
		TArray<FOnlineLinkId> SubModeLinkIds; // 0x28(0x10)
	};


	// Struct OnlineSubsystemMcp.OnlineDiscoverySurfaceDevelopmentLinkCodes
	// Size: 0x18 (0x18 - 0x0)
	struct FOnlineDiscoverySurfaceDevelopmentLinkCodes	
	{
	public:
		FName SurfaceName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FString> DevelopmentLinkCodes; // 0x8(0x10)
	};


	// Struct OnlineSubsystemMcp.OnlineISOLanguageInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FOnlineISOLanguageInfo	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		FString LanguageId; // 0x10(0x10)
		FString BackendId; // 0x20(0x10)
	};


	// Struct OnlineSubsystemMcp.OnlineISORegionInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FOnlineISORegionInfo	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		FString RegionId; // 0x10(0x10)
		FString BackendId; // 0x20(0x10)
	};


	// Struct OnlineSubsystemMcp.JsonToxicityEvaluationRequestLegacy
	// Size: 0x10 (0x10 - 0x0)
	struct FJsonToxicityEvaluationRequestLegacy	
	{
	public:
		FString Text; // 0x0(0x10)
	};


	// Struct OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequestLegacy
	// Size: 0x10 (0x10 - 0x0)
	struct FJsonToxicityBulkEvaluationRequestLegacy	
	{
	public:
		TArray<FString> texts; // 0x0(0x10)
	};


	// Struct OnlineSubsystemMcp.JsonToxicityEvaluationRequest
	// Size: 0x10 (0x10 - 0x0)
	struct FJsonToxicityEvaluationRequest	
	{
	public:
		FString Name; // 0x0(0x10)
	};


	// Struct OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
	// Size: 0x10 (0x10 - 0x0)
	struct FJsonToxicityBulkEvaluationRequest	
	{
	public:
		TArray<FString> Names; // 0x0(0x10)
	};


	// Struct OnlineSubsystemMcp.JsonToxicityEvaluationResponse
	// Size: 0x1 (0x1 - 0x0)
	struct FJsonToxicityEvaluationResponse	
	{
	public:
		bool toxic; // 0x0(0x1)
	};


	// Struct OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
	// Size: 0x10 (0x10 - 0x0)
	struct FJsonToxicityBulkEvaluationResponse	
	{
	public:
		TArray<bool> isToxic; // 0x0(0x10)
	};

}
