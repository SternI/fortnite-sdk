#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CosmeticSteps
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /BeanstalkCosmetics/CosmeticSteps/BP_FortCosmeticStep_ApplyBeanCD.BP_FortCosmeticStep_ApplyBeanCD_C
	// Inherited from UFortCosmeticStep_ApplyBeanCD -> UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0xC8 - 0xC8)
	class UBP_FortCosmeticStep_ApplyBeanCD_C : public UFortCosmeticStep_ApplyBeanCD	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/BeanstalkCosmetics/CosmeticSteps/BP_FortCosmeticStep_ApplyBeanCD.BP_FortCosmeticStep_ApplyBeanCD_C");
			return ret;
		}

		void BP_UpdateCosmeticMaterials(UBeanCosmeticItemDefinitionBase* BeanCD, UMaterialInstanceDynamic* MaterialBody, UMaterialInstanceDynamic* MaterialCostume, UMaterialInstanceDynamic* MaterialHead); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}