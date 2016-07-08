// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.InternalInterfaces.pas' rev: 28.00 (Windows)

#ifndef Dunitx_InternalinterfacesHPP
#define Dunitx_InternalinterfacesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.TimeSpan.hpp>	// Pascal unit
#include <DUnitX.Generics.hpp>	// Pascal unit
#include <DUnitX.Extensibility.hpp>	// Pascal unit
#include <DUnitX.TestFramework.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Internalinterfaces
{
//-- type declarations -------------------------------------------------------
__interface ISetTestResult;
typedef System::DelphiInterface<ISetTestResult> _di_ISetTestResult;
__interface  INTERFACE_UUID("{B50D50E9-3609-40BF-847D-53B5BF19B5C7}") ISetTestResult  : public System::IInterface 
{
	
public:
	virtual void __fastcall SetResult(const Dunitx::Testframework::_di_ITestResult value) = 0 ;
};

__interface ITestExecuteContext;
typedef System::DelphiInterface<ITestExecuteContext> _di_ITestExecuteContext;
__interface  INTERFACE_UUID("{DE4ADB3F-3B5B-4B90-8659-0BFA578977CC}") ITestExecuteContext  : public System::IInterface 
{
	
public:
	virtual void __fastcall RecordFixture(const Dunitx::Testframework::_di_IFixtureResult fixtureResult) = 0 ;
	virtual void __fastcall RecordResult(const Dunitx::Testframework::_di_IFixtureResult fixtureResult, const Dunitx::Testframework::_di_ITestResult testResult) = 0 ;
	virtual void __fastcall RollupResults(void) = 0 ;
};

__interface ITestFixtureContext;
typedef System::DelphiInterface<ITestFixtureContext> _di_ITestFixtureContext;
__interface  INTERFACE_UUID("{C3B85C73-1FE8-4558-8AB0-7E8075821D35}") ITestFixtureContext  : public System::IInterface 
{
	
};

__interface ITestExecute;
typedef System::DelphiInterface<ITestExecute> _di_ITestExecute;
__interface  INTERFACE_UUID("{C59443A9-8C7D-46CE-83A1-E40309A1B384}") ITestExecute  : public System::IInterface 
{
	
public:
	virtual void __fastcall Execute(const _di_ITestExecuteContext context) = 0 ;
	virtual void __fastcall UpdateInstance(System::TObject* const fixtureInstance) = 0 ;
};

__interface ITestCaseExecute;
typedef System::DelphiInterface<ITestCaseExecute> _di_ITestCaseExecute;
__interface  INTERFACE_UUID("{49781E22-C127-4BED-A9D5-84F9AAACE96C}") ITestCaseExecute  : public ITestExecute 
{
	
public:
	virtual System::UnicodeString __fastcall GetCaseName(void) = 0 ;
};

__interface IFixtureResultBuilder;
typedef System::DelphiInterface<IFixtureResultBuilder> _di_IFixtureResultBuilder;
__interface  INTERFACE_UUID("{2604E655-349D-4379-9796-1C708CAD7307}") IFixtureResultBuilder  : public System::IInterface 
{
	
public:
	virtual void __fastcall AddTestResult(const Dunitx::Testframework::_di_ITestResult AResult) = 0 ;
	virtual void __fastcall AddChild(const Dunitx::Testframework::_di_IFixtureResult AFixtureResult) = 0 ;
	virtual void __fastcall RollUpResults(void) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Internalinterfaces */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_INTERNALINTERFACES)
using namespace Dunitx::Internalinterfaces;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_InternalinterfacesHPP
