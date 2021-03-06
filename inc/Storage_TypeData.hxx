// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_TypeData_HeaderFile
#define _Storage_TypeData_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Storage_TypeData.hxx>

#include <Storage_PType.hxx>
#include <Storage_Error.hxx>
#include <TCollection_AsciiString.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
class Standard_NoSuchObject;
class Storage_Schema;
class TCollection_AsciiString;
class TColStd_HSequenceOfAsciiString;



class Storage_TypeData : public MMgt_TShared
{

public:

  
  Standard_EXPORT Storage_TypeData();
  
  Standard_EXPORT   Standard_Integer NumberOfTypes()  const;
  
  Standard_EXPORT   Standard_Boolean IsType (const TCollection_AsciiString& aName)  const;
  
  Standard_EXPORT   Handle(TColStd_HSequenceOfAsciiString) Types()  const;
  
  Standard_EXPORT   Storage_Error ErrorStatus()  const;
  
  Standard_EXPORT   TCollection_AsciiString ErrorStatusExtension()  const;
  
  Standard_EXPORT   void ClearErrorStatus() ;
  
  Standard_EXPORT   void Clear() ;


friend class Storage_Schema;


  DEFINE_STANDARD_RTTI(Storage_TypeData)

protected:




private: 

  
  //! add a type to the list
  Standard_EXPORT   void AddType (const TCollection_AsciiString& aName, const Standard_Integer aTypeNum) ;
  
  //! returns the name of the type with number <aTypeNum>
  Standard_EXPORT   TCollection_AsciiString Type (const Standard_Integer aTypeNum)  const;
  
  //! returns the name of the type with number <aTypeNum>
  Standard_EXPORT   Standard_Integer Type (const TCollection_AsciiString& aTypeName)  const;
  
  Standard_EXPORT   void SetErrorStatus (const Storage_Error anError) ;
  
  Standard_EXPORT   void SetErrorStatusExtension (const TCollection_AsciiString& anErrorExt) ;

  Storage_PType myPt;
  Storage_Error myErrorStatus;
  TCollection_AsciiString myErrorStatusExt;


};







#endif // _Storage_TypeData_HeaderFile
