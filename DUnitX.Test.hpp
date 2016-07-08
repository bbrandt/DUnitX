// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Test.pas' rev: 28.00 (Windows)

#ifndef Dunitx_TestHPP
#define Dunitx_TestHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Generics.Collections.hpp>	// Pascal unit
#include <System.TimeSpan.hpp>	// Pascal unit
#include <System.Rtti.hpp>	// Pascal unit
#include <DUnitX.Types.hpp>	// Pascal unit
#include <DUnitX.Extensibility.hpp>	// Pascal unit
#include <DUnitX.InternalInterfaces.hpp>	// Pascal unit
#include <DUnitX.WeakReference.hpp>	// Pascal unit
#include <DUnitX.TestFramework.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Generics.Defaults.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Test
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitXTest;
class PASCALIMPLEMENTATION TDUnitXTest : public Dunitx::Weakreference::TWeakReferencedObject
{
	typedef Dunitx::Weakreference::TWeakReferencedObject inherited;
	
private:
	System::UnicodeString FName;
	System::UnicodeString FMethodName;
	System::Generics::Collections::TList__1<System::UnicodeString>* FCategories;
	Dunitx::Extensibility::TTestMethod FMethod;
	System::DelphiInterface<Dunitx::Weakreference::IWeakReference__1<Dunitx::Extensibility::_di_ITestFixture> > FFixture;
	System::TDateTime FStartTime;
	System::TDateTime FEndTime;
	System::Timespan::TTimeSpan FDuration;
	bool FEnabled;
	bool FIgnored;
	System::UnicodeString FIgnoreReason;
	bool FIgnoreMemoryLeaks;
	unsigned FMaxTime;
	bool FTimedOut;
	
protected:
	virtual System::UnicodeString __fastcall GetName(void);
	System::UnicodeString __fastcall GetMethodName(void);
	System::Generics::Collections::TList__1<System::UnicodeString>* __fastcall GetCategories(void);
	virtual System::UnicodeString __fastcall GetFullName(void);
	Dunitx::Extensibility::_di_ITestFixture __fastcall GetTestFixture(void);
	Dunitx::Extensibility::TTestMethod __fastcall GetTestMethod(void);
	System::TDateTime __fastcall GetTestStartTime(void);
	System::TDateTime __fastcall GetTestEndTime(void);
	System::Timespan::TTimeSpan __fastcall GetTestDuration(void);
	bool __fastcall GetIgnoreMemoryLeaks(void);
	void __fastcall SetIgnoreMemoryLeaks(const bool AValue);
	unsigned __fastcall GetMaxTime(void);
	void __fastcall SetMaxTime(const unsigned AValue);
	bool __fastcall GetTimedOut(void);
	void __fastcall SetTimedOut(const bool AValue);
	bool __fastcall GetActive(void);
	Dunitx::Testframework::_di_ITestFixtureInfo __fastcall ITestInfo_GetTestFixture(void);
	bool __fastcall GetEnabled(void);
	void __fastcall SetEnabled(const bool value);
	bool __fastcall GetIgnored(void);
	System::UnicodeString __fastcall GetIgnoreReason(void);
	void __fastcall SetResult(const Dunitx::Testframework::_di_ITestResult value);
	virtual void __fastcall Execute(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context);
	virtual void __fastcall UpdateInstance(System::TObject* const fixtureInstance);
	
public:
	__fastcall TDUnitXTest(const Dunitx::Extensibility::_di_ITestFixture AFixture, const System::UnicodeString AMethodName, const System::UnicodeString AName, const System::UnicodeString ACategory, const Dunitx::Extensibility::TTestMethod AMethod, const bool AEnabled, const bool AIgnored, const System::UnicodeString AIgnoreReason, const unsigned AMaxTime);
	__fastcall virtual ~TDUnitXTest(void);
private:
	void *__ITestExecute;	// Dunitx::Internalinterfaces::ITestExecute 
	void *__ISetTestResult;	// Dunitx::Internalinterfaces::ISetTestResult 
	void *__ITestInfo;	// Dunitx::Testframework::ITestInfo 
	void *__ITest;	// Dunitx::Extensibility::ITest 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C59443A9-8C7D-46CE-83A1-E40309A1B384}
	operator Dunitx::Internalinterfaces::_di_ITestExecute()
	{
		Dunitx::Internalinterfaces::_di_ITestExecute intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Internalinterfaces::ITestExecute*(void) { return (Dunitx::Internalinterfaces::ITestExecute*)&__ITestExecute; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B50D50E9-3609-40BF-847D-53B5BF19B5C7}
	operator Dunitx::Internalinterfaces::_di_ISetTestResult()
	{
		Dunitx::Internalinterfaces::_di_ISetTestResult intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Internalinterfaces::ISetTestResult*(void) { return (Dunitx::Internalinterfaces::ISetTestResult*)&__ISetTestResult; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FF61A6EB-A76B-4BE7-887A-598EBBAE5611}
	operator Dunitx::Testframework::_di_ITestInfo()
	{
		Dunitx::Testframework::_di_ITestInfo intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Testframework::ITestInfo*(void) { return (Dunitx::Testframework::ITestInfo*)&__ITestInfo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0CCCE0C7-9AD1-4C3A-86EF-E882D3A839AB}
	operator Dunitx::Extensibility::_di_ITest()
	{
		Dunitx::Extensibility::_di_ITest intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Extensibility::ITest*(void) { return (Dunitx::Extensibility::ITest*)&__ITest; }
	#endif
	
};


class DELPHICLASS TDUnitXTestCase;
class PASCALIMPLEMENTATION TDUnitXTestCase : public TDUnitXTest
{
	typedef TDUnitXTest inherited;
	
private:
	System::UnicodeString FCaseName;
	System::DynamicArray<System::Rtti::TValue> FArgs;
	System::Rtti::TRttiMethod* FRttiMethod;
	System::TObject* FInstance;
	
protected:
	virtual System::UnicodeString __fastcall GetName(void);
	virtual void __fastcall Execute(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context);
	virtual void __fastcall UpdateInstance(System::TObject* const fixtureInstance);
	
public:
	__fastcall TDUnitXTestCase(System::TObject* const AInstance, const Dunitx::Extensibility::_di_ITestFixture AFixture, const System::UnicodeString AMethodName, const System::UnicodeString ACaseName, const System::UnicodeString AName, const System::UnicodeString ACategory, System::Rtti::TRttiMethod* const AMethod, const bool AEnabled, const System::DynamicArray<System::Rtti::TValue> AArgs);
	__fastcall virtual ~TDUnitXTestCase(void);
private:
	void *__ITestExecute;	// Dunitx::Internalinterfaces::ITestExecute 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C59443A9-8C7D-46CE-83A1-E40309A1B384}
	operator Dunitx::Internalinterfaces::_di_ITestExecute()
	{
		Dunitx::Internalinterfaces::_di_ITestExecute intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Internalinterfaces::ITestExecute*(void) { return (Dunitx::Internalinterfaces::ITestExecute*)&__ITestExecute; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Test */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_TEST)
using namespace Dunitx::Test;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_TestHPP
