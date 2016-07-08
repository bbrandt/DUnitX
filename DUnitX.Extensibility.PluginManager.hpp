// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Extensibility.PluginManager.pas' rev: 28.00 (Windows)

#ifndef Dunitx_Extensibility_PluginmanagerHPP
#define Dunitx_Extensibility_PluginmanagerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DUnitX.Generics.hpp>	// Pascal unit
#include <DUnitX.Extensibility.hpp>	// Pascal unit
#include <System.Generics.Collections.hpp>	// Pascal unit
#include <System.Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Extensibility
{
namespace Pluginmanager
{
//-- type declarations -------------------------------------------------------
__interface IPluginManager;
typedef System::DelphiInterface<IPluginManager> _di_IPluginManager;
__interface  INTERFACE_UUID("{0AD83588-CF0F-4185-B5F8-093893150BB3}") IPluginManager  : public System::IInterface 
{
	
public:
	virtual void __fastcall Init(void) = 0 ;
	virtual void __fastcall CreateFixtures(void) = 0 ;
};

typedef Dunitx::Extensibility::_di_ITestFixture __fastcall (__closure *TCreateFixtureProc)(System::TObject* const AInstance, const System::TClass AFixtureClass, const System::UnicodeString AName, const System::UnicodeString ACategory);

class DELPHICLASS TPluginManager;
class PASCALIMPLEMENTATION TPluginManager : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Extensibility::_di_IFixtureProvider> > FFixtureProviders;
	TCreateFixtureProc FCreateFixtureProc;
	bool FUseRtti;
	
protected:
	void __fastcall Init(void);
	void __fastcall CreateFixtures(void);
	void __fastcall RegisterFixtureProvider(const Dunitx::Extensibility::_di_IFixtureProvider provider);
	Dunitx::Extensibility::_di_ITestFixture __fastcall CreateFixture(const System::TClass AFixtureClass, const System::UnicodeString AName, const System::UnicodeString ACategory)/* overload */;
	Dunitx::Extensibility::_di_ITestFixture __fastcall CreateFixture(System::TObject* const AInstance, const System::UnicodeString AName, const System::UnicodeString ACategory)/* overload */;
	bool __fastcall GetUseRtti(void);
	
public:
	__fastcall TPluginManager(const TCreateFixtureProc ACreateFixtureProc, const bool AUseRtti);
	__fastcall virtual ~TPluginManager(void);
private:
	void *__IFixtureProviderContext;	// Dunitx::Extensibility::IFixtureProviderContext 
	void *__IPluginLoadContext;	// Dunitx::Extensibility::IPluginLoadContext 
	void *__IPluginManager;	// IPluginManager 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {933F8442-77F1-4574-BB5E-2F3D0B8E6E6F}
	operator Dunitx::Extensibility::_di_IFixtureProviderContext()
	{
		Dunitx::Extensibility::_di_IFixtureProviderContext intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Extensibility::IFixtureProviderContext*(void) { return (Dunitx::Extensibility::IFixtureProviderContext*)&__IFixtureProviderContext; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0A60FE65-C3E3-4E98-9686-8BB6A793810B}
	operator Dunitx::Extensibility::_di_IPluginLoadContext()
	{
		Dunitx::Extensibility::_di_IPluginLoadContext intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Extensibility::IPluginLoadContext*(void) { return (Dunitx::Extensibility::IPluginLoadContext*)&__IPluginLoadContext; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0AD83588-CF0F-4185-B5F8-093893150BB3}
	operator _di_IPluginManager()
	{
		_di_IPluginManager intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IPluginManager*(void) { return (IPluginManager*)&__IPluginManager; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Pluginmanager */
}	/* namespace Extensibility */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_EXTENSIBILITY_PLUGINMANAGER)
using namespace Dunitx::Extensibility::Pluginmanager;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_EXTENSIBILITY)
using namespace Dunitx::Extensibility;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_Extensibility_PluginmanagerHPP
