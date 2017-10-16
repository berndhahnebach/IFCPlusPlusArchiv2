/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcSpatialZoneTypeEnum = ENUMERATION OF	(CONSTRUCTION	,FIRESAFETY	,LIGHTING	,OCCUPANCY	,SECURITY	,THERMAL	,TRANSPORT	,VENTILATION	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcSpatialZoneTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcSpatialZoneTypeEnumEnum
	{
		ENUM_CONSTRUCTION,
		ENUM_FIRESAFETY,
		ENUM_LIGHTING,
		ENUM_OCCUPANCY,
		ENUM_SECURITY,
		ENUM_THERMAL,
		ENUM_TRANSPORT,
		ENUM_VENTILATION,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcSpatialZoneTypeEnum();
	IfcSpatialZoneTypeEnum( IfcSpatialZoneTypeEnumEnum e ) { m_enum = e; }
	~IfcSpatialZoneTypeEnum();
	virtual const char* className() const { return "IfcSpatialZoneTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSpatialZoneTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcSpatialZoneTypeEnumEnum m_enum;
};

