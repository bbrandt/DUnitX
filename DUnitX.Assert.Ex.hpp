// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Assert.Ex.pas' rev: 28.00 (Windows)

#ifndef Dunitx_Assert_ExHPP
#define Dunitx_Assert_ExHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DUnitX.Assert.hpp>	// Pascal unit
#include <DUnitX.ComparableFormat.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Assert
{
namespace Ex
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS Assert;
#pragma pack(push,4)
class PASCALIMPLEMENTATION Assert : public Dunitx::Assert::Assert
{
	typedef Dunitx::Assert::Assert inherited;
	
private:
	__classmethod void __fastcall FailStrCompare(const System::UnicodeString expected, const System::UnicodeString actual, const Dunitx::Comparableformat::TDUnitXComparableFormatClass compformat = 0x0, const System::UnicodeString message = System::UnicodeString(), const void * errorAddrs = (void *)(0x0));
	
public:
	__classmethod void __fastcall AreEqual(const System::UnicodeString expected, const System::UnicodeString actual, const Dunitx::Comparableformat::TDUnitXComparableFormatClass compformat, const bool ignoreCase, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const System::UnicodeString expected, const System::UnicodeString actual, const Dunitx::Comparableformat::TDUnitXComparableFormatClass compformat, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const System::UnicodeString expected, const System::UnicodeString actual, const bool ignoreCase, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const System::UnicodeString expected, const System::UnicodeString actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
public:
	/* TObject.Create */ inline __fastcall Assert(void) : Dunitx::Assert::Assert() { }
	/* TObject.Destroy */ inline __fastcall virtual ~Assert(void) { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  AreEqual(const double expected, const double actual, const double tolerance, const System::UnicodeString message = System::UnicodeString()){ Dunitx::Assert::Assert::AreEqual(expected, actual, tolerance, message); }
	inline void __fastcall  AreEqual(const double expected, const double actual, const System::UnicodeString message = System::UnicodeString()){ Dunitx::Assert::Assert::AreEqual(expected, actual, message); }
	inline void __fastcall  AreEqual(const System::Extended expected, const System::Extended actual, const System::Extended tolerance, const System::UnicodeString message = System::UnicodeString()){ Dunitx::Assert::Assert::AreEqual(expected, actual, tolerance, message); }
	inline void __fastcall  AreEqual(const System::Extended expected, const System::Extended actual, const System::UnicodeString message = System::UnicodeString()){ Dunitx::Assert::Assert::AreEqual(expected, actual, message); }
	inline void __fastcall  AreEqual(const System::TClass expected, const System::TClass actual, const System::UnicodeString message = System::UnicodeString()){ Dunitx::Assert::Assert::AreEqual(expected, actual, message); }
	inline void __fastcall  AreEqual(const int expected, const int actual, const System::UnicodeString message = System::UnicodeString()){ Dunitx::Assert::Assert::AreEqual(expected, actual, message); }
	inline void __fastcall  AreEqual(const unsigned expected, const unsigned actual, const System::UnicodeString message = System::UnicodeString()){ Dunitx::Assert::Assert::AreEqual(expected, actual, message); }
	inline void __fastcall  AreEqual(const bool expected, const bool actual, const System::UnicodeString message = System::UnicodeString()){ Dunitx::Assert::Assert::AreEqual(expected, actual, message); }
	inline void __fastcall  AreEqual(const GUID &expected, const GUID &actual, const System::UnicodeString message = System::UnicodeString()){ Dunitx::Assert::Assert::AreEqual(expected, actual, message); }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ex */
}	/* namespace Assert */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_ASSERT_EX)
using namespace Dunitx::Assert::Ex;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_ASSERT)
using namespace Dunitx::Assert;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_Assert_ExHPP
