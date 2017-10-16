/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcProfileTypeEnum = ENUMERATION OF	(CURVE	,AREA);
class IFCPP_EXPORT IfcProfileTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcProfileTypeEnumEnum
	{
		ENUM_CURVE,
		ENUM_AREA
	};

	IfcProfileTypeEnum();
	IfcProfileTypeEnum( IfcProfileTypeEnumEnum e ) { m_enum = e; }
	~IfcProfileTypeEnum();
	virtual const char* className() const { return "IfcProfileTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcProfileTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcProfileTypeEnumEnum m_enum;
};

