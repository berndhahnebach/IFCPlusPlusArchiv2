/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcCsgPrimitive3D.h"
class IFCPP_EXPORT IfcPositiveLengthMeasure;
//ENTITY
class IFCPP_EXPORT IfcRightCircularCone : public IfcCsgPrimitive3D
{ 
public:
	IfcRightCircularCone();
	IfcRightCircularCone( int id );
	~IfcRightCircularCone();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 3; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRightCircularCone"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcCsgPrimitive3D -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcAxis2Placement3D>							m_Position;

	// IfcRightCircularCone -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcPositiveLengthMeasure>					m_Height;
	shared_ptr<IfcPositiveLengthMeasure>					m_BottomRadius;
};

