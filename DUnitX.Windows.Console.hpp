// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Windows.Console.pas' rev: 28.00 (Windows)

#ifndef Dunitx_Windows_ConsoleHPP
#define Dunitx_Windows_ConsoleHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <DUnitX.ConsoleWriter.Base.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Windows
{
namespace Console
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDUnitXWindowsConsoleWriter;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDUnitXWindowsConsoleWriter : public Dunitx::Consolewriter::Base::TDUnitXConsoleWriterBase
{
	typedef Dunitx::Consolewriter::Base::TDUnitXConsoleWriterBase inherited;
	
private:
	System::Word FDefaultForeground;
	System::Word FDefaultBackground;
	Dunitx::Consolewriter::Base::TConsoleColour FLastForeground;
	Dunitx::Consolewriter::Base::TConsoleColour FLastBackground;
	NativeUInt FStdOut;
	System::Word __fastcall GetForegroundColourCode(const Dunitx::Consolewriter::Base::TConsoleColour cc);
	System::Word __fastcall GetBackgroundColourCode(const Dunitx::Consolewriter::Base::TConsoleColour cc);
	int __fastcall GetConsoleWidth(void);
	
protected:
	virtual void __fastcall InternalWriteLn(const System::UnicodeString s);
	virtual void __fastcall InternalWrite(const System::UnicodeString s);
	
public:
	virtual void __fastcall SetColour(const Dunitx::Consolewriter::Base::TConsoleColour foreground, const Dunitx::Consolewriter::Base::TConsoleColour background = (Dunitx::Consolewriter::Base::TConsoleColour)(0x0));
	__fastcall virtual TDUnitXWindowsConsoleWriter(void);
	__fastcall virtual ~TDUnitXWindowsConsoleWriter(void);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Console */
}	/* namespace Windows */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_WINDOWS_CONSOLE)
using namespace Dunitx::Windows::Console;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_WINDOWS)
using namespace Dunitx::Windows;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_Windows_ConsoleHPP
