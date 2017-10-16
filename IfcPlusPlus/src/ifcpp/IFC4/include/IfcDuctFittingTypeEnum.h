/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcDuctFittingTypeEnum = ENUMERATION OF	(BEND	,CONNECTOR	,ENTRY	,EXIT	,JUNCTION	,OBSTRUCTION	,TRANSITION	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcDuctFittingTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcDuctFittingTypeEnumEnum
	{
		ENUM_BEND,
		ENUM_CONNECTOR,
		ENUM_ENTRY,
		ENUM_EXIT,
		ENUM_JUNCTION,
		ENUM_OBSTRUCTION,
		ENUM_TRANSITION,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcDuctFittingTypeEnum();
	IfcDuctFittingTypeEnum( IfcDuctFittingTypeEnumEnum e ) { m_enum = e; }
	~IfcDuctFittingTypeEnum();
	virtual const char* className() const { return "IfcDuctFittingTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcDuctFittingTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcDuctFittingTypeEnumEnum m_enum;
};

