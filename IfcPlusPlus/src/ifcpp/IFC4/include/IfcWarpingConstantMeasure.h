/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcDerivedMeasureValue.h"

// TYPE IfcWarpingConstantMeasure = REAL;
class IFCPP_EXPORT IfcWarpingConstantMeasure : public IfcDerivedMeasureValue
{
public:
	IfcWarpingConstantMeasure();
	IfcWarpingConstantMeasure( double value );
	~IfcWarpingConstantMeasure();
	virtual const char* className() const { return "IfcWarpingConstantMeasure"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcWarpingConstantMeasure> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	double m_value;
};

