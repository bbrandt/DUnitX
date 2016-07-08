// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Loggers.Null.pas' rev: 28.00 (Windows)

#ifndef Dunitx_Loggers_NullHPP
#define Dunitx_Loggers_NullHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DUnitX.TestFramework.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Loggers
{
namespace Null
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitXNullLogger;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDUnitXNullLogger : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	virtual void __fastcall OnBeginTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestInfo Test);
	virtual void __fastcall OnEndSetupFixture(const unsigned threadId, const Dunitx::Testframework::_di_ITestFixtureInfo fixture);
	virtual void __fastcall OnEndSetupTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestInfo Test);
	virtual void __fastcall OnEndTearDownFixture(const unsigned threadId, const Dunitx::Testframework::_di_ITestFixtureInfo fixture);
	virtual void __fastcall OnEndTeardownTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestInfo Test);
	virtual void __fastcall OnEndTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestResult Test);
	virtual void __fastcall OnEndTestFixture(const unsigned threadId, const Dunitx::Testframework::_di_IFixtureResult results);
	virtual void __fastcall OnExecuteTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestInfo Test);
	virtual void __fastcall OnLog(const Dunitx::Testframework::TLogLevel logType, const System::UnicodeString msg);
	virtual void __fastcall OnSetupFixture(const unsigned threadId, const Dunitx::Testframework::_di_ITestFixtureInfo fixture);
	virtual void __fastcall OnSetupTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestInfo Test);
	virtual void __fastcall OnStartTestFixture(const unsigned threadId, const Dunitx::Testframework::_di_ITestFixtureInfo fixture);
	virtual void __fastcall OnTearDownFixture(const unsigned threadId, const Dunitx::Testframework::_di_ITestFixtureInfo fixture);
	virtual void __fastcall OnTeardownTest(const unsigned threadId, const Dunitx::Testframework::_di_ITestInfo Test);
	virtual void __fastcall OnTestError(const unsigned threadId, const Dunitx::Testframework::_di_ITestError Error);
	virtual void __fastcall OnTestFailure(const unsigned threadId, const Dunitx::Testframework::_di_ITestError Failure);
	virtual void __fastcall OnTestMemoryLeak(const unsigned threadId, const Dunitx::Testframework::_di_ITestResult Test);
	virtual void __fastcall OnTestIgnored(const unsigned threadId, const Dunitx::Testframework::_di_ITestResult AIgnored);
	virtual void __fastcall OnTestSuccess(const unsigned threadId, const Dunitx::Testframework::_di_ITestResult Test);
	virtual void __fastcall OnTestingEnds(const Dunitx::Testframework::_di_IRunResults RunResults);
	virtual void __fastcall OnTestingStarts(const unsigned threadId, unsigned testCount, unsigned testActiveCount);
public:
	/* TObject.Create */ inline __fastcall TDUnitXNullLogger(void) : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDUnitXNullLogger(void) { }
	
private:
	void *__ITestLogger;	// Dunitx::Testframework::ITestLogger 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {AADCA392-421C-4060-8D47-79D7CAAB0EEF}
	operator Dunitx::Testframework::_di_ITestLogger()
	{
		Dunitx::Testframework::_di_ITestLogger intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Testframework::ITestLogger*(void) { return (Dunitx::Testframework::ITestLogger*)&__ITestLogger; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Null */
}	/* namespace Loggers */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_LOGGERS_NULL)
using namespace Dunitx::Loggers::Null;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_LOGGERS)
using namespace Dunitx::Loggers;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_Loggers_NullHPP
