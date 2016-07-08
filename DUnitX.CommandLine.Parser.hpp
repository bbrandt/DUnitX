// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.CommandLine.Parser.pas' rev: 28.00 (Windows)

#ifndef Dunitx_Commandline_ParserHPP
#define Dunitx_Commandline_ParserHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <DUnitX.CommandLine.Options.hpp>	// Pascal unit
#include <DUnitX.CommandLine.OptionDef.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Commandline
{
namespace Parser
{
//-- type declarations -------------------------------------------------------
__interface IParseResultAddError;
typedef System::DelphiInterface<IParseResultAddError> _di_IParseResultAddError;
__interface  INTERFACE_UUID("{9EADABED-511B-4095-9ACA-A5E431AB653D}") IParseResultAddError  : public System::IInterface 
{
	
public:
	virtual void __fastcall AddError(const System::UnicodeString value) = 0 ;
};

class DELPHICLASS TCommandLineParseResult;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommandLineParseResult : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::TStringList* FErrors;
	
protected:
	System::UnicodeString __fastcall GetErrorText(void);
	bool __fastcall GetHasErrors(void);
	void __fastcall AddError(const System::UnicodeString value);
	
public:
	__fastcall TCommandLineParseResult(void);
	__fastcall virtual ~TCommandLineParseResult(void);
private:
	void *__IParseResultAddError;	// IParseResultAddError 
	void *__ICommandLineParseResult;	// Dunitx::Commandline::Options::ICommandLineParseResult 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9EADABED-511B-4095-9ACA-A5E431AB653D}
	operator _di_IParseResultAddError()
	{
		_di_IParseResultAddError intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IParseResultAddError*(void) { return (IParseResultAddError*)&__IParseResultAddError; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1715B9FF-8A34-47C9-843E-619C5AEA3F32}
	operator Dunitx::Commandline::Options::_di_ICommandLineParseResult()
	{
		Dunitx::Commandline::Options::_di_ICommandLineParseResult intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Commandline::Options::ICommandLineParseResult*(void) { return (Dunitx::Commandline::Options::ICommandLineParseResult*)&__ICommandLineParseResult; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TCommandLineParser;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TCommandLineParser : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	int FUnamedIndex;
	
protected:
	void __fastcall InternalValidate(const _di_IParseResultAddError parseErrors);
	void __fastcall InternalParseFile(const System::UnicodeString fileName, const _di_IParseResultAddError parseErrors);
	void __fastcall InternalParse(System::Classes::TStrings* const values, const _di_IParseResultAddError parseErrors);
	Dunitx::Commandline::Options::_di_ICommandLineParseResult __fastcall Parse(void)/* overload */;
	Dunitx::Commandline::Options::_di_ICommandLineParseResult __fastcall Parse(System::Classes::TStrings* const values)/* overload */;
	
public:
	__fastcall TCommandLineParser(void);
	__fastcall virtual ~TCommandLineParser(void);
private:
	void *__ICommandLineParser;	// Dunitx::Commandline::Options::ICommandLineParser 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6F970026-D1EE-4A3E-8A99-300AD3EE9C33}
	operator Dunitx::Commandline::Options::_di_ICommandLineParser()
	{
		Dunitx::Commandline::Options::_di_ICommandLineParser intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Dunitx::Commandline::Options::ICommandLineParser*(void) { return (Dunitx::Commandline::Options::ICommandLineParser*)&__ICommandLineParser; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Parser */
}	/* namespace Commandline */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_COMMANDLINE_PARSER)
using namespace Dunitx::Commandline::Parser;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_COMMANDLINE)
using namespace Dunitx::Commandline;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_Commandline_ParserHPP
