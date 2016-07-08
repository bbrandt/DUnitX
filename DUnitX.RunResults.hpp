// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.RunResults.pas' rev: 28.00 (Windows)

#ifndef Dunitx_RunresultsHPP
#define Dunitx_RunresultsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.TimeSpan.hpp>	// Pascal unit
#include <System.Diagnostics.hpp>	// Pascal unit
#include <System.Generics.Collections.hpp>	// Pascal unit
#include <DUnitX.TestFramework.hpp>	// Pascal unit
#include <DUnitX.InternalInterfaces.hpp>	// Pascal unit
#include <DUnitX.Generics.hpp>	// Pascal unit
#include <System.Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Runresults
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitXRunResults;
class PASCALIMPLEMENTATION TDUnitXRunResults : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_ITestFixtureInfo> > FFixtures;
	bool FAllPassed;
	int FErrorCount;
	int FFailureCount;
	int FPassCount;
	int FIgnoredCount;
	int FMemoryLeakCount;
	int FTotalCount;
	System::Diagnostics::TStopwatch FStopWatch;
	System::TDateTime FStartTime;
	System::TDateTime FFinishTime;
	System::Timespan::TTimeSpan FDuration;
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_IFixtureResult> > FFixtureResults;
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_ITestResult> > FAllTestResults;
	
protected:
	int __fastcall GetFixtureCount(void);
	bool __fastcall GetAllPassed(void);
	int __fastcall GetTestCount(void);
	int __fastcall GetErrorCount(void);
	int __fastcall GetFailureCount(void);
	int __fastcall GetMemoryLeakCount(void);
	System::DelphiInterface<System::IEnumerable__1<Dunitx::Testframework::_di_ITestFixtureInfo> > __fastcall GetFixtures(void);
	System::DelphiInterface<System::IEnumerable__1<Dunitx::Testframework::_di_IFixtureResult> > __fastcall GetFixtureResults(void);
	System::DelphiInterface<System::IEnumerable__1<Dunitx::Testframework::_di_ITestResult> > __fastcall GetAllTestResults(void);
	int __fastcall GetPassCount(void);
	int __fastcall GetIgnoredCount(void);
	int __fastcall GetSuccessRate(void);
	System::TDateTime __fastcall GetStartTime(void);
	System::TDateTime __fastcall GetFinishTime(void);
	System::Timespan::TTimeSpan __fastcall GetDuration(void);
	void __fastcall RecordFixture(const Dunitx::Testframework::_di_IFixtureResult fixtureResult);
	void __fastcall RecordResult(const Dunitx::Testframework::_di_IFixtureResult fixtureResult, const Dunitx::Testframework::_di_ITestResult testResult);
	void __fastcall RollupResults(void);
	
public:
	__fastcall TDUnitXRunResults(void);
	__fastcall virtual ~TDUnitXRunResults(void);
	virtual System::UnicodeString __fastcall ToString(void);
private:
	void *__ITestExecuteContext;	// Dunitx::Internalinterfaces::ITestExecuteContext 
	void *__IRunResults;	// Dunitx::Testframework::IRunResults 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DE4ADB3F-3B5B-4B90-8659-0BFA578977CC}
	operator Dunitx::Internalinterfaces::_di_ITestExecuteContext()
	{
		Dunitx::Internalinterfaces::_di_ITestExecuteContext intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Internalinterfaces::ITestExecuteContext*(void) { return (Dunitx::Internalinterfaces::ITestExecuteContext*)&__ITestExecuteContext; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4A335B76-33E3-48FD-87DF-9462428C60DA}
	operator Dunitx::Testframework::_di_IRunResults()
	{
		Dunitx::Testframework::_di_IRunResults intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Testframework::IRunResults*(void) { return (Dunitx::Testframework::IRunResults*)&__IRunResults; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Runresults */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_RUNRESULTS)
using namespace Dunitx::Runresults;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_RunresultsHPP
