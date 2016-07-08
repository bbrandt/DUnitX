// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.CategoryExpression.pas' rev: 28.00 (Windows)

#ifndef Dunitx_CategoryexpressionHPP
#define Dunitx_CategoryexpressionHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DUnitX.Extensibility.hpp>	// Pascal unit
#include <DUnitX.Filters.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Categoryexpression
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TCategoryExpression;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TCategoryExpression : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FText;
	int FNext;
	System::UnicodeString FToken;
	Dunitx::Filters::_di_ITestFilter FFilter;
	
protected:
	Dunitx::Filters::_di_ITestFilter __fastcall GetTerm(void);
	Dunitx::Filters::_di_ITestFilter __fastcall GetExpression(void);
	Dunitx::Filters::_di_ICategoryFilter __fastcall GetCategoryFilter(void);
	Dunitx::Filters::_di_ITestFilter __fastcall GetPrimitive(void);
	System::UnicodeString __fastcall GetToken(void);
	bool __fastcall NextIsOperator(void);
	void __fastcall SkipWhiteSpace(void);
	bool __fastcall EndOfText(void);
	Dunitx::Filters::_di_ITestFilter __fastcall GetFilter(void);
	__fastcall TCategoryExpression(const System::UnicodeString text);
	
public:
	__classmethod Dunitx::Filters::_di_ITestFilter __fastcall CreateFilter(const System::UnicodeString text);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCategoryExpression(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Categoryexpression */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_CATEGORYEXPRESSION)
using namespace Dunitx::Categoryexpression;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_CategoryexpressionHPP
