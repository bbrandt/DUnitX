// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.CommandLine.Options.pas' rev: 28.00 (Windows)

#ifndef Dunitx_Commandline_OptionsHPP
#define Dunitx_Commandline_OptionsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Generics.Collections.hpp>	// Pascal unit
#include <System.Rtti.hpp>	// Pascal unit
#include <System.TypInfo.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.Generics.Defaults.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Commandline
{
namespace Options
{
//-- type declarations -------------------------------------------------------
__interface ICommandLineParseResult;
typedef System::DelphiInterface<ICommandLineParseResult> _di_ICommandLineParseResult;
__interface  INTERFACE_UUID("{1715B9FF-8A34-47C9-843E-619C5AEA3F32}") ICommandLineParseResult  : public System::IInterface 
{
	
public:
	virtual bool __fastcall GetHasErrors(void) = 0 ;
	virtual System::UnicodeString __fastcall GetErrorText(void) = 0 ;
	__property bool HasErrors = {read=GetHasErrors};
	__property System::UnicodeString ErrorText = {read=GetErrorText};
};

__interface ICommandLineParser;
typedef System::DelphiInterface<ICommandLineParser> _di_ICommandLineParser;
__interface  INTERFACE_UUID("{6F970026-D1EE-4A3E-8A99-300AD3EE9C33}") ICommandLineParser  : public System::IInterface 
{
	
public:
	virtual _di_ICommandLineParseResult __fastcall Parse(void) = 0 /* overload */;
	virtual _di_ICommandLineParseResult __fastcall Parse(System::Classes::TStrings* const values) = 0 /* overload */;
};

__interface IOptionDefintion;
typedef System::DelphiInterface<IOptionDefintion> _di_IOptionDefintion;
__interface  INTERFACE_UUID("{1EAA06BA-8FBF-43F8-86D7-9F5DE26C4E86}") IOptionDefintion  : public System::IInterface 
{
	
public:
	virtual System::UnicodeString __fastcall GetLongName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetShortName(void) = 0 ;
	virtual bool __fastcall GetHasValue(void) = 0 ;
	virtual void __fastcall SetHasValue(const bool value) = 0 ;
	virtual System::UnicodeString __fastcall GetHelpText(void) = 0 ;
	virtual void __fastcall SetHelpText(const System::UnicodeString value) = 0 ;
	virtual bool __fastcall GetRequired(void) = 0 ;
	virtual void __fastcall SetRequired(const bool value) = 0 ;
	virtual bool __fastcall GetValueRequired(void) = 0 ;
	virtual void __fastcall SetValueRequired(const bool value) = 0 ;
	virtual bool __fastcall GetAllowMultiple(void) = 0 ;
	virtual void __fastcall SetAllowMultiple(const bool value) = 0 ;
	virtual bool __fastcall GetIsOptionFile(void) = 0 ;
	virtual void __fastcall SetIsOptionFile(const bool value) = 0 ;
	virtual bool __fastcall GetIsHidden(void) = 0 ;
	virtual void __fastcall SetIsHidden(const bool value) = 0 ;
	virtual bool __fastcall GetIsUnnamed(void) = 0 ;
	__property System::UnicodeString LongName = {read=GetLongName};
	__property System::UnicodeString ShortName = {read=GetShortName};
	__property bool HasValue = {read=GetHasValue, write=SetHasValue};
	__property System::UnicodeString HelpText = {read=GetHelpText, write=SetHelpText};
	__property bool Required = {read=GetRequired, write=SetRequired};
	__property bool ValueRequired = {read=GetValueRequired, write=SetValueRequired};
	__property bool AllowMultiple = {read=GetAllowMultiple, write=SetAllowMultiple};
	__property bool IsOptionFile = {read=GetIsOptionFile, write=SetIsOptionFile};
	__property bool IsUnnamed = {read=GetIsUnnamed};
	__property bool Hidden = {read=GetIsHidden, write=SetIsHidden};
};

class DELPHICLASS TOptionsRegistry;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOptionsRegistry : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static System::Generics::Collections::TDictionary__2<System::UnicodeString,_di_IOptionDefintion>* FOptionsLookup;
	static System::Generics::Collections::TList__1<_di_IOptionDefintion>* FUnnamedOptions;
	static System::Generics::Collections::TList__1<_di_IOptionDefintion>* FRegisteredOptions;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	template<typename T> __classmethod _di_IOptionDefintion __fastcall RegisterOption(const System::UnicodeString longName, const System::UnicodeString shortName, const System::DelphiInterface<System::Sysutils::TProc__1<T> > Action)/* overload */;
	template<typename T> __classmethod _di_IOptionDefintion __fastcall RegisterOption(const System::UnicodeString longName, const System::UnicodeString shortName, const System::UnicodeString helpText, const System::DelphiInterface<System::Sysutils::TProc__1<T> > Action)/* overload */;
	template<typename T> __classmethod _di_IOptionDefintion __fastcall RegisterUnNamedOption(const System::UnicodeString helpText, const System::DelphiInterface<System::Sysutils::TProc__1<T> > Action)/* overload */;
	__classmethod System::Generics::Collections::TList__1<_di_IOptionDefintion>* __fastcall AllRegisteredOptions();
	__classmethod _di_ICommandLineParseResult __fastcall Parse()/* overload */;
	__classmethod _di_ICommandLineParseResult __fastcall Parse(System::Classes::TStrings* const values)/* overload */;
	/* static */ __property System::Generics::Collections::TDictionary__2<System::UnicodeString,_di_IOptionDefintion>* RegisteredOptions = {read=FOptionsLookup};
	/* static */ __property System::Generics::Collections::TList__1<_di_IOptionDefintion>* RegisteredUnamedOptions = {read=FUnnamedOptions};
	__classmethod void __fastcall PrintUsage(const System::DelphiInterface<System::Sysutils::TProc__1<System::UnicodeString> > proc, const int pad = 0x1e);
public:
	/* TObject.Create */ inline __fastcall TOptionsRegistry(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TOptionsRegistry(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Options */
}	/* namespace Commandline */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_COMMANDLINE_OPTIONS)
using namespace Dunitx::Commandline::Options;
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
#endif	// Dunitx_Commandline_OptionsHPP
