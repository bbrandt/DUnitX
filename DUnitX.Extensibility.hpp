// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Extensibility.pas' rev: 28.00 (Windows)

#ifndef Dunitx_ExtensibilityHPP
#define Dunitx_ExtensibilityHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.TimeSpan.hpp>	// Pascal unit
#include <System.Rtti.hpp>	// Pascal unit
#include <System.Generics.Collections.hpp>	// Pascal unit
#include <DUnitX.Types.hpp>	// Pascal unit
#include <DUnitX.Generics.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Generics.Defaults.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Extensibility
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TTestMethod)(void);

__interface ITest;
typedef System::DelphiInterface<ITest> _di_ITest;
__interface ITestFixture;
typedef System::DelphiInterface<ITestFixture> _di_ITestFixture;
__interface  INTERFACE_UUID("{0CCCE0C7-9AD1-4C3A-86EF-E882D3A839AB}") ITest  : public System::IInterface 
{
	
public:
	virtual System::UnicodeString __fastcall GetName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetFullName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetMethodName(void) = 0 ;
	virtual System::Generics::Collections::TList__1<System::UnicodeString>* __fastcall GetCategories(void) = 0 ;
	virtual TTestMethod __fastcall GetTestMethod(void) = 0 ;
	virtual _di_ITestFixture __fastcall GetTestFixture(void) = 0 ;
	virtual System::TDateTime __fastcall GetTestStartTime(void) = 0 ;
	virtual System::TDateTime __fastcall GetTestEndTime(void) = 0 ;
	virtual System::Timespan::TTimeSpan __fastcall GetTestDuration(void) = 0 ;
	virtual bool __fastcall GetEnabled(void) = 0 ;
	virtual void __fastcall SetEnabled(const bool value) = 0 ;
	virtual bool __fastcall GetIgnored(void) = 0 ;
	virtual System::UnicodeString __fastcall GetIgnoreReason(void) = 0 ;
	virtual bool __fastcall GetIgnoreMemoryLeaks(void) = 0 ;
	virtual void __fastcall SetIgnoreMemoryLeaks(const bool AValue) = 0 ;
	virtual unsigned __fastcall GetMaxTime(void) = 0 ;
	virtual void __fastcall SetMaxTime(const unsigned AValue) = 0 ;
	virtual bool __fastcall GetTimedOut(void) = 0 ;
	virtual void __fastcall SetTimedOut(const bool AValue) = 0 ;
	__property System::UnicodeString Name = {read=GetName};
	__property System::UnicodeString FullName = {read=GetFullName};
	__property System::UnicodeString MethodName = {read=GetMethodName};
	__property System::Generics::Collections::TList__1<System::UnicodeString>* Categories = {read=GetCategories};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled};
	__property _di_ITestFixture Fixture = {read=GetTestFixture};
	__property bool Ignored = {read=GetIgnored};
	__property System::UnicodeString IgnoreReason = {read=GetIgnoreReason};
	__property TTestMethod TestMethod = {read=GetTestMethod};
	__property bool IgnoreMemoryLeaks = {read=GetIgnoreMemoryLeaks, write=SetIgnoreMemoryLeaks};
	__property unsigned MaxTime = {read=GetMaxTime, write=SetMaxTime};
	__property bool TimedOut = {read=GetTimedOut, write=SetTimedOut};
};

__interface ITestList;
typedef System::DelphiInterface<ITestList> _di_ITestList;
__interface  INTERFACE_UUID("{83ABC05F-5762-4FD2-9791-E32F5A9A4D06}") ITestList  : public Dunitx::Generics::IList__1<_di_ITest> 
{
	
};

__interface ITestFixtureList;
typedef System::DelphiInterface<ITestFixtureList> _di_ITestFixtureList;
__interface  INTERFACE_UUID("{B2F140C3-1D6A-4C09-B4C6-0D6AFC99BC87}") ITestFixture  : public System::IInterface 
{
	
public:
	virtual System::UnicodeString __fastcall GetName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetFullName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetUnitName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetDescription(void) = 0 ;
	virtual System::Generics::Collections::TList__1<System::UnicodeString>* __fastcall GetCategories(void) = 0 ;
	virtual _di_ITestList __fastcall GetTests(void) = 0 ;
	virtual System::TClass __fastcall GetTestClass(void) = 0 ;
	virtual TTestMethod __fastcall GetSetupMethod(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSetupMethodName(void) = 0 ;
	virtual TTestMethod __fastcall GetSetupFixtureMethod(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSetupFixtureMethodName(void) = 0 ;
	virtual TTestMethod __fastcall GetTearDownMethod(void) = 0 ;
	virtual System::UnicodeString __fastcall GetTearDownMethodName(void) = 0 ;
	virtual TTestMethod __fastcall GetTearDownFixtureMethod(void) = 0 ;
	virtual System::UnicodeString __fastcall GetTearDownFixtureMethodName(void) = 0 ;
	virtual bool __fastcall GetTestInOwnThread(void) = 0 ;
	virtual bool __fastcall GetEnabled(void) = 0 ;
	virtual void __fastcall SetEnabled(const bool value) = 0 ;
	virtual _di_ITestFixtureList __fastcall GetChildren(void) = 0 ;
	virtual bool __fastcall GetHasChildren(void) = 0 ;
	virtual System::UnicodeString __fastcall GetNameSpace(void) = 0 ;
	virtual bool __fastcall GetHasTests(void) = 0 ;
	virtual bool __fastcall GetHasChildTests(void) = 0 ;
	virtual bool __fastcall IsNameSpaceOnly(void) = 0 ;
	virtual void __fastcall OnMethodExecuted(const TTestMethod AMethod) = 0 ;
	virtual System::TObject* __fastcall GetFixtureInstance(void) = 0 ;
	virtual _di_ITest __fastcall AddTest(const System::UnicodeString AMethodName, const TTestMethod AMethod, const System::UnicodeString AName, const System::UnicodeString ACategory, const bool AEnabled = true, const bool AIgnored = false, const System::UnicodeString AIgnoreReason = System::UnicodeString(), const unsigned AMaxTime = (unsigned)(0x0)) = 0 ;
	virtual _di_ITest __fastcall AddTestCase(const System::UnicodeString AMethodName, const System::UnicodeString ACaseName, const System::UnicodeString AName, const System::UnicodeString ACategory, System::Rtti::TRttiMethod* const AMethod, const bool AEnabled, const System::DynamicArray<System::Rtti::TValue> AArgs) = 0 ;
	virtual _di_ITestFixture __fastcall AddChildFixture(const System::TClass ATestClass, const System::UnicodeString AName, const System::UnicodeString ACategory) = 0 /* overload */;
	virtual _di_ITestFixture __fastcall AddChildFixture(System::TObject* const AInstance, const System::UnicodeString AName, const System::UnicodeString ACategory) = 0 /* overload */;
	virtual void __fastcall SetSetupTestMethod(const System::UnicodeString AMethodName, const TTestMethod AMethod) = 0 ;
	virtual void __fastcall SetSetupFixtureMethod(const System::UnicodeString AMethodName, const TTestMethod AMethod) = 0 ;
	virtual void __fastcall SetTearDownTestMethod(const System::UnicodeString AMethodName, const TTestMethod AMethod) = 0 ;
	virtual void __fastcall SetTearDownFixtureMethod(const System::UnicodeString AMethodName, const TTestMethod AMethod, const bool AIsDestructor) = 0 ;
	virtual void __fastcall SetTestInOwnThread(const bool value) = 0 ;
	virtual void __fastcall ExecuteFixtureTearDown(void) = 0 ;
	virtual void __fastcall InitFixtureInstance(void) = 0 ;
	__property System::UnicodeString Name = {read=GetName};
	__property System::UnicodeString NameSpace = {read=GetNameSpace};
	__property System::UnicodeString FullName = {read=GetFullName};
	__property System::UnicodeString UnitName = {read=GetUnitName};
	__property System::Generics::Collections::TList__1<System::UnicodeString>* Categories = {read=GetCategories};
	__property _di_ITestFixtureList Children = {read=GetChildren};
	__property System::UnicodeString Description = {read=GetDescription};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled};
	__property System::TObject* FixtureInstance = {read=GetFixtureInstance};
	__property bool HasChildFixtures = {read=GetHasChildren};
	__property bool HasTests = {read=GetHasTests};
	__property bool HasChildTests = {read=GetHasChildTests};
	__property System::TClass TestClass = {read=GetTestClass};
	__property _di_ITestList Tests = {read=GetTests};
	__property TTestMethod SetupMethod = {read=GetSetupMethod};
	__property System::UnicodeString SetupMethodName = {read=GetSetupMethodName};
	__property TTestMethod SetupFixtureMethod = {read=GetSetupFixtureMethod};
	__property System::UnicodeString SetupFixtureMethodName = {read=GetSetupFixtureMethodName};
	__property TTestMethod TearDownMethod = {read=GetTearDownMethod};
	__property System::UnicodeString TearDownMethodName = {read=GetTearDownMethodName};
	__property TTestMethod TearDownFixtureMethod = {read=GetTearDownFixtureMethod};
	__property System::UnicodeString TearDownFixtureMethodName = {read=GetTearDownFixtureMethodName};
	__property bool TestInOwnThread = {read=GetTestInOwnThread, write=SetTestInOwnThread};
};

__interface  INTERFACE_UUID("{BB78BD03-4818-4CF4-B40C-AD037DF2EFB9}") ITestFixtureList  : public Dunitx::Generics::IList__1<_di_ITestFixture> 
{
	
};

class DELPHICLASS TTestList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTestList : public Dunitx::Generics::TDUnitXList__1<_di_ITest>
{
	typedef Dunitx::Generics::TDUnitXList__1<_di_ITest> inherited;
	
public:
	/* {DUnitX_Generics}TDUnitXList<DUnitX_Extensibility_ITest>.Create */ inline __fastcall TTestList(void)/* overload */ : Dunitx::Generics::TDUnitXList__1<_di_ITest>() { }
	/* {DUnitX_Generics}TDUnitXList<DUnitX_Extensibility_ITest>.Create */ inline __fastcall TTestList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<_di_ITest> > AComparer)/* overload */ : Dunitx::Generics::TDUnitXList__1<_di_ITest>(AComparer) { }
	/* {DUnitX_Generics}TDUnitXList<DUnitX_Extensibility_ITest>.Create */ inline __fastcall TTestList(System::Generics::Collections::TEnumerable__1<_di_ITest>* Collection)/* overload */ : Dunitx::Generics::TDUnitXList__1<_di_ITest>(Collection) { }
	/* {DUnitX_Generics}TDUnitXList<DUnitX_Extensibility_ITest>.Destroy */ inline __fastcall virtual ~TTestList(void) { }
	
private:
	void *__ITestList;	// ITestList 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {83ABC05F-5762-4FD2-9791-E32F5A9A4D06}
	operator _di_ITestList()
	{
		_di_ITestList intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ITestList*(void) { return (ITestList*)&__ITestList; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TTestFixtureList;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTestFixtureList : public Dunitx::Generics::TDUnitXList__1<_di_ITestFixture>
{
	typedef Dunitx::Generics::TDUnitXList__1<_di_ITestFixture> inherited;
	
public:
	/* {DUnitX_Generics}TDUnitXList<DUnitX_Extensibility_ITestFixture>.Create */ inline __fastcall TTestFixtureList(void)/* overload */ : Dunitx::Generics::TDUnitXList__1<_di_ITestFixture>() { }
	/* {DUnitX_Generics}TDUnitXList<DUnitX_Extensibility_ITestFixture>.Create */ inline __fastcall TTestFixtureList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<_di_ITestFixture> > AComparer)/* overload */ : Dunitx::Generics::TDUnitXList__1<_di_ITestFixture>(AComparer) { }
	/* {DUnitX_Generics}TDUnitXList<DUnitX_Extensibility_ITestFixture>.Create */ inline __fastcall TTestFixtureList(System::Generics::Collections::TEnumerable__1<_di_ITestFixture>* Collection)/* overload */ : Dunitx::Generics::TDUnitXList__1<_di_ITestFixture>(Collection) { }
	/* {DUnitX_Generics}TDUnitXList<DUnitX_Extensibility_ITestFixture>.Destroy */ inline __fastcall virtual ~TTestFixtureList(void) { }
	
private:
	void *__ITestFixtureList;	// ITestFixtureList 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BB78BD03-4818-4CF4-B40C-AD037DF2EFB9}
	operator _di_ITestFixtureList()
	{
		_di_ITestFixtureList intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ITestFixtureList*(void) { return (ITestFixtureList*)&__ITestFixtureList; }
	#endif
	
};

#pragma pack(pop)

__interface IFixtureProviderContext;
typedef System::DelphiInterface<IFixtureProviderContext> _di_IFixtureProviderContext;
__interface  INTERFACE_UUID("{933F8442-77F1-4574-BB5E-2F3D0B8E6E6F}") IFixtureProviderContext  : public System::IInterface 
{
	
public:
	virtual _di_ITestFixture __fastcall CreateFixture(const System::TClass AFixtureClass, const System::UnicodeString AName, const System::UnicodeString ACategory) = 0 /* overload */;
	virtual _di_ITestFixture __fastcall CreateFixture(System::TObject* const AInstance, const System::UnicodeString AName, const System::UnicodeString ACategory) = 0 /* overload */;
	virtual bool __fastcall GetUseRtti(void) = 0 ;
	__property bool UseRtti = {read=GetUseRtti};
};

__interface IFixtureProvider;
typedef System::DelphiInterface<IFixtureProvider> _di_IFixtureProvider;
__interface  INTERFACE_UUID("{48D58C88-1236-4B96-9D5F-5DD81DB71504}") IFixtureProvider  : public System::IInterface 
{
	
public:
	virtual void __fastcall Execute(const _di_IFixtureProviderContext context) = 0 ;
};

__interface IPluginLoadContext;
typedef System::DelphiInterface<IPluginLoadContext> _di_IPluginLoadContext;
__interface  INTERFACE_UUID("{0A60FE65-C3E3-4E98-9686-8BB6A793810B}") IPluginLoadContext  : public System::IInterface 
{
	
public:
	virtual void __fastcall RegisterFixtureProvider(const _di_IFixtureProvider provider) = 0 ;
};

__interface IPlugin;
typedef System::DelphiInterface<IPlugin> _di_IPlugin;
__interface  INTERFACE_UUID("{C706DD67-58D0-4B66-92A6-6FBE2AF065A4}") IPlugin  : public System::IInterface 
{
	
public:
	virtual void __fastcall GetPluginFeatures(const _di_IPluginLoadContext context) = 0 ;
};

__interface IFixtureFilter;
typedef System::DelphiInterface<IFixtureFilter> _di_IFixtureFilter;
__interface  INTERFACE_UUID("{0FBC270E-2DC0-4135-8724-C2AD567A009A}") IFixtureFilter  : public System::IInterface 
{
	
public:
	virtual void __fastcall InitFromOptions(const System::UnicodeString ARun, const System::UnicodeString AInclude, const System::UnicodeString AExclude) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Extensibility */
}	/* namespace Dunitx */
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
#endif	// Dunitx_ExtensibilityHPP
