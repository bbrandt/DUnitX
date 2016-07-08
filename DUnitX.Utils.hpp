// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Utils.pas' rev: 28.00 (Windows)

#ifndef Dunitx_UtilsHPP
#define Dunitx_UtilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Generics.Collections.hpp>	// Pascal unit
#include <System.TimeSpan.hpp>	// Pascal unit
#include <System.Rtti.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.TypInfo.hpp>	// Pascal unit
#include <System.Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Utils
{
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TCustomAttributeClass;

class DELPHICLASS TAttributeUtils;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAttributeUtils : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod bool __fastcall ContainsAttribute(const System::DynamicArray<System::TCustomAttribute*> attributes, const TCustomAttributeClass AttributeClass);
	__classmethod System::TCustomAttribute* __fastcall FindAttribute(const System::DynamicArray<System::TCustomAttribute*> attributes, const TCustomAttributeClass AttributeClass)/* overload */;
	__classmethod int __fastcall FindAttribute(const System::DynamicArray<System::TCustomAttribute*> attributes, const TCustomAttributeClass AttributeClass, System::TCustomAttribute* &attribute, const int startIndex = 0x0)/* overload */;
	__classmethod System::DynamicArray<System::TCustomAttribute*> __fastcall FindAttributes(const System::DynamicArray<System::TCustomAttribute*> attributes, const TCustomAttributeClass AttributeClass);
public:
	/* TObject.Create */ inline __fastcall TAttributeUtils(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAttributeUtils(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TStrUtils;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TStrUtils : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod System::UnicodeString __fastcall PadString(const System::UnicodeString s, const int totalLength, const bool padLeft = true, System::WideChar padChr = (System::WideChar)(0x20));
	__classmethod System::DynamicArray<System::UnicodeString> __fastcall SplitString(const System::UnicodeString S, const System::UnicodeString Delimiters);
	__classmethod System::UnicodeString __fastcall Join(const System::DynamicArray<System::UnicodeString> values, const System::UnicodeString delim)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TStrUtils(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TStrUtils(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TListStringUtils;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TListStringUtils : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod System::DynamicArray<System::UnicodeString> __fastcall ToArray(System::Generics::Collections::TList__1<System::UnicodeString>* const values);
public:
	/* TObject.Create */ inline __fastcall TListStringUtils(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TListStringUtils(void) { }
	
};

#pragma pack(pop)

typedef void *TObjectHelper;

typedef void *TRttiFieldHelper;

typedef void *TRttiMemberHelper;

typedef void *TRttiMethodHelper;

typedef void *TRttiObjectHelper;

typedef void *TRttiParameterHelper;

typedef void *TRttiPropertyHelper;

typedef void *TRttiTypeHelper;

typedef System::Rtti::TValue TValue;

typedef void *TValueHelper;

struct TPropInfoExt;
typedef TPropInfoExt *PPropInfoExt;

struct DECLSPEC_DRECORD TPropInfoExt
{
public:
	System::Typinfo::PTypeInfo *PropType;
	void *GetProc;
	void *SetProc;
	void *StoredProc;
	int Index;
	int Default;
	short NameIndex;
	System::Byte NameLength;
	System::StaticArray<System::Byte, 256> NameData;
	System::Typinfo::TTypeInfoFieldAccessor __fastcall NameFld(void);
	PPropInfoExt __fastcall Tail(void);
};


class DELPHICLASS TRttiPropertyExtension;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TRttiPropertyExtension : public System::Rtti::TRttiInstanceProperty
{
	typedef System::Rtti::TRttiInstanceProperty inherited;
	
private:
	TPropInfoExt FPropInfo;
	System::DelphiInterface<System::Sysutils::TFunc__2<void *,System::Rtti::TValue> > FGetter;
	System::DelphiInterface<System::Sysutils::TProc__2<void *,System::Rtti::TValue> > FSetter;
	static System::Generics::Collections::TDictionary__2<System::Generics::Collections::TPair__2<System::Typinfo::PTypeInfo,System::UnicodeString>,TRttiPropertyExtension*>* FRegister;
	static System::Generics::Collections::TDictionary__2<System::TClass,System::TClass>* FPatchedClasses;
	bool __fastcall GetIsReadableStub(void);
	bool __fastcall GetIsWritableStub(void);
	System::Rtti::TValue __fastcall DoGetValueStub(void * Instance);
	void __fastcall DoSetValueStub(void * Instance, const System::Rtti::TValue &AValue);
	System::Typinfo::PPropInfo __fastcall GetPropInfoStub(void);
	
protected:
	__classmethod void __fastcall InitVirtualMethodTable();
	HIDESBASE virtual bool __fastcall GetIsReadable(void);
	HIDESBASE virtual bool __fastcall GetIsWritable(void);
	HIDESBASE virtual System::Rtti::TValue __fastcall DoGetValue(void * Instance);
	HIDESBASE virtual void __fastcall DoSetValue(void * Instance, const System::Rtti::TValue &AValue);
	HIDESBASE virtual System::Typinfo::PPropInfo __fastcall GetPropInfo(void);
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	__fastcall TRttiPropertyExtension(System::Typinfo::PTypeInfo Parent, const System::UnicodeString Name, System::Typinfo::PTypeInfo PropertyType);
	__classmethod TRttiPropertyExtension* __fastcall FindByName(System::Rtti::TRttiType* Parent, const System::UnicodeString PropertyName)/* overload */;
	__classmethod TRttiPropertyExtension* __fastcall FindByName(const System::UnicodeString FullPropertyName)/* overload */;
	__property System::DelphiInterface<System::Sysutils::TFunc__2<void *,System::Rtti::TValue> > Getter = {read=FGetter, write=FGetter};
	__property System::DelphiInterface<System::Sysutils::TProc__2<void *,System::Rtti::TValue> > Setter = {read=FSetter, write=FSetter};
public:
	/* TRttiObject.Destroy */ inline __fastcall virtual ~TRttiPropertyExtension(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TArrayHelper;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TArrayHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	template<typename T> static System::DynamicArray<T> __fastcall Concat(System::DynamicArray<T> const *Arrays, const int Arrays_High);
	template<typename T> static System::DynamicArray<T> __fastcall Create(const T a, const T b);
	HIDESBASE System::DynamicArray<System::Rtti::TRttiField*> __fastcall GetFields(void);
	HIDESBASE System::Rtti::TRttiField* __fastcall GetField(const System::UnicodeString AName);
	HIDESBASE System::Rtti::TRttiMember* __fastcall GetMember(const System::UnicodeString AName);
	HIDESBASE System::DynamicArray<System::Rtti::TRttiMethod*> __fastcall GetMethods(void);
	HIDESBASE System::Rtti::TRttiMethod* __fastcall GetMethod(void * ACodeAddress)/* overload */;
	HIDESBASE System::Rtti::TRttiMethod* __fastcall GetMethod(const System::UnicodeString AName)/* overload */;
	HIDESBASE System::DynamicArray<System::Rtti::TRttiProperty*> __fastcall GetProperties(void);
	HIDESBASE System::Rtti::TRttiProperty* __fastcall GetProperty(const System::UnicodeString AName);
	HIDESBASE System::Rtti::TRttiType* __fastcall GetType(void);
	HIDESBASE bool __fastcall HasField(const System::UnicodeString AName);
	HIDESBASE bool __fastcall HasMethod(const System::UnicodeString AName);
	HIDESBASE bool __fastcall HasProperty(const System::UnicodeString AName);
	HIDESBASE bool __fastcall TryGetField(const System::UnicodeString AName, /* out */ System::Rtti::TRttiField* &AField);
	HIDESBASE bool __fastcall TryGetMember(const System::UnicodeString AName, /* out */ System::Rtti::TRttiMember* &AMember);
	HIDESBASE bool __fastcall TryGetMethod(void * ACodeAddress, /* out */ System::Rtti::TRttiMethod* &AMethod)/* overload */;
	HIDESBASE bool __fastcall TryGetMethod(const System::UnicodeString AName, /* out */ System::Rtti::TRttiMethod* &AMethod)/* overload */;
	HIDESBASE bool __fastcall TryGetProperty(const System::UnicodeString AName, /* out */ System::Rtti::TRttiProperty* &AProperty);
	HIDESBASE bool __fastcall TryGetType(/* out */ System::Rtti::TRttiType* &AType);
public:
	/* TObject.Create */ inline __fastcall TArrayHelper(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TArrayHelper(void) { }
	
};

#pragma pack(pop)

typedef System::TObject* *PObject;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE GUID ObjCastGUID;
extern DELPHI_PACKAGE bool __fastcall FindType(const System::UnicodeString AName, /* out */ System::Rtti::TRttiType* &AType)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FindType(const GUID &AGuid, /* out */ System::Rtti::TRttiType* &AType)/* overload */;
extern DELPHI_PACKAGE System::Rtti::TRttiType* __fastcall GetRttiType(System::TClass AClass)/* overload */;
extern DELPHI_PACKAGE System::Rtti::TRttiType* __fastcall GetRttiType(System::Typinfo::PTypeInfo ATypeInfo)/* overload */;
extern DELPHI_PACKAGE System::DynamicArray<System::Rtti::TRttiType*> __fastcall GetRttiTypes(void);
extern DELPHI_PACKAGE bool __fastcall IsClassCovariantTo(System::TClass ThisClass, System::TClass OtherClass);
extern DELPHI_PACKAGE bool __fastcall IsTypeCovariantTo(System::Typinfo::PTypeInfo ThisType, System::Typinfo::PTypeInfo OtherType);
extern DELPHI_PACKAGE bool __fastcall TryGetRttiType(System::TClass AClass, /* out */ System::Rtti::TRttiType* &AType)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryGetRttiType(System::Typinfo::PTypeInfo ATypeInfo, /* out */ System::Rtti::TRttiType* &AType)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall StripUnitName(const System::UnicodeString s);
extern DELPHI_PACKAGE bool __fastcall Supports(const System::Rtti::TValue &Instance, const GUID &IID, /* out */ void *Intf)/* overload */;
extern DELPHI_PACKAGE int __fastcall CompareValue(const System::Rtti::TValue &Left, const System::Rtti::TValue &Right);
extern DELPHI_PACKAGE bool __fastcall SameValue(const System::Rtti::TValue &Left, const System::Rtti::TValue &Right);
}	/* namespace Utils */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_UTILS)
using namespace Dunitx::Utils;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_UtilsHPP
