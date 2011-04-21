// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_EditValue_HeaderFile
#define _IFSelect_EditValue_HeaderFile

//! Indicates whether there will <br>
//! be information on warnings as well as on failures. The <br>
//! terms of this enumeration have the following semantics: <br>
//! - IFSelect_FailOnly gives information on failures only <br>
//! - IFSelect_FailAndWarn gives information on both <br>
//!   failures and warnings. used to pilot PrintCheckList <br>
enum IFSelect_EditValue {
IFSelect_Optional,
IFSelect_Editable,
IFSelect_EditProtected,
IFSelect_EditComputed,
IFSelect_EditRead,
IFSelect_EditDynamic
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif