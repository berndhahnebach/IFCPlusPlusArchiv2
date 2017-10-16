/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcActionTypeEnum = ENUMERATION OF	(PERMANENT_G	,VARIABLE_Q	,EXTRAORDINARY_A	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcActionTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcActionTypeEnumEnum
	{
		ENUM_PERMANENT_G,
		ENUM_VARIABLE_Q,
		ENUM_EXTRAORDINARY_A,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcActionTypeEnum();
	IfcActionTypeEnum( IfcActionTypeEnumEnum e ) { m_enum = e; }
	~IfcActionTypeEnum();
	virtual const char* className() const { return "IfcActionTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcActionTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcActionTypeEnumEnum m_enum;
};

