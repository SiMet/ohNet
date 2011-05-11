
proxyCppCore = ControlPoint$(dirsep)Services$(dirsep)Cpp$(dirsep)Core$(dirsep)
proxyC = ControlPoint$(dirsep)Services$(dirsep)C$(dirsep)
proxyCppStd = ControlPoint$(dirsep)Services$(dirsep)Cpp$(dirsep)Std$(dirsep)
proxyCs = ControlPoint$(dirsep)Services$(dirsep)Cs$(dirsep)
proxyJs = ControlPoint$(dirsep)Services$(dirsep)Js$(dirsep)
deviceCppCore = Device$(dirsep)Services$(dirsep)Cpp$(dirsep)Core$(dirsep)
deviceCppStd = Device$(dirsep)Services$(dirsep)Cpp$(dirsep)Std$(dirsep)
deviceC = Device$(dirsep)Services$(dirsep)C$(dirsep)
deviceCs = Device$(dirsep)Services$(dirsep)Cs$(dirsep)

objects_core = $(objdir)Ascii.$(objext) \
               $(objdir)AsyncC.$(objext) \
               $(objdir)AsyncPrivate.$(objext) \
               $(objdir)Bonjour.$(objext) \
               $(objdir)Buffer.$(objext) \
      		   $(objdir)Discovery.$(objext) \
     		   $(objdir)Debug.$(objext) \
    		   $(objdir)Converter.$(objext) \
    		   $(objdir)CpDeviceCore.$(objext) \
    		   $(objdir)CpDeviceC.$(objext) \
    		   $(objdir)CpDeviceStd.$(objext) \
    		   $(objdir)CpDeviceDvCore.$(objext) \
    		   $(objdir)CpDeviceDvStd.$(objext) \
    		   $(objdir)CpDeviceDvC.$(objext) \
    		   $(objdir)CpDeviceUpnpCore.$(objext) \
    		   $(objdir)CpDeviceUpnpC.$(objext) \
    		   $(objdir)CpDeviceUpnpStd.$(objext) \
    		   $(objdir)CpiDevice.$(objext) \
    		   $(objdir)CpiDeviceDv.$(objext) \
    		   $(objdir)CpiDeviceUpnp.$(objext) \
    		   $(objdir)CpiService.$(objext) \
    		   $(objdir)CpiStack.$(objext) \
    		   $(objdir)CpiSubscription.$(objext) \
    		   $(objdir)CpProxy.$(objext) \
    		   $(objdir)CpProxyC.$(objext) \
    		   $(objdir)CpServiceC.$(objext) \
    		   $(objdir)DvDevice.$(objext) \
    		   $(objdir)DvDeviceStd.$(objext) \
    		   $(objdir)DvDeviceC.$(objext) \
    		   $(objdir)DviDevice.$(objext) \
    		   $(objdir)DviDeviceUpnp.$(objext) \
    		   $(objdir)DviServer.$(objext) \
    		   $(objdir)DviServerUpnp.$(objext) \
    		   $(objdir)DviServerWebSocket.$(objext) \
    		   $(objdir)DviService.$(objext) \
    		   $(objdir)DviStack.$(objext) \
               $(objdir)DvOpenhomeOrgOhNet1.$(objext) \
    		   $(objdir)DviSubscription.$(objext) \
    		   $(objdir)DvProvider.$(objext) \
    		   $(objdir)DvProviderC.$(objext) \
    		   $(objdir)DvServerUpnp.$(objext) \
    		   $(objdir)DvServerUpnpC.$(objext) \
    		   $(objdir)DeviceXml.$(objext) \
    		   $(objdir)Error.$(objext) \
    		   $(objdir)EventUpnp.$(objext) \
    		   $(objdir)Exception.$(objext) \
    		   $(objdir)Fifo.$(objext) \
    		   $(objdir)Http.$(objext) \
    		   $(objdir)DNSCommon.$(objext) \
    		   $(objdir)DNSDigest.$(objext) \
    		   $(objdir)mDNS.$(objext) \
    		   $(objdir)uDNS.$(objext) \
    		   $(objdir)MdnsPlatform.$(objext) \
    		   $(objdir)MdnsProvider.$(objext) \
    		   $(objdir)Maths.$(objext) \
    		   $(objdir)Md5.$(objext) \
    		   $(objdir)NetworkInterfaceList.$(objext) \
    		   $(objdir)Network.$(objext) \
    		   $(objdir)Parser.$(objext) \
    		   $(objdir)Printer.$(objext) \
    		   $(objdir)ProtocolUpnp.$(objext) \
    		   $(objdir)Queue.$(objext) \
    		   $(objdir)Service.$(objext) \
    		   $(objdir)ServiceC.$(objext) \
    		   $(objdir)Ssdp.$(objext) \
    		   $(objdir)SsdpDv.$(objext) \
    		   $(objdir)Stack.$(objext) \
    		   $(objdir)Stream.$(objext) \
    		   $(objdir)Subscription.$(objext) \
    		   $(objdir)Thread.$(objext) \
    		   $(objdir)Timer.$(objext) \
    		   $(objdir)Uri.$(objext) \
    		   $(objdir)XmlParser.$(objext) \
    		   $(objdir)XmlFetcher.$(objext) \
    		   $(objdir)Zapp.$(objext) \
    		   $(objdir)ZappCp.$(objext) \
    		   $(objdir)ZappDv.$(objext) \
    		   $(objdir)ZappCombined.$(objext) \
    		   $(objdir)ZappC.$(objext) \
    		   $(objdir)ZappCCp.$(objext) \
    		   $(objdir)ZappCDv.$(objext) \
    		   $(objdir)ZappCCombined.$(objext) \
    		   $(objdir)OsWrapper.$(objext) \
    		   $(objdir)Os.$(objext)

# For simplicity, we make a list of all headers in the project and have all (core) source files depend on them
headers = $(inc_build)/Ascii.h \
          $(inc_build)/Arch.h \
          $(inc_build)/C/Async.h \
          $(inc_build)/AsyncPrivate.h \
          $(inc_build)/Bonjour.h \
          $(inc_build)/Cpp/Buffer.h \
          $(inc_build)/Cpp/Buffer.inl \
          $(inc_build)/Converter.h \
          $(inc_build)/Cpp/Core/CpDevice.h \
          $(inc_build)/C/CpDevice.h \
          $(inc_build)/Cpp/Std/CpDevice.h \
          $(inc_build)/Cpp/Core/CpDeviceDv.h \
          $(inc_build)/Cpp/Std/CpDeviceDv.h \
          $(inc_build)/C/CpDeviceDv.h \
          $(inc_build)/Cpp/Core/CpDeviceUpnp.h \
          $(inc_build)/C/CpDeviceUpnp.h \
          $(inc_build)/Cpp/Std/CpDeviceUpnp.h \
          $(inc_build)/Debug.h \
          $(inc_build)/CpiDevice.h \
          $(inc_build)/CpiDeviceDv.h \
          $(inc_build)/CpiDeviceUpnp.h \
          $(inc_build)/CpiService.h \
          $(inc_build)/CpiStack.h \
          $(inc_build)/CpiSubscription.h \
          $(inc_build)/Discovery.h \
          $(inc_build)/Cpp/DvResourceWriter.h \
          $(inc_build)/Cpp/Core/DvDevice.h \
          $(inc_build)/Cpp/Std/DvDevice.h \
          $(inc_build)/C/DvDevice.h \
          $(inc_build)/C/DviDeviceC.h \
          $(inc_build)/DviDevice.h \
          $(inc_build)/DviDeviceUpnp.h \
          $(inc_build)/DviServer.h \
          $(inc_build)/DviServerUpnp.h \
          $(inc_build)/DviServerWebSocket.h \
          $(inc_build)/DviService.h \
          $(inc_build)/DviStack.h \
          $(inc_build)/DviSubscription.h \
          $(inc_build)/Cpp/DvProvider.h \
          $(inc_build)/C/DvProvider.h \
          $(inc_build)/FunctorDviInvocation.h \
          $(inc_build)/DeviceXml.h \
          $(inc_build)/Error.h \
          $(inc_build)/EventUpnp.h \
          $(inc_build)/Cpp/Exception.h \
          $(inc_build)/Fifo.h \
          $(inc_build)/Cpp/Functor.h \
          $(inc_build)/Cpp/FunctorAsync.h \
          $(inc_build)/Cpp/Core/FunctorCpDevice.h \
          $(inc_build)/Cpp/Std/FunctorCpDevice.h \
          $(inc_build)/FunctorCpiDevice.h \
          $(inc_build)/Cpp/FunctorMsg.h \
          $(inc_build)/Http.h \
          $(inc_build)/Maths.h \
          $(inc_build)/MdnsPlatform.h \
          $(inc_build)/MdnsProvider.h \
          $(inc_build)/Network.h \
          $(inc_build)/NetworkInterfaceList.h \
          $(inc_build)/OsWrapper.h \
          $(inc_build)/OsWrapper.inl \
          $(inc_build)/OsTypes.h \
          $(inc_build)/Os.h \
          $(inc_build)/Parser.h \
          $(inc_build)/Printer.h \
          $(inc_build)/ProtocolUpnp.h \
          $(inc_build)/Cpp/CpProxy.h \
          $(inc_build)/C/CpProxy.h \
          $(inc_build)/C/CpProxyCPrivate.h \
          $(inc_build)/Queue.h \
          $(inc_build)/Service.h \
          $(inc_build)/Ssdp.h \
          $(inc_build)/Stack.h \
          $(inc_build)/Standard.h \
          $(inc_build)/Stream.h \
          $(inc_build)/Subscription.h \
          $(inc_build)/Thread.h \
          $(inc_build)/Timer.h \
          $(inc_build)/Uri.h \
          $(inc_build)/XmlParser.h \
          $(inc_build)/XmlFetcher.h \
          $(inc_build)/Cpp/Zapp.h \
          $(inc_build)/C/Zapp.h \
          $(inc_build)/Cpp/ZappTypes.h

upnp_core : make_obj_dir copy_build_includes $(objects_core) $(objdir)$(libprefix)upnp_core.$(libext) 
$(objdir)$(libprefix)upnp_core.$(libext) : $(objects_core)
	$(ar)$(libprefix)upnp_core.$(libext) $(objects_core)
$(objdir)Ascii.$(objext) : Utils/Ascii.cpp $(headers)
	$(compiler)Ascii.$(objext) -c $(cflags) $(includes) Utils/Ascii.cpp
$(objdir)AsyncC.$(objext) : Public/C/AsyncC.cpp $(headers)
	$(compiler)AsyncC.$(objext) -c $(cflags) $(includes) Public/C/AsyncC.cpp
$(objdir)AsyncPrivate.$(objext) : ControlPoint/AsyncPrivate.cpp $(headers)
	$(compiler)AsyncPrivate.$(objext) -c $(cflags) $(includes) ControlPoint/AsyncPrivate.cpp
$(objdir)Bonjour.$(objext) : Bonjour/Bonjour.cpp $(headers)
	$(compiler)Bonjour.$(objext) -c $(cflags) $(includes) Bonjour/Bonjour.cpp
$(objdir)Buffer.$(objext) : Public/Cpp/Core/Buffer.cpp $(headers)
	$(compiler)Buffer.$(objext) -c $(cflags) $(includes) Public/Cpp/Core/Buffer.cpp
$(objdir)Converter.$(objext) : Utils/Converter.cpp $(headers)
	$(compiler)Converter.$(objext) -c $(cflags) $(includes) Utils/Converter.cpp
$(objdir)Discovery.$(objext) : Ssdp/Discovery.cpp $(headers)
	$(compiler)Discovery.$(objext) -c $(cflags) $(includes) Ssdp/Discovery.cpp
$(objdir)Debug.$(objext) : Utils/Debug.cpp $(headers)
	$(compiler)Debug.$(objext) -c $(cflags) $(includes) Utils/Debug.cpp
$(objdir)CpDeviceCore.$(objext) : Public/Cpp/Core/CpDeviceCore.cpp $(headers)
	$(compiler)CpDeviceCore.$(objext) -c $(cflags) $(includes) Public/Cpp/Core/CpDeviceCore.cpp
$(objdir)CpDeviceC.$(objext) : Public/C/CpDeviceC.cpp $(headers)
	$(compiler)CpDeviceC.$(objext) -c $(cflags) $(includes) Public/C/CpDeviceC.cpp
$(objdir)CpDeviceStd.$(objext) : Public/Cpp/Std/CpDeviceStd.cpp $(headers)
	$(compiler)CpDeviceStd.$(objext) -c $(cflags) $(includes) Public/Cpp/Std/CpDeviceStd.cpp
$(objdir)CpDeviceDvCore.$(objext) : Public/Cpp/Core/CpDeviceDvCore.cpp $(headers)
	$(compiler)CpDeviceDvCore.$(objext) -c $(cflags) $(includes) Public/Cpp/Core/CpDeviceDvCore.cpp
$(objdir)CpDeviceDvStd.$(objext) : Public/Cpp/Std/CpDeviceDvStd.cpp $(headers)
	$(compiler)CpDeviceDvStd.$(objext) -c $(cflags) $(includes) Public/Cpp/Std/CpDeviceDvStd.cpp
$(objdir)CpDeviceDvC.$(objext) : Public/C/CpDeviceDvC.cpp $(headers)
	$(compiler)CpDeviceDvC.$(objext) -c $(cflags) $(includes) Public/C/CpDeviceDvC.cpp
$(objdir)CpDeviceUpnpCore.$(objext) : Public/Cpp/Core/CpDeviceUpnpCore.cpp $(headers)
	$(compiler)CpDeviceUpnpCore.$(objext) -c $(cflags) $(includes) Public/Cpp/Core/CpDeviceUpnpCore.cpp
$(objdir)CpDeviceUpnpC.$(objext) : Public/C/CpDeviceUpnpC.cpp $(headers)
	$(compiler)CpDeviceUpnpC.$(objext) -c $(cflags) $(includes) Public/C/CpDeviceUpnpC.cpp
$(objdir)CpDeviceUpnpStd.$(objext) : Public/Cpp/Std/CpDeviceUpnpStd.cpp $(headers)
	$(compiler)CpDeviceUpnpStd.$(objext) -c $(cflags) $(includes) Public/Cpp/Std/CpDeviceUpnpStd.cpp
$(objdir)CpiDevice.$(objext) : ControlPoint/CpiDevice.cpp $(headers)
	$(compiler)CpiDevice.$(objext) -c $(cflags) $(includes) ControlPoint/CpiDevice.cpp
$(objdir)CpiDeviceDv.$(objext) : ControlPoint/Dv/CpiDeviceDv.cpp $(headers)
	$(compiler)CpiDeviceDv.$(objext) -c $(cflags) $(includes) ControlPoint/Dv/CpiDeviceDv.cpp
$(objdir)CpiDeviceUpnp.$(objext) : ControlPoint/Upnp/CpiDeviceUpnp.cpp $(headers)
	$(compiler)CpiDeviceUpnp.$(objext) -c $(cflags) $(includes) ControlPoint/Upnp/CpiDeviceUpnp.cpp
$(objdir)CpiService.$(objext) : ControlPoint/CpiService.cpp $(headers)
	$(compiler)CpiService.$(objext) -c $(cflags) $(includes) ControlPoint/CpiService.cpp
$(objdir)CpiStack.$(objext) : ControlPoint/CpiStack.cpp $(headers)
	$(compiler)CpiStack.$(objext) -c $(cflags) $(includes) ControlPoint/CpiStack.cpp
$(objdir)CpiSubscription.$(objext) : ControlPoint/CpiSubscription.cpp $(headers)
	$(compiler)CpiSubscription.$(objext) -c $(cflags) $(includes) ControlPoint/CpiSubscription.cpp
$(objdir)CpProxy.$(objext) : Public/Cpp/CpProxy.cpp $(headers)
	$(compiler)CpProxy.$(objext) -c $(cflags) $(includes) Public/Cpp/CpProxy.cpp
$(objdir)CpProxyC.$(objext) : Public/C/CpProxyC.cpp $(headers)
	$(compiler)CpProxyC.$(objext) -c $(cflags) $(includes) Public/C/CpProxyC.cpp
$(objdir)CpServiceC.$(objext) : Public/C/CpServiceC.cpp $(headers)
	$(compiler)CpServiceC.$(objext) -c $(cflags) $(includes) Public/C/CpServiceC.cpp
$(objdir)DvDevice.$(objext) : Public/Cpp/Core/DvDevice.cpp $(headers)
	$(compiler)DvDevice.$(objext) -c $(cflags) $(includes) Public/Cpp/Core/DvDevice.cpp
$(objdir)DvDeviceStd.$(objext) : Public/Cpp/Std/DvDeviceStd.cpp $(headers)
	$(compiler)DvDeviceStd.$(objext) -c $(cflags) $(includes) Public/Cpp/Std/DvDeviceStd.cpp
$(objdir)DvDeviceC.$(objext) : Public/C/DvDeviceC.cpp $(headers)
	$(compiler)DvDeviceC.$(objext) -c $(cflags) $(includes) Public/C/DvDeviceC.cpp
$(objdir)DviDevice.$(objext) : Device/DviDevice.cpp $(headers)
	$(compiler)DviDevice.$(objext) -c $(cflags) $(includes) Device/DviDevice.cpp
$(objdir)DviDeviceUpnp.$(objext) : Device/Upnp/DviDeviceUpnp.cpp $(headers)
	$(compiler)DviDeviceUpnp.$(objext) -c $(cflags) $(includes) Device/Upnp/DviDeviceUpnp.cpp
$(objdir)DviServer.$(objext) : Device/DviServer.cpp $(headers)
	$(compiler)DviServer.$(objext) -c $(cflags) $(includes) Device/DviServer.cpp
$(objdir)DviServerUpnp.$(objext) : Device/Upnp/DviServerUpnp.cpp $(headers)
	$(compiler)DviServerUpnp.$(objext) -c $(cflags) $(includes) Device/Upnp/DviServerUpnp.cpp
$(objdir)DviServerWebSocket.$(objext) : Device/Upnp/DviServerWebSocket.cpp $(headers)
	$(compiler)DviServerWebSocket.$(objext) -c $(cflags) $(includes) Device/Upnp/DviServerWebSocket.cpp
$(objdir)DviService.$(objext) : Device/DviService.cpp $(headers)
	$(compiler)DviService.$(objext) -c $(cflags) $(includes) Device/DviService.cpp
$(objdir)DviStack.$(objext) : Device/DviStack.cpp $(headers)
	$(compiler)DviStack.$(objext) -c $(cflags) $(includes) Device/DviStack.cpp
$(objdir)DviSubscription.$(objext) : Device/DviSubscription.cpp $(headers)
	$(compiler)DviSubscription.$(objext) -c $(cflags) $(includes) Device/DviSubscription.cpp
$(objdir)DvProvider.$(objext) : Public/Cpp/DvProvider.cpp $(headers)
	$(compiler)DvProvider.$(objext) -c $(cflags) $(includes) Public/Cpp/DvProvider.cpp
$(objdir)DvProviderC.$(objext) : Public/C/DvProviderC.cpp $(headers)
	$(compiler)DvProviderC.$(objext) -c $(cflags) $(includes) Public/C/DvProviderC.cpp
$(objdir)DvServerUpnp.$(objext) : Public/Cpp/DvServerUpnp.cpp $(headers)
	$(compiler)DvServerUpnp.$(objext) -c $(cflags) $(includes) Public/Cpp/DvServerUpnp.cpp
$(objdir)DvServerUpnpC.$(objext) : Public/C/DvServerUpnpC.cpp $(headers)
	$(compiler)DvServerUpnpC.$(objext) -c $(cflags) $(includes) Public/C/DvServerUpnpC.cpp
$(objdir)DeviceXml.$(objext) : ControlPoint/Upnp/DeviceXml.cpp $(headers)
	$(compiler)DeviceXml.$(objext) -c $(cflags) $(includes) ControlPoint/Upnp/DeviceXml.cpp
$(objdir)Error.$(objext) : Utils/Error.cpp $(headers)
	$(compiler)Error.$(objext) -c $(cflags) $(includes) Utils/Error.cpp
$(objdir)EventUpnp.$(objext) : ControlPoint/Upnp/EventUpnp.cpp $(headers)
	$(compiler)EventUpnp.$(objext) -c $(cflags) $(includes) ControlPoint/Upnp/EventUpnp.cpp
$(objdir)Exception.$(objext) : Public/Cpp/Exception.cpp $(headers)
	$(compiler)Exception.$(objext) -c $(cflags) $(includes) Public/Cpp/Exception.cpp
$(objdir)Fifo.$(objext) : Utils/Fifo.cpp $(headers)
	$(compiler)Fifo.$(objext) -c $(cflags) $(includes) Utils/Fifo.cpp
$(objdir)Http.$(objext) : Network/Http.cpp $(headers)
	$(compiler)Http.$(objext) -c $(cflags) $(includes) Network/Http.cpp
$(objdir)DNSCommon.$(objext) : Bonjour/mDNSCore/DNSCommon.c $(headers)
	$(compiler)DNSCommon.$(objext) -c $(cflags) $(includes) Bonjour/mDNSCore/DNSCommon.c
$(objdir)DNSDigest.$(objext) : Bonjour/mDNSCore/DNSDigest.c $(headers)
	$(compiler)DNSDigest.$(objext) -c $(cflags) $(includes) Bonjour/mDNSCore/DNSDigest.c
$(objdir)mDNS.$(objext) : Bonjour/mDNSCore/mDNS.c $(headers)
	$(compiler)mDNS.$(objext) -c $(cflags) $(includes) Bonjour/mDNSCore/mDNS.c
$(objdir)uDNS.$(objext) : Bonjour/mDNSCore/uDNS.c $(headers)
	$(compiler)uDNS.$(objext) -c $(cflags) $(includes) Bonjour/mDNSCore/uDNS.c
$(objdir)MdnsPlatform.$(objext) : Bonjour/MdnsPlatform.cpp $(headers)
	$(compiler)MdnsPlatform.$(objext) -c $(cflags) $(includes) Bonjour/MdnsPlatform.cpp
$(objdir)MdnsProvider.$(objext) : Bonjour/MdnsProvider.cpp $(headers)
	$(compiler)MdnsProvider.$(objext) -c $(cflags) $(includes) Bonjour/MdnsProvider.cpp
$(objdir)Maths.$(objext) : Utils/Maths.cpp $(headers)
	$(compiler)Maths.$(objext) -c $(cflags) $(includes) Utils/Maths.cpp
$(objdir)Md5.$(objext) : Utils/md5.c $(headers)
	$(compiler)Md5.$(objext) -c $(cflags) $(includes) Utils/md5.c
$(objdir)NetworkInterfaceList.$(objext) : Network/NetworkInterfaceList.cpp $(headers)
	$(compiler)NetworkInterfaceList.$(objext) -c $(cflags) $(includes) Network/NetworkInterfaceList.cpp
$(objdir)Network.$(objext) : Network/Network.cpp $(headers)
	$(compiler)Network.$(objext) -c $(cflags) $(includes) Network/Network.cpp
$(objdir)Parser.$(objext) : Utils/Parser.cpp $(headers)
	$(compiler)Parser.$(objext) -c $(cflags) $(includes) Utils/Parser.cpp
$(objdir)Printer.$(objext) : Utils/Printer.cpp $(headers)
	$(compiler)Printer.$(objext) -c $(cflags) $(includes) Utils/Printer.cpp
$(objdir)ProtocolUpnp.$(objext) : ControlPoint/Upnp/ProtocolUpnp.cpp $(headers)
	$(compiler)ProtocolUpnp.$(objext) -c $(cflags) $(includes) ControlPoint/Upnp/ProtocolUpnp.cpp
$(objdir)Queue.$(objext) : Utils/Queue.cpp $(headers)
	$(compiler)Queue.$(objext) -c $(cflags) $(includes) Utils/Queue.cpp
$(objdir)Service.$(objext) : Service/Service.cpp $(headers)
	$(compiler)Service.$(objext) -c $(cflags) $(includes) Service/Service.cpp
$(objdir)ServiceC.$(objext) : Public/C/ServiceC.cpp $(headers)
	$(compiler)ServiceC.$(objext) -c $(cflags) $(includes) Public/C/ServiceC.cpp
$(objdir)Ssdp.$(objext) : Ssdp/Ssdp.cpp $(headers)
	$(compiler)Ssdp.$(objext) -c $(cflags) $(includes) Ssdp/Ssdp.cpp
$(objdir)SsdpDv.$(objext) : Ssdp/SsdpDv.cpp $(headers)
	$(compiler)SsdpDv.$(objext) -c $(cflags) $(includes) Ssdp/SsdpDv.cpp
$(objdir)Stack.$(objext) : Stack.cpp $(headers)
	$(compiler)Stack.$(objext) -c $(cflags) $(includes) Stack.cpp
$(objdir)Stream.$(objext) : Utils/Stream.cpp $(headers)
	$(compiler)Stream.$(objext) -c $(cflags) $(includes) Utils/Stream.cpp
$(objdir)Subscription.$(objext) : Network/Subscription.cpp $(headers)
	$(compiler)Subscription.$(objext) -c $(cflags) $(includes) Network/Subscription.cpp
$(objdir)Thread.$(objext) : Thread/Thread.cpp $(headers)
	$(compiler)Thread.$(objext) -c $(cflags) $(includes) Thread/Thread.cpp
$(objdir)Timer.$(objext) : Utils/Timer.cpp $(headers)
	$(compiler)Timer.$(objext) -c $(cflags) $(includes) Utils/Timer.cpp
$(objdir)Uri.$(objext) : Utils/Uri.cpp $(headers)
	$(compiler)Uri.$(objext) -c $(cflags) $(includes) Utils/Uri.cpp
$(objdir)XmlParser.$(objext) : Utils/XmlParser.cpp $(headers)
	$(compiler)XmlParser.$(objext) -c $(cflags) $(includes) Utils/XmlParser.cpp
$(objdir)XmlFetcher.$(objext) : ControlPoint/Upnp/XmlFetcher.cpp $(headers)
	$(compiler)XmlFetcher.$(objext) -c $(cflags) $(includes) ControlPoint/Upnp/XmlFetcher.cpp
$(objdir)Zapp.$(objext) : Public/Cpp/Zapp.cpp $(headers)
	$(compiler)Zapp.$(objext) -c $(cflags) $(includes) Public/Cpp/Zapp.cpp
$(objdir)ZappCp.$(objext) : Public/Cpp/ZappCp.cpp $(headers)
	$(compiler)ZappCp.$(objext) -c $(cflags) $(includes) Public/Cpp/ZappCp.cpp
$(objdir)ZappDv.$(objext) : Public/Cpp/ZappDv.cpp $(headers)
	$(compiler)ZappDv.$(objext) -c $(cflags) $(includes) Public/Cpp/ZappDv.cpp
$(objdir)ZappCombined.$(objext) : Public/Cpp/ZappCombined.cpp $(headers)
	$(compiler)ZappCombined.$(objext) -c $(cflags) $(includes) Public/Cpp/ZappCombined.cpp
$(objdir)ZappC.$(objext) : Public/C/ZappC.cpp $(headers)
	$(compiler)ZappC.$(objext) -c $(cflags) $(includes) Public/C/ZappC.cpp
$(objdir)ZappCCp.$(objext) : Public/C/ZappCCp.cpp $(headers)
	$(compiler)ZappCCp.$(objext) -c $(cflags) $(includes) Public/C/ZappCCp.cpp
$(objdir)ZappCDv.$(objext) : Public/C/ZappCDv.cpp $(headers)
	$(compiler)ZappCDv.$(objext) -c $(cflags) $(includes) Public/C/ZappCDv.cpp
$(objdir)ZappCCombined.$(objext) : Public/C/ZappCCombined.cpp $(headers)
	$(compiler)ZappCCombined.$(objext) -c $(cflags) $(includes) Public/C/ZappCCombined.cpp
$(objdir)OsWrapper.$(objext) : Os/OsWrapper.cpp $(headers)
	$(compiler)OsWrapper.$(objext) -c $(cflags) $(includes) Os/OsWrapper.cpp
$(objdir)Os.$(objext) : Os/$(osdir)/Os.c $(headers)
	$(compiler)Os.$(objext) -c $(cflags) $(includes) Os/$(osdir)/Os.c


ZappUpnpDll: upnp_core
	$(link_dll) $(linkoutput)$(objdir)$(dllprefix)ZappUpnp.$(dllext) $(objects_core)



Zapp: proxies devices
	$(ar)$(libprefix)Zapp.$(libext) $(objects_core) $(objects_proxies) $(objects_devices)


TestFramework.$(libext): $(objdir)TestFramework.$(objext) $(objdir)Main.$(objext) $(objdir)OptionParser.$(objext)
	$(ar)TestFramework.$(libext) $(objdir)TestFramework.$(objext) $(objdir)Main.$(objext) $(objdir)OptionParser.$(objext)
$(objdir)TestFramework.$(objext) : TestFramework/TestFramework.cpp $(headers)
	$(compiler)TestFramework.$(objext) -c $(cflags) $(includes) TestFramework/TestFramework.cpp
$(objdir)Main.$(objext) : Os/$(osdir)/Main.cpp $(headers)
	$(compiler)Main.$(objext) -c $(cflags) $(includes) Os/$(osdir)/Main.cpp
$(objdir)OptionParser.$(objext) : TestFramework/OptionParser.cpp $(headers)
	$(compiler)OptionParser.$(objext) -c $(cflags) $(includes) TestFramework/OptionParser.cpp


TestBuffer: $(objdir)TestBuffer.$(exeext) 
$(objdir)TestBuffer.$(exeext) :  upnp_core $(objdir)TestBuffer.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestBuffer.$(exeext) $(objdir)TestBuffer.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestBuffer.$(objext) : Public/Cpp/Core/TestBuffer.cpp $(headers)
	$(compiler)TestBuffer.$(objext) -c $(cflags) $(includes) Public/Cpp/Core/TestBuffer.cpp

TestThread: $(objdir)TestThread.$(exeext) 
$(objdir)TestThread.$(exeext) :  upnp_core $(objdir)TestThread.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestThread.$(exeext) $(objdir)TestThread.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestThread.$(objext) : Thread/TestThread.cpp $(headers)
	$(compiler)TestThread.$(objext) -c $(cflags) $(includes) Thread/TestThread.cpp

TestQueue: $(objdir)TestQueue.$(exeext) 
$(objdir)TestQueue.$(exeext) :  upnp_core $(objdir)TestQueue.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestQueue.$(exeext) $(objdir)TestQueue.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestQueue.$(objext) : Utils/TestQueue.cpp $(headers)
	$(compiler)TestQueue.$(objext) -c $(cflags) $(includes) Utils/TestQueue.cpp

TestFifo: $(objdir)TestFifo.$(exeext) 
$(objdir)TestFifo.$(exeext) :  upnp_core $(objdir)TestFifo.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestFifo.$(exeext) $(objdir)TestFifo.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestFifo.$(objext) : Utils/TestFifo.cpp $(headers)
	$(compiler)TestFifo.$(objext) -c $(cflags) $(includes) Utils/TestFifo.cpp

TestEcho: $(objdir)TestEcho.$(exeext) 
$(objdir)TestEcho.$(exeext) :  upnp_core $(objdir)TestEcho.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestEcho.$(exeext) $(objdir)TestEcho.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestEcho.$(objext) : Network/TestEcho.cpp $(headers)
	$(compiler)TestEcho.$(objext) -c $(cflags) $(includes) Network/TestEcho.cpp

TestMulticast: $(objdir)TestMulticast.$(exeext) 
$(objdir)TestMulticast.$(exeext) :  upnp_core $(objdir)TestMulticast.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestMulticast.$(exeext) $(objdir)TestMulticast.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestMulticast.$(objext) : Network/TestMulticast.cpp $(headers)
	$(compiler)TestMulticast.$(objext) -c $(cflags) $(includes) Network/TestMulticast.cpp

TestNetwork: $(objdir)TestNetwork.$(exeext) 
$(objdir)TestNetwork.$(exeext) :  upnp_core $(objdir)TestNetwork.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestNetwork.$(exeext) $(objdir)TestNetwork.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestNetwork.$(objext) : Network/TestNetwork.cpp $(headers)
	$(compiler)TestNetwork.$(objext) -c $(cflags) $(includes) Network/TestNetwork.cpp

TestTimer: $(objdir)TestTimer.$(exeext) 
$(objdir)TestTimer.$(exeext) :  upnp_core $(objdir)TestTimer.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestTimer.$(exeext) $(objdir)TestTimer.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestTimer.$(objext) : Utils/TestTimer.cpp $(headers)
	$(compiler)TestTimer.$(objext) -c $(cflags) $(includes) Utils/TestTimer.cpp

TestSsdpMListen: $(objdir)TestSsdpMListen.$(exeext) 
$(objdir)TestSsdpMListen.$(exeext) :  upnp_core $(objdir)TestSsdpMListen.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestSsdpMListen.$(exeext) $(objdir)TestSsdpMListen.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestSsdpMListen.$(objext) : Ssdp/TestSsdpMListen.cpp $(headers)
	$(compiler)TestSsdpMListen.$(objext) -c $(cflags) $(includes) Ssdp/TestSsdpMListen.cpp

TestSsdpUListen: $(objdir)TestSsdpUListen.$(exeext) 
$(objdir)TestSsdpUListen.$(exeext) :  upnp_core $(objdir)TestSsdpUListen.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestSsdpUListen.$(exeext) $(objdir)TestSsdpUListen.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestSsdpUListen.$(objext) : Ssdp/TestSsdpUListen.cpp $(headers)
	$(compiler)TestSsdpUListen.$(objext) -c $(cflags) $(includes) Ssdp/TestSsdpUListen.cpp

TestDeviceList: $(objdir)TestDeviceList.$(exeext) 
$(objdir)TestDeviceList.$(exeext) :  upnp_core $(objdir)TestDeviceList.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDeviceList.$(exeext) $(objdir)TestDeviceList.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDeviceList.$(objext) : ControlPoint/TestDeviceList.cpp $(headers)
	$(compiler)TestDeviceList.$(objext) -c $(cflags) $(includes) ControlPoint/TestDeviceList.cpp

TestDeviceListC: $(objdir)TestDeviceListC.$(exeext) 
$(objdir)TestDeviceListC.$(exeext) :  upnp_core $(objdir)TestDeviceListC.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDeviceListC.$(exeext) $(objdir)TestDeviceListC.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDeviceListC.$(objext) : Public/C/TestDeviceListC.cpp $(headers)
	$(compiler)TestDeviceListC.$(objext) -c $(cflags) $(includes) Public/C/TestDeviceListC.cpp

TestDeviceListStd: $(objdir)TestDeviceListStd.$(exeext) 
$(objdir)TestDeviceListStd.$(exeext) :  upnp_core $(objdir)TestDeviceListStd.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDeviceListStd.$(exeext) $(objdir)TestDeviceListStd.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDeviceListStd.$(objext) : Public/Cpp/Std/TestDeviceListStd.cpp $(headers)
	$(compiler)TestDeviceListStd.$(objext) -c $(cflags) $(includes) Public/Cpp/Std/TestDeviceListStd.cpp

TestDimmableLights: $(objdir)TestDimmableLights.$(exeext) 
$(objdir)TestDimmableLights.$(exeext) :  zapp $(objdir)TestDimmableLights.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDimmableLights.$(exeext) $(objdir)TestDimmableLights.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)Zapp.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDimmableLights.$(objext) : ControlPoint/TestDimmableLights.cpp $(headers)
	$(compiler)TestDimmableLights.$(objext) -c $(cflags) $(includes) ControlPoint/TestDimmableLights.cpp

TestInvocation: $(objdir)TestInvocation.$(exeext) 
$(objdir)TestInvocation.$(exeext) :  upnp_core $(objdir)CpUpnpOrgConnectionManager1.$(objext) $(objdir)TestInvocation.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestInvocation.$(exeext) $(objdir)CpUpnpOrgConnectionManager1.$(objext) $(objdir)TestInvocation.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestInvocation.$(objext) : ControlPoint/TestInvocation.cpp $(headers)
	$(compiler)TestInvocation.$(objext) -c $(cflags) $(includes) ControlPoint/TestInvocation.cpp

TestInvocationStd: $(objdir)TestInvocationStd.$(exeext) 
$(objdir)TestInvocationStd.$(exeext) :  upnp_core $(objdir)CpUpnpOrgConnectionManager1Std.$(objext) $(objdir)TestInvocationStd.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestInvocationStd.$(exeext) $(objdir)CpUpnpOrgConnectionManager1Std.$(objext) $(objdir)TestInvocationStd.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestInvocationStd.$(objext) : Public/Cpp/Std/TestInvocationStd.cpp $(headers)
	$(compiler)TestInvocationStd.$(objext) -c $(cflags) $(includes) Public/Cpp/Std/TestInvocationStd.cpp

TestSubscription: $(objdir)TestSubscription.$(exeext) 
$(objdir)TestSubscription.$(exeext) :  upnp_core $(objdir)CpUpnpOrgConnectionManager1.$(objext) $(objdir)TestSubscription.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestSubscription.$(exeext) $(objdir)CpUpnpOrgConnectionManager1.$(objext) $(objdir)TestSubscription.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestSubscription.$(objext) : ControlPoint/TestSubscription.cpp $(headers)
	$(compiler)TestSubscription.$(objext) -c $(cflags) $(includes) ControlPoint/TestSubscription.cpp

TestNetworkInterfaceChange: $(objdir)TestNetworkInterfaceChange.$(exeext) 
$(objdir)TestNetworkInterfaceChange.$(exeext) :  upnp_core $(objdir)CpUpnpOrgConnectionManager1.$(objext) $(objdir)LinnCoUkPlaylist1.$(objext) $(objdir)TestNetworkInterfaceChange.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestNetworkInterfaceChange.$(exeext) $(objdir)CpUpnpOrgConnectionManager1.$(objext) $(objdir)LinnCoUkPlaylist1.$(objext) $(objdir)TestNetworkInterfaceChange.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestNetworkInterfaceChange.$(objext) : ControlPoint/TestNetworkInterfaceChange.cpp $(headers)
	$(compiler)TestNetworkInterfaceChange.$(objext) -c $(cflags) $(includes) ControlPoint/TestNetworkInterfaceChange.cpp

TestProxyC: $(objdir)TestProxyC.$(exeext) 
$(objdir)TestProxyC.$(exeext) :  upnp_core $(objdir)CpUpnpOrgConnectionManager1C.$(objext) $(objdir)CpUpnpOrgConnectionManager1.$(objext) $(objdir)TestProxyC.$(objext) $(objdir)TestFramework.$(objext) $(objdir)MainC.$(objext)
	$(link) $(linkoutput)$(objdir)TestProxyC.$(exeext) $(objdir)CpUpnpOrgConnectionManager1C.$(objext) $(objdir)CpUpnpOrgConnectionManager1.$(objext) $(objdir)TestProxyC.$(objext) $(objdir)TestFramework.$(objext) $(objdir)MainC.$(objext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestProxyC.$(objext) : Public/C/TestProxyC.cpp $(headers)
	$(compiler)TestProxyC.$(objext) -c $(cflags) $(includes) Public/C/TestProxyC.cpp
$(objdir)MainC.$(objext) : Os/$(osdir)/MainC.c $(headers)
	$(compiler)MainC.$(objext) -c $(cflags) $(includes) Os/$(osdir)/MainC.c

TestTopology1: $(objdir)TestTopology1.$(exeext) 
$(objdir)TestTopology1.$(exeext) :  upnp_core $(objdir)CpTopology1.$(objext) $(objdir)TestTopology1.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestTopology1.$(exeext) $(objdir)CpTopology1.$(objext) $(objdir)TestTopology1.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)CpTopology1.$(objext) : ControlPoint/Topology/CpTopology1.cpp $(headers)
	$(compiler)CpTopology1.$(objext) -c $(cflags) $(includes) ControlPoint/Topology/CpTopology1.cpp 
$(objdir)TestTopology1.$(objext) : ControlPoint/Topology/TestTopology1.cpp $(headers)
	$(compiler)TestTopology1.$(objext) -c $(cflags) $(includes) ControlPoint/Topology/TestTopology1.cpp

TestTopology2: $(objdir)TestTopology2.$(exeext) 
$(objdir)TestTopology2.$(exeext) :  upnp_core $(objdir)CpTopology1.$(objext) $(objdir)CpTopology2.$(objext) $(objdir)TestTopology2.$(objext) $(objdir)CpAvOpenhomeOrgProduct1.$(objext) $(objdir)CpAvOpenhomeOrgVolume1.$(objext) $(objdir)CpUpnpOrgRenderingControl1.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestTopology2.$(exeext) $(objdir)CpTopology1.$(objext) $(objdir)CpTopology2.$(objext) $(objdir)TestTopology2.$(objext) $(objdir)CpAvOpenhomeOrgProduct1.$(objext) $(objdir)CpAvOpenhomeOrgVolume1.$(objext) $(objdir)CpUpnpOrgRenderingControl1.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)CpTopology2.$(objext) : ControlPoint/Topology/CpTopology2.cpp $(headers)
	$(compiler)CpTopology2.$(objext) -c $(cflags) $(includes) ControlPoint/Topology/CpTopology2.cpp 
$(objdir)TestTopology2.$(objext) : ControlPoint/Topology/TestTopology2.cpp $(headers)
	$(compiler)TestTopology2.$(objext) -c $(cflags) $(includes) ControlPoint/Topology/TestTopology2.cpp

TestTopology3: $(objdir)TestTopology3.$(exeext) 
$(objdir)TestTopology3.$(exeext) :  upnp_core $(objdir)CpTopology1.$(objext) $(objdir)CpTopology2.$(objext) $(objdir)CpTopology3.$(objext) $(objdir)TestTopology3.$(objext) $(objdir)CpAvOpenhomeOrgProduct1.$(objext) $(objdir)CpAvOpenhomeOrgVolume1.$(objext) $(objdir)CpUpnpOrgRenderingControl1.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestTopology3.$(exeext) $(objdir)CpTopology1.$(objext) $(objdir)CpTopology2.$(objext) $(objdir)CpTopology3.$(objext) $(objdir)TestTopology3.$(objext) $(objdir)CpAvOpenhomeOrgProduct1.$(objext) $(objdir)CpAvOpenhomeOrgVolume1.$(objext) $(objdir)CpUpnpOrgRenderingControl1.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)CpTopology3.$(objext) : ControlPoint/Topology/CpTopology3.cpp $(headers)
	$(compiler)CpTopology3.$(objext) -c $(cflags) $(includes) ControlPoint/Topology/CpTopology3.cpp 
$(objdir)TestTopology3.$(objext) : ControlPoint/Topology/TestTopology3.cpp $(headers)
	$(compiler)TestTopology3.$(objext) -c $(cflags) $(includes) ControlPoint/Topology/TestTopology3.cpp

TestDviDiscovery: $(objdir)TestDviDiscovery.$(exeext) 
$(objdir)TestDviDiscovery.$(exeext) :  upnp_core $(objdir)TestDviDiscovery.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDviDiscovery.$(exeext) $(objdir)TestDviDiscovery.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDviDiscovery.$(objext) : Device/Upnp/TestDviDiscovery.cpp $(headers)
	$(compiler)TestDviDiscovery.$(objext) -c $(cflags) $(includes) Device/Upnp/TestDviDiscovery.cpp

TestDviDeviceList: $(objdir)TestDviDeviceList.$(exeext) 
$(objdir)TestDviDeviceList.$(exeext) :  upnp_core $(objdir)TestDviDeviceList.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDviDeviceList.$(exeext) $(objdir)TestDviDeviceList.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDviDeviceList.$(objext) : Device/Upnp/TestDviDeviceList.cpp $(headers)
	$(compiler)TestDviDeviceList.$(objext) -c $(cflags) $(includes) Device/Upnp/TestDviDeviceList.cpp

TestDvInvocation: $(objdir)TestDvInvocation.$(exeext) 
$(objdir)TestDvInvocation.$(exeext) :  upnp_core $(objdir)TestDvInvocation.$(objext) $(objdir)DvZappOrgTestBasic1.$(objext) $(objdir)CpZappOrgTestBasic1.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDvInvocation.$(exeext) $(objdir)TestDvInvocation.$(objext) $(objdir)DvZappOrgTestBasic1.$(objext) $(objdir)CpZappOrgTestBasic1.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDvInvocation.$(objext) : Device/Upnp/TestDvInvocation.cpp $(headers)
	$(compiler)TestDvInvocation.$(objext) -c $(cflags) $(includes) Device/Upnp/TestDvInvocation.cpp

TestDvSubscription: $(objdir)TestDvSubscription.$(exeext) 
$(objdir)TestDvSubscription.$(exeext) :  upnp_core $(objdir)TestDvSubscription.$(objext) $(objdir)DvZappOrgTestBasic1.$(objext) $(objdir)CpZappOrgTestBasic1.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDvSubscription.$(exeext) $(objdir)TestDvSubscription.$(objext) $(objdir)DvZappOrgTestBasic1.$(objext) $(objdir)CpZappOrgTestBasic1.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDvSubscription.$(objext) : Device/Upnp/TestDvSubscription.cpp $(headers)
	$(compiler)TestDvSubscription.$(objext) -c $(cflags) $(includes) Device/Upnp/TestDvSubscription.cpp

TestDvLights: $(objdir)TestDvLights.$(exeext) 
$(objdir)TestDvLights.$(exeext) :  upnp_core $(objdir)TestDvLights.$(objext) $(objdir)DvZappOrgTestLights1.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDvLights.$(exeext) $(objdir)TestDvLights.$(objext) $(objdir)DvZappOrgTestLights1.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDvLights.$(objext) : Device/Upnp/TestDvLights.cpp $(headers)
	$(compiler)TestDvLights.$(objext) -c $(cflags) $(includes) Device/Upnp/TestDvLights.cpp

TestDvTestBasic: $(objdir)TestDvTestBasic.$(exeext) 
$(objdir)TestDvTestBasic.$(exeext) :  upnp_core $(objdir)TestDvTestBasic.$(objext) $(objdir)DvZappOrgTestBasic1.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDvTestBasic.$(exeext) $(objdir)TestDvTestBasic.$(objext) $(objdir)DvZappOrgTestBasic1.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDvTestBasic.$(objext) : Device/Upnp/TestDvTestBasic.cpp $(headers)
	$(compiler)TestDvTestBasic.$(objext) -c $(cflags) $(includes) Device/Upnp/TestDvTestBasic.cpp

TestDeviceFinder: $(objdir)TestDeviceFinder.$(exeext) 
$(objdir)TestDeviceFinder.$(exeext) :  upnp_core $(objdir)TestDeviceFinder.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDeviceFinder.$(exeext) $(objdir)TestDeviceFinder.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDeviceFinder.$(objext) : ControlPoint/TestDeviceFinder.cpp $(headers)
	$(compiler)TestDeviceFinder.$(objext) -c $(cflags) $(includes) ControlPoint/TestDeviceFinder.cpp

TestDvDeviceStd: $(objdir)TestDvDeviceStd.$(exeext) 
$(objdir)TestDvDeviceStd.$(exeext) :  upnp_core $(objdir)TestDvDeviceStd.$(objext) $(objdir)TestBasicCpStd.$(objext) $(objdir)TestBasicDvStd.$(objext) $(objdir)DvZappOrgTestBasic1Std.$(objext) $(objdir)CpZappOrgTestBasic1Std.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDvDeviceStd.$(exeext) $(objdir)TestDvDeviceStd.$(objext) $(objdir)TestBasicCpStd.$(objext) $(objdir)TestBasicDvStd.$(objext) $(objdir)DvZappOrgTestBasic1Std.$(objext) $(objdir)CpZappOrgTestBasic1Std.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDvDeviceStd.$(objext) : Public/Cpp/Std/TestDvDeviceStd.cpp $(headers)
	$(compiler)TestDvDeviceStd.$(objext) -c $(cflags) $(includes) Public/Cpp/Std/TestDvDeviceStd.cpp
$(objdir)TestBasicCpStd.$(objext) : Public/Cpp/Std/TestBasicCp.cpp $(headers)
	$(compiler)TestBasicCpStd.$(objext) -c $(cflags) $(includes) Public/Cpp/Std/TestBasicCp.cpp
$(objdir)TestBasicDvStd.$(objext) : Public/Cpp/Std/TestBasicDv.cpp $(headers)
	$(compiler)TestBasicDvStd.$(objext) -c $(cflags) $(includes) Public/Cpp/Std/TestBasicDv.cpp

TestDvDeviceC: $(objdir)TestDvDeviceC.$(exeext) 
$(objdir)TestDvDeviceC.$(exeext) :  upnp_core $(objdir)TestDvDeviceC.$(objext) $(objdir)TestBasicCpC.$(objext) $(objdir)TestBasicDvC.$(objext) $(objdir)DvZappOrgTestBasic1C.$(objext) $(objdir)CpZappOrgTestBasic1C.$(objext) $(objdir)TestFramework.$(objext) $(objdir)MainC.$(objext)
	$(link) $(linkoutput)$(objdir)TestDvDeviceC.$(exeext) $(objdir)TestDvDeviceC.$(objext) $(objdir)TestBasicCpC.$(objext) $(objdir)TestBasicDvC.$(objext) $(objdir)DvZappOrgTestBasic1C.$(objext) $(objdir)CpZappOrgTestBasic1C.$(objext) $(objdir)TestFramework.$(objext) $(objdir)MainC.$(objext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDvDeviceC.$(objext) : Public/C/TestDvDeviceC.cpp $(headers)
	$(compiler)TestDvDeviceC.$(objext) -c $(cflags) $(includes) Public/C/TestDvDeviceC.cpp
$(objdir)TestBasicCpC.$(objext) : Public/C/TestBasicCpC.cpp $(headers)
	$(compiler)TestBasicCpC.$(objext) -c $(cflags) $(includes) Public/C/TestBasicCpC.cpp
$(objdir)TestBasicDvC.$(objext) : Public/C/TestBasicDvC.cpp $(headers)
	$(compiler)TestBasicDvC.$(objext) -c $(cflags) $(includes) Public/C/TestBasicDvC.cpp

TestCpDeviceDv: $(objdir)TestCpDeviceDv.$(exeext) 
$(objdir)TestCpDeviceDv.$(exeext) :  upnp_core $(objdir)TestCpDeviceDv.$(objext) $(objdir)DvZappOrgTestBasic1.$(objext) $(objdir)CpZappOrgTestBasic1.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestCpDeviceDv.$(exeext) $(objdir)TestCpDeviceDv.$(objext) $(objdir)DvZappOrgTestBasic1.$(objext) $(objdir)CpZappOrgTestBasic1.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestCpDeviceDv.$(objext) : ControlPoint/Dv/TestCpDeviceDv.cpp $(headers)
	$(compiler)TestCpDeviceDv.$(objext) -c $(cflags) $(includes) ControlPoint/Dv/TestCpDeviceDv.cpp

TestCpDeviceDvStd: $(objdir)TestCpDeviceDvStd.$(exeext) 
$(objdir)TestCpDeviceDvStd.$(exeext) :  upnp_core $(objdir)TestCpDeviceDvStd.$(objext) $(objdir)TestBasicCpStd.$(objext) $(objdir)TestBasicDvStd.$(objext) $(objdir)DvZappOrgTestBasic1Std.$(objext) $(objdir)CpZappOrgTestBasic1Std.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestCpDeviceDvStd.$(exeext) $(objdir)TestCpDeviceDvStd.$(objext) $(objdir)TestBasicCpStd.$(objext) $(objdir)TestBasicDvStd.$(objext) $(objdir)DvZappOrgTestBasic1Std.$(objext) $(objdir)CpZappOrgTestBasic1Std.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestCpDeviceDvStd.$(objext) : Public/Cpp/Std/TestCpDeviceDvStd.cpp $(headers)
	$(compiler)TestCpDeviceDvStd.$(objext) -c $(cflags) $(includes) Public/Cpp/Std/TestCpDeviceDvStd.cpp

TestCpDeviceDvC: $(objdir)TestCpDeviceDvC.$(exeext) 
$(objdir)TestCpDeviceDvC.$(exeext) :  upnp_core $(objdir)TestCpDeviceDvC.$(objext) $(objdir)TestBasicCpC.$(objext) $(objdir)TestBasicDvC.$(objext) $(objdir)DvZappOrgTestBasic1C.$(objext) $(objdir)DvZappOrgTestBasic1.$(objext) $(objdir)CpZappOrgTestBasic1C.$(objext) $(objdir)CpZappOrgTestBasic1.$(objext) $(objdir)TestFramework.$(objext) $(objdir)MainC.$(objext)
	$(link) $(linkoutput)$(objdir)TestCpDeviceDvC.$(exeext) $(objdir)TestCpDeviceDvC.$(objext) $(objdir)TestBasicCpC.$(objext) $(objdir)TestBasicDvC.$(objext) $(objdir)DvZappOrgTestBasic1C.$(objext) $(objdir)DvZappOrgTestBasic1.$(objext) $(objdir)CpZappOrgTestBasic1C.$(objext) $(objdir)CpZappOrgTestBasic1.$(objext) $(objdir)TestFramework.$(objext) $(objdir)MainC.$(objext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestCpDeviceDvC.$(objext) : Public/C/TestCpDeviceDvC.cpp $(headers)
	$(compiler)TestCpDeviceDvC.$(objext) -c $(cflags) $(includes) Public/C/TestCpDeviceDvC.cpp

TestDvColorLight: $(objdir)TestDvColorLight.$(exeext) 
$(objdir)TestDvColorLight.$(exeext) :  upnp_core $(objdir)TestDvColorLight.$(objext) $(objdir)DvOpenhomeOrgTestColorLight1.$(objext) TestFramework.$(libext)
	$(link) $(linkoutput)$(objdir)TestDvColorLight.$(exeext) $(objdir)TestDvColorLight.$(objext) $(objdir)DvOpenhomeOrgTestColorLight1.$(objext) $(objdir)TestFramework.$(libext) $(objdir)$(libprefix)upnp_core.$(libext)
$(objdir)TestDvColorLight.$(objext) : Public/Cpp/Core/TestDvColorLight.cpp $(headers)
	$(compiler)TestDvColorLight.$(objext) -c $(cflags) $(includes) Public/Cpp/Core/TestDvColorLight.cpp

Tests: TestBuffer TestThread TestFifo TestQueue TestMulticast TestNetwork TestEcho TestTimer TestSsdpMListen TestSsdpUListen TestDeviceList TestDeviceListStd TestDeviceListC TestInvocation TestInvocationStd TestSubscription TestProxyC TestTopology1 TestTopology2 TestTopology3 TestDviDiscovery TestDviDeviceList TestDvInvocation TestDvSubscription TestDvLights TestDvTestBasic TestDeviceFinder TestDvColorLight TestDvDeviceStd TestDvDeviceC TestCpDeviceDv TestCpDeviceDvStd TestCpDeviceDvC TestProxyCs TestDvDeviceCs TestDvLightsCs TestCpDeviceDvCs

Zapp.net.dll : $(objdir)Zapp.net.dll ZappUpnpDll

$(objdir)Zapp.net.dll: \
	$(publiccsdir)CpDevice.cs \
	$(publiccsdir)CpDeviceUpnp.cs \
	$(publiccsdir)CpProxy.cs \
	$(publiccsdir)CpService.cs \
	$(publiccsdir)Service.cs \
	$(publiccsdir)DvDevice.cs \
	$(publiccsdir)DvProvider.cs \
	$(publiccsdir)DvProviderErrors.cs \
	$(publiccsdir)DvServerUpnp.cs \
	$(publiccsdir)Zapp.cs \
	$(publiccsdir)CpDeviceDv.cs
	$(csharp) /unsafe /t:library /debug+\
		/out:$(objdir)Zapp.net.dll \
		$(publiccsdir)CpDevice.cs \
		$(publiccsdir)CpDeviceUpnp.cs \
		$(publiccsdir)CpProxy.cs \
		$(publiccsdir)CpService.cs \
		$(publiccsdir)DvDevice.cs \
		$(publiccsdir)DvProvider.cs \
		$(publiccsdir)DvProviderErrors.cs \
		$(publiccsdir)DvServerUpnp.cs \
		$(publiccsdir)Service.cs \
		$(publiccsdir)Zapp.cs \
		$(publiccsdir)CpDeviceDv.cs

TestProxyCs: $(objdir)TestProxyCs.exe

$(objdir)TestProxyCs.exe: \
	ZappUpnpDll \
	$(objdir)Zapp.net.dll \
	$(publiccsdir)TestProxy.cs \
	$(objdir)CpUpnpOrgConnectionManager1.net.dll \
	
	$(csharp) /unsafe /t:exe /debug+\
		/out:$(objdir)TestProxyCs.exe \
		/reference:$(objdir)Zapp.net.dll \
		/reference:$(objdir)CpUpnpOrgConnectionManager1.net.dll \
		$(publiccsdir)TestProxy.cs \

TestDvDeviceCs: $(objdir)TestDvDeviceCs.exe

$(objdir)TestDvDeviceCs.exe: \
	ZappUpnpDll \
	$(objdir)Zapp.net.dll \
	$(objdir)DvZappOrgTestBasic1.net.dll \
	$(objdir)CpZappOrgTestBasic1.net.dll \
	$(publiccsdir)TestBasicDv.cs \
	$(publiccsdir)TestBasicCp.cs \
	$(publiccsdir)TestDvDevice.cs
	$(csharp) \
		/d:DEBUG /debug /unsafe /platform:x86 /t:exe \
		/out:$(objdir)TestDvDeviceCs.exe \
		/reference:$(objdir)Zapp.net.dll \
		/reference:$(objdir)DvZappOrgTestBasic1.net.dll \
		/reference:$(objdir)CpZappOrgTestBasic1.net.dll \
		$(publiccsdir)TestBasicDv.cs \
		$(publiccsdir)TestBasicCp.cs \
		$(publiccsdir)TestDvDevice.cs
		
TestDvLightsCs: $(objdir)TestDvLightsCs.exe

$(objdir)TestDvLightsCs.exe: \
	ZappUpnpDll \
	$(objdir)Zapp.net.dll \
	$(objdir)DvZappOrgTestLights1.net.dll \
	$(objdir)CpZappOrgTestLights1.net.dll \
	$(publiccsdir)TestDvLights.cs
	$(csharp) \
		/d:DEBUG /debug /unsafe /platform:x86 /t:exe \
		/out:$(objdir)TestDvLightsCs.exe \
		/reference:$(objdir)Zapp.net.dll \
		/reference:$(objdir)DvZappOrgTestLights1.net.dll \
		/reference:$(objdir)CpZappOrgTestLights1.net.dll \
		$(publiccsdir)TestDvLights.cs

TestCpDeviceDvCs: $(objdir)TestCpDeviceDvCs.exe

$(objdir)TestCpDeviceDvCs.exe: \
	ZappUpnpDll \
	$(objdir)Zapp.net.dll \
	$(objdir)DvZappOrgTestBasic1.net.dll \
	$(objdir)CpZappOrgTestBasic1.net.dll \
	$(publiccsdir)TestBasicDv.cs \
	$(publiccsdir)TestBasicCp.cs \
	$(publiccsdir)TestDvDevice.cs
	$(csharp) \
		/d:DEBUG /debug /unsafe /platform:x86 /t:exe \
		/out:$(objdir)TestCpDeviceDvCs.exe \
		/reference:$(objdir)Zapp.net.dll \
		/reference:$(objdir)DvZappOrgTestBasic1.net.dll \
		/reference:$(objdir)CpZappOrgTestBasic1.net.dll \
		$(publiccsdir)TestBasicDv.cs \
		$(publiccsdir)TestBasicCp.cs \
		$(publiccsdir)TestCpDeviceDv.cs


Generated$(dirsep)GenerateSourceFiles.mak : $(tt) Service$(dirsep)Services.xml T4/Templates/UpnpMakeT4.tt
	$(mkdir) Generated
	$(t4) -o Generated$(dirsep)GenerateSourceFiles.mak T4/Templates/UpnpMakeT4.tt -a xml:Service/Services.xml
	@echo Attention: a makefile has been re-generated.

Generated$(dirsep)Proxies.mak : $(tt) Service$(dirsep)Services.xml T4/Templates/CpUpnpMakeProxies.tt
	$(mkdir) Generated
	$(t4) -o Generated$(dirsep)Proxies.mak T4/Templates/CpUpnpMakeProxies.tt -a xml:Service/Services.xml
	@echo Attention: a makefile has been re-generated.

Generated$(dirsep)Devices.mak : $(tt) Service$(dirsep)Services.xml T4/Templates/DvUpnpMakeDevices.tt
	$(mkdir) Generated
	$(t4) -o Generated$(dirsep)Devices.mak T4/Templates/DvUpnpMakeDevices.tt -a xml:Service/Services.xml
	@echo Attention: a makefile has been re-generated.
