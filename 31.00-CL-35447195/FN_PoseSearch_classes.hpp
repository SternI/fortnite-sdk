#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PoseSearch
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PoseSearch.MotionMatchingAnimNodeLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMotionMatchingAnimNodeLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.MotionMatchingAnimNodeLibrary");
			return ret;
		}

		void SetInterruptMode(FMotionMatchingAnimNodeReference& MotionMatchingNode, EPoseSearchInterruptMode InterruptMode); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465D8D8
		void SetDatabaseToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, UPoseSearchDatabase Database, EPoseSearchInterruptMode InterruptMode); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465D7F8
		void SetDatabasesToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, TArray& Databases, EPoseSearchInterruptMode InterruptMode); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465D718
		void ResetDatabasesToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, EPoseSearchInterruptMode InterruptMode); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465D638
		void GetMotionMatchingSearchResult(FMotionMatchingAnimNodeReference& MotionMatchingNode, FPoseSearchBlueprintResult& Result, bool& bIsResultValid); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465D558
		void ConvertToMotionMatchingNodePure(FAnimNodeReference& Node, FMotionMatchingAnimNodeReference& MotionMatchingNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465D478
		FMotionMatchingAnimNodeReference ConvertToMotionMatchingNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465D398
	};


	// Class PoseSearch.MultiAnimAsset
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMultiAnimAsset : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.MultiAnimAsset");
			return ret;
		}

		UAnimationAsset BP_GetAnimationAsset(FName& Role); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41465D9B8
	};


	// Class PoseSearch.PoseSearchDatabase
	// Inherited from UDataAsset -> UObject
	// Size: 0x148 (0x178 - 0x30)
	class UPoseSearchDatabase : public UDataAsset	
	{
	public:
		UPoseSearchSchema Schema; // 0x30(0x8)
		float ContinuingPoseCostBias; // 0x38(0x4)
		float BaseCostBias; // 0x3C(0x4)
		float LoopingCostBias; // 0x40(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		TArray AnimationAssets; // 0x48(0x10)
		TArray Tags; // 0x58(0x10)
		EPoseSearchMode PoseSearchMode; // 0x68(0x4)
		int32_t KDTreeQueryNumNeighbors; // 0x6C(0x4)
		int32_t KDTreeQueryNumNeighborsWithDuplicates; // 0x70(0x4)
		unsigned char UnknownData03_7[0x104]; // 0x74(0x104) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchDatabase");
			return ret;
		}

		int32_t GetNumAnimationAssets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41465DB78
		UObject GetAnimationAsset(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41465DA98
	};


	// Class PoseSearch.PoseSearchFeatureChannel
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UPoseSearchFeatureChannel : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		int32_t ChannelDataOffset; // 0x38(0x4)
		int32_t ChannelCardinality; // 0x3C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchFeatureChannel_FilterCrashingLegs
	// Inherited from UPoseSearchFeatureChannel -> UObject
	// Size: 0x48 (0x88 - 0x40)
	class UPoseSearchFeatureChannel_FilterCrashingLegs : public UPoseSearchFeatureChannel	
	{
	public:
		FBoneReference LeftThigh; // 0x40(0xC)
		FBoneReference RightThigh; // 0x4C(0xC)
		FBoneReference LeftFoot; // 0x58(0xC)
		FBoneReference RightFoot; // 0x64(0xC)
		FName SampleRole; // 0x70(0x4)
		float Weight; // 0x74(0x4)
		int8_t LeftThighIdx; // 0x78(0x1)
		int8_t RightThighIdx; // 0x79(0x1)
		int8_t LeftFootIdx; // 0x7A(0x1)
		int8_t RightFootIdx; // 0x7B(0x1)
		EInputQueryPose InputQueryPose; // 0x7C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
		float AllowedTolerance; // 0x80(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_FilterCrashingLegs");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchFeatureChannel_GroupBase
	// Inherited from UPoseSearchFeatureChannel -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class UPoseSearchFeatureChannel_GroupBase : public UPoseSearchFeatureChannel	
	{
	public:
		FName SampleRole; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_GroupBase");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchFeatureChannel_Group
	// Inherited from UPoseSearchFeatureChannel_GroupBase -> UPoseSearchFeatureChannel -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UPoseSearchFeatureChannel_Group : public UPoseSearchFeatureChannel_GroupBase	
	{
	public:
		TArray SubChannels; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_Group");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchFeatureChannel_Heading
	// Inherited from UPoseSearchFeatureChannel -> UObject
	// Size: 0x38 (0x78 - 0x40)
	class UPoseSearchFeatureChannel_Heading : public UPoseSearchFeatureChannel	
	{
	public:
		FBoneReference bone; // 0x40(0xC)
		FName SampleRole; // 0x4C(0x4)
		FBoneReference OriginBone; // 0x50(0xC)
		FName OriginRole; // 0x5C(0x4)
		int32_t SamplingAttributeId; // 0x60(0x4)
		float SampleTimeOffset; // 0x64(0x4)
		float OriginTimeOffset; // 0x68(0x4)
		EHeadingAxis HeadingAxis; // 0x6C(0x1)
		int8_t SchemaBoneIdx; // 0x6D(0x1)
		int8_t SchemaOriginBoneIdx; // 0x6E(0x1)
		EInputQueryPose InputQueryPose; // 0x6F(0x1)
		EComponentStrippingVector ComponentStripping; // 0x70(0x1)
		EPermutationTimeType PermutationTimeType; // 0x71(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x72(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_Heading");
			return ret;
		}

		FQuat BP_GetWorldRotation(UAnimInstance AnimInstance); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF41465DC58
	};


	// Class PoseSearch.PoseSearchFeatureChannel_Padding
	// Inherited from UPoseSearchFeatureChannel -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class UPoseSearchFeatureChannel_Padding : public UPoseSearchFeatureChannel	
	{
	public:
		int32_t PaddingSize; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_Padding");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchFeatureChannel_PermutationTime
	// Inherited from UPoseSearchFeatureChannel -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UPoseSearchFeatureChannel_PermutationTime : public UPoseSearchFeatureChannel	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_PermutationTime");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchFeatureChannel_Phase
	// Inherited from UPoseSearchFeatureChannel -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UPoseSearchFeatureChannel_Phase : public UPoseSearchFeatureChannel	
	{
	public:
		FBoneReference bone; // 0x40(0xC)
		FName SampleRole; // 0x4C(0x4)
		int8_t SchemaBoneIdx; // 0x50(0x1)
		EInputQueryPose InputQueryPose; // 0x51(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x52(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_Phase");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchFeatureChannel_Pose
	// Inherited from UPoseSearchFeatureChannel_GroupBase -> UPoseSearchFeatureChannel -> UObject
	// Size: 0x38 (0x80 - 0x48)
	class UPoseSearchFeatureChannel_Pose : public UPoseSearchFeatureChannel_GroupBase	
	{
	public:
		TArray SampledBones; // 0x48(0x10)
		TArray SchemaBoneIdx; // 0x58(0x10)
		EInputQueryPose InputQueryPose; // 0x68(0x1)
		bool bUseCharacterSpaceVelocities; // 0x69(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x6A(0x6) UNKNOWN PROPERTY
		TArray SubChannels; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_Pose");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchFeatureChannel_Position
	// Inherited from UPoseSearchFeatureChannel -> UObject
	// Size: 0x38 (0x78 - 0x40)
	class UPoseSearchFeatureChannel_Position : public UPoseSearchFeatureChannel	
	{
	public:
		FBoneReference bone; // 0x40(0xC)
		FName SampleRole; // 0x4C(0x4)
		FBoneReference OriginBone; // 0x50(0xC)
		FName OriginRole; // 0x5C(0x4)
		int32_t SamplingAttributeId; // 0x60(0x4)
		float SampleTimeOffset; // 0x64(0x4)
		float OriginTimeOffset; // 0x68(0x4)
		int8_t SchemaBoneIdx; // 0x6C(0x1)
		int8_t SchemaOriginBoneIdx; // 0x6D(0x1)
		EInputQueryPose InputQueryPose; // 0x6E(0x1)
		EComponentStrippingVector ComponentStripping; // 0x6F(0x1)
		EPermutationTimeType PermutationTimeType; // 0x70(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_Position");
			return ret;
		}

		FVector BP_GetWorldPosition(UAnimInstance AnimInstance); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF41465DD38
	};


	// Class PoseSearch.PoseSearchFeatureChannel_SamplingTime
	// Inherited from UPoseSearchFeatureChannel -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class UPoseSearchFeatureChannel_SamplingTime : public UPoseSearchFeatureChannel	
	{
	public:
		float Weight; // 0x40(0x4)
		float TimeToMatch; // 0x44(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_SamplingTime");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchFeatureChannel_TimeToEvent
	// Inherited from UPoseSearchFeatureChannel -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UPoseSearchFeatureChannel_TimeToEvent : public UPoseSearchFeatureChannel	
	{
	public:
		float Weight; // 0x40(0x4)
		int32_t SamplingAttributeId; // 0x44(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_TimeToEvent");
			return ret;
		}

		float BP_GetTimeToEvent(UAnimInstance AnimInstance); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF41465DE18
	};


	// Class PoseSearch.PoseSearchFeatureChannel_Trajectory
	// Inherited from UPoseSearchFeatureChannel_GroupBase -> UPoseSearchFeatureChannel -> UObject
	// Size: 0x20 (0x68 - 0x48)
	class UPoseSearchFeatureChannel_Trajectory : public UPoseSearchFeatureChannel_GroupBase	
	{
	public:
		TArray Samples; // 0x48(0x10)
		TArray SubChannels; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_Trajectory");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchFeatureChannel_Velocity
	// Inherited from UPoseSearchFeatureChannel -> UObject
	// Size: 0x38 (0x78 - 0x40)
	class UPoseSearchFeatureChannel_Velocity : public UPoseSearchFeatureChannel	
	{
	public:
		FBoneReference bone; // 0x40(0xC)
		FName SampleRole; // 0x4C(0x4)
		FBoneReference OriginBone; // 0x50(0xC)
		FName OriginRole; // 0x5C(0x4)
		int32_t SamplingAttributeId; // 0x60(0x4)
		float SampleTimeOffset; // 0x64(0x4)
		float OriginTimeOffset; // 0x68(0x4)
		int8_t SchemaBoneIdx; // 0x6C(0x1)
		int8_t SchemaOriginBoneIdx; // 0x6D(0x1)
		EInputQueryPose InputQueryPose; // 0x6E(0x1)
		bool bUseCharacterSpaceVelocities; // 0x6F(0x1)
		bool bNormalize; // 0x70(0x1)
		EComponentStrippingVector ComponentStripping; // 0x71(0x1)
		EPermutationTimeType PermutationTimeType; // 0x72(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x73(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchFeatureChannel_Velocity");
			return ret;
		}

		FVector BP_GetWorldVelocity(UAnimInstance AnimInstance); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF41465DEF8
	};


	// Class PoseSearch.PoseSearchHistoryCollectorAnimNodeLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPoseSearchHistoryCollectorAnimNodeLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchHistoryCollectorAnimNodeLibrary");
			return ret;
		}

		void SetPoseHistoryNodeTrajectory(FPoseSearchHistoryCollectorAnimNodeReference& PoseSearchHistoryCollectorNode, FPoseSearchQueryTrajectory& Trajectory); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465E278
		void GetPoseHistoryNodeTrajectory(FPoseSearchHistoryCollectorAnimNodeReference& PoseSearchHistoryCollectorNode, FPoseSearchQueryTrajectory& Trajectory); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465E198
		void ConvertToPoseHistoryNodePure(FAnimNodeReference& Node, FPoseSearchHistoryCollectorAnimNodeReference& PoseSearchHistoryCollectorNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465E0B8
		FPoseSearchHistoryCollectorAnimNodeReference ConvertToPoseHistoryNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465DFD8
	};


	// Class PoseSearch.PoseSearchNormalizationSet
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UPoseSearchNormalizationSet : public UDataAsset	
	{
	public:
		TArray Databases; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchNormalizationSet");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchSchema
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UPoseSearchSchema : public UDataAsset	
	{
	public:
		USkeleton Skeleton; // 0x30(0x8)
		int32_t SampleRate; // 0x38(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray Skeletons; // 0x40(0x10)
		TArray Channels; // 0x50(0x10)
		TArray FinalizedChannels; // 0x60(0x10)
		UMirrorDataTable MirrorDataTable; // 0x70(0x8)
		int32_t SchemaCardinality; // 0x78(0x4)
		bool bAddDataPadding; // 0x7C(0x1)
		bool bInjectAdditionalDebugChannels; // 0x7D(0x1)
		unsigned char UnknownData03_7[0x2]; // 0x7E(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchSchema");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchTrajectoryLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPoseSearchTrajectoryLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchTrajectoryLibrary");
			return ret;
		}

		void PoseSearchGenerateTrajectory(UAnimInstance InAnimInstance, FPoseSearchTrajectoryData& InTrajectoryData, float InDeltaTime, FPoseSearchQueryTrajectory& InOutTrajectory, float& InOutDesiredControllerYawLastUpdate, FPoseSearchQueryTrajectory& OutTrajectory, float InHistorySamplingInterval, int32_t InTrajectoryHistoryCount, float InPredictionSamplingInterval, int32_t InTrajectoryPredictionCount); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465E6D8
		void HandleTrajectoryWorldCollisions(UObject WorldContextObject, UAnimInstance AnimInstance, FPoseSearchQueryTrajectory& InTrajectory, bool bApplyGravity, float FloorCollisionsOffset, FPoseSearchQueryTrajectory& OutTrajectory, FPoseSearchTrajectory_WorldCollisionResults& CollisionResult, TEnumAsByte TraceChannel, bool bTraceComplex, TArray& ActorsToIgnore, TEnumAsByte DrawDebugType, bool bIgnoreSelf, float MaxObstacleHeight, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41465E5F8
		FTransform GetTransform(FPoseSearchQueryTrajectorySample& InTrajectorySample); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41465E518
		void GetTrajectoryVelocity(FPoseSearchQueryTrajectory& InTrajectory, float Time1, float Time2, FVector& OutVelocity, bool bExtrapolate); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41465E438
		void GetTrajectorySampleAtTime(FPoseSearchQueryTrajectory& InTrajectory, float Time, FPoseSearchQueryTrajectorySample& OutTrajectorySample, bool bExtrapolate); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465E358
	};


	// Class PoseSearch.AnimNotifyState_PoseSearchBase
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAnimNotifyState_PoseSearchBase : public UAnimNotifyState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.AnimNotifyState_PoseSearchBase");
			return ret;
		}
	};


	// Class PoseSearch.AnimNotifyState_PoseSearchExcludeFromDatabase
	// Inherited from UAnimNotifyState_PoseSearchBase -> UAnimNotifyState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAnimNotifyState_PoseSearchExcludeFromDatabase : public UAnimNotifyState_PoseSearchBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.AnimNotifyState_PoseSearchExcludeFromDatabase");
			return ret;
		}
	};


	// Class PoseSearch.AnimNotifyState_PoseSearchBlockTransition
	// Inherited from UAnimNotifyState_PoseSearchBase -> UAnimNotifyState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAnimNotifyState_PoseSearchBlockTransition : public UAnimNotifyState_PoseSearchBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.AnimNotifyState_PoseSearchBlockTransition");
			return ret;
		}
	};


	// Class PoseSearch.AnimNotifyState_PoseSearchModifyCost
	// Inherited from UAnimNotifyState_PoseSearchBase -> UAnimNotifyState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UAnimNotifyState_PoseSearchModifyCost : public UAnimNotifyState_PoseSearchBase	
	{
	public:
		float CostAddend; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.AnimNotifyState_PoseSearchModifyCost");
			return ret;
		}
	};


	// Class PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
	// Inherited from UAnimNotifyState_PoseSearchBase -> UAnimNotifyState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias : public UAnimNotifyState_PoseSearchBase	
	{
	public:
		float CostAddend; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias");
			return ret;
		}
	};


	// Class PoseSearch.AnimNotifyState_PoseSearchSamplingEvent
	// Inherited from UAnimNotifyState_PoseSearchBase -> UAnimNotifyState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAnimNotifyState_PoseSearchSamplingEvent : public UAnimNotifyState_PoseSearchBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.AnimNotifyState_PoseSearchSamplingEvent");
			return ret;
		}
	};


	// Class PoseSearch.AnimNotifyState_PoseSearchSamplingAttribute
	// Inherited from UAnimNotifyState_PoseSearchSamplingEvent -> UAnimNotifyState_PoseSearchBase -> UAnimNotifyState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAnimNotifyState_PoseSearchSamplingAttribute : public UAnimNotifyState_PoseSearchSamplingEvent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.AnimNotifyState_PoseSearchSamplingAttribute");
			return ret;
		}
	};


	// Class PoseSearch.AnimNotifyState_PoseSearchBranchIn
	// Inherited from UAnimNotifyState_PoseSearchBase -> UAnimNotifyState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UAnimNotifyState_PoseSearchBranchIn : public UAnimNotifyState_PoseSearchBase	
	{
	public:
		UPoseSearchDatabase Database; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.AnimNotifyState_PoseSearchBranchIn");
			return ret;
		}
	};


	// Class PoseSearch.PoseSearchLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPoseSearchLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PoseSearch.PoseSearchLibrary");
			return ret;
		}

		void MotionMatchMulti(TArray Characters, TArray Roles, TArray AssetsToSearch, FName PoseHistoryName, FPoseSearchContinuingProperties ContinuingProperties, FPoseSearchFutureProperties Future, FPoseSearchBlueprintResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465E898
		void MotionMatch(UAnimInstance AnimInstance, TArray AssetsToSearch, FName PoseHistoryName, FPoseSearchContinuingProperties ContinuingProperties, FPoseSearchFutureProperties Future, FPoseSearchBlueprintResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465E7B8
	};

}
