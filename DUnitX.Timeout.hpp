// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DUnitX.Timeout.pas' rev: 28.00 (Windows)

#ifndef Dunitx_TimeoutHPP
#define Dunitx_TimeoutHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dunitx
{
namespace Timeout
{
//-- type declarations -------------------------------------------------------
__interface ITimeout;
typedef System::DelphiInterface<ITimeout> _di_ITimeout;
__interface  INTERFACE_UUID("{0A380F7B-9CEE-4FD7-9D86-60CE05B97C1A}") ITimeout  : public System::IInterface 
{
	
public:
	virtual void __fastcall Stop(void) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE _di_ITimeout __fastcall InitialiseTimeout(const unsigned ATime);
}	/* namespace Timeout */
}	/* namespace Dunitx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX_TIMEOUT)
using namespace Dunitx::Timeout;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DUNITX)
using namespace Dunitx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dunitx_TimeoutHPP
