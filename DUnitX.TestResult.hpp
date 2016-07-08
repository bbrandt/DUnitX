// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.TestResult.pas' rev: 28.00 (Windows)

#ifndef Dunitx_TestresultHPP
#define Dunitx_TestresultHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.TimeSpan.hpp>	// Pascal unit
#include <DUnitX.TestFramework.hpp>	// Pascal unit
#include <DUnitX.WeakReference.hpp>	// Pascal unit
#include <DUnitX.InternalInterfaces.hpp>	// Pascal unit
#include <DUnitX.ComparableFormat.hpp>	// Pascal unit
#include <DUnitX.Exceptions.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Testresult
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitXTestResult;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDUnitXTestResult : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString FMessage;
	Dunitx::Testframework::TLogMessageArray FLogMessages;
	Dunitx::Testframework::TTestResultType FResultType;
	System::DelphiInterface<Dunitx::Weakreference::IWeakReference__1<Dunitx::Testframework::_di_ITestInfo> > FTest;
	System::UnicodeString FStackTrace;
	
protected:
	System::UnicodeString __fastcall GetMessage(void);
	Dunitx::Testframework::TLogMessageArray __fastcall GetLogMessages(void);
	bool __fastcall GetResult(void);
	Dunitx::Testframework::TTestResultType __fastcall GetResultType(void);
	Dunitx::Testframework::_di_ITestInfo __fastcall GetTest(void);
	System::TDateTime __fastcall GetStartTime(void);
	System::TDateTime __fastcall GetFinishTime(void);
	System::Timespan::TTimeSpan __fastcall GetDuration(void);
	System::UnicodeString __fastcall GetStackTrace(void);
	
public:
	__fastcall TDUnitXTestResult(const Dunitx::Testframework::_di_ITestInfo ATestInfo, const Dunitx::Testframework::TTestResultType AType, const System::UnicodeString AMessage, const Dunitx::Testframework::TLogMessageArray ALogMessages)/* overload */;
	__fastcall TDUnitXTestResult(const Dunitx::Testframework::_di_ITestInfo ATestInfo, const Dunitx::Testframework::TTestResultType AType, const System::UnicodeString AMessage)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDUnitXTestResult(void) { }
	
private:
	void *__ITestResult;	// Dunitx::Testframework::ITestResult 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EFD44ABA-4F3E-435C-B8FC-1F8EB4B35A3B}
	operator Dunitx::Testframework::_di_ITestResult()
	{
		Dunitx::Testframework::_di_ITestResult intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Testframework::ITestResult*(void) { return (Dunitx::Testframework::ITestResult*)&__ITestResult; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TDUnitXTestError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDUnitXTestError : public TDUnitXTestResult
{
	typedef TDUnitXTestResult inherited;
	
private:
	System::Sysutils::ExceptClass FExceptionClass;
	System::UnicodeString FExceptionMessage;
	void *FExceptionAddress;
	bool FIsComparable;
	System::UnicodeString FExpected;
	System::UnicodeString FActual;
	Dunitx::Comparableformat::TDUnitXComparableFormatClass FFormat;
	
protected:
	System::Sysutils::ExceptClass __fastcall GetExceptionClass(void);
	System::UnicodeString __fastcall GetExceptionLocationInfo(void);
	System::UnicodeString __fastcall GetExceptionAddressInfo(void);
	System::UnicodeString __fastcall GetExceptionMessage(void);
	void * __fastcall GetExceptionAddress(void);
	bool __fastcall GetIsComparable(void);
	System::UnicodeString __fastcall GetExpected(void);
	System::UnicodeString __fastcall GetActual(void);
	Dunitx::Comparableformat::TDUnitXComparableFormatClass __fastcall GetFormat(void);
	
public:
	__fastcall TDUnitXTestError(const Dunitx::Testframework::_di_ITestInfo ATestInfo, const Dunitx::Testframework::TTestResultType AType, System::Sysutils::Exception* const AThrownException, const void * Addrs, const System::UnicodeString AMessage, const Dunitx::Testframework::TLogMessageArray AMessageExList);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDUnitXTestError(void) { }
	
private:
	void *__ITestError;	// Dunitx::Testframework::ITestError 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {375941C6-CEFD-44E5-9646-30D7915B8A71}
	operator Dunitx::Testframework::_di_ITestError()
	{
		Dunitx::Testframework::_di_ITestError intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Testframework::ITestError*(void) { return (Dunitx::Testframework::ITestError*)&__ITestError; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Testresult */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_TESTRESULT)
using namespace Dunitx::Testresult;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_TestresultHPP
