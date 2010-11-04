#include <Std/DvZappOrgTestWidgetController1.h>
#include <ZappTypes.h>
#include <DviService.h>
#include <Service.h>
#include <FunctorDvInvocation.h>

using namespace Zapp;

DvProviderZappOrgTestWidgetController1Cpp::DvProviderZappOrgTestWidgetController1Cpp(DvDeviceStd& aDevice)
    : DvProvider(aDevice.Device(), "zapp.org", "TestWidgetController", 1)
{
    Functor empty;
}

void DvProviderZappOrgTestWidgetController1Cpp::EnableActionCreateWidget()
{
    Zapp::Action* action = new Zapp::Action("CreateWidget");
    action->AddInputParameter(new ParameterString("WidgetUdn"));
    FunctorDvInvocation functor = MakeFunctorDvInvocation(*this, &DvProviderZappOrgTestWidgetController1Cpp::DoCreateWidget);
    iService->AddAction(action, functor);
}

void DvProviderZappOrgTestWidgetController1Cpp::EnableActionRemoveWidget()
{
    Zapp::Action* action = new Zapp::Action("RemoveWidget");
    action->AddInputParameter(new ParameterString("WidgetUdn"));
    FunctorDvInvocation functor = MakeFunctorDvInvocation(*this, &DvProviderZappOrgTestWidgetController1Cpp::DoRemoveWidget);
    iService->AddAction(action, functor);
}

void DvProviderZappOrgTestWidgetController1Cpp::EnableActionSetWidgetRegister()
{
    Zapp::Action* action = new Zapp::Action("SetWidgetRegister");
    action->AddInputParameter(new ParameterString("WidgetUdn"));
    action->AddInputParameter(new ParameterUint("RegisterIndex"));
    action->AddInputParameter(new ParameterUint("RegisterValue"));
    FunctorDvInvocation functor = MakeFunctorDvInvocation(*this, &DvProviderZappOrgTestWidgetController1Cpp::DoSetWidgetRegister);
    iService->AddAction(action, functor);
}

void DvProviderZappOrgTestWidgetController1Cpp::DoCreateWidget(IDvInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    Brhz buf_WidgetUdn;
    aInvocation.InvocationReadString("WidgetUdn", buf_WidgetUdn);
    std::string WidgetUdn((const char*)buf_WidgetUdn.Ptr(), buf_WidgetUdn.Bytes());
    aInvocation.InvocationReadEnd();
    CreateWidget(aVersion, WidgetUdn);
	aInvocation.InvocationWriteStart();
	aInvocation.InvocationWriteEnd();
}

void DvProviderZappOrgTestWidgetController1Cpp::DoRemoveWidget(IDvInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    Brhz buf_WidgetUdn;
    aInvocation.InvocationReadString("WidgetUdn", buf_WidgetUdn);
    std::string WidgetUdn((const char*)buf_WidgetUdn.Ptr(), buf_WidgetUdn.Bytes());
    aInvocation.InvocationReadEnd();
    RemoveWidget(aVersion, WidgetUdn);
	aInvocation.InvocationWriteStart();
	aInvocation.InvocationWriteEnd();
}

void DvProviderZappOrgTestWidgetController1Cpp::DoSetWidgetRegister(IDvInvocation& aInvocation, TUint aVersion)
{
    aInvocation.InvocationReadStart();
    Brhz buf_WidgetUdn;
    aInvocation.InvocationReadString("WidgetUdn", buf_WidgetUdn);
    std::string WidgetUdn((const char*)buf_WidgetUdn.Ptr(), buf_WidgetUdn.Bytes());
    uint32_t RegisterIndex = aInvocation.InvocationReadUint("RegisterIndex");
    uint32_t RegisterValue = aInvocation.InvocationReadUint("RegisterValue");
    aInvocation.InvocationReadEnd();
    SetWidgetRegister(aVersion, WidgetUdn, RegisterIndex, RegisterValue);
	aInvocation.InvocationWriteStart();
	aInvocation.InvocationWriteEnd();
}

void DvProviderZappOrgTestWidgetController1Cpp::CreateWidget(uint32_t /*aVersion*/, const std::string& /*aWidgetUdn*/)
{
    ASSERTS();
}

void DvProviderZappOrgTestWidgetController1Cpp::RemoveWidget(uint32_t /*aVersion*/, const std::string& /*aWidgetUdn*/)
{
    ASSERTS();
}

void DvProviderZappOrgTestWidgetController1Cpp::SetWidgetRegister(uint32_t /*aVersion*/, const std::string& /*aWidgetUdn*/, uint32_t /*aRegisterIndex*/, uint32_t /*aRegisterValue*/)
{
    ASSERTS();
}

