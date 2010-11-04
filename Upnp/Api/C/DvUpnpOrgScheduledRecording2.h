#ifndef HEADER_DVUPNPORGSCHEDULEDRECORDING2_C
#define HEADER_DVUPNPORGSCHEDULEDRECORDING2_C

#include <OsTypes.h>
#include <C/DvDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t (*CallbackScheduledRecording2GetSortCapabilities)(void* aPtr, uint32_t aVersion, char** aSortCaps, uint32_t* aSortLevelCap);
typedef int32_t (*CallbackScheduledRecording2GetPropertyList)(void* aPtr, uint32_t aVersion, const char* aDataTypeID, char** aPropertyList);
typedef int32_t (*CallbackScheduledRecording2GetAllowedValues)(void* aPtr, uint32_t aVersion, const char* aDataTypeID, const char* aFilter, char** aPropertyInfo);
typedef int32_t (*CallbackScheduledRecording2GetStateUpdateID)(void* aPtr, uint32_t aVersion, uint32_t* aId);
typedef int32_t (*CallbackScheduledRecording2BrowseRecordSchedules)(void* aPtr, uint32_t aVersion, const char* aFilter, uint32_t aStartingIndex, uint32_t aRequestedCount, const char* aSortCriteria, char** aResult, uint32_t* aNumberReturned, uint32_t* aTotalMatches, uint32_t* aUpdateID);
typedef int32_t (*CallbackScheduledRecording2BrowseRecordTasks)(void* aPtr, uint32_t aVersion, const char* aRecordScheduleID, const char* aFilter, uint32_t aStartingIndex, uint32_t aRequestedCount, const char* aSortCriteria, char** aResult, uint32_t* aNumberReturned, uint32_t* aTotalMatches, uint32_t* aUpdateID);
typedef int32_t (*CallbackScheduledRecording2CreateRecordSchedule)(void* aPtr, uint32_t aVersion, const char* aElements, char** aRecordScheduleID, char** aResult, uint32_t* aUpdateID);
typedef int32_t (*CallbackScheduledRecording2DeleteRecordSchedule)(void* aPtr, uint32_t aVersion, const char* aRecordScheduleID);
typedef int32_t (*CallbackScheduledRecording2GetRecordSchedule)(void* aPtr, uint32_t aVersion, const char* aRecordScheduleID, const char* aFilter, char** aResult, uint32_t* aUpdateID);
typedef int32_t (*CallbackScheduledRecording2EnableRecordSchedule)(void* aPtr, uint32_t aVersion, const char* aRecordScheduleID);
typedef int32_t (*CallbackScheduledRecording2DisableRecordSchedule)(void* aPtr, uint32_t aVersion, const char* aRecordScheduleID);
typedef int32_t (*CallbackScheduledRecording2DeleteRecordTask)(void* aPtr, uint32_t aVersion, const char* aRecordTaskID);
typedef int32_t (*CallbackScheduledRecording2GetRecordTask)(void* aPtr, uint32_t aVersion, const char* aRecordTaskID, const char* aFilter, char** aResult, uint32_t* aUpdateID);
typedef int32_t (*CallbackScheduledRecording2EnableRecordTask)(void* aPtr, uint32_t aVersion, const char* aRecordTaskID);
typedef int32_t (*CallbackScheduledRecording2DisableRecordTask)(void* aPtr, uint32_t aVersion, const char* aRecordTaskID);
typedef int32_t (*CallbackScheduledRecording2ResetRecordTask)(void* aPtr, uint32_t aVersion, const char* aRecordTaskID);
typedef int32_t (*CallbackScheduledRecording2GetRecordScheduleConflicts)(void* aPtr, uint32_t aVersion, const char* aRecordScheduleID, char** aRecordScheduleConflictIDList, uint32_t* aUpdateID);
typedef int32_t (*CallbackScheduledRecording2GetRecordTaskConflicts)(void* aPtr, uint32_t aVersion, const char* aRecordTaskID, char** aRecordTaskConflictIDList, uint32_t* aUpdateID);

DllExport THandle DvProviderUpnpOrgScheduledRecording2Create(DvDeviceC aDevice);
DllExport void DvProviderUpnpOrgScheduledRecording2Destroy(THandle aProvider);

DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionGetSortCapabilities(THandle aProvider, CallbackScheduledRecording2GetSortCapabilities aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionGetPropertyList(THandle aProvider, CallbackScheduledRecording2GetPropertyList aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionGetAllowedValues(THandle aProvider, CallbackScheduledRecording2GetAllowedValues aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionGetStateUpdateID(THandle aProvider, CallbackScheduledRecording2GetStateUpdateID aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionBrowseRecordSchedules(THandle aProvider, CallbackScheduledRecording2BrowseRecordSchedules aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionBrowseRecordTasks(THandle aProvider, CallbackScheduledRecording2BrowseRecordTasks aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionCreateRecordSchedule(THandle aProvider, CallbackScheduledRecording2CreateRecordSchedule aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionDeleteRecordSchedule(THandle aProvider, CallbackScheduledRecording2DeleteRecordSchedule aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionGetRecordSchedule(THandle aProvider, CallbackScheduledRecording2GetRecordSchedule aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionEnableRecordSchedule(THandle aProvider, CallbackScheduledRecording2EnableRecordSchedule aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionDisableRecordSchedule(THandle aProvider, CallbackScheduledRecording2DisableRecordSchedule aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionDeleteRecordTask(THandle aProvider, CallbackScheduledRecording2DeleteRecordTask aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionGetRecordTask(THandle aProvider, CallbackScheduledRecording2GetRecordTask aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionEnableRecordTask(THandle aProvider, CallbackScheduledRecording2EnableRecordTask aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionDisableRecordTask(THandle aProvider, CallbackScheduledRecording2DisableRecordTask aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionResetRecordTask(THandle aProvider, CallbackScheduledRecording2ResetRecordTask aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionGetRecordScheduleConflicts(THandle aProvider, CallbackScheduledRecording2GetRecordScheduleConflicts aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgScheduledRecording2EnableActionGetRecordTaskConflicts(THandle aProvider, CallbackScheduledRecording2GetRecordTaskConflicts aCallback, void* aPtr);

DllExport int32_t DvProviderUpnpOrgScheduledRecording2SetPropertyLastChange(THandle aProvider, const char* aValue, uint32_t* aChanged);
DllExport void DvProviderUpnpOrgScheduledRecording2GetPropertyLastChange(THandle aProvider, char** aValue);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVUPNPORGSCHEDULEDRECORDING2_C

