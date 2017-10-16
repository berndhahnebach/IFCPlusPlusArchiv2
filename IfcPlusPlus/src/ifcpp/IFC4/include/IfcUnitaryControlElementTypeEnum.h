/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcUnitaryControlElementTypeEnum = ENUMERATION OF	(ALARMPANEL	,CONTROLPANEL	,GASDETECTIONPANEL	,INDICATORPANEL	,MIMICPANEL	,HUMIDISTAT	,THERMOSTAT	,WEATHERSTATION	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcUnitaryControlElementTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcUnitaryControlElementTypeEnumEnum
	{
		ENUM_ALARMPANEL,
		ENUM_CONTROLPANEL,
		ENUM_GASDETECTIONPANEL,
		ENUM_INDICATORPANEL,
		ENUM_MIMICPANEL,
		ENUM_HUMIDISTAT,
		ENUM_THERMOSTAT,
		ENUM_WEATHERSTATION,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcUnitaryControlElementTypeEnum();
	IfcUnitaryControlElementTypeEnum( IfcUnitaryControlElementTypeEnumEnum e ) { m_enum = e; }
	~IfcUnitaryControlElementTypeEnum();
	virtual const char* className() const { return "IfcUnitaryControlElementTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcUnitaryControlElementTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcUnitaryControlElementTypeEnumEnum m_enum;
};

