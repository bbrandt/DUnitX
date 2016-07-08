// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Attributes.pas' rev: 28.00 (Windows)

#ifndef Dunitx_AttributesHPP
#define Dunitx_AttributesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Rtti.hpp>	// Pascal unit
#include <DUnitX.Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Attributes
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TestFixtureAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TestFixtureAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
private:
	System::UnicodeString FName;
	System::UnicodeString FDescription;
	
public:
	__fastcall TestFixtureAttribute(void)/* overload */;
	__fastcall TestFixtureAttribute(const System::UnicodeString AName)/* overload */;
	__fastcall TestFixtureAttribute(const System::UnicodeString AName, const System::UnicodeString ADescription)/* overload */;
	__property System::UnicodeString Name = {read=FName};
	__property System::UnicodeString Description = {read=FDescription};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TestFixtureAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TestInOwnThreadAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TestInOwnThreadAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall TestInOwnThreadAttribute(void) : System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TestInOwnThreadAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS SetupFixtureAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION SetupFixtureAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall SetupFixtureAttribute(void) : System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~SetupFixtureAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS SetupAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION SetupAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall SetupAttribute(void) : System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~SetupAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TearDownAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TearDownAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall TearDownAttribute(void) : System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TearDownAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TearDownFixtureAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TearDownFixtureAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
public:
	/* TObject.Create */ inline __fastcall TearDownFixtureAttribute(void) : System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TearDownFixtureAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS IgnoreMemoryLeaks;
#pragma pack(push,4)
class PASCALIMPLEMENTATION IgnoreMemoryLeaks : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
private:
	bool FIgnoreMemoryLeaks;
	
public:
	__fastcall IgnoreMemoryLeaks(const bool AIgnoreMemoryLeaks);
	__property bool IgnoreLeaks = {read=FIgnoreMemoryLeaks, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~IgnoreMemoryLeaks(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS MaxTimeAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION MaxTimeAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
private:
	unsigned FMaxTime;
	
public:
	__fastcall MaxTimeAttribute(const unsigned AMaxTime);
	__property unsigned MaxTime = {read=FMaxTime, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~MaxTimeAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TestAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TestAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
private:
	bool FEnabled;
	
public:
	__fastcall TestAttribute(void)/* overload */;
	__fastcall TestAttribute(const bool AEnabled)/* overload */;
	__property bool Enabled = {read=FEnabled, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TestAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS CategoryAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION CategoryAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
private:
	System::UnicodeString FCategory;
	
public:
	__fastcall CategoryAttribute(const System::UnicodeString ACategory);
	__property System::UnicodeString Category = {read=FCategory};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~CategoryAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS IgnoreAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION IgnoreAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
private:
	System::UnicodeString FReason;
	
public:
	__fastcall IgnoreAttribute(const System::UnicodeString AReason);
	__property System::UnicodeString Reason = {read=FReason};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~IgnoreAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS RepeatTestAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION RepeatTestAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
private:
	unsigned FCount;
	
public:
	__fastcall RepeatTestAttribute(const unsigned ACount);
	__property unsigned Count = {read=FCount, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~RepeatTestAttribute(void) { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TestCaseInfo
{
public:
	System::UnicodeString Name;
	System::DynamicArray<System::Rtti::TValue> Values;
};


typedef System::DynamicArray<TestCaseInfo> TestCaseInfoArray;

class DELPHICLASS CustomTestCaseAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION CustomTestCaseAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
protected:
	virtual TestCaseInfo __fastcall GetCaseInfo(void) = 0 ;
	
public:
	__property TestCaseInfo CaseInfo = {read=GetCaseInfo};
public:
	/* TObject.Create */ inline __fastcall CustomTestCaseAttribute(void) : System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CustomTestCaseAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS CustomTestCaseSourceAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION CustomTestCaseSourceAttribute : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
protected:
	virtual System::DynamicArray<TestCaseInfo> __fastcall GetCaseInfoArray(void) = 0 ;
	
public:
	__property System::DynamicArray<TestCaseInfo> CaseInfoArray = {read=GetCaseInfoArray};
public:
	/* TObject.Create */ inline __fastcall CustomTestCaseSourceAttribute(void) : System::TCustomAttribute() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CustomTestCaseSourceAttribute(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TestCaseAttribute;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TestCaseAttribute : public CustomTestCaseAttribute
{
	typedef CustomTestCaseAttribute inherited;
	
protected:
	TestCaseInfo FCaseInfo;
	virtual TestCaseInfo __fastcall GetCaseInfo(void);
	System::UnicodeString __fastcall GetName(void);
	System::DynamicArray<System::Rtti::TValue> __fastcall GetValues(void);
	
public:
	__fastcall TestCaseAttribute(const System::UnicodeString ACaseName, const System::UnicodeString AValues, const System::UnicodeString ASeparator)/* overload */;
	__property System::UnicodeString Name = {read=GetName};
	__property System::DynamicArray<System::Rtti::TValue> Values = {read=GetValues};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TestCaseAttribute(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Attributes */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_ATTRIBUTES)
using namespace Dunitx::Attributes;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_AttributesHPP
