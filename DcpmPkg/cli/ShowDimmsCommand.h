/*
 * Copyright (c) 2018, Intel Corporation.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _SHOW_DIMMS_COMMAND_H_
#define _SHOW_DIMMS_COMMAND_H_

#include "CommandParser.h"

#define UNKNOWN_ATTRIB_VAL                      L"Unknown"


/**
  show -dimm display options
  some of common display options are in CommandParser.h
**/
#define FW_VER_STR                  L"FWVersion"
#define FW_API_VER_STR              L"FWAPIVersion"
#define INTERFACE_FORMAT_CODE_STR   L"InterfaceFormatCode"
#define CAPACITY_STR                L"Capacity"
#define MANAGEABILITY_STR           L"ManageabilityState"
#define POPULATION_VIOLATION_STR    L"PopulationViolationState"
#define MANAGEABILITY_SHORT_STR     L"Manageability"
#define HEALTH_STR                  L"HealthState"
#define HEALTH_STATE_REASON_STR     L"HealthStateReason"
#define HEALTH_SHORT_STR            L"Health"
#define SECURITY_STR                L"LockState"
#define SECURITY_SKU_ID_STR         L"SecuritySKUId"
#define SECURITY_SHORT_STR          L"Security"
#define MASTER_STR                  L"Master"
#define TYPE_STR                    L"Type"
#define FORM_FACTOR_STR             L"FormFactor"
#define VENDOR_ID_STR               L"VendorID"
#define MANUFACTURER_ID_STR         L"ManufacturerID"
#define MANUFACTURER_STR            L"Manufacturer"
#define DEVICE_ID_STR               L"DeviceID"
#define REVISION_ID_STR             L"RevisionID"
#define SUBSYSTEM_VENDOR_ID_STR     L"SubsystemVendorID"
#define SUBSYSTEM_DEVICE_ID_STR     L"SubsystemDeviceID"
#define SUBSYSTEM_REVISION_ID_STR   L"SubsystemRevisionID"
#define CONTROLLER_REVISION_ID_STR  L"ControllerRevisionID"
#define MANUFACTURING_INFO_VALID    L"ManufacturingInfoValid"
#define MANUFACTURING_LOCATION      L"ManufacturingLocation"
#define MANUFACTURING_DATE          L"ManufacturingDate"
#define PART_NUMBER_STR             L"PartNumber"
#define SERIAL_NUMBER_STR           L"SerialNumber"
#define BOOT_STATUS_REGISTER_STR    L"BootStatusRegister"
#define DEVICE_LOCATOR_STR          L"DeviceLocator"
#define MEMORY_CONTROLLER_STR       L"MemControllerID"
#define CHANNEL_ID_STR              L"ChannelID"
#define SLOT_ID_STR                 L"SlotID"
#define CHANNEL_POS_STR             L"ChannelPos"
#define DATA_WIDTH_STR              L"DataWidth"
#define TOTAL_WIDTH_STR             L"TotalWidth"
#define SPEED_STR                   L"Speed"
#define MEMORY_MODE_CAPACITY_STR    L"MemoryCapacity"
#define APPDIRECT_MODE_CAPACITY_STR L"AppDirectCapacity"
#define UNCONFIGURED_CAPACITY_STR   L"UnconfiguredCapacity"
#define RESERVED_CAPACITY_STR       L"ReservedCapacity"
#define MIRROR_OF_STR               L"MirrorOf"
#define PACKAGE_SPARING_ENABLED_STR L"PackageSparingEnabled"
#define PACKAGE_SPARING_CAPABLE_STR L"PackageSparingCapable"
#define PACKAGE_SPARES_AVAILABLE_STR L"PackageSparesAvailable"
#define IS_NEW_STR                  L"IsNew"
#define IN_VOLATILE_CAPACITY_STR    L"InaccessibleVolatileCapacity"
#define IN_PERSISTENT_CAPACITY_STR  L"InaccessiblePersistentCapacity"
#define BANK_LABEL_STR              L"BankLabel"
#define MEMORY_TYPE_STR             L"MemoryType"
#define PEAK_POWER_BUDGET_STR       L"PeakPowerBudget"
#define AVG_POWER_LIMIT_STR         L"AvgPowerLimit"
#define AVG_POWER_TIME_CONSTANT_STR L"AvgPowerTimeConstant"
#define TURBO_MODE_STATE_STR        L"TurboModeState"
#define MEMORY_BANDWIDTH_BOOST_FEATURE_STR  L"MemoryBandwidthBoostFeature"
#define TURBO_POWER_LIMIT_STR       L"TurboPowerLimit"
#define MEMORY_BANDWIDTH_BOOST_MAX_POWER_LIMIT_STR  L"MemoryBandwidthBoostMaxPowerLimit"
#define MEMORY_BANDWIDTH_BOOST_AVERAGE_POWER_TIME_CONSTANT_STR  L"MemoryBandwidthBoostAveragePowerTimeConstant"
#define LATCHED_LAST_SHUTDOWN_STATUS_STR L"LatchedLastShutdownStatus"
#define UNLATCHED_LAST_SHUTDOWN_STATUS_STR L"UnlatchedLastShutdownStatus"
#define THERMAL_THROTTLE_LOSS_STR   L"ThermalThrottleLossPercent"
#define LAST_SHUTDOWN_TIME_STR      L"LastShutdownTime"
#define PHYSICAL_ID_STR             L"PhysicalID"
#define DIMM_HANDLE_STR             L"DimmHandle"
#define DIMM_UID_STR                L"DimmUID"
#define MODES_SUPPORTED_STR         L"ModesSupported"
#define SECURITY_CAPABILITIES_STR   L"SecurityCapabilities"
#define MASTER_PASS_ENABLED_STR     L"MasterPassphraseEnabled"
#define DIMM_CONFIG_STATUS_STR      L"ConfigurationStatus"
#define SKU_VIOLATION_STR           L"SKUViolation"
#define ARS_STATUS_STR              L"ARSStatus"
#define OVERWRITE_STATUS_STR        L"OverwriteStatus"
#define RESERVED_CAPACITY_STR       L"ReservedCapacity"
#define INACCESSIBLE_CAPACITY_STR   L"InaccessibleCapacity"
#define VIRAL_POLICY_STR            L"ViralPolicy"
#define VIRAL_STATE_STR             L"ViralState"
#define AIT_DRAM_ENABLED_STR        L"AitDramEnabled"
#define BOOT_STATUS_STR             L"BootStatus"
#define ERROR_INJECT_ENABLED_STR    L"ErrorInjectionEnabled"
#define MEDIA_TEMP_INJ_ENABLED_STR  L"MediaTemperatureInjectionEnabled"
#define SW_TRIGGERS_ENABLED_STR     L"SoftwareTriggersEnabled"
#define POISON_ERR_INJ_CTR_STR      L"PoisonErrorInjectionsCounter"
#define POISON_ERR_CLR_CTR_STR      L"PoisonErrorClearCounter"
#define MEDIA_TEMP_INJ_CTR_STR      L"MediaTemperatureInjectionsCounter"
#define SW_TRIGGER_CTR_STR          L"SoftwareTriggersCounter"
#define SW_TRIGGER_ENABLED_DETAILS_STR L"SoftwareTriggersEnabledDetails"
#define MAX_AVG_POWER_LIMIT_STR     L"MaxAveragePowerLimit"
#define MAX_TURBO_MODE_POWER_CONSUMPTION_STR L"MaxTurboModePowerConsumption"
#define MAX_AVERAGE_POWER_TIME_CONSTANT L"MaxAveragePowerTimeConstant"
#define AVERAGE_POWER_TIME_CONSTANT_STEP L"AveragePowerTimeConstantStep"
#define MIXED_SKU_STR               L"MixedSKU"
#define DCPMM_AVERAGE_POWER_STR     L"DcpmmAveragePower"
#define AVERAGE_12V_POWER_STR       L"Average12vPower"
#define AVERAGE_1_2V_POWER_STR      L"Average1_2vPower"
#define EXTENDED_ADR_ENABLED_STR    L"ExtendedAdrEnabled"
#define PPC_EXTENDED_ADR_ENABLED_STR L"PpcExtendedAdrEnabled"
#define NOT_APPLICABLE_SHORT_STR    L"N/A"
#define MILI_WATT_STR               L"mW"
#define MEGA_TRANSFERS_PER_SEC_STR  L"MT/s"
#define BYTE_STR                    L"b"
/*
 * Register the show dimms command
 */
EFI_STATUS RegisterShowDimmsCommand();

/*
 * Execute the show dimms command
 */
EFI_STATUS ShowDimms(struct Command *pCmd);

#endif /* _SHOW_DIMMS_COMMAND_H_ */
