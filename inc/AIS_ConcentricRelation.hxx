// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_ConcentricRelation_HeaderFile
#define _AIS_ConcentricRelation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_AIS_ConcentricRelation.hxx>

#include <gp_Pnt.hxx>
#include <Standard_Real.hxx>
#include <gp_Dir.hxx>
#include <AIS_Relation.hxx>
#include <Handle_Geom_Plane.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Prs3d_Projector.hxx>
#include <Handle_Geom_Transformation.hxx>
#include <Handle_SelectMgr_Selection.hxx>
class TopoDS_Shape;
class Geom_Plane;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class SelectMgr_Selection;


//! A framework to define a constraint by a relation of
//! concentricity between two or more interactive datums.
//! The display of this constraint is also defined.
//! A plane is used to create an axis along which the
//! relation of concentricity can be extended.
class AIS_ConcentricRelation : public AIS_Relation
{

public:

  
  //! Constructs the display object for concentric relations
  //! between shapes.
  //! This object is defined by the two shapes, aFShape
  //! and aSShape and the plane aPlane.
  //! aPlane is provided to create an axis along which the
  //! relation of concentricity can be extended.
  Standard_EXPORT AIS_ConcentricRelation(const TopoDS_Shape& aFShape, const TopoDS_Shape& aSShape, const Handle(Geom_Plane)& aPlane);
  
  //! computes the presentation according to a point of view
  //! given by <aProjector>.
  //! To be Used when the associated degenerated Presentations
  //! have been transformed by <aTrsf> which is not a Pure
  //! Translation. The HLR Prs can't be deducted automatically
  //! WARNING :<aTrsf> must be applied
  //! to the object to display before computation  !!!
  Standard_EXPORT virtual   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation) ;




  DEFINE_STANDARD_RTTI(AIS_ConcentricRelation)

protected:




private: 

  
  Standard_EXPORT   void Compute (const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   void Compute (const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   void ComputeTwoEdgesConcentric (const Handle(Prs3d_Presentation)& aPresentationManager) ;
  
  Standard_EXPORT   void ComputeEdgeVertexConcentric (const Handle(Prs3d_Presentation)& aPresentationManager) ;
  
  Standard_EXPORT   void ComputeTwoVerticesConcentric (const Handle(Prs3d_Presentation)& aPresentationManager) ;
  
  Standard_EXPORT virtual   void ComputeSelection (const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) ;

  gp_Pnt myCenter;
  Standard_Real myRad;
  gp_Dir myDir;
  gp_Pnt myPnt;


};







#endif // _AIS_ConcentricRelation_HeaderFile
