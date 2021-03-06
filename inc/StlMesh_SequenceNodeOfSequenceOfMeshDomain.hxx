// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlMesh_SequenceNodeOfSequenceOfMeshDomain_HeaderFile
#define _StlMesh_SequenceNodeOfSequenceOfMeshDomain_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StlMesh_SequenceNodeOfSequenceOfMeshDomain.hxx>

#include <Handle_StlMesh_MeshDomain.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class StlMesh_MeshDomain;
class StlMesh_SequenceOfMeshDomain;



class StlMesh_SequenceNodeOfSequenceOfMeshDomain : public TCollection_SeqNode
{

public:

  
    StlMesh_SequenceNodeOfSequenceOfMeshDomain(const Handle(StlMesh_MeshDomain)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(StlMesh_MeshDomain)& Value()  const;




  DEFINE_STANDARD_RTTI(StlMesh_SequenceNodeOfSequenceOfMeshDomain)

protected:




private: 


  Handle(StlMesh_MeshDomain) myValue;


};

#define SeqItem Handle(StlMesh_MeshDomain)
#define SeqItem_hxx <StlMesh_MeshDomain.hxx>
#define TCollection_SequenceNode StlMesh_SequenceNodeOfSequenceOfMeshDomain
#define TCollection_SequenceNode_hxx <StlMesh_SequenceNodeOfSequenceOfMeshDomain.hxx>
#define Handle_TCollection_SequenceNode Handle_StlMesh_SequenceNodeOfSequenceOfMeshDomain
#define TCollection_SequenceNode_Type_() StlMesh_SequenceNodeOfSequenceOfMeshDomain_Type_()
#define TCollection_Sequence StlMesh_SequenceOfMeshDomain
#define TCollection_Sequence_hxx <StlMesh_SequenceOfMeshDomain.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _StlMesh_SequenceNodeOfSequenceOfMeshDomain_HeaderFile
