#ifndef HEADER_DVUPNPORGCONTENTDIRECTORY3_C
#define HEADER_DVUPNPORGCONTENTDIRECTORY3_C

#include <OsTypes.h>
#include <C/DvDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t (*CallbackContentDirectory3GetSearchCapabilities)(void* aPtr, uint32_t aVersion, char** aSearchCaps);
typedef int32_t (*CallbackContentDirectory3GetSortCapabilities)(void* aPtr, uint32_t aVersion, char** aSortCaps);
typedef int32_t (*CallbackContentDirectory3GetSortExtensionCapabilities)(void* aPtr, uint32_t aVersion, char** aSortExtensionCaps);
typedef int32_t (*CallbackContentDirectory3GetFeatureList)(void* aPtr, uint32_t aVersion, char** aFeatureList);
typedef int32_t (*CallbackContentDirectory3GetSystemUpdateID)(void* aPtr, uint32_t aVersion, uint32_t* aId);
typedef int32_t (*CallbackContentDirectory3GetServiceResetToken)(void* aPtr, uint32_t aVersion, char** aResetToken);
typedef int32_t (*CallbackContentDirectory3Browse)(void* aPtr, uint32_t aVersion, const char* aObjectID, const char* aBrowseFlag, const char* aFilter, uint32_t aStartingIndex, uint32_t aRequestedCount, const char* aSortCriteria, char** aResult, uint32_t* aNumberReturned, uint32_t* aTotalMatches, uint32_t* aUpdateID);
typedef int32_t (*CallbackContentDirectory3Search)(void* aPtr, uint32_t aVersion, const char* aContainerID, const char* aSearchCriteria, const char* aFilter, uint32_t aStartingIndex, uint32_t aRequestedCount, const char* aSortCriteria, char** aResult, uint32_t* aNumberReturned, uint32_t* aTotalMatches, uint32_t* aUpdateID);
typedef int32_t (*CallbackContentDirectory3CreateObject)(void* aPtr, uint32_t aVersion, const char* aContainerID, const char* aElements, char** aObjectID, char** aResult);
typedef int32_t (*CallbackContentDirectory3DestroyObject)(void* aPtr, uint32_t aVersion, const char* aObjectID);
typedef int32_t (*CallbackContentDirectory3UpdateObject)(void* aPtr, uint32_t aVersion, const char* aObjectID, const char* aCurrentTagValue, const char* aNewTagValue);
typedef int32_t (*CallbackContentDirectory3MoveObject)(void* aPtr, uint32_t aVersion, const char* aObjectID, const char* aNewParentID, char** aNewObjectID);
typedef int32_t (*CallbackContentDirectory3ImportResource)(void* aPtr, uint32_t aVersion, const char* aSourceURI, const char* aDestinationURI, uint32_t* aTransferID);
typedef int32_t (*CallbackContentDirectory3ExportResource)(void* aPtr, uint32_t aVersion, const char* aSourceURI, const char* aDestinationURI, uint32_t* aTransferID);
typedef int32_t (*CallbackContentDirectory3DeleteResource)(void* aPtr, uint32_t aVersion, const char* aResourceURI);
typedef int32_t (*CallbackContentDirectory3StopTransferResource)(void* aPtr, uint32_t aVersion, uint32_t aTransferID);
typedef int32_t (*CallbackContentDirectory3GetTransferProgress)(void* aPtr, uint32_t aVersion, uint32_t aTransferID, char** aTransferStatus, char** aTransferLength, char** aTransferTotal);
typedef int32_t (*CallbackContentDirectory3CreateReference)(void* aPtr, uint32_t aVersion, const char* aContainerID, const char* aObjectID, char** aNewID);
typedef int32_t (*CallbackContentDirectory3FreeFormQuery)(void* aPtr, uint32_t aVersion, const char* aContainerID, uint32_t aCDSView, const char* aQueryRequest, char** aQueryResult, uint32_t* aUpdateID);
typedef int32_t (*CallbackContentDirectory3GetFreeFormQueryCapabilities)(void* aPtr, uint32_t aVersion, char** aFFQCapabilities);

DllExport THandle DvProviderUpnpOrgContentDirectory3Create(DvDeviceC aDevice);
DllExport void DvProviderUpnpOrgContentDirectory3Destroy(THandle aProvider);

DllExport void DvProviderUpnpOrgContentDirectory3EnableActionGetSearchCapabilities(THandle aProvider, CallbackContentDirectory3GetSearchCapabilities aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionGetSortCapabilities(THandle aProvider, CallbackContentDirectory3GetSortCapabilities aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionGetSortExtensionCapabilities(THandle aProvider, CallbackContentDirectory3GetSortExtensionCapabilities aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionGetFeatureList(THandle aProvider, CallbackContentDirectory3GetFeatureList aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionGetSystemUpdateID(THandle aProvider, CallbackContentDirectory3GetSystemUpdateID aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionGetServiceResetToken(THandle aProvider, CallbackContentDirectory3GetServiceResetToken aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionBrowse(THandle aProvider, CallbackContentDirectory3Browse aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionSearch(THandle aProvider, CallbackContentDirectory3Search aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionCreateObject(THandle aProvider, CallbackContentDirectory3CreateObject aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionDestroyObject(THandle aProvider, CallbackContentDirectory3DestroyObject aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionUpdateObject(THandle aProvider, CallbackContentDirectory3UpdateObject aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionMoveObject(THandle aProvider, CallbackContentDirectory3MoveObject aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionImportResource(THandle aProvider, CallbackContentDirectory3ImportResource aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionExportResource(THandle aProvider, CallbackContentDirectory3ExportResource aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionDeleteResource(THandle aProvider, CallbackContentDirectory3DeleteResource aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionStopTransferResource(THandle aProvider, CallbackContentDirectory3StopTransferResource aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionGetTransferProgress(THandle aProvider, CallbackContentDirectory3GetTransferProgress aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionCreateReference(THandle aProvider, CallbackContentDirectory3CreateReference aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionFreeFormQuery(THandle aProvider, CallbackContentDirectory3FreeFormQuery aCallback, void* aPtr);
DllExport void DvProviderUpnpOrgContentDirectory3EnableActionGetFreeFormQueryCapabilities(THandle aProvider, CallbackContentDirectory3GetFreeFormQueryCapabilities aCallback, void* aPtr);

DllExport int32_t DvProviderUpnpOrgContentDirectory3SetPropertySystemUpdateID(THandle aProvider, uint32_t aValue, uint32_t* aChanged);
DllExport void DvProviderUpnpOrgContentDirectory3GetPropertySystemUpdateID(THandle aProvider, uint32_t* aValue);
DllExport int32_t DvProviderUpnpOrgContentDirectory3SetPropertyContainerUpdateIDs(THandle aProvider, const char* aValue, uint32_t* aChanged);
DllExport void DvProviderUpnpOrgContentDirectory3GetPropertyContainerUpdateIDs(THandle aProvider, char** aValue);
DllExport int32_t DvProviderUpnpOrgContentDirectory3SetPropertyLastChange(THandle aProvider, const char* aValue, uint32_t* aChanged);
DllExport void DvProviderUpnpOrgContentDirectory3GetPropertyLastChange(THandle aProvider, char** aValue);
DllExport int32_t DvProviderUpnpOrgContentDirectory3SetPropertyTransferIDs(THandle aProvider, const char* aValue, uint32_t* aChanged);
DllExport void DvProviderUpnpOrgContentDirectory3GetPropertyTransferIDs(THandle aProvider, char** aValue);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVUPNPORGCONTENTDIRECTORY3_C

