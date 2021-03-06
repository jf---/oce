// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_RealArray_HeaderFile
#define _PDataStd_RealArray_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PDataStd_RealArray.hxx>

#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Handle_PColStd_HArray1OfReal.hxx>
#include <PDF_Attribute.hxx>
class PColStd_HArray1OfReal;


class PDataStd_RealArray : public PDF_Attribute
{

public:

  
  Standard_EXPORT PDataStd_RealArray();
  
  Standard_EXPORT   void Init (const Standard_Integer lower, const Standard_Integer upper) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Standard_Real Value) ;
  
  Standard_EXPORT   Standard_Real Value (const Standard_Integer Index)  const;
  
  Standard_EXPORT   Standard_Integer Lower()  const;
  
  Standard_EXPORT   Standard_Integer Upper()  const;

PDataStd_RealArray(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray1OfReal) _CSFDB_GetPDataStd_RealArraymyValue() const { return myValue; }
    void _CSFDB_SetPDataStd_RealArraymyValue(const Handle(PColStd_HArray1OfReal)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PDataStd_RealArray)

protected:




private: 


  Handle(PColStd_HArray1OfReal) myValue;


};







#endif // _PDataStd_RealArray_HeaderFile
