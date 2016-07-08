// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.FixtureResult.pas' rev: 28.00 (Windows)

#ifndef Dunitx_FixtureresultHPP
#define Dunitx_FixtureresultHPP

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
#include <DUnitX.Generics.hpp>	// Pascal unit
#include <DUnitX.TestFramework.hpp>	// Pascal unit
#include <DUnitX.InternalInterfaces.hpp>	// Pascal unit
#include <System.Generics.Collections.hpp>	// Pascal unit
#include <System.Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Fixtureresult
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitXFixtureResult;
class PASCALIMPLEMENTATION TDUnitXFixtureResult : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_IFixtureResult> > FChildren;
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_ITestResult> > FTestResults;
	Dunitx::Testframework::_di_ITestFixtureInfo FFixture;
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
	System::UnicodeString FName;
	System::UnicodeString FNameSpace;
	bool FCanReduce;
	
protected:
	void __fastcall Reduce(void);
	int __fastcall GetChildCount(void);
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_IFixtureResult> > __fastcall GetChildren(void);
	int __fastcall GetErrorCount(void);
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_ITestError> > __fastcall GetErrors(void);
	int __fastcall GetFailureCount(void);
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_ITestResult> > __fastcall GetFailures(void);
	Dunitx::Testframework::_di_ITestFixtureInfo __fastcall GetFixture(void);
	bool __fastcall GetHasFailures(void);
	int __fastcall GetPassCount(void);
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_ITestResult> > __fastcall GetPasses(void);
	int __fastcall GetTestResultCount(void);
	System::DelphiInterface<Dunitx::Generics::IList__1<Dunitx::Testframework::_di_ITestResult> > __fastcall GetTestResults(void);
	int __fastcall GetIgnoredCount(void);
	System::TDateTime __fastcall GetStartTime(void);
	System::TDateTime __fastcall GetFinishTime(void);
	System::Timespan::TTimeSpan __fastcall GetDuration(void);
	System::UnicodeString __fastcall GetName(void);
	System::UnicodeString __fastcall GetNamespace(void);
	void __fastcall AddChild(const Dunitx::Testframework::_di_IFixtureResult AFixtureResult);
	void __fastcall AddTestResult(const Dunitx::Testframework::_di_ITestResult AResult);
	void __fastcall RecordTestResult(const Dunitx::Testframework::_di_ITestResult AResult);
	void __fastcall RollUpResults(void);
	
public:
	__fastcall TDUnitXFixtureResult(const Dunitx::Testframework::_di_IFixtureResult AParentResult, const Dunitx::Testframework::_di_ITestFixtureInfo AFixture);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDUnitXFixtureResult(void) { }
	
private:
	void *__IFixtureResultBuilder;	// Dunitx::Internalinterfaces::IFixtureResultBuilder 
	void *__IFixtureResult;	// Dunitx::Testframework::IFixtureResult 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {2604E655-349D-4379-9796-1C708CAD7307}
	operator Dunitx::Internalinterfaces::_di_IFixtureResultBuilder()
	{
		Dunitx::Internalinterfaces::_di_IFixtureResultBuilder intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Internalinterfaces::IFixtureResultBuilder*(void) { return (Dunitx::Internalinterfaces::IFixtureResultBuilder*)&__IFixtureResultBuilder; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7264579D-495E-4E00-A15D-751E6A65BEF6}
	operator Dunitx::Testframework::_di_IFixtureResult()
	{
		Dunitx::Testframework::_di_IFixtureResult intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Testframework::IFixtureResult*(void) { return (Dunitx::Testframework::IFixtureResult*)&__IFixtureResult; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Fixtureresult */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_FIXTURERESULT)
using namespace Dunitx::Fixtureresult;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_FixtureresultHPP
