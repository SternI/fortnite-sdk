#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StyleSheets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class StyleSheets.GameFeatureAction_ActivateStyleTheme
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UGameFeatureAction_ActivateStyleTheme : public UGameFeatureAction	
	{
	public:
		FName ThemeName; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.GameFeatureAction_ActivateStyleTheme");
			return ret;
		}
	};


	// Class StyleSheets.GameFeatureAction_RegisterStyleThemes
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameFeatureAction_RegisterStyleThemes : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr StyleThemeConfig; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.GameFeatureAction_RegisterStyleThemes");
			return ret;
		}
	};


	// Class StyleSheets.PropertyTweenContext
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UPropertyTweenContext : public UObject	
	{
	public:
		FName PropertyPath; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.PropertyTweenContext");
			return ret;
		}
	};


	// Class StyleSheets.StyleAnimationProvider
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UStyleAnimationProvider : public UObject	
	{
	public:
		TMap WidgetPropertyTweens; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyleAnimationProvider");
			return ret;
		}
	};


	// Class StyleSheets.StyledWidgetTree
	// Inherited from UObject
	// Size: 0xF8 (0x120 - 0x28)
	class UStyledWidgetTree : public UObject	
	{
	public:
		TWeakObjectPtr StyleProvider; // 0x28(0x8)
		unsigned char UnknownData01_7[0xF0]; // 0x30(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyledWidgetTree");
			return ret;
		}
	};


	// Class StyleSheets.StyleProvider
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UStyleProvider : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		TWeakObjectPtr StyleRuleTree; // 0x48(0x8)
		TWeakObjectPtr StyleAnimationProvider; // 0x50(0x8)
		UStyledWidgetTree StyledWidgetTree; // 0x58(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x60(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyleProvider");
			return ret;
		}
	};


	// Class StyleSheets.StyleRule
	// Inherited from UObject
	// Size: 0x138 (0x160 - 0x28)
	class UStyleRule : public UObject	
	{
	public:
		TArray Children; // 0x28(0x10)
		FStyleSelectorItem StyleSelectorItem; // 0x38(0x10)
		TWeakObjectPtr Parent; // 0x48(0x8)
		FStyleClass Style; // 0x50(0x108)
		unsigned char UnknownData01_7[0x8]; // 0x158(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyleRule");
			return ret;
		}
	};


	// Class StyleSheets.StyleRuleTree
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UStyleRuleTree : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		TArray StyleSheetCollections; // 0x40(0x10)
		TArray StyleRuleEntries; // 0x50(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x60(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyleRuleTree");
			return ret;
		}
	};


	// Class StyleSheets.StyleSheet
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UStyleSheet : public UObject	
	{
	public:
		TArray StyleRules; // 0x28(0x10)
		FStyleSheetSettings Settings; // 0x38(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyleSheet");
			return ret;
		}
	};


	// Class StyleSheets.StyleSheetCollection
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UStyleSheetCollection : public UDataAsset	
	{
	public:
		TArray StyleSheets; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyleSheetCollection");
			return ret;
		}
	};


	// Class StyleSheets.StyleTagFinder
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UStyleTagFinder : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyleTagFinder");
			return ret;
		}
	};


	// Class StyleSheets.StyleThemeConfig
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UStyleThemeConfig : public UDataAsset	
	{
	public:
		TArray Entries; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyleThemeConfig");
			return ret;
		}
	};


	// Class StyleSheets.StyleThemeProvider
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UStyleThemeProvider : public UObject	
	{
	public:
		TWeakObjectPtr StyleRuleTree; // 0x28(0x8)
		TMap ThemeConfigSourceMap; // 0x30(0x50)
		TSet ActiveThemeNames; // 0x80(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyleThemeProvider");
			return ret;
		}
	};


	// Class StyleSheets.WidgetBlueprintGeneratedClassExtension_StyleClass
	// Inherited from UWidgetBlueprintGeneratedClassExtension -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UWidgetBlueprintGeneratedClassExtension_StyleClass : public UWidgetBlueprintGeneratedClassExtension	
	{
	public:
		TMap WidgetStyleTagMap; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.WidgetBlueprintGeneratedClassExtension_StyleClass");
			return ret;
		}
	};


	// Class StyleSheets.StylableWidget
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UStylableWidget : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StylableWidget");
			return ret;
		}

		void BP_OnWidgetStyled(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4149C4978
	};


	// Class StyleSheets.StyleSheetsSettings
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UStyleSheetsSettings : public UObject	
	{
	public:
		TArray WidgetTypes; // 0x28(0x10)
		TWeakObjectPtr StyleThemeConfig; // 0x38(0x20)
		bool bAllowAssigningStyleTagsToWidgets; // 0x58(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyleSheetsSettings");
			return ret;
		}
	};


	// Class StyleSheets.StyleSheetsSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UStyleSheetsSubsystem : public UEngineSubsystem	
	{
	public:
		UStyleTagFinder EditorStyleTagFinder; // 0x30(0x8)
		UStyleRuleTree StyleRuleTree; // 0x38(0x8)
		UStyleAnimationProvider StyleAnimationProvider; // 0x40(0x8)
		UStyleProvider StyleProvider; // 0x48(0x8)
		UStyleThemeProvider StyleThemeProvider; // 0x50(0x8)
		UStyleTagFinder StyleTagFinder; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StyleSheets.StyleSheetsSubsystem");
			return ret;
		}

		bool UpdateWidgetStyleTags(UWidget InWidget, TArray InAddedTags, TArray InRemovedTags); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4149C4A58
	};

}
