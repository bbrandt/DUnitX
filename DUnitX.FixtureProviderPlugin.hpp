// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.FixtureProviderPlugin.pas' rev: 28.00 (Windows)

#ifndef Dunitx_FixtureproviderpluginHPP
#define Dunitx_FixtureproviderpluginHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Rtti.hpp>	// Pascal unit
#include <System.Generics.Collections.hpp>	// Pascal unit
#include <DUnitX.Extensibility.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Fixtureproviderplugin
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitXFixtureProviderPlugin;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDUnitXFixtureProviderPlugin : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	void __fastcall GetPluginFeatures(const Dunitx::Extensibility::_di_IPluginLoadContext context);
public:
	/* TObject.Create */ inline __fastcall TDUnitXFixtureProviderPlugin(void) : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDUnitXFixtureProviderPlugin(void) { }
	
private:
	void *__IPlugin;	// Dunitx::Extensibility::IPlugin 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C706DD67-58D0-4B66-92A6-6FBE2AF065A4}
	operator Dunitx::Extensibility::_di_IPlugin()
	{
		Dunitx::Extensibility::_di_IPlugin intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Extensibility::IPlugin*(void) { return (Dunitx::Extensibility::IPlugin*)&__IPlugin; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TDUnitXFixtureProvider;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDUnitXFixtureProvider : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	static System::Rtti::TRttiContext FRttiContext;
	System::Generics::Collections::TDictionary__2<System::TClass,System::UnicodeString>* FFixtureClasses;
	
protected:
	System::UnicodeString __fastcall FormatTestName(const System::UnicodeString AName, const int ATimes, const int ACount);
	template<typename T> bool __fastcall TryGetAttributeOfType(const System::DynamicArray<System::TCustomAttribute*> attributes, T &attribute);
	void __fastcall RTTIDiscoverFixtureClasses(const Dunitx::Extensibility::_di_IFixtureProviderContext context);
	void __fastcall GenerateTests(const Dunitx::Extensibility::_di_IFixtureProviderContext context, const Dunitx::Extensibility::_di_ITestFixture fixture);
	void __fastcall Execute(const Dunitx::Extensibility::_di_IFixtureProviderContext context);
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	__fastcall TDUnitXFixtureProvider(void);
	__fastcall virtual ~TDUnitXFixtureProvider(void);
private:
	void *__IFixtureProvider;	// Dunitx::Extensibility::IFixtureProvider 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {48D58C88-1236-4B96-9D5F-5DD81DB71504}
	operator Dunitx::Extensibility::_di_IFixtureProvider()
	{
		Dunitx::Extensibility::_di_IFixtureProvider intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Extensibility::IFixtureProvider*(void) { return (Dunitx::Extensibility::IFixtureProvider*)&__IFixtureProvider; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Fixtureproviderplugin */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_FIXTUREPROVIDERPLUGIN)
using namespace Dunitx::Fixtureproviderplugin;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_FixtureproviderpluginHPP
