/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcTendonTypeEnum = ENUMERATION OF	(BAR	,COATED	,STRAND	,WIRE	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcTendonTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcTendonTypeEnumEnum
	{
		ENUM_BAR,
		ENUM_COATED,
		ENUM_STRAND,
		ENUM_WIRE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcTendonTypeEnum();
	IfcTendonTypeEnum( IfcTendonTypeEnumEnum e ) { m_enum = e; }
	~IfcTendonTypeEnum();
	virtual const char* className() const { return "IfcTendonTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTendonTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcTendonTypeEnumEnum m_enum;
};

