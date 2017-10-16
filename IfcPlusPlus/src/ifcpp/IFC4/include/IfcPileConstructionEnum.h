/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcPileConstructionEnum = ENUMERATION OF	(CAST_IN_PLACE	,COMPOSITE	,PRECAST_CONCRETE	,PREFAB_STEEL	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcPileConstructionEnum : virtual public IfcPPObject
{
public:
	enum IfcPileConstructionEnumEnum
	{
		ENUM_CAST_IN_PLACE,
		ENUM_COMPOSITE,
		ENUM_PRECAST_CONCRETE,
		ENUM_PREFAB_STEEL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcPileConstructionEnum();
	IfcPileConstructionEnum( IfcPileConstructionEnumEnum e ) { m_enum = e; }
	~IfcPileConstructionEnum();
	virtual const char* className() const { return "IfcPileConstructionEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcPileConstructionEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcPileConstructionEnumEnum m_enum;
};

