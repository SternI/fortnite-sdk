#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UIChart
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct UIChart.UIStateChartTransitionOperationParameters
	// Size: 0x28 (0x28 - 0x0)
	struct FUIStateChartTransitionOperationParameters	
	{
	public:
		FGameplayTagContainer AnimationHints; // 0x0(0x20)
		EUIStateTransitionUrgency Urgency; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct UIChart.ContextSetterSetEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FContextSetterSetEntry	
	{
	public:
		FGameplayTag Key; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Value; // 0x8(0x10)
	};


	// Struct UIChart.ContextSetterClearEntry
	// Size: 0x4 (0x4 - 0x0)
	struct FContextSetterClearEntry	
	{
	public:
		FGameplayTag Key; // 0x0(0x4)
	};


	// Struct UIChart.ContextSetterChanges
	// Size: 0x20 (0x20 - 0x0)
	struct FContextSetterChanges	
	{
	public:
		TArray ValuesToSet; // 0x0(0x10)
		TArray ValuesToClear; // 0x10(0x10)
	};


	// Struct UIChart.UIStateComponentInstanceStack
	// Size: 0x10 (0x10 - 0x0)
	struct FUIStateComponentInstanceStack	
	{
	public:
		TArray InstanceStack; // 0x0(0x10)
	};


	// Struct UIChart.UIStateConfigurationChildReference
	// Size: 0x4 (0x4 - 0x0)
	struct FUIStateConfigurationChildReference	
	{
	public:
		int32_t ChildStateId; // 0x0(0x4)
	};


	// Struct UIChart.UIStateAutomationRule
	// Size: 0x18 (0x18 - 0x0)
	struct FUIStateAutomationRule	
	{
	public:
		TArray ContextConditions; // 0x0(0x10)
		FUIStateConfigurationChildReference ChildStateReference; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct UIChart.UIStateChartContextCondition
	// Size: 0x18 (0x18 - 0x0)
	struct FUIStateChartContextCondition	
	{
	public:
		FGameplayTag Key; // 0x0(0x4)
		EUIStateChartContextConditionType ConditionType; // 0x4(0x4)
		FString ComparisonConstant; // 0x8(0x10)
	};


	// Struct UIChart.UIStateTransitionData
	// Size: 0xC (0xC - 0x0)
	struct FUIStateTransitionData	
	{
	public:
		FGameplayTag TriggerTag; // 0x0(0x4)
		int32_t SourceStateId; // 0x4(0x4)
		int32_t TargetStateId; // 0x8(0x4)
	};


	// Struct UIChart.UIStateChartContextChangeSet
	// Size: 0x50 (0x50 - 0x0)
	struct FUIStateChartContextChangeSet	
	{
	public:
		TMap Changes; // 0x0(0x50)
	};


	// Struct UIChart.UIStateChartContextEntryOverride
	// Size: 0x28 (0x28 - 0x0)
	struct FUIStateChartContextEntryOverride	
	{
	public:
		FString OverrideValue; // 0x0(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x10(0x18) UNKNOWN PROPERTY
	};


	// Struct UIChart.UIStateChartManagerChartDeactivationRequest
	// Size: 0x88 (0x88 - 0x0)
	struct FUIStateChartManagerChartDeactivationRequest	
	{
	public:
		unsigned char UnknownData01_2[0x88]; // 0x0(0x88) UNKNOWN PROPERTY
	};


	// Struct UIChart.UIStateRelayBaton
	// Size: 0x28 (0x28 - 0x0)
	struct FUIStateRelayBaton	
	{
	public:
		unsigned char UnknownData01_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		UUIStateComponent OfferingComponent; // 0x10(0x8)
		UClass OfferingComponentType; // 0x18(0x8)
		UUIStateComponentConfiguration OfferingComponentConfiguration; // 0x20(0x8)
	};


	// Struct UIChart.UIStateRelay
	// Size: 0x28 (0x28 - 0x0)
	struct FUIStateRelay	
	{
	public:
		TArray AvailableBatons; // 0x0(0x10)
		TArray ClaimedBatons; // 0x10(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};

}
