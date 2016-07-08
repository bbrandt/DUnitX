// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.TestFixture.pas' rev: 28.00 (Windows)

#ifndef Dunitx_TestfixtureHPP
#define Dunitx_TestfixtureHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Generics.Collections.hpp>	// Pascal unit
#include <System.Rtti.hpp>	// Pascal unit
#include <DUnitX.Types.hpp>	// Pascal unit
#include <DUnitX.Attributes.hpp>	// Pascal unit
#include <DUnitX.TestFramework.hpp>	// Pascal unit
#include <DUnitX.Extensibility.hpp>	// Pascal unit
#include <DUnitX.InternalInterfaces.hpp>	// Pascal unit
#include <DUnitX.WeakReference.hpp>	// Pascal unit
#include <DUnitX.Generics.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Generics.Defaults.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Testfixture
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitXTestFixture;
class PASCALIMPLEMENTATION TDUnitXTestFixture : public Dunitx::Weakreference::TWeakReferencedObject
{
	typedef Dunitx::Weakreference::TWeakReferencedObject inherited;
	
private:
	static System::Rtti::TRttiContext FRttiContext;
	System::Rtti::TRttiType* FFixtureType;
	System::TClass FTestClass;
	System::UnicodeString FUnitName;
	System::UnicodeString FName;
	System::UnicodeString FNameSpace;
	System::UnicodeString FDescription;
	System::Generics::Collections::TList__1<System::UnicodeString>* FCategories;
	bool FEnabled;
	Dunitx::Extensibility::_di_ITestList FTests;
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_ITestInfo> > FTestInfos;
	Dunitx::Extensibility::TTestMethod FSetupMethod;
	Dunitx::Extensibility::TTestMethod FSetupFixtureMethod;
	Dunitx::Extensibility::TTestMethod FTearDownMethod;
	Dunitx::Extensibility::TTestMethod FTearDownFixtureMethod;
	System::TObject* FFixtureInstance;
	bool FTestInOwnThread;
	System::UnicodeString FSetupFixtureMethodName;
	System::UnicodeString FSetupMethodName;
	System::UnicodeString FTearDownMethodName;
	System::UnicodeString FTearDownFixtureMethodName;
	Dunitx::Extensibility::_di_ITestFixtureList FChildren;
	bool FTearDownFixtureIsDestructor;
	bool FIgnoreMemoryLeaks;
	bool FIgnoreFixtureSetup;
	
protected:
	Dunitx::Extensibility::_di_ITest __fastcall CreateTestFromTestCase(const Dunitx::Attributes::TestCaseInfo &ACaseInfo, const System::UnicodeString ACategory, System::Rtti::TRttiMethod* const AMethod, const bool ATestEnabled);
	Dunitx::Extensibility::_di_ITest __fastcall CreateTestFromMethod(System::Rtti::TRttiMethod* const AMethod, const System::UnicodeString ACategory, const bool ATestEnabled, const bool AIgnored, const System::UnicodeString AIgnoredReason);
	bool __fastcall GetIgnoreMemoryLeaksForMethod(System::Rtti::TRttiMethod* AMethod);
	bool __fastcall GetEnabled(void);
	void __fastcall SetEnabled(const bool value);
	System::UnicodeString __fastcall GetName(void);
	System::UnicodeString __fastcall GetNameSpace(void);
	System::UnicodeString __fastcall GetFullName(void);
	System::UnicodeString __fastcall GetUnitName(void);
	System::UnicodeString __fastcall GetDescription(void);
	System::Generics::Collections::TList__1<System::UnicodeString>* __fastcall GetCategories(void);
	Dunitx::Extensibility::_di_ITestList __fastcall GetTests(void);
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_ITestInfo> > __fastcall ITestFixtureInfo_GetTests(void);
	System::TClass __fastcall GetTestClass(void);
	Dunitx::Extensibility::TTestMethod __fastcall GetSetupMethod(void);
	Dunitx::Extensibility::TTestMethod __fastcall GetSetupFixtureMethod(void);
	Dunitx::Extensibility::TTestMethod __fastcall GetTearDownMethod(void);
	Dunitx::Extensibility::TTestMethod __fastcall GetTearDownFixtureMethod(void);
	bool __fastcall GetTestInOwnThread(void);
	System::UnicodeString __fastcall GetSetupFixtureMethodName(void);
	System::UnicodeString __fastcall GetSetupMethodName(void);
	System::UnicodeString __fastcall GetTearDownMethodName(void);
	System::UnicodeString __fastcall GetTearDownFixtureMethodName(void);
	System::TObject* __fastcall GetFixtureInstance(void);
	unsigned __fastcall GetTestCount(void);
	unsigned __fastcall GetActiveTestCount(void);
	Dunitx::Extensibility::_di_ITestFixtureList __fastcall GetChildren(void);
	bool __fastcall GetHasChildren(void);
	bool __fastcall GetHasTests(void);
	bool __fastcall GetHasChildTests(void);
	bool __fastcall IsNameSpaceOnly(void);
	void __fastcall OnMethodExecuted(const Dunitx::Extensibility::TTestMethod AMethod);
	void __fastcall ExecuteFixtureTearDown(void);
	void __fastcall InitFixtureInstance(void);
	void __fastcall InternalInitFixtureInstance(const bool isConstructing);
	Dunitx::Extensibility::_di_ITest __fastcall AddTest(const System::UnicodeString AMethodName, const Dunitx::Extensibility::TTestMethod AMethod, const System::UnicodeString AName, const System::UnicodeString ACategory, const bool AEnabled = true, const bool AIgnored = false, const System::UnicodeString AIgnoreReason = System::UnicodeString(), const unsigned AMaxTime = (unsigned)(0x0));
	Dunitx::Extensibility::_di_ITest __fastcall AddTestCase(const System::UnicodeString AMethodName, const System::UnicodeString ACaseName, const System::UnicodeString AName, const System::UnicodeString ACategory, System::Rtti::TRttiMethod* const AMethod, const bool AEnabled, const System::DynamicArray<System::Rtti::TValue> AArgs);
	Dunitx::Extensibility::_di_ITestFixture __fastcall AddChildFixture(const System::TClass ATestClass, const System::UnicodeString AName, const System::UnicodeString ACategory)/* overload */;
	Dunitx::Extensibility::_di_ITestFixture __fastcall AddChildFixture(System::TObject* const AInstance, const System::UnicodeString AName, const System::UnicodeString ACategory)/* overload */;
	void __fastcall SetSetupTestMethod(const System::UnicodeString AMethodName, const Dunitx::Extensibility::TTestMethod AMethod);
	void __fastcall SetSetupFixtureMethod(const System::UnicodeString AMethodName, const Dunitx::Extensibility::TTestMethod AMethod);
	void __fastcall SetTearDownTestMethod(const System::UnicodeString AMethodName, const Dunitx::Extensibility::TTestMethod AMethod);
	void __fastcall SetTearDownFixtureMethod(const System::UnicodeString AMethodName, const Dunitx::Extensibility::TTestMethod AMethod, const bool AIsDestructor);
	void __fastcall SetTestInOwnThread(const bool value);
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	__fastcall TDUnitXTestFixture(const System::UnicodeString AName, const System::UnicodeString ACategory, System::TObject* const AInstance, const System::UnicodeString AUnitName)/* overload */;
	__fastcall TDUnitXTestFixture(const System::UnicodeString AName, const System::UnicodeString ACategory, const System::TClass AClass, const System::UnicodeString AUnitName)/* overload */;
	__fastcall virtual ~TDUnitXTestFixture(void);
private:
	void *__ITestFixtureInfo;	// Dunitx::Testframework::ITestFixtureInfo 
	void *__ITestFixture;	// Dunitx::Extensibility::ITestFixture 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9E98B1E8-583A-49FC-B409-9B6937E22E81}
	operator Dunitx::Testframework::_di_ITestFixtureInfo()
	{
		Dunitx::Testframework::_di_ITestFixtureInfo intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Testframework::ITestFixtureInfo*(void) { return (Dunitx::Testframework::ITestFixtureInfo*)&__ITestFixtureInfo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B2F140C3-1D6A-4C09-B4C6-0D6AFC99BC87}
	operator Dunitx::Extensibility::_di_ITestFixture()
	{
		Dunitx::Extensibility::_di_ITestFixture intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Extensibility::ITestFixture*(void) { return (Dunitx::Extensibility::ITestFixture*)&__ITestFixture; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Testfixture */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_TESTFIXTURE)
using namespace Dunitx::Testfixture;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_TestfixtureHPP
