#include <C/DvZappOrgTestBasic1.h>
#include <Core/DvZappOrgTestBasic1.h>
#include <ZappTypes.h>
#include <Buffer.h>
#include <C/DviDeviceC.h>
#include <C/Zapp.h>

using namespace Zapp;

class DvProviderZappOrgTestBasic1C : public DvProviderZappOrgTestBasic1
{
public:
    DvProviderZappOrgTestBasic1C(DvDevice& aDevice);
    void EnableActionIncrement(CallbackTestBasic1Increment aCallback, void* aPtr);
    void EnableActionDecrement(CallbackTestBasic1Decrement aCallback, void* aPtr);
    void EnableActionToggle(CallbackTestBasic1Toggle aCallback, void* aPtr);
    void EnableActionEchoString(CallbackTestBasic1EchoString aCallback, void* aPtr);
    void EnableActionEchoBinary(CallbackTestBasic1EchoBinary aCallback, void* aPtr);
    void EnableActionSetUint(CallbackTestBasic1SetUint aCallback, void* aPtr);
    void EnableActionGetUint(CallbackTestBasic1GetUint aCallback, void* aPtr);
    void EnableActionSetInt(CallbackTestBasic1SetInt aCallback, void* aPtr);
    void EnableActionGetInt(CallbackTestBasic1GetInt aCallback, void* aPtr);
    void EnableActionSetBool(CallbackTestBasic1SetBool aCallback, void* aPtr);
    void EnableActionGetBool(CallbackTestBasic1GetBool aCallback, void* aPtr);
    void EnableActionSetMultiple(CallbackTestBasic1SetMultiple aCallback, void* aPtr);
    void EnableActionSetString(CallbackTestBasic1SetString aCallback, void* aPtr);
    void EnableActionGetString(CallbackTestBasic1GetString aCallback, void* aPtr);
    void EnableActionSetBinary(CallbackTestBasic1SetBinary aCallback, void* aPtr);
    void EnableActionGetBinary(CallbackTestBasic1GetBinary aCallback, void* aPtr);
    void EnableActionToggleBool(CallbackTestBasic1ToggleBool aCallback, void* aPtr);
private:
    void Increment(IInvocationResponse& aResponse, TUint aVersion, TUint aValue, IInvocationResponseUint& aResult);
    void Decrement(IInvocationResponse& aResponse, TUint aVersion, TInt aValue, IInvocationResponseInt& aResult);
    void Toggle(IInvocationResponse& aResponse, TUint aVersion, TBool aValue, IInvocationResponseBool& aResult);
    void EchoString(IInvocationResponse& aResponse, TUint aVersion, const Brx& aValue, IInvocationResponseString& aResult);
    void EchoBinary(IInvocationResponse& aResponse, TUint aVersion, const Brx& aValue, IInvocationResponseBinary& aResult);
    void SetUint(IInvocationResponse& aResponse, TUint aVersion, TUint aValueUint);
    void GetUint(IInvocationResponse& aResponse, TUint aVersion, IInvocationResponseUint& aValueUint);
    void SetInt(IInvocationResponse& aResponse, TUint aVersion, TInt aValueInt);
    void GetInt(IInvocationResponse& aResponse, TUint aVersion, IInvocationResponseInt& aValueInt);
    void SetBool(IInvocationResponse& aResponse, TUint aVersion, TBool aValueBool);
    void GetBool(IInvocationResponse& aResponse, TUint aVersion, IInvocationResponseBool& aValueBool);
    void SetMultiple(IInvocationResponse& aResponse, TUint aVersion, TUint aValueUint, TInt aValueInt, TBool aValueBool);
    void SetString(IInvocationResponse& aResponse, TUint aVersion, const Brx& aValueStr);
    void GetString(IInvocationResponse& aResponse, TUint aVersion, IInvocationResponseString& aValueStr);
    void SetBinary(IInvocationResponse& aResponse, TUint aVersion, const Brx& aValueBin);
    void GetBinary(IInvocationResponse& aResponse, TUint aVersion, IInvocationResponseBinary& aValueBin);
    void ToggleBool(IInvocationResponse& aResponse, TUint aVersion);
private:
    CallbackTestBasic1Increment iCallbackIncrement;
    void* iPtrIncrement;
    CallbackTestBasic1Decrement iCallbackDecrement;
    void* iPtrDecrement;
    CallbackTestBasic1Toggle iCallbackToggle;
    void* iPtrToggle;
    CallbackTestBasic1EchoString iCallbackEchoString;
    void* iPtrEchoString;
    CallbackTestBasic1EchoBinary iCallbackEchoBinary;
    void* iPtrEchoBinary;
    CallbackTestBasic1SetUint iCallbackSetUint;
    void* iPtrSetUint;
    CallbackTestBasic1GetUint iCallbackGetUint;
    void* iPtrGetUint;
    CallbackTestBasic1SetInt iCallbackSetInt;
    void* iPtrSetInt;
    CallbackTestBasic1GetInt iCallbackGetInt;
    void* iPtrGetInt;
    CallbackTestBasic1SetBool iCallbackSetBool;
    void* iPtrSetBool;
    CallbackTestBasic1GetBool iCallbackGetBool;
    void* iPtrGetBool;
    CallbackTestBasic1SetMultiple iCallbackSetMultiple;
    void* iPtrSetMultiple;
    CallbackTestBasic1SetString iCallbackSetString;
    void* iPtrSetString;
    CallbackTestBasic1GetString iCallbackGetString;
    void* iPtrGetString;
    CallbackTestBasic1SetBinary iCallbackSetBinary;
    void* iPtrSetBinary;
    CallbackTestBasic1GetBinary iCallbackGetBinary;
    void* iPtrGetBinary;
    CallbackTestBasic1ToggleBool iCallbackToggleBool;
    void* iPtrToggleBool;
};

DvProviderZappOrgTestBasic1C::DvProviderZappOrgTestBasic1C(DvDevice& aDevice)
    : DvProviderZappOrgTestBasic1(aDevice)
{
}

void DvProviderZappOrgTestBasic1C::EnableActionIncrement(CallbackTestBasic1Increment aCallback, void* aPtr)
{
    iCallbackIncrement = aCallback;
    iPtrIncrement = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionIncrement();
}

void DvProviderZappOrgTestBasic1C::EnableActionDecrement(CallbackTestBasic1Decrement aCallback, void* aPtr)
{
    iCallbackDecrement = aCallback;
    iPtrDecrement = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionDecrement();
}

void DvProviderZappOrgTestBasic1C::EnableActionToggle(CallbackTestBasic1Toggle aCallback, void* aPtr)
{
    iCallbackToggle = aCallback;
    iPtrToggle = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionToggle();
}

void DvProviderZappOrgTestBasic1C::EnableActionEchoString(CallbackTestBasic1EchoString aCallback, void* aPtr)
{
    iCallbackEchoString = aCallback;
    iPtrEchoString = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionEchoString();
}

void DvProviderZappOrgTestBasic1C::EnableActionEchoBinary(CallbackTestBasic1EchoBinary aCallback, void* aPtr)
{
    iCallbackEchoBinary = aCallback;
    iPtrEchoBinary = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionEchoBinary();
}

void DvProviderZappOrgTestBasic1C::EnableActionSetUint(CallbackTestBasic1SetUint aCallback, void* aPtr)
{
    iCallbackSetUint = aCallback;
    iPtrSetUint = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionSetUint();
}

void DvProviderZappOrgTestBasic1C::EnableActionGetUint(CallbackTestBasic1GetUint aCallback, void* aPtr)
{
    iCallbackGetUint = aCallback;
    iPtrGetUint = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionGetUint();
}

void DvProviderZappOrgTestBasic1C::EnableActionSetInt(CallbackTestBasic1SetInt aCallback, void* aPtr)
{
    iCallbackSetInt = aCallback;
    iPtrSetInt = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionSetInt();
}

void DvProviderZappOrgTestBasic1C::EnableActionGetInt(CallbackTestBasic1GetInt aCallback, void* aPtr)
{
    iCallbackGetInt = aCallback;
    iPtrGetInt = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionGetInt();
}

void DvProviderZappOrgTestBasic1C::EnableActionSetBool(CallbackTestBasic1SetBool aCallback, void* aPtr)
{
    iCallbackSetBool = aCallback;
    iPtrSetBool = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionSetBool();
}

void DvProviderZappOrgTestBasic1C::EnableActionGetBool(CallbackTestBasic1GetBool aCallback, void* aPtr)
{
    iCallbackGetBool = aCallback;
    iPtrGetBool = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionGetBool();
}

void DvProviderZappOrgTestBasic1C::EnableActionSetMultiple(CallbackTestBasic1SetMultiple aCallback, void* aPtr)
{
    iCallbackSetMultiple = aCallback;
    iPtrSetMultiple = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionSetMultiple();
}

void DvProviderZappOrgTestBasic1C::EnableActionSetString(CallbackTestBasic1SetString aCallback, void* aPtr)
{
    iCallbackSetString = aCallback;
    iPtrSetString = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionSetString();
}

void DvProviderZappOrgTestBasic1C::EnableActionGetString(CallbackTestBasic1GetString aCallback, void* aPtr)
{
    iCallbackGetString = aCallback;
    iPtrGetString = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionGetString();
}

void DvProviderZappOrgTestBasic1C::EnableActionSetBinary(CallbackTestBasic1SetBinary aCallback, void* aPtr)
{
    iCallbackSetBinary = aCallback;
    iPtrSetBinary = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionSetBinary();
}

void DvProviderZappOrgTestBasic1C::EnableActionGetBinary(CallbackTestBasic1GetBinary aCallback, void* aPtr)
{
    iCallbackGetBinary = aCallback;
    iPtrGetBinary = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionGetBinary();
}

void DvProviderZappOrgTestBasic1C::EnableActionToggleBool(CallbackTestBasic1ToggleBool aCallback, void* aPtr)
{
    iCallbackToggleBool = aCallback;
    iPtrToggleBool = aPtr;
    DvProviderZappOrgTestBasic1::EnableActionToggleBool();
}

void DvProviderZappOrgTestBasic1C::Increment(IInvocationResponse& aResponse, TUint aVersion, TUint aValue, IInvocationResponseUint& aResult)
{
    uint32_t Result;
    ASSERT(iCallbackIncrement != NULL);
    if (0 != iCallbackIncrement(iPtrIncrement, aVersion, aValue, &Result)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aResult.Write(Result);
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::Decrement(IInvocationResponse& aResponse, TUint aVersion, TInt aValue, IInvocationResponseInt& aResult)
{
    int32_t Result;
    ASSERT(iCallbackDecrement != NULL);
    if (0 != iCallbackDecrement(iPtrDecrement, aVersion, aValue, &Result)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aResult.Write(Result);
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::Toggle(IInvocationResponse& aResponse, TUint aVersion, TBool aValue, IInvocationResponseBool& aResult)
{
    uint32_t Result;
    ASSERT(iCallbackToggle != NULL);
    if (0 != iCallbackToggle(iPtrToggle, aVersion, aValue, &Result)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aResult.Write((Result!=0));
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::EchoString(IInvocationResponse& aResponse, TUint aVersion, const Brx& aValue, IInvocationResponseString& aResult)
{
    char* Result;
    ASSERT(iCallbackEchoString != NULL);
    if (0 != iCallbackEchoString(iPtrEchoString, aVersion, (const char*)aValue.Ptr(), &Result)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    Brhz bufResult((const TChar*)Result);
    ZappFreeExternal(Result);
    aResult.Write(bufResult);
    aResult.WriteFlush();
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::EchoBinary(IInvocationResponse& aResponse, TUint aVersion, const Brx& aValue, IInvocationResponseBinary& aResult)
{
    char* Result;
    uint32_t ResultLen;
    ASSERT(iCallbackEchoBinary != NULL);
    if (0 != iCallbackEchoBinary(iPtrEchoBinary, aVersion, (const char*)aValue.Ptr(), aValue.Bytes(), &Result, &ResultLen)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    Brh bufResult;
    bufResult.Set((const TByte*)Result, ResultLen);
    ZappFreeExternal(Result);
    aResult.Write(bufResult);
    aResult.WriteFlush();
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::SetUint(IInvocationResponse& aResponse, TUint aVersion, TUint aValueUint)
{
    ASSERT(iCallbackSetUint != NULL);
    if (0 != iCallbackSetUint(iPtrSetUint, aVersion, aValueUint)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::GetUint(IInvocationResponse& aResponse, TUint aVersion, IInvocationResponseUint& aValueUint)
{
    uint32_t ValueUint;
    ASSERT(iCallbackGetUint != NULL);
    if (0 != iCallbackGetUint(iPtrGetUint, aVersion, &ValueUint)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aValueUint.Write(ValueUint);
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::SetInt(IInvocationResponse& aResponse, TUint aVersion, TInt aValueInt)
{
    ASSERT(iCallbackSetInt != NULL);
    if (0 != iCallbackSetInt(iPtrSetInt, aVersion, aValueInt)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::GetInt(IInvocationResponse& aResponse, TUint aVersion, IInvocationResponseInt& aValueInt)
{
    int32_t ValueInt;
    ASSERT(iCallbackGetInt != NULL);
    if (0 != iCallbackGetInt(iPtrGetInt, aVersion, &ValueInt)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aValueInt.Write(ValueInt);
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::SetBool(IInvocationResponse& aResponse, TUint aVersion, TBool aValueBool)
{
    ASSERT(iCallbackSetBool != NULL);
    if (0 != iCallbackSetBool(iPtrSetBool, aVersion, aValueBool)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::GetBool(IInvocationResponse& aResponse, TUint aVersion, IInvocationResponseBool& aValueBool)
{
    uint32_t ValueBool;
    ASSERT(iCallbackGetBool != NULL);
    if (0 != iCallbackGetBool(iPtrGetBool, aVersion, &ValueBool)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aValueBool.Write((ValueBool!=0));
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::SetMultiple(IInvocationResponse& aResponse, TUint aVersion, TUint aValueUint, TInt aValueInt, TBool aValueBool)
{
    ASSERT(iCallbackSetMultiple != NULL);
    if (0 != iCallbackSetMultiple(iPtrSetMultiple, aVersion, aValueUint, aValueInt, aValueBool)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::SetString(IInvocationResponse& aResponse, TUint aVersion, const Brx& aValueStr)
{
    ASSERT(iCallbackSetString != NULL);
    if (0 != iCallbackSetString(iPtrSetString, aVersion, (const char*)aValueStr.Ptr())) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::GetString(IInvocationResponse& aResponse, TUint aVersion, IInvocationResponseString& aValueStr)
{
    char* ValueStr;
    ASSERT(iCallbackGetString != NULL);
    if (0 != iCallbackGetString(iPtrGetString, aVersion, &ValueStr)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    Brhz bufValueStr((const TChar*)ValueStr);
    ZappFreeExternal(ValueStr);
    aValueStr.Write(bufValueStr);
    aValueStr.WriteFlush();
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::SetBinary(IInvocationResponse& aResponse, TUint aVersion, const Brx& aValueBin)
{
    ASSERT(iCallbackSetBinary != NULL);
    if (0 != iCallbackSetBinary(iPtrSetBinary, aVersion, (const char*)aValueBin.Ptr(), aValueBin.Bytes())) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::GetBinary(IInvocationResponse& aResponse, TUint aVersion, IInvocationResponseBinary& aValueBin)
{
    char* ValueBin;
    uint32_t ValueBinLen;
    ASSERT(iCallbackGetBinary != NULL);
    if (0 != iCallbackGetBinary(iPtrGetBinary, aVersion, &ValueBin, &ValueBinLen)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    Brh bufValueBin;
    bufValueBin.Set((const TByte*)ValueBin, ValueBinLen);
    ZappFreeExternal(ValueBin);
    aValueBin.Write(bufValueBin);
    aValueBin.WriteFlush();
    aResponse.End();
}

void DvProviderZappOrgTestBasic1C::ToggleBool(IInvocationResponse& aResponse, TUint aVersion)
{
    ASSERT(iCallbackToggleBool != NULL);
    if (0 != iCallbackToggleBool(iPtrToggleBool, aVersion)) {
        aResponse.Error(502, Brn("Action failed"));
        return;
    }
    aResponse.Start();
    aResponse.End();
}



THandle DvProviderZappOrgTestBasic1Create(DvDeviceC aDevice)
{
	return new DvProviderZappOrgTestBasic1C(*(DviDeviceC::DeviceFromHandle(aDevice)));
}

void DvProviderZappOrgTestBasic1Destroy(THandle aService)
{
    delete reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService);
}

void DvProviderZappOrgTestBasic1EnableActionIncrement(THandle aService, CallbackTestBasic1Increment aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionIncrement(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionDecrement(THandle aService, CallbackTestBasic1Decrement aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionDecrement(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionToggle(THandle aService, CallbackTestBasic1Toggle aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionToggle(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionEchoString(THandle aService, CallbackTestBasic1EchoString aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionEchoString(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionEchoBinary(THandle aService, CallbackTestBasic1EchoBinary aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionEchoBinary(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionSetUint(THandle aService, CallbackTestBasic1SetUint aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionSetUint(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionGetUint(THandle aService, CallbackTestBasic1GetUint aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionGetUint(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionSetInt(THandle aService, CallbackTestBasic1SetInt aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionSetInt(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionGetInt(THandle aService, CallbackTestBasic1GetInt aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionGetInt(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionSetBool(THandle aService, CallbackTestBasic1SetBool aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionSetBool(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionGetBool(THandle aService, CallbackTestBasic1GetBool aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionGetBool(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionSetMultiple(THandle aService, CallbackTestBasic1SetMultiple aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionSetMultiple(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionSetString(THandle aService, CallbackTestBasic1SetString aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionSetString(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionGetString(THandle aService, CallbackTestBasic1GetString aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionGetString(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionSetBinary(THandle aService, CallbackTestBasic1SetBinary aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionSetBinary(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionGetBinary(THandle aService, CallbackTestBasic1GetBinary aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionGetBinary(aCallback, aPtr);
}

void DvProviderZappOrgTestBasic1EnableActionToggleBool(THandle aService, CallbackTestBasic1ToggleBool aCallback, void* aPtr)
{
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->EnableActionToggleBool(aCallback, aPtr);
}

int32_t DvProviderZappOrgTestBasic1SetPropertyVarUint(THandle aService, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->SetPropertyVarUint(aValue)? 1 : 0);
    return 0;
}

void DvProviderZappOrgTestBasic1GetPropertyVarUint(THandle aService, uint32_t* aValue)
{
    uint32_t val;
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->GetPropertyVarUint(val);
    *aValue = val;
}

int32_t DvProviderZappOrgTestBasic1SetPropertyVarInt(THandle aService, int32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->SetPropertyVarInt(aValue)? 1 : 0);
    return 0;
}

void DvProviderZappOrgTestBasic1GetPropertyVarInt(THandle aService, int32_t* aValue)
{
    int32_t val;
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->GetPropertyVarInt(val);
    *aValue = val;
}

int32_t DvProviderZappOrgTestBasic1SetPropertyVarBool(THandle aService, uint32_t aValue, uint32_t* aChanged)
{
    *aChanged = (reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->SetPropertyVarBool((aValue!=0))? 1 : 0);
    return 0;
}

void DvProviderZappOrgTestBasic1GetPropertyVarBool(THandle aService, uint32_t* aValue)
{
    TBool val;
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->GetPropertyVarBool(val);
    *aValue = (val? 1 : 0);
}

int32_t DvProviderZappOrgTestBasic1SetPropertyVarStr(THandle aService, const char* aValue, uint32_t* aChanged)
{
    Brhz buf(aValue);
    *aChanged = (reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->SetPropertyVarStr(buf)? 1 : 0);
    return 0;
}

void DvProviderZappOrgTestBasic1GetPropertyVarStr(THandle aService, char** aValue)
{
    Brhz buf;
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->GetPropertyVarStr(buf);
    *aValue = (char*)buf.Transfer();
}

int32_t DvProviderZappOrgTestBasic1SetPropertyVarBin(THandle aService, const char* aValue, uint32_t aValueLen, uint32_t* aChanged)
{
    Brh buf;
    buf.Set((const TByte*)aValue, aValueLen);
    *aChanged = (reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->SetPropertyVarBin(buf)? 1 : 0);
    return 0;
}

void DvProviderZappOrgTestBasic1GetPropertyVarBin(THandle aService, char** aValue, uint32_t* aValueLen)
{
    Brh buf;
    reinterpret_cast<DvProviderZappOrgTestBasic1C*>(aService)->GetPropertyVarBin(buf);
    *aValueLen = buf.Bytes();
    *aValue = (char*)buf.Extract();
}

