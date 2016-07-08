// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Assert.pas' rev: 28.00 (Windows)

#ifndef Dunitx_AssertHPP
#define Dunitx_AssertHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Assert
{
//-- type declarations -------------------------------------------------------
typedef System::Sysutils::_di_TProc TTestLocalMethod;

typedef void __fastcall (__closure *TTestMethod)(void);

class DELPHICLASS Assert;
#pragma pack(push,4)
class PASCALIMPLEMENTATION Assert : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static bool fIgnoreCaseDefault;
	static System::Sysutils::_di_TProc fOnAssert;
	static System::Sysutils::ExceptClass fTestFailure;
	static System::Sysutils::ExceptClass fTestPass;
	__classmethod void __fastcall CheckExceptionClass(System::Sysutils::Exception* E, const System::Sysutils::ExceptClass exceptionClass);
	__classmethod void __fastcall CheckExceptionClassDescendant(System::Sysutils::Exception* E, const System::Sysutils::ExceptClass exceptionClass);
	
protected:
	__classmethod System::UnicodeString __fastcall AddLineBreak(const System::UnicodeString msg);
	__classmethod void __fastcall DoAssert();
	
public:
	__classmethod void __fastcall Pass(const System::UnicodeString message = System::UnicodeString());
	__classmethod void __fastcall Fail(const System::UnicodeString message = System::UnicodeString(), const void * errorAddrs = (void *)(0x0));
	__classmethod void __fastcall FailFmt(const System::UnicodeString message, System::TVarRec const *args, const int args_High, const void * errorAddrs = (void *)(0x0));
	__classmethod void __fastcall NotImplemented();
	__classmethod void __fastcall AreEqual(const System::UnicodeString expected, const System::UnicodeString actual, const bool ignoreCase, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const System::UnicodeString expected, const System::UnicodeString actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const double expected, const double actual, const double tolerance, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const double expected, const double actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const System::Extended expected, const System::Extended actual, const System::Extended tolerance, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const System::Extended expected, const System::Extended actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const System::TClass expected, const System::TClass actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	template<typename T> __classmethod void __fastcall AreEqual(const T expected, const T actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const int expected, const int actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const unsigned expected, const unsigned actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const bool expected, const bool actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqual(const GUID &expected, const GUID &actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreEqualMemory(const void * expected, const void * actual, const unsigned size, const System::UnicodeString message = System::UnicodeString());
	__classmethod void __fastcall AreNotEqual(const System::UnicodeString expected, const System::UnicodeString actual, const bool ignoreCase, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreNotEqual(const System::UnicodeString expected, const System::UnicodeString actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreNotEqual(const System::Extended expected, const System::Extended actual, const System::Extended tolerance, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreNotEqual(const System::Extended expected, const System::Extended actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreNotEqual(const double expected, const double actual, const double tolerance, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreNotEqual(const double expected, const double actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreNotEqual(const System::TClass expected, const System::TClass actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	template<typename T> __classmethod void __fastcall AreNotEqual(const T expected, const T actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreNotEqual(const int expected, const int actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreNotEqual(const GUID &expected, const GUID &actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreNotEqualMemory(const void * expected, const void * actual, const unsigned size, const System::UnicodeString message = System::UnicodeString());
	__classmethod void __fastcall AreSame(System::TObject* const expected, System::TObject* const actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreSame(const System::_di_IInterface expected, const System::_di_IInterface actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreNotSame(System::TObject* const expected, System::TObject* const actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall AreNotSame(const System::_di_IInterface expected, const System::_di_IInterface actual, const System::UnicodeString message = System::UnicodeString())/* overload */;
	template<typename T> __classmethod void __fastcall Contains(const System::DelphiInterface<System::IEnumerable__1<T> > list, const T value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	template<typename T> __classmethod void __fastcall Contains(T const *arr, const int arr_High, const T value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	template<typename T> __classmethod void __fastcall DoesNotContain(const System::DelphiInterface<System::IEnumerable__1<T> > list, const T value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	template<typename T> __classmethod void __fastcall DoesNotContain(T const *arr, const int arr_High, const T value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	template<typename T> __classmethod T __fastcall Implements(System::_di_IInterface value, const System::UnicodeString message = System::UnicodeString());
	__classmethod void __fastcall IsTrue(const bool condition, const System::UnicodeString message = System::UnicodeString());
	__classmethod void __fastcall IsFalse(const bool condition, const System::UnicodeString message = System::UnicodeString());
	__classmethod void __fastcall IsNull(System::TObject* const condition, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNull(const void * condition, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNull(const System::_di_IInterface condition, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNull(const System::Variant &condition, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNotNull(System::TObject* const condition, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNotNull(const void * condition, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNotNull(const System::_di_IInterface condition, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNotNull(const System::Variant &condition, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsEmpty(const System::UnicodeString value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsEmpty(const System::Variant &value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsEmpty(System::Classes::TStrings* const value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsEmpty(System::Classes::TList* const value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsEmpty(const System::Classes::_di_IInterfaceList value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	template<typename T> __classmethod void __fastcall IsEmpty(const System::DelphiInterface<System::IEnumerable__1<T> > value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNotEmpty(const System::UnicodeString value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNotEmpty(const System::Variant &value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNotEmpty(System::Classes::TStrings* const value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNotEmpty(System::Classes::TList* const value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsNotEmpty(const System::Classes::_di_IInterfaceList value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	template<typename T> __classmethod void __fastcall IsNotEmpty(const System::DelphiInterface<System::IEnumerable__1<T> > value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillRaise(const System::Sysutils::_di_TProc AMethod, const System::Sysutils::ExceptClass exceptionClass = 0x0, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillRaiseWithMessage(const System::Sysutils::_di_TProc AMethod, const System::Sysutils::ExceptClass exceptionClass = 0x0, const System::UnicodeString exceptionMsg = System::UnicodeString(), const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillRaise(const TTestMethod AMethod, const System::Sysutils::ExceptClass exceptionClass = 0x0, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillRaiseDescendant(const System::Sysutils::_di_TProc AMethod, const System::Sysutils::ExceptClass exceptionClass = 0x0, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillRaiseDescendant(const TTestMethod AMethod, const System::Sysutils::ExceptClass exceptionClass = 0x0, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillRaiseAny(const System::Sysutils::_di_TProc AMethod, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillRaiseAny(const TTestMethod AMethod, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillNotRaise(const System::Sysutils::_di_TProc AMethod, const System::Sysutils::ExceptClass exceptionClass = 0x0, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillNotRaise(const TTestMethod AMethod, const System::Sysutils::ExceptClass exceptionClass = 0x0, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillNotRaiseDescendant(const System::Sysutils::_di_TProc AMethod, const System::Sysutils::ExceptClass exceptionClass = 0x0, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillNotRaiseDescendant(const TTestMethod AMethod, const System::Sysutils::ExceptClass exceptionClass = 0x0, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillNotRaiseAny(const System::Sysutils::_di_TProc AMethod, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall WillNotRaiseAny(const TTestMethod AMethod, const System::UnicodeString msg = System::UnicodeString())/* overload */;
	__classmethod void __fastcall Contains(const System::UnicodeString theString, const System::UnicodeString subString, const bool ignoreCase, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall Contains(const System::UnicodeString theString, const System::UnicodeString subString, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall DoesNotContain(const System::UnicodeString theString, const System::UnicodeString subString, const bool ignoreCase, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall DoesNotContain(const System::UnicodeString theString, const System::UnicodeString subString, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall StartsWith(const System::UnicodeString subString, const System::UnicodeString theString, const bool ignoreCase, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall StartsWith(const System::UnicodeString subString, const System::UnicodeString theString, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall EndsWith(const System::UnicodeString subString, const System::UnicodeString theString, const bool ignoreCase, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall EndsWith(const System::UnicodeString subString, const System::UnicodeString theString, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall InheritsFrom(const System::TClass descendant, const System::TClass parent, const System::UnicodeString message = System::UnicodeString());
	template<typename T> __classmethod void __fastcall IsType _DEPRECATED_ATTRIBUTE1("use inheritsfrom - istype is useless") (const T value, const System::UnicodeString message = System::UnicodeString())/* overload */;
	__classmethod void __fastcall IsMatch(const System::UnicodeString regexPattern, const System::UnicodeString theString, const System::UnicodeString message = System::UnicodeString());
	/* static */ __property System::Sysutils::_di_TProc OnAssert = {read=fOnAssert, write=fOnAssert};
	/* static */ __property System::Sysutils::ExceptClass TestFailure = {read=fTestFailure, write=fTestFailure};
	/* static */ __property System::Sysutils::ExceptClass TestPass = {read=fTestPass, write=fTestPass};
	/* static */ __property bool IgnoreCaseDefault = {read=fIgnoreCaseDefault, write=fIgnoreCaseDefault, nodefault};
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
public:
	/* TObject.Create */ inline __fastcall Assert(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~Assert(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Assert */
}	/* namespace Dunitx */
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
#endif	// Dunitx_AssertHPP
