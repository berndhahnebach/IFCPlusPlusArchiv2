/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcResourceObjectSelect.h"
class IFCPP_EXPORT IfcLabel;
class IFCPP_EXPORT IfcText;
class IFCPP_EXPORT IfcExternalReferenceRelationship;
class IFCPP_EXPORT IfcPhysicalComplexQuantity;
//ENTITY
class IFCPP_EXPORT IfcPhysicalQuantity : virtual public IfcResourceObjectSelect, public IfcPPEntity
{ 
public:
	IfcPhysicalQuantity();
	IfcPhysicalQuantity( int id );
	~IfcPhysicalQuantity();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcPhysicalQuantity"; }
	virtual const std::wstring toString() const;


	// IfcPhysicalQuantity -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLabel>										m_Name;
	shared_ptr<IfcText>											m_Description;				//optional
	// inverse attributes:
	std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;
	std::vector<weak_ptr<IfcPhysicalComplexQuantity> >			m_PartOfComplex_inverse;
};

