// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.FilterBuilder.pas' rev: 28.00 (Windows)

#ifndef Dunitx_FilterbuilderHPP
#define Dunitx_FilterbuilderHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DUnitX.TestFramework.hpp>	// Pascal unit
#include <DUnitX.Filters.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Filterbuilder
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitXFilterBuilder;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDUnitXFilterBuilder : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod Dunitx::Filters::_di_ITestFilter __fastcall BuildFilter(Dunitx::Testframework::TDUnitXOptions* const options);
	HIDESBASE void __fastcall Log(const Dunitx::Testframework::TLogLevel logType, const System::UnicodeString msg)/* overload */;
	HIDESBASE void __fastcall Log(const System::UnicodeString msg)/* overload */;
	HIDESBASE void __fastcall Status(const System::UnicodeString msg);
	HIDESBASE void __fastcall WriteLn(const System::UnicodeString msg)/* overload */;
	HIDESBASE void __fastcall WriteLn(void)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TDUnitXFilterBuilder(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDUnitXFilterBuilder(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Filterbuilder */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_FILTERBUILDER)
using namespace Dunitx::Filterbuilder;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_FilterbuilderHPP
