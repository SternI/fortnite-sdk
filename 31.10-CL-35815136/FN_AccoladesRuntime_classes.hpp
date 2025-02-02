#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AccoladesRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AccoladesRuntime.PFWAccoladeCollection_Container
	// Inherited from UPersistenceFrameworkContainer -> UObject
	// Size: 0x20 (0x160 - 0x140)
	class UPFWAccoladeCollection_Container : public UPersistenceFrameworkContainer	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x140(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesRuntime.PFWAccoladeCollection_Container");
			return ret;
		}
	};


	// Class AccoladesRuntime.PFWAccoladeCollection_Module
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UPFWAccoladeCollection_Module : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesRuntime.PFWAccoladeCollection_Module");
			return ret;
		}
	};


	// Class AccoladesRuntime.PFWAccoladeCollection_Trigger
	// Inherited from UPersistenceFrameworkSaveTrigger_Manual -> UPersistenceFrameworkSaveTrigger -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UPFWAccoladeCollection_Trigger : public UPersistenceFrameworkSaveTrigger_Manual	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesRuntime.PFWAccoladeCollection_Trigger");
			return ret;
		}
	};


	// Class AccoladesRuntime.PFWAccoladeCollection_FilteredListContainer
	// Inherited from UPersistenceFrameworkFilteredListContainer -> UObject
	// Size: 0x10 (0x160 - 0x150)
	class UPFWAccoladeCollection_FilteredListContainer : public UPersistenceFrameworkFilteredListContainer	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x150(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesRuntime.PFWAccoladeCollection_FilteredListContainer");
			return ret;
		}
	};


	// Class AccoladesRuntime.FortAccoladeCollectionFeatureCollector
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortAccoladeCollectionFeatureCollector : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesRuntime.FortAccoladeCollectionFeatureCollector");
			return ret;
		}
	};


	// Class AccoladesRuntime.GameFeatureAction_AddAccoladeTable
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameFeatureAction_AddAccoladeTable : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr<UDataTable*> AccoladeTable; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesRuntime.GameFeatureAction_AddAccoladeTable");
			return ret;
		}
	};


	// Class AccoladesRuntime.FortCheatManager_Accolades
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCheatManager_Accolades : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesRuntime.FortCheatManager_Accolades");
			return ret;
		}

		void TriggerAccolade(FString AccoladeName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void ResetAccoladeData(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class AccoladesRuntime.FortControllerComponent_AccoladeCollection
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x278 (0x320 - 0xA8)
	class UFortControllerComponent_AccoladeCollection : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0xD0]; // 0xA8(0xD0) UNKNOWN PROPERTY
		FName PinnedAccoladeName; // 0x178(0x4)
		unsigned char UnknownData01_6[0x74]; // 0x17C(0x74) UNKNOWN PROPERTY
		FPersistenceFrameworkSaveControl SaveControl; // 0x1F0(0x10)
		FFortAccoladeCollectionDataArray AccoladeCollectionDataArray; // 0x200(0x120)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection");
			return ret;
		}

		void ServerPinAccolade(FName AccoladeName); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF75055D9D4(relative to base address)
		void ServerMarkAccoladesAsSeen(TArray<FName> AccoladeNames); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74EBFB3BC(relative to base address)
		void OnRep_PinnedAccoladeName(FName OldPinnedAccoladeName); // Flags: Final|Native|Private, Memory Exec: 0x7FF75055D948(relative to base address)
		void OnEndMatchForPlayer(UFortControllerComponent_EndMatchPersistence* EndMatchPersistence); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
		void HandlePlayerProfileInitialized(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75055D8FC(relative to base address)
		void HandlePinnedQuestChanged(FAthenaPinnedQuestData& PinnedQuestData); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75055D870(relative to base address)
		void ClientResetAccoladeData(); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF74E217D18(relative to base address)
		void ClientNotifyRestored(EPersistenceFrameworkResult Result); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF74E48541C(relative to base address)
	};


	// Class AccoladesRuntime.FortControllerComponent_Accolades
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x478 (0x520 - 0xA8)
	class UFortControllerComponent_Accolades : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x1E8]; // 0xA8(0x1E8) UNKNOWN PROPERTY
		FFortUpdatedTrackedAccoladeDataArray UpdatedTrackedAccoladeDataArray; // 0x290(0x120)
		FFortCompletedAccoladeDataArray CompletedAccoladeDataArray; // 0x3B0(0x120)
		unsigned char UnknownData01_7[0x50]; // 0x4D0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesRuntime.FortControllerComponent_Accolades");
			return ret;
		}
	};


	// Class AccoladesRuntime.FortGameStateComponent_AccoladeCollection
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFortGameStateComponent_AccoladeCollection : public UFortGameStateComponent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesRuntime.FortGameStateComponent_AccoladeCollection");
			return ret;
		}
	};


	// Class AccoladesRuntime.FortGameStateComponent_Accolades
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UFortGameStateComponent_Accolades : public UFortGameStateComponent	
	{
	public:
		unsigned char UnknownData00_1[0xF8]; // 0xA0(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AccoladesRuntime.FortGameStateComponent_Accolades");
			return ret;
		}
	};

}
