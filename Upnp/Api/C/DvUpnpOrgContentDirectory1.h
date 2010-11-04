#ifndef HEADER_DVUPNPORGCONTENTDIRECTORY1_C
#define HEADER_DVUPNPORGCONTENTDIRECTORY1_C

#include <OsTypes.h>
#include <C/DvDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t (*CallbackContentDirectory1GetSearchCapabilities)(void* aPtr, uint32_t aVersion, char** aSearchCaps);
typedef int32_t (*CallbackContentDirectory1GetSortCapabilities)(void* aPtr, uint32_t aVersion, char** aSortCaps);
typedef int32_t (*CallbackContentDirectory1GetSystemUpdateID)(void* aPtr, uint32_t aVersion, uint32_t* aId);
typedef int32_t (*CallbackContentDirectory1Browse)(void* aPtr, uint32_t aVersion, const char* aObjectID, const char* aBrowseFlag, const char* aFilter, uint32_t aStartingIndex, uint32_t aRequestedCount, const char* aSortCriteria, char** aResult, uint32_t* aNumberReturned, uint32_t* aTotalMatches, uint32_t* aUpdateID);
typedef int32_t (*CallbackContentDirectory1Search)(void* aPtr, uint32_t aVersion, const char* aContainerID, const char* aSearchCriteria, const char* aFilter, uint32_t aStartingIndex, uint32_t aRequestedCount, const char* aSortCriteria, char** aResult, uint32_t* aNumberReturned, uint32_t* aTotalMatches, uint32_t* aUpdateID);
typedef int32_t (*CallbackContentDirectory1CreateObject)(void* aPtr, uint32_t aVersion, const char* aContainerID, const char* aElements, char** aObjectID, char** aResult);
typedef int32_t (*CallbackContentDirectory1DestroyObject)(void* aPtr, uint32_t aVersion, const char* aObjectID);
typedef int32_t (*CallbackContentDirectory1UpdateObject)(void* aPtr, uint32_t aVersion, const char* aObjectID, const char* aCurrentTagValue, const char* aNewTagValue);
typedef int32_t (*CallbackContentDirectory1ImportResource)(void* aPtr, uint32_t aVersion, const char* aSourceURI, const char* aDestinationURI, uint32_t* aTransferID);
typedef int32_t (*CallbackContentDirectory1ExportResource)(void* aPtr, uint32_t aVersion, const char* aSourceURI, const char* aDestinationURI, uint32_t* aTransferID);
typedef int32_t (*CallbackContentDirectory1StopTransferResource)(void* aPtr, uint32_t aVersion, uint32_t aTransferID);
typedef int32_t (*CallbackContentDirectory1GetTransferProgress)(void* aPtr, uint32_t aVersion, uint32_t aTransferID, char** aTransferStatus, char** aTransferLength, char** aTransferTotal);
typedef int32_t (*CallbackContentDirectory1DeleteResource)(void* aPtr, uint32_t aVersion, const char* aResourceURI);
typedef int32_t (*CallbackContentDirectory1CreateReference)(void* aPtr, uint32_t aVersion, const char* aContainerID, const char* aObjectID, char** aNewID);

DllExport THandle DvProviderUpnpOrgContentDirectory1Create(DvDeviceC aDevice);
DllExport void DvProviderUpnpOrgContentDirectory1Destroy(THandle aProvider);

DllExport void DvProviderUpnpOrgContentDirectory1EnableActionGetSearchCapabilities(THandle aProvider, CallbackContentDirectory1GetSearchCapabilities aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionGetSortCapabilities(THandle aProvider, CallbackContentDirectory1GetSortCapabilities aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionGetSystemUpdateID(THandle aProvider, CallbackContentDirectory1GetSystemUpdateID aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionBrowse(THandle aProvider, CallbackContentDirectory1Browse aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionSearch(THandle aProvider, CallbackContentDirectory1Search aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionCreateObject(THandle aProvider, CallbackContentDirectory1CreateObject aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionDestroyObject(THandle aProvider, CallbackContentDirectory1DestroyObject aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionUpdateObject(THandle aProvider, CallbackContentDirectory1UpdateObject aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionImportResource(THandle aProvider, CallbackContentDirectory1ImportResource aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionExportResource(THandle aProvider, CallbackContentDirectory1ExportResource aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionStopTransferResource(THandle aProvider, CallbackContentDirectory1StopTransferResource aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionGetTransferProgress(THandle aProvider, CallbackContentDirectory1GetTransferProgress aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionDeleteResource(THandle aProvider, CallbackContentDirectory1DeleteResource aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory1EnableActionCreateReference(THandle aProvider, CallbackContentDirectory1CreateReference aCallback, void* aPtr);

DllExport int32_t DvProviderUpnpOrgContentDirectory1SetPropertyTransferIDs(THandle aProvider, const char* aValue, uint32_t* aChanged);
DllExport void DvProviderUpnpOrgContentDirectory1GetPropertyTransferIDs(THandle aProvider, char** aValue);
DllExport int32_t DvProviderUpnpOrgContentDirectory1SetPropertySystemUpdateID(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
DllExport void DvProviderUpnpOrgContentDirectory1GetPropertySystemUpdateID(THandle aProvider, uint32_t* aValue);
DllExport int32_t DvProviderUpnpOrgContentDirectory1SetPropertyContainerUpdateIDs(THandle aProvider, const char* aValue, uint32_t* aChanged);
DllExport void DvProviderUpnpOrgContentDirectory1GetPropertyContainerUpdateIDs(THandle aProvider, char** aValue);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVUPNPORGCONTENTDIRECTORY1_C

