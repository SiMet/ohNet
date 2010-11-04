#ifndef HEADER_DVLINNCOUKJUKEBOX1_C
#define HEADER_DVLINNCOUKJUKEBOX1_C

#include <OsTypes.h>
#include <C/DvDevice.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t (*CallbackJukebox1SetPresetPrefix)(void* aPtr, uint32_t aVersion, const char* aaUri);
typedef int32_t (*CallbackJukebox1PresetPrefix)(void* aPtr, uint32_t aVersion, char** aaUri);
typedef int32_t (*CallbackJukebox1SetAlbumArtFileName)(void* aPtr, uint32_t aVersion, const char* aaName);
typedef int32_t (*CallbackJukebox1AlbumArtFileName)(void* aPtr, uint32_t aVersion, char** aaName);
typedef int32_t (*CallbackJukebox1SetCurrentPreset)(void* aPtr, uint32_t aVersion, uint32_t aaPreset);
typedef int32_t (*CallbackJukebox1CurrentPreset)(void* aPtr, uint32_t aVersion, uint32_t* aaPreset);
typedef int32_t (*CallbackJukebox1PresetMetaData)(void* aPtr, uint32_t aVersion, uint32_t aaPreset, char** aaMetaData);
typedef int32_t (*CallbackJukebox1LoadManifest)(void* aPtr, uint32_t aVersion, uint32_t* aaTotalPresets);

DllExport THandle DvProviderLinnCoUkJukebox1Create(DvDeviceC aDevice);
DllExport void DvProviderLinnCoUkJukebox1Destroy(THandle aService);

DllExport void DvProviderLinnCoUkJukebox1EnableActionSetPresetPrefix(THandle aService, CallbackJukebox1SetPresetPrefix aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkJukebox1EnableActionPresetPrefix(THandle aService, CallbackJukebox1PresetPrefix aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkJukebox1EnableActionSetAlbumArtFileName(THandle aService, CallbackJukebox1SetAlbumArtFileName aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkJukebox1EnableActionAlbumArtFileName(THandle aService, CallbackJukebox1AlbumArtFileName aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkJukebox1EnableActionSetCurrentPreset(THandle aService, CallbackJukebox1SetCurrentPreset aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkJukebox1EnableActionCurrentPreset(THandle aService, CallbackJukebox1CurrentPreset aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkJukebox1EnableActionPresetMetaData(THandle aService, CallbackJukebox1PresetMetaData aCallback, void* aPtr);
DllExport void DvProviderLinnCoUkJukebox1EnableActionLoadManifest(THandle aService, CallbackJukebox1LoadManifest aCallback, void* aPtr);

DllExport int32_t DvProviderLinnCoUkJukebox1SetPropertyCurrentPreset(THandle aService, uint32_t aValue, uint32_t* aChanged);
DllExport void DvProviderLinnCoUkJukebox1GetPropertyCurrentPreset(THandle aService, uint32_t* aValue);
DllExport int32_t DvProviderLinnCoUkJukebox1SetPropertyPresetPrefix(THandle aService, const char* aValue, uint32_t* aChanged);
DllExport void DvProviderLinnCoUkJukebox1GetPropertyPresetPrefix(THandle aService, char** aValue);
DllExport int32_t DvProviderLinnCoUkJukebox1SetPropertyAlbumArtFileName(THandle aService, const char* aValue, uint32_t* aChanged);
DllExport void DvProviderLinnCoUkJukebox1GetPropertyAlbumArtFileName(THandle aService, char** aValue);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // HEADER_DVLINNCOUKJUKEBOX1_C

