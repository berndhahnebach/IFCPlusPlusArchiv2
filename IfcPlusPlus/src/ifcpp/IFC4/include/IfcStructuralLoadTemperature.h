/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcStructuralLoadStatic.h"
class IFCPP_EXPORT IfcThermodynamicTemperatureMeasure;
//ENTITY
class IFCPP_EXPORT IfcStructuralLoadTemperature : public IfcStructuralLoadStatic
{ 
public:
	IfcStructuralLoadTemperature();
	IfcStructuralLoadTemperature( int id );
	~IfcStructuralLoadTemperature();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcStructuralLoadTemperature"; }
	virtual const std::wstring toString() const;


	// IfcStructuralLoad -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>							m_Name;						//optional

	// IfcStructuralLoadOrResult -----------------------------------------------------------

	// IfcStructuralLoadStatic -----------------------------------------------------------

	// IfcStructuralLoadTemperature -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcThermodynamicTemperatureMeasure>	m_DeltaTConstant;			//optional
	shared_ptr<IfcThermodynamicTemperatureMeasure>	m_DeltaTY;					//optional
	shared_ptr<IfcThermodynamicTemperatureMeasure>	m_DeltaTZ;					//optional
};

