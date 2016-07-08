// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.TestRunner.pas' rev: 28.00 (Windows)

#ifndef Dunitx_TestrunnerHPP
#define Dunitx_TestrunnerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Rtti.hpp>	// Pascal unit
#include <System.Generics.Collections.hpp>	// Pascal unit
#include <DUnitX.TestFramework.hpp>	// Pascal unit
#include <DUnitX.Extensibility.hpp>	// Pascal unit
#include <DUnitX.InternalInterfaces.hpp>	// Pascal unit
#include <DUnitX.Generics.hpp>	// Pascal unit
#include <DUnitX.WeakReference.hpp>	// Pascal unit
#include <DUnitX.Filters.hpp>	// Pascal unit
#include <DUnitX.Exceptions.hpp>	// Pascal unit
#include <System.Generics.Defaults.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Testrunner
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitXTestRunner;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDUnitXTestRunner : public Dunitx::Weakreference::TWeakReferencedObject
{
	typedef Dunitx::Weakreference::TWeakReferencedObject inherited;
	
private:
	static System::Rtti::TRttiContext FRttiContext;
	
public:
	static System::Generics::Collections::TDictionary__2<unsigned,System::DelphiInterface<Dunitx::Weakreference::IWeakReference__1<Dunitx::Testframework::_di_ITestRunner> > >* FActiveRunners;
	
private:
	System::Generics::Collections::TList__1<Dunitx::Testframework::_di_ITestLogger>* FLoggers;
	bool FUseRTTI;
	System::Generics::Collections::TDictionary__2<System::TClass,System::UnicodeString>* FFixtureClasses;
	Dunitx::Extensibility::_di_ITestFixtureList FFixtureList;
	System::Classes::TStringList* FLogMessages;
	Dunitx::Testframework::TLogMessageArray FLogMessagesEx;
	bool FFailsOnNoAsserts;
	
protected:
	void __fastcall CountAndFilterTests(const Dunitx::Extensibility::_di_ITestFixtureList fixtureList, unsigned &count, unsigned &active);
	void __fastcall Loggers_TestingStarts(const unsigned threadId, unsigned testCount, unsigned testActiveCount);
	void __fastcall Loggers_StartTestFixture(const unsigned threadId, const Dunitx::Testframework::_di_ITestFixtureInfo fixture);
	void __fastcall Loggers_SetupFixture(const unsigned threadId, const Dunitx::Testframework::_di_ITestFixtureInfo fixture);
	void __fastcall Loggers_EndSetupFixture(const unsigned threadId, const Dunitx::Testframework::_di_ITestFixtureInfo fixture);
	void __fastcall Loggers_BeginTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestInfo Test);
	void __fastcall Loggers_SetupTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestInfo Test);
	void __fastcall Loggers_EndSetupTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestInfo Test);
	void __fastcall Loggers_ExecuteTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestInfo Test);
	void __fastcall Loggers_AddSuccess(const unsigned threadId, const Dunitx::Testframework::_di_ITestResult Test);
	void __fastcall Loggers_AddError(const unsigned threadId, const Dunitx::Testframework::_di_ITestError Error);
	void __fastcall Loggers_AddFailure(const unsigned threadId, const Dunitx::Testframework::_di_ITestError Failure);
	void __fastcall Loggers_AddIgnored(const unsigned threadId, const Dunitx::Testframework::_di_ITestResult AIgnored);
	void __fastcall Loggers_AddMemoryLeak(const unsigned threadId, const Dunitx::Testframework::_di_ITestResult Test);
	void __fastcall Loggers_EndTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestResult Test);
	void __fastcall Loggers_TeardownTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestInfo Test);
	void __fastcall Loggers_TeardownFixture(const unsigned threadId, const Dunitx::Testframework::_di_ITestFixtureInfo fixture);
	void __fastcall Loggers_EndTestFixture(const unsigned threadId, const Dunitx::Testframework::_di_IFixtureResult results);
	void __fastcall Loggers_TestingEnds(const Dunitx::Testframework::_di_IRunResults RunResults);
	void __fastcall AddLogger(const Dunitx::Testframework::_di_ITestLogger value);
	Dunitx::Testframework::_di_IRunResults __fastcall Execute(void);
	void __fastcall ExecuteFixtures(const Dunitx::Testframework::_di_IFixtureResult parentFixtureResult, const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Extensibility::_di_ITestFixtureList fixtures);
	void __fastcall ExecuteSetupFixtureMethod(const unsigned threadId, const Dunitx::Extensibility::_di_ITestFixture fixture);
	bool __fastcall ExecuteTestSetupMethod(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Extensibility::_di_ITestFixture fixture, const Dunitx::Extensibility::_di_ITest test, /* out */ Dunitx::Testframework::_di_ITestResult &errorResult, const Dunitx::Testframework::_di_IMemoryLeakMonitor memoryAllocationProvider);
	void __fastcall ExecuteTests(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Extensibility::_di_ITestFixture fixture, const Dunitx::Testframework::_di_IFixtureResult fixtureResult);
	Dunitx::Testframework::_di_ITestResult __fastcall ExecuteTest(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Extensibility::_di_ITest test, const Dunitx::Testframework::_di_IMemoryLeakMonitor memoryAllocationProvider);
	Dunitx::Testframework::_di_ITestResult __fastcall ExecuteSuccessfulResult(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Extensibility::_di_ITest test, const System::UnicodeString aMessage, const Dunitx::Testframework::TLogMessageArray aLogMessages);
	Dunitx::Testframework::_di_ITestError __fastcall ExecuteFailureResult(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Extensibility::_di_ITest test, System::Sysutils::Exception* const exception, const Dunitx::Testframework::TLogMessageArray aLogMessages);
	Dunitx::Testframework::_di_ITestError __fastcall ExecuteTimedOutResult(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Extensibility::_di_ITest test, System::Sysutils::Exception* const exception, const Dunitx::Testframework::TLogMessageArray aLogMessages);
	Dunitx::Testframework::_di_ITestError __fastcall ExecuteErrorResult(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Extensibility::_di_ITest test, System::Sysutils::Exception* const exception, const Dunitx::Testframework::TLogMessageArray aLogMessages);
	Dunitx::Testframework::_di_ITestResult __fastcall ExecuteIgnoredResult(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Extensibility::_di_ITest test, const System::UnicodeString ignoreReason);
	bool __fastcall CheckMemoryAllocations(const Dunitx::Extensibility::_di_ITest test, /* out */ Dunitx::Testframework::_di_ITestResult &errorResult, const Dunitx::Testframework::_di_IMemoryLeakMonitor memoryAllocationProvider);
	bool __fastcall ExecuteTestTearDown(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Extensibility::_di_ITestFixture fixture, const Dunitx::Extensibility::_di_ITest test, /* out */ Dunitx::Testframework::_di_ITestResult &errorResult, const Dunitx::Testframework::_di_IMemoryLeakMonitor memoryAllocationProvider);
	void __fastcall ExecuteTearDownFixtureMethod(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Extensibility::_di_ITestFixture fixture);
	void __fastcall RecordResult(const Dunitx::Internalinterfaces::_di_ITestExecuteContext context, const unsigned threadId, const Dunitx::Testframework::_di_IFixtureResult fixtureResult, const Dunitx::Testframework::_di_ITestResult testResult);
	bool __fastcall GetUseRTTI(void);
	void __fastcall SetUseRTTI(const bool value);
	bool __fastcall GetFailsOnNoAsserts(void);
	void __fastcall SetFailsOnNoAsserts(const bool value);
	void __fastcall Log(const Dunitx::Testframework::TLogLevel logType, const System::UnicodeString msg)/* overload */;
	void __fastcall Log(const System::UnicodeString msg)/* overload */;
	void __fastcall Status(const System::UnicodeString msg)/* overload */;
	void __fastcall WriteLn(const System::UnicodeString msg)/* overload */;
	void __fastcall WriteLn(void)/* overload */;
	void __fastcall RTTIDiscoverFixtureClasses(void);
	System::_di_IInterface __fastcall BuildFixtures(void);
	void __fastcall AddStatus(const void *threadId, const System::UnicodeString msg);
	Dunitx::Extensibility::_di_ITestFixture __fastcall CreateFixture(System::TObject* const AInstance, const System::TClass AFixtureClass, const System::UnicodeString AName, const System::UnicodeString ACategory);
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	__fastcall TDUnitXTestRunner(void)/* overload */;
	__fastcall TDUnitXTestRunner(const Dunitx::Testframework::_di_ITestLogger AListener)/* overload */;
	__fastcall TDUnitXTestRunner(Dunitx::Testframework::_di_ITestLogger const *AListeners, const int AListeners_High)/* overload */;
	__fastcall virtual ~TDUnitXTestRunner(void);
	__classmethod Dunitx::Testframework::_di_ITestRunner __fastcall GetActiveRunner();
private:
	void *__ITestRunner;	// Dunitx::Testframework::ITestRunner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {06C0D8D2-B2D7-42F9-8D23-8F2D8A75263F}
	operator Dunitx::Testframework::_di_ITestRunner()
	{
		Dunitx::Testframework::_di_ITestRunner intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Testframework::ITestRunner*(void) { return (Dunitx::Testframework::ITestRunner*)&__ITestRunner; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Testrunner */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_TESTRUNNER)
using namespace Dunitx::Testrunner;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_TestrunnerHPP
