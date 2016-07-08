// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.TestNameParser.pas' rev: 28.00 (Windows)

#ifndef Dunitx_TestnameparserHPP
#define Dunitx_TestnameparserHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Testnameparser
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TTestNameParser;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTestNameParser : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	__classmethod System::UnicodeString __fastcall GetTestName(const System::UnicodeString arg, int &index);
	__classmethod int __fastcall GetSeparator(const System::UnicodeString arg, int index);
	
public:
	__classmethod System::DynamicArray<System::UnicodeString> __fastcall Parse(const System::UnicodeString arg);
public:
	/* TObject.Create */ inline __fastcall TTestNameParser(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTestNameParser(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Testnameparser */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_TESTNAMEPARSER)
using namespace Dunitx::Testnameparser;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_TestnameparserHPP
