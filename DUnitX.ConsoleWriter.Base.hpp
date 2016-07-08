// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.ConsoleWriter.Base.pas' rev: 28.00 (Windows)

#ifndef Dunitx_Consolewriter_BaseHPP
#define Dunitx_Consolewriter_BaseHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Consolewriter
{
namespace Base
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TConsoleColour : unsigned char { ccDefault, ccBrightRed, ccDarkRed, ccBrightBlue, ccDarkBlue, ccBrightGreen, ccDarkGreen, ccBrightYellow, ccDarkYellow, ccBrightAqua, ccDarkAqua, ccBrightPurple, ccDarkPurple, ccGrey, ccBlack, ccBrightWhite, ccWhite };

__interface IDUnitXConsoleWriter;
typedef System::DelphiInterface<IDUnitXConsoleWriter> _di_IDUnitXConsoleWriter;
__interface  INTERFACE_UUID("{EFE59EB8-0C0B-4790-A964-D8126A2728A9}") IDUnitXConsoleWriter  : public System::IInterface 
{
	
public:
	virtual int __fastcall GetIndent(void) = 0 ;
	virtual void __fastcall SetIndent(const int count) = 0 ;
	virtual void __fastcall SetColour(const TConsoleColour foreground, const TConsoleColour background = (TConsoleColour)(0x0)) = 0 ;
	virtual void __fastcall WriteLn(const System::UnicodeString s) = 0 /* overload */;
	virtual void __fastcall WriteLn(void) = 0 /* overload */;
	virtual void __fastcall Write(const System::UnicodeString s) = 0 ;
	virtual void __fastcall Indent(const int value = 0x1) = 0 ;
	virtual void __fastcall Outdent(const int value = 0x1) = 0 ;
	__property int CurrentIndentLevel = {read=GetIndent, write=SetIndent};
};

class DELPHICLASS TDUnitXConsoleWriterBase;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDUnitXConsoleWriterBase : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	int FIndent;
	int FConsoleWidth;
	bool FRedirectedStdOut;
	
protected:
	int __fastcall GetIndent(void);
	virtual void __fastcall SetIndent(const int count);
	System::Classes::TStringList* __fastcall InternalBreakupMessage(const System::UnicodeString s);
	virtual void __fastcall InternalWriteLn(const System::UnicodeString s) = 0 ;
	virtual void __fastcall InternalWrite(const System::UnicodeString s) = 0 ;
	void __fastcall Indent(const int value = 0x1);
	void __fastcall Outdent(const int value = 0x1);
	__property int ConsoleWidth = {read=FConsoleWidth, write=FConsoleWidth, nodefault};
	__property bool RedirectedStdOut = {read=FRedirectedStdOut, write=FRedirectedStdOut, nodefault};
	
public:
	__fastcall virtual TDUnitXConsoleWriterBase(void);
	virtual void __fastcall SetColour(const TConsoleColour foreground, const TConsoleColour background = (TConsoleColour)(0x0)) = 0 ;
	virtual void __fastcall WriteLn(const System::UnicodeString s)/* overload */;
	virtual void __fastcall WriteLn(void)/* overload */;
	virtual void __fastcall Write(const System::UnicodeString s);
	__property int CurrentIndentLevel = {read=GetIndent, write=SetIndent, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDUnitXConsoleWriterBase(void) { }
	
private:
	void *__IDUnitXConsoleWriter;	// IDUnitXConsoleWriter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EFE59EB8-0C0B-4790-A964-D8126A2728A9}
	operator _di_IDUnitXConsoleWriter()
	{
		_di_IDUnitXConsoleWriter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDUnitXConsoleWriter*(void) { return (IDUnitXConsoleWriter*)&__IDUnitXConsoleWriter; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Base */
}	/* namespace Consolewriter */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_CONSOLEWRITER_BASE)
using namespace Dunitx::Consolewriter::Base;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_CONSOLEWRITER)
using namespace Dunitx::Consolewriter;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_Consolewriter_BaseHPP
