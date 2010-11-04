#ifndef HEADER_DVUPNPORGSWITCHPOWER1_C
#define HEADER_DVUPNPORGSWITCHPOWER1_C

#include <OsTypes.h>
#include <C/DvDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t (*CallbackSwitchPower1SetTarget)(void* aPtr, uint32_t aVersion, uint32_t anewTargetValue);
typedef int32_t (*CallbackSwitchPower1GetTarget)(void* aPtr, uint32_t aVersion, uint32_t* aRetTargetValue);
typedef int32_t (*CallbackSwitchPower1GetStatus)(void* aPtr, uint32_t aVersion, uint32_t* aResultStatus);

DllExport THandle DvProviderUpnpOrgSwitchPower1Create(DvDeviceC aDevice);
DllExport void DvProviderUpnpOrgSwitchPower1Destroy(THandle aService);

DllExport void DvProviderUpnpOrgSwitchPower1EnableActionSetTarget(THandle aService, CallbackSwitchPower1SetTarget aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgSwitchPower1EnableActionGetTarget(THandle aService, CallbackSwitchPower1GetTarget aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgSwitchPower1EnableActionGetStatus(THandle aService, CallbackSwitchPower1GetStatus aCallback, void* aPtr);

DllExport int32_t DvProviderUpnpOrgSwitchPower1SetPropertyStatus(THandle aService, uint32_t aValue, uint32_t* aChanged);
DllExport void DvProviderUpnpOrgSwitchPower1GetPropertyStatus(THandle aService, uint32_t* aValue);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVUPNPORGSWITCHPOWER1_C

