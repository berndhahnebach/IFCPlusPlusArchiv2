/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcRectangleProfileDef.h"
class IFCPP_EXPORT IfcPositiveLengthMeasure;
class IFCPP_EXPORT IfcNonNegativeLengthMeasure;
//ENTITY
class IFCPP_EXPORT IfcRectangleHollowProfileDef : public IfcRectangleProfileDef
{ 
public:
	IfcRectangleHollowProfileDef();
	IfcRectangleHollowProfileDef( int id );
	~IfcRectangleHollowProfileDef();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 8; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRectangleHollowProfileDef"; }
	virtual const std::wstring toString() const;


	// IfcProfileDef -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcProfileTypeEnum>								m_ProfileType;
	//  shared_ptr<IfcLabel>										m_ProfileName;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReference_inverse;
	//  std::vector<weak_ptr<IfcProfileProperties> >				m_HasProperties_inverse;

	// IfcParameterizedProfileDef -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcAxis2Placement2D>								m_Position;					//optional

	// IfcRectangleProfileDef -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcPositiveLengthMeasure>						m_XDim;
	//  shared_ptr<IfcPositiveLengthMeasure>						m_YDim;

	// IfcRectangleHollowProfileDef -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcPositiveLengthMeasure>						m_WallThickness;
	shared_ptr<IfcNonNegativeLengthMeasure>						m_InnerFilletRadius;		//optional
	shared_ptr<IfcNonNegativeLengthMeasure>						m_OuterFilletRadius;		//optional
};

