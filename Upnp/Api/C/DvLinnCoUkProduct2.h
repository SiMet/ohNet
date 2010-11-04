#ifndef HEADER_DVLINNCOUKPRODUCT2_C
#define HEADER_DVLINNCOUKPRODUCT2_C

#include <OsTypes.h>
#include <C/DvDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t (*CallbackProduct2Type)(void* aPtr, uint32_t aVersion, char** aaType);
typedef int32_t (*CallbackProduct2Model)(void* aPtr, uint32_t aVersion, char** aaModel);
typedef int32_t (*CallbackProduct2Name)(void* aPtr, uint32_t aVersion, char** aaName);
typedef int32_t (*CallbackProduct2SetName)(void* aPtr, uint32_t aVersion, const char* aaName);
typedef int32_t (*CallbackProduct2Room)(void* aPtr, uint32_t aVersion, char** aaRoom);
typedef int32_t (*CallbackProduct2SetRoom)(void* aPtr, uint32_t aVersion, const char* aaRoom);
typedef int32_t (*CallbackProduct2Standby)(void* aPtr, uint32_t aVersion, uint32_t* aaStandby);
typedef int32_t (*CallbackProduct2SetStandby)(void* aPtr, uint32_t aVersion, uint32_t aaStandby);
typedef int32_t (*CallbackProduct2SourceCount)(void* aPtr, uint32_t aVersion, uint32_t* aaSourceCount);
typedef int32_t (*CallbackProduct2SourceIndex)(void* aPtr, uint32_t aVersion, uint32_t* aaSourceIndex);
typedef int32_t (*CallbackProduct2SetSourceIndex)(void* aPtr, uint32_t aVersion, uint32_t aaSourceIndex);
typedef int32_t (*CallbackProduct2SourceType)(void* aPtr, uint32_t aVersion, uint32_t aaSourceIndex, char** aaSourceType);

DllExport THandle DvProviderLinnCoUkProduct2Create(DvDeviceC aDevice);
DllExport void DvProviderLinnCoUkProduct2Destroy(THandle aService);

DllExport void DvProviderLinnCoUkProduct2EnableActionType(THandle aService, CallbackProduct2Type aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkProduct2EnableActionModel(THandle aService, CallbackProduct2Model aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkProduct2EnableActionName(THandle aService, CallbackProduct2Name aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkProduct2EnableActionSetName(THandle aService, CallbackProduct2SetName aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkProduct2EnableActionRoom(THandle aService, CallbackProduct2Room aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkProduct2EnableActionSetRoom(THandle aService, CallbackProduct2SetRoom aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkProduct2EnableActionStandby(THandle aService, CallbackProduct2Standby aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkProduct2EnableActionSetStandby(THandle aService, CallbackProduct2SetStandby aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkProduct2EnableActionSourceCount(THandle aService, CallbackProduct2SourceCount aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkProduct2EnableActionSourceIndex(THandle aService, CallbackProduct2SourceIndex aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkProduct2EnableActionSetSourceIndex(THandle aService, CallbackProduct2SetSourceIndex aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkProduct2EnableActionSourceType(THandle aService, CallbackProduct2SourceType aCallback, void* aPtr);

DllExport int32_t DvProviderLinnCoUkProduct2SetPropertyProductName(THandle aService, const char* aValue, uint32_t* aChanged);
DllExport void DvProviderLinnCoUkProduct2GetPropertyProductName(THandle aService, char** aValue);
DllExport int32_t DvProviderLinnCoUkProduct2SetPropertyProductRoom(THandle aService, const char* aValue, uint32_t* aChanged);
DllExport void DvProviderLinnCoUkProduct2GetPropertyProductRoom(THandle aService, char** aValue);
DllExport int32_t DvProviderLinnCoUkProduct2SetPropertyProductStandby(THandle aService, uint32_t aValue, uint32_t* aChanged);
DllExport void DvProviderLinnCoUkProduct2GetPropertyProductStandby(THandle aService, uint32_t* aValue);
DllExport int32_t DvProviderLinnCoUkProduct2SetPropertyProductSourceIndex(THandle aService, uint32_t aValue, uint32_t* aChanged);
DllExport void DvProviderLinnCoUkProduct2GetPropertyProductSourceIndex(THandle aService, uint32_t* aValue);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKPRODUCT2_C

