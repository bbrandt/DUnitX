// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.MemoryLeakMonitor.Default.pas' rev: 28.00 (Windows)

#ifndef Dunitx_Memoryleakmonitor_DefaultHPP
#define Dunitx_Memoryleakmonitor_DefaultHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <DUnitX.TestFramework.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Memoryleakmonitor
{
namespace Default
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitXDefaultMemoryLeakMonitor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDUnitXDefaultMemoryLeakMonitor : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	void __fastcall PreSetup(void);
	void __fastcall PostSetUp(void);
	void __fastcall PreTest(void);
	void __fastcall PostTest(void);
	void __fastcall PreTearDown(void);
	void __fastcall PostTearDown(void);
	__int64 __fastcall SetUpMemoryAllocated(void);
	__int64 __fastcall TearDownMemoryAllocated(void);
	__int64 __fastcall TestMemoryAllocated(void);
public:
	/* TObject.Create */ inline __fastcall TDUnitXDefaultMemoryLeakMonitor(void) : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDUnitXDefaultMemoryLeakMonitor(void) { }
	
private:
	void *__IMemoryLeakMonitor;	// Dunitx::Testframework::IMemoryLeakMonitor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A374A4D0-9BF6-4E01-8A29-647F92CBF41C}
	operator Dunitx::Testframework::_di_IMemoryLeakMonitor()
	{
		Dunitx::Testframework::_di_IMemoryLeakMonitor intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Testframework::IMemoryLeakMonitor*(void) { return (Dunitx::Testframework::IMemoryLeakMonitor*)&__IMemoryLeakMonitor; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall RegisterDefaultProvider(void);
}	/* namespace Default */
}	/* namespace Memoryleakmonitor */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_MEMORYLEAKMONITOR_DEFAULT)
using namespace Dunitx::Memoryleakmonitor::Default;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_MEMORYLEAKMONITOR)
using namespace Dunitx::Memoryleakmonitor;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_Memoryleakmonitor_DefaultHPP
