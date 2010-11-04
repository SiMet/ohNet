#ifndef HEADER_DVLINNCOUKPTEST1_C
#define HEADER_DVLINNCOUKPTEST1_C

#include <OsTypes.h>
#include <C/DvDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t (*CallbackPtest1TestComPort)(void* aPtr, uint32_t aVersion, uint32_t aaPort, uint32_t* aaResult);
typedef int32_t (*CallbackPtest1LedsOn)(void* aPtr, uint32_t aVersion);
typedef int32_t (*CallbackPtest1LedsOff)(void* aPtr, uint32_t aVersion);

DllExport THandle DvProviderLinnCoUkPtest1Create(DvDeviceC aDevice);
DllExport void DvProviderLinnCoUkPtest1Destroy(THandle aService);

DllExport void DvProviderLinnCoUkPtest1EnableActionTestComPort(THandle aService, CallbackPtest1TestComPort aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkPtest1EnableActionLedsOn(THandle aService, CallbackPtest1LedsOn aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkPtest1EnableActionLedsOff(THandle aService, CallbackPtest1LedsOff aCallback, void* aPtr);


#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKPTEST1_C

