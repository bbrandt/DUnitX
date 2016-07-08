// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Filters.pas' rev: 28.00 (Windows)

#ifndef Dunitx_FiltersHPP
#define Dunitx_FiltersHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.Generics.Collections.hpp>	// Pascal unit
#include <DUnitX.Extensibility.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Generics.Defaults.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Filters
{
//-- type declarations -------------------------------------------------------
__interface ITestFilter;
typedef System::DelphiInterface<ITestFilter> _di_ITestFilter;
__interface  INTERFACE_UUID("{FE8D59F6-E47A-4F05-BA15-0471BFCCA004}") ITestFilter  : public System::IInterface 
{
	
public:
	virtual bool __fastcall IsEmpty(void) = 0 ;
	virtual bool __fastcall Match(const Dunitx::Extensibility::_di_ITest test) = 0 ;
};

__interface INameFilter;
typedef System::DelphiInterface<INameFilter> _di_INameFilter;
__interface  INTERFACE_UUID("{74E76CBC-6CC3-4393-A66C-09A14974B7EB}") INameFilter  : public ITestFilter 
{
	
public:
	virtual void __fastcall Add(const System::UnicodeString name) = 0 /* overload */;
	virtual void __fastcall Add(const System::DynamicArray<System::UnicodeString> names) = 0 /* overload */;
};

__interface IAndFilter;
typedef System::DelphiInterface<IAndFilter> _di_IAndFilter;
__interface  INTERFACE_UUID("{EE95054F-06DC-47F7-BB25-77F5162A26FD}") IAndFilter  : public ITestFilter 
{
	
public:
	virtual void __fastcall Add(const _di_ITestFilter filter) = 0 /* overload */;
	virtual void __fastcall Add(const System::DynamicArray<_di_ITestFilter> filters) = 0 /* overload */;
	virtual System::Generics::Collections::TList__1<_di_ITestFilter>* __fastcall Filters(void) = 0 ;
};

__interface IOrFilter;
typedef System::DelphiInterface<IOrFilter> _di_IOrFilter;
__interface  INTERFACE_UUID("{617B3F85-BF00-4F1E-9454-180618E32868}") IOrFilter  : public ITestFilter 
{
	
public:
	virtual void __fastcall Add(const _di_ITestFilter filter) = 0 /* overload */;
	virtual void __fastcall Add(const System::DynamicArray<_di_ITestFilter> filters) = 0 /* overload */;
	virtual System::Generics::Collections::TList__1<_di_ITestFilter>* __fastcall Filters(void) = 0 ;
};

__interface INotFilter;
typedef System::DelphiInterface<INotFilter> _di_INotFilter;
__interface  INTERFACE_UUID("{4F0C6588-A98A-47C4-8CD6-2AF62BBBB7E5}") INotFilter  : public ITestFilter 
{
	
public:
	virtual _di_ITestFilter __fastcall GetBaseFilter(void) = 0 ;
	virtual bool __fastcall GetTopLevel(void) = 0 ;
	virtual void __fastcall SetTopLevel(const bool value) = 0 ;
	__property _di_ITestFilter BaseFilter = {read=GetBaseFilter};
	__property bool TopLevel = {read=GetTopLevel, write=SetTopLevel};
};

__interface ICategoryFilter;
typedef System::DelphiInterface<ICategoryFilter> _di_ICategoryFilter;
__interface  INTERFACE_UUID("{3D11F89D-9E39-4E03-80AB-F1AC9C6F3065}") ICategoryFilter  : public ITestFilter 
{
	
public:
	virtual void __fastcall Add(const System::UnicodeString name) = 0 /* overload */;
	virtual void __fastcall Add(const System::DynamicArray<System::UnicodeString> names) = 0 /* overload */;
	virtual System::Generics::Collections::TList__1<System::UnicodeString>* __fastcall Categories(void) = 0 ;
};

class DELPHICLASS TTestFilter;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTestFilter : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	bool __fastcall IsEmpty(void);
	virtual bool __fastcall Match(const Dunitx::Extensibility::_di_ITest test) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TTestFilter(void) : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTestFilter(void) { }
	
private:
	void *__ITestFilter;	// ITestFilter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FE8D59F6-E47A-4F05-BA15-0471BFCCA004}
	operator _di_ITestFilter()
	{
		_di_ITestFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ITestFilter*(void) { return (ITestFilter*)&__ITestFilter; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TEmptyFilter;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TEmptyFilter : public TTestFilter
{
	typedef TTestFilter inherited;
	
protected:
	virtual bool __fastcall Match(const Dunitx::Extensibility::_di_ITest test);
public:
	/* TObject.Create */ inline __fastcall TEmptyFilter(void) : TTestFilter() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TEmptyFilter(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TNameFilter;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TNameFilter : public TTestFilter
{
	typedef TTestFilter inherited;
	
private:
	System::Generics::Collections::TList__1<System::UnicodeString>* FNames;
	
protected:
	void __fastcall Add(const System::UnicodeString name)/* overload */;
	void __fastcall Add(const System::DynamicArray<System::UnicodeString> names)/* overload */;
	void __fastcall Add(System::Classes::TStrings* const names)/* overload */;
	virtual bool __fastcall Match(const Dunitx::Extensibility::_di_ITest test);
	
public:
	__fastcall TNameFilter(void)/* overload */;
	__fastcall TNameFilter(const System::UnicodeString AName)/* overload */;
	__fastcall TNameFilter(const System::DynamicArray<System::UnicodeString> ANames)/* overload */;
	__fastcall TNameFilter(System::Classes::TStrings* const ANames)/* overload */;
	__fastcall virtual ~TNameFilter(void);
private:
	void *__INameFilter;	// INameFilter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {74E76CBC-6CC3-4393-A66C-09A14974B7EB}
	operator _di_INameFilter()
	{
		_di_INameFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator INameFilter*(void) { return (INameFilter*)&__INameFilter; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FE8D59F6-E47A-4F05-BA15-0471BFCCA004}
	operator _di_ITestFilter()
	{
		_di_ITestFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ITestFilter*(void) { return (ITestFilter*)&__INameFilter; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TCategoryFilter;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TCategoryFilter : public TNameFilter
{
	typedef TNameFilter inherited;
	
protected:
	virtual bool __fastcall Match(const Dunitx::Extensibility::_di_ITest test);
	System::Generics::Collections::TList__1<System::UnicodeString>* __fastcall Categories(void);
public:
	/* TNameFilter.Create */ inline __fastcall TCategoryFilter(void)/* overload */ : TNameFilter() { }
	/* TNameFilter.Create */ inline __fastcall TCategoryFilter(const System::UnicodeString AName)/* overload */ : TNameFilter(AName) { }
	/* TNameFilter.Create */ inline __fastcall TCategoryFilter(const System::DynamicArray<System::UnicodeString> ANames)/* overload */ : TNameFilter(ANames) { }
	/* TNameFilter.Create */ inline __fastcall TCategoryFilter(System::Classes::TStrings* const ANames)/* overload */ : TNameFilter(ANames) { }
	/* TNameFilter.Destroy */ inline __fastcall virtual ~TCategoryFilter(void) { }
	
private:
	void *__ICategoryFilter;	// ICategoryFilter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3D11F89D-9E39-4E03-80AB-F1AC9C6F3065}
	operator _di_ICategoryFilter()
	{
		_di_ICategoryFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ICategoryFilter*(void) { return (ICategoryFilter*)&__ICategoryFilter; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FE8D59F6-E47A-4F05-BA15-0471BFCCA004}
	operator _di_ITestFilter()
	{
		_di_ITestFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ITestFilter*(void) { return (ITestFilter*)&__ICategoryFilter; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TAndFilter;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAndFilter : public TTestFilter
{
	typedef TTestFilter inherited;
	
private:
	System::Generics::Collections::TList__1<_di_ITestFilter>* FFilters;
	
protected:
	void __fastcall Add(const _di_ITestFilter filter)/* overload */;
	void __fastcall Add(const System::DynamicArray<_di_ITestFilter> filters)/* overload */;
	virtual bool __fastcall Match(const Dunitx::Extensibility::_di_ITest test);
	System::Generics::Collections::TList__1<_di_ITestFilter>* __fastcall Filters(void);
	
public:
	__fastcall TAndFilter(const _di_ITestFilter filter)/* overload */;
	__fastcall TAndFilter(const System::DynamicArray<_di_ITestFilter> filters)/* overload */;
	__fastcall virtual ~TAndFilter(void);
private:
	void *__IAndFilter;	// IAndFilter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EE95054F-06DC-47F7-BB25-77F5162A26FD}
	operator _di_IAndFilter()
	{
		_di_IAndFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IAndFilter*(void) { return (IAndFilter*)&__IAndFilter; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FE8D59F6-E47A-4F05-BA15-0471BFCCA004}
	operator _di_ITestFilter()
	{
		_di_ITestFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ITestFilter*(void) { return (ITestFilter*)&__IAndFilter; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TOrFilter;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOrFilter : public TTestFilter
{
	typedef TTestFilter inherited;
	
private:
	System::Generics::Collections::TList__1<_di_ITestFilter>* FFilters;
	
protected:
	void __fastcall Add(const _di_ITestFilter filter)/* overload */;
	void __fastcall Add(const System::DynamicArray<_di_ITestFilter> filters)/* overload */;
	virtual bool __fastcall Match(const Dunitx::Extensibility::_di_ITest test);
	System::Generics::Collections::TList__1<_di_ITestFilter>* __fastcall Filters(void);
	
public:
	__fastcall TOrFilter(const _di_ITestFilter filter)/* overload */;
	__fastcall TOrFilter(const System::DynamicArray<_di_ITestFilter> filters)/* overload */;
	__fastcall virtual ~TOrFilter(void);
private:
	void *__IOrFilter;	// IOrFilter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {617B3F85-BF00-4F1E-9454-180618E32868}
	operator _di_IOrFilter()
	{
		_di_IOrFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IOrFilter*(void) { return (IOrFilter*)&__IOrFilter; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FE8D59F6-E47A-4F05-BA15-0471BFCCA004}
	operator _di_ITestFilter()
	{
		_di_ITestFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ITestFilter*(void) { return (ITestFilter*)&__IOrFilter; }
	#endif
	
};

#pragma pack(pop)

class DELPHICLASS TNotFilter;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TNotFilter : public TTestFilter
{
	typedef TTestFilter inherited;
	
private:
	bool FTopLevel;
	_di_ITestFilter FBaseFilter;
	
protected:
	_di_ITestFilter __fastcall GetBaseFilter(void);
	bool __fastcall GetTopLevel(void);
	void __fastcall SetTopLevel(const bool value);
	virtual bool __fastcall Match(const Dunitx::Extensibility::_di_ITest test);
	
public:
	__fastcall TNotFilter(const _di_ITestFilter baseFilter)/* overload */;
	__fastcall TNotFilter(const _di_ITestFilter baseFilter, const bool topLevel)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TNotFilter(void) { }
	
private:
	void *__INotFilter;	// INotFilter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4F0C6588-A98A-47C4-8CD6-2AF62BBBB7E5}
	operator _di_INotFilter()
	{
		_di_INotFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator INotFilter*(void) { return (INotFilter*)&__INotFilter; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FE8D59F6-E47A-4F05-BA15-0471BFCCA004}
	operator _di_ITestFilter()
	{
		_di_ITestFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ITestFilter*(void) { return (ITestFilter*)&__INotFilter; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Filters */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_FILTERS)
using namespace Dunitx::Filters;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_FiltersHPP
