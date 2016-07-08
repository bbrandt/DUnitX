// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Exceptions.pas' rev: 28.00 (Windows)

#ifndef Dunitx_ExceptionsHPP
#define Dunitx_ExceptionsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <DUnitX.ComparableFormat.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Exceptions
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS ETestFrameworkException;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ETestFrameworkException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETestFrameworkException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETestFrameworkException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETestFrameworkException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETestFrameworkException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETestFrameworkException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETestFrameworkException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETestFrameworkException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETestFrameworkException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETestFrameworkException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETestFrameworkException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETestFrameworkException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETestFrameworkException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETestFrameworkException(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ENotImplemented;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ENotImplemented : public ETestFrameworkException
{
	typedef ETestFrameworkException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ENotImplemented(const System::UnicodeString Msg) : ETestFrameworkException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ENotImplemented(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ETestFrameworkException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENotImplemented(NativeUInt Ident)/* overload */ : ETestFrameworkException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENotImplemented(System::PResStringRec ResStringRec)/* overload */ : ETestFrameworkException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENotImplemented(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFrameworkException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENotImplemented(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFrameworkException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENotImplemented(const System::UnicodeString Msg, int AHelpContext) : ETestFrameworkException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENotImplemented(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ETestFrameworkException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENotImplemented(NativeUInt Ident, int AHelpContext)/* overload */ : ETestFrameworkException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENotImplemented(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ETestFrameworkException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENotImplemented(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFrameworkException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENotImplemented(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFrameworkException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENotImplemented(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS EAbort;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EAbort : public ETestFrameworkException
{
	typedef ETestFrameworkException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbort(const System::UnicodeString Msg) : ETestFrameworkException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbort(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ETestFrameworkException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbort(NativeUInt Ident)/* overload */ : ETestFrameworkException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAbort(System::PResStringRec ResStringRec)/* overload */ : ETestFrameworkException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbort(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFrameworkException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbort(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFrameworkException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbort(const System::UnicodeString Msg, int AHelpContext) : ETestFrameworkException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbort(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ETestFrameworkException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbort(NativeUInt Ident, int AHelpContext)/* overload */ : ETestFrameworkException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbort(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ETestFrameworkException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbort(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFrameworkException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbort(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFrameworkException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbort(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ETestFailure;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ETestFailure : public EAbort
{
	typedef EAbort inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETestFailure(const System::UnicodeString Msg) : EAbort(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETestFailure(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EAbort(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETestFailure(NativeUInt Ident)/* overload */ : EAbort(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETestFailure(System::PResStringRec ResStringRec)/* overload */ : EAbort(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETestFailure(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EAbort(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETestFailure(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EAbort(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETestFailure(const System::UnicodeString Msg, int AHelpContext) : EAbort(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETestFailure(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EAbort(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETestFailure(NativeUInt Ident, int AHelpContext)/* overload */ : EAbort(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETestFailure(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbort(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETestFailure(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EAbort(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETestFailure(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EAbort(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETestFailure(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ETestFailureStrCompare;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ETestFailureStrCompare : public ETestFailure
{
	typedef ETestFailure inherited;
	
private:
	System::UnicodeString FActual;
	System::UnicodeString FExpected;
	System::UnicodeString FMsg;
	Dunitx::Comparableformat::TDUnitXComparableFormatClass FFormat;
	
public:
	__property System::UnicodeString Actual = {read=FActual};
	__property System::UnicodeString Expected = {read=FExpected};
	__property System::UnicodeString Msg = {read=FMsg};
	__property Dunitx::Comparableformat::TDUnitXComparableFormatClass Format = {read=FFormat};
	__fastcall ETestFailureStrCompare(const System::UnicodeString aExpected, const System::UnicodeString aActual, const System::UnicodeString aMessage, const Dunitx::Comparableformat::TDUnitXComparableFormatClass aFormat);
public:
	/* Exception.CreateFmt */ inline __fastcall ETestFailureStrCompare(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ETestFailure(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETestFailureStrCompare(NativeUInt Ident)/* overload */ : ETestFailure(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETestFailureStrCompare(System::PResStringRec ResStringRec)/* overload */ : ETestFailure(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETestFailureStrCompare(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFailure(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETestFailureStrCompare(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFailure(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETestFailureStrCompare(const System::UnicodeString Msg, int AHelpContext) : ETestFailure(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETestFailureStrCompare(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ETestFailure(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETestFailureStrCompare(NativeUInt Ident, int AHelpContext)/* overload */ : ETestFailure(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETestFailureStrCompare(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ETestFailure(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETestFailureStrCompare(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFailure(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETestFailureStrCompare(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFailure(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETestFailureStrCompare(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ETestPass;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ETestPass : public EAbort
{
	typedef EAbort inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETestPass(const System::UnicodeString Msg) : EAbort(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETestPass(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EAbort(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETestPass(NativeUInt Ident)/* overload */ : EAbort(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETestPass(System::PResStringRec ResStringRec)/* overload */ : EAbort(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETestPass(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EAbort(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETestPass(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EAbort(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETestPass(const System::UnicodeString Msg, int AHelpContext) : EAbort(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETestPass(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EAbort(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETestPass(NativeUInt Ident, int AHelpContext)/* overload */ : EAbort(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETestPass(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbort(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETestPass(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EAbort(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETestPass(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EAbort(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETestPass(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ETimedOut;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ETimedOut : public EAbort
{
	typedef EAbort inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETimedOut(const System::UnicodeString Msg) : EAbort(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETimedOut(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : EAbort(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETimedOut(NativeUInt Ident)/* overload */ : EAbort(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETimedOut(System::PResStringRec ResStringRec)/* overload */ : EAbort(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETimedOut(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : EAbort(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETimedOut(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : EAbort(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETimedOut(const System::UnicodeString Msg, int AHelpContext) : EAbort(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETimedOut(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : EAbort(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETimedOut(NativeUInt Ident, int AHelpContext)/* overload */ : EAbort(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETimedOut(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EAbort(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETimedOut(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EAbort(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETimedOut(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : EAbort(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETimedOut(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ENoAssertionsMade;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ENoAssertionsMade : public ETestFailure
{
	typedef ETestFailure inherited;
	
public:
	/* Exception.Create */ inline __fastcall ENoAssertionsMade(const System::UnicodeString Msg) : ETestFailure(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ENoAssertionsMade(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ETestFailure(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENoAssertionsMade(NativeUInt Ident)/* overload */ : ETestFailure(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENoAssertionsMade(System::PResStringRec ResStringRec)/* overload */ : ETestFailure(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoAssertionsMade(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFailure(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoAssertionsMade(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFailure(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENoAssertionsMade(const System::UnicodeString Msg, int AHelpContext) : ETestFailure(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENoAssertionsMade(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ETestFailure(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoAssertionsMade(NativeUInt Ident, int AHelpContext)/* overload */ : ETestFailure(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoAssertionsMade(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ETestFailure(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoAssertionsMade(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFailure(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoAssertionsMade(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFailure(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENoAssertionsMade(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ENoTestsRegistered;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ENoTestsRegistered : public ETestFrameworkException
{
	typedef ETestFrameworkException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ENoTestsRegistered(const System::UnicodeString Msg) : ETestFrameworkException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ENoTestsRegistered(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ETestFrameworkException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ENoTestsRegistered(NativeUInt Ident)/* overload */ : ETestFrameworkException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ENoTestsRegistered(System::PResStringRec ResStringRec)/* overload */ : ETestFrameworkException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoTestsRegistered(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFrameworkException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ENoTestsRegistered(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFrameworkException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ENoTestsRegistered(const System::UnicodeString Msg, int AHelpContext) : ETestFrameworkException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ENoTestsRegistered(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ETestFrameworkException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoTestsRegistered(NativeUInt Ident, int AHelpContext)/* overload */ : ETestFrameworkException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ENoTestsRegistered(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ETestFrameworkException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoTestsRegistered(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFrameworkException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ENoTestsRegistered(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFrameworkException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ENoTestsRegistered(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS ECommandLineError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ECommandLineError : public ETestFrameworkException
{
	typedef ETestFrameworkException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECommandLineError(const System::UnicodeString Msg) : ETestFrameworkException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECommandLineError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : ETestFrameworkException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECommandLineError(NativeUInt Ident)/* overload */ : ETestFrameworkException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECommandLineError(System::PResStringRec ResStringRec)/* overload */ : ETestFrameworkException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECommandLineError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFrameworkException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECommandLineError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : ETestFrameworkException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECommandLineError(const System::UnicodeString Msg, int AHelpContext) : ETestFrameworkException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECommandLineError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : ETestFrameworkException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECommandLineError(NativeUInt Ident, int AHelpContext)/* overload */ : ETestFrameworkException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECommandLineError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : ETestFrameworkException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECommandLineError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFrameworkException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECommandLineError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : ETestFrameworkException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECommandLineError(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Exceptions */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_EXCEPTIONS)
using namespace Dunitx::Exceptions;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_ExceptionsHPP
