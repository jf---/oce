// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_RepItemGroup_HeaderFile
#define _StepAP214_RepItemGroup_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepAP214_RepItemGroup.hxx>

#include <Handle_StepRepr_RepresentationItem.hxx>
#include <StepBasic_Group.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Standard_Boolean.hxx>
class StepRepr_RepresentationItem;
class TCollection_HAsciiString;


//! Representation of STEP entity RepItemGroup
class StepAP214_RepItemGroup : public StepBasic_Group
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepAP214_RepItemGroup();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aGroup_Name, const Standard_Boolean hasGroup_Description, const Handle(TCollection_HAsciiString)& aGroup_Description, const Handle(TCollection_HAsciiString)& aRepresentationItem_Name) ;
  
  //! Returns data for supertype RepresentationItem
  Standard_EXPORT   Handle(StepRepr_RepresentationItem) RepresentationItem()  const;
  
  //! Set data for supertype RepresentationItem
  Standard_EXPORT   void SetRepresentationItem (const Handle(StepRepr_RepresentationItem)& RepresentationItem) ;




  DEFINE_STANDARD_RTTI(StepAP214_RepItemGroup)

protected:




private: 


  Handle(StepRepr_RepresentationItem) theRepresentationItem;


};







#endif // _StepAP214_RepItemGroup_HeaderFile
