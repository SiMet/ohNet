#ifndef HEADER_DVLINNCOUKDIAGNOSTICS1_C
#define HEADER_DVLINNCOUKDIAGNOSTICS1_C

#include <OsTypes.h>
#include <C/DvDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t (*CallbackDiagnostics1Echo)(void* aPtr, uint32_t aVersion, const char* aaIn, char** aaOut);
typedef int32_t (*CallbackDiagnostics1ElfFile)(void* aPtr, uint32_t aVersion, char** aaElfFile);
typedef int32_t (*CallbackDiagnostics1ElfFingerprint)(void* aPtr, uint32_t aVersion, char** aaElfFileFingerprint);
typedef int32_t (*CallbackDiagnostics1CrashDataStatus)(void* aPtr, uint32_t aVersion, char** aaCrashDataStatus);
typedef int32_t (*CallbackDiagnostics1CrashDataFetch)(void* aPtr, uint32_t aVersion, char** aaCrashData, uint32_t* aaCrashDataLen);
typedef int32_t (*CallbackDiagnostics1CrashDataClear)(void* aPtr, uint32_t aVersion);
typedef int32_t (*CallbackDiagnostics1SysLog)(void* aPtr, uint32_t aVersion, char** aaSysLog, uint32_t* aaSysLogLen);
typedef int32_t (*CallbackDiagnostics1Diagnostic)(void* aPtr, uint32_t aVersion, const char* aaDiagnosticType, char** aaDiagnosticInfo);
typedef int32_t (*CallbackDiagnostics1StateVariable)(void* aPtr, uint32_t aVersion, uint32_t* aaStateVariable);
typedef int32_t (*CallbackDiagnostics1SetStateVariable)(void* aPtr, uint32_t aVersion, uint32_t aaStateVariable);
typedef int32_t (*CallbackDiagnostics1StateVariablePeriod)(void* aPtr, uint32_t aVersion, uint32_t* aaPeriod);
typedef int32_t (*CallbackDiagnostics1SetStateVariablePeriod)(void* aPtr, uint32_t aVersion, uint32_t aaPeriod);
typedef int32_t (*CallbackDiagnostics1Reboot)(void* aPtr, uint32_t aVersion, uint32_t aaDelay);

DllExport THandle DvProviderLinnCoUkDiagnostics1Create(DvDeviceC aDevice);
DllExport void DvProviderLinnCoUkDiagnostics1Destroy(THandle aService);

DllExport void DvProviderLinnCoUkDiagnostics1EnableActionEcho(THandle aService, CallbackDiagnostics1Echo aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionElfFile(THandle aService, CallbackDiagnostics1ElfFile aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionElfFingerprint(THandle aService, CallbackDiagnostics1ElfFingerprint aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionCrashDataStatus(THandle aService, CallbackDiagnostics1CrashDataStatus aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionCrashDataFetch(THandle aService, CallbackDiagnostics1CrashDataFetch aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionCrashDataClear(THandle aService, CallbackDiagnostics1CrashDataClear aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionSysLog(THandle aService, CallbackDiagnostics1SysLog aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionDiagnostic(THandle aService, CallbackDiagnostics1Diagnostic aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionStateVariable(THandle aService, CallbackDiagnostics1StateVariable aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionSetStateVariable(THandle aService, CallbackDiagnostics1SetStateVariable aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionStateVariablePeriod(THandle aService, CallbackDiagnostics1StateVariablePeriod aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionSetStateVariablePeriod(THandle aService, CallbackDiagnostics1SetStateVariablePeriod aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkDiagnostics1EnableActionReboot(THandle aService, CallbackDiagnostics1Reboot aCallback, void* aPtr);

DllExport int32_t DvProviderLinnCoUkDiagnostics1SetPropertyaStateVariable(THandle aService, uint32_t aValue, uint32_t* aChanged);
DllExport void DvProviderLinnCoUkDiagnostics1GetPropertyaStateVariable(THandle aService, uint32_t* aValue);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKDIAGNOSTICS1_C

