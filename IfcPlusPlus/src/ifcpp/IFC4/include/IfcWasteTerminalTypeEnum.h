/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcWasteTerminalTypeEnum = ENUMERATION OF	(FLOORTRAP	,FLOORWASTE	,GULLYSUMP	,GULLYTRAP	,ROOFDRAIN	,WASTEDISPOSALUNIT	,WASTETRAP	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcWasteTerminalTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcWasteTerminalTypeEnumEnum
	{
		ENUM_FLOORTRAP,
		ENUM_FLOORWASTE,
		ENUM_GULLYSUMP,
		ENUM_GULLYTRAP,
		ENUM_ROOFDRAIN,
		ENUM_WASTEDISPOSALUNIT,
		ENUM_WASTETRAP,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcWasteTerminalTypeEnum();
	IfcWasteTerminalTypeEnum( IfcWasteTerminalTypeEnumEnum e ) { m_enum = e; }
	~IfcWasteTerminalTypeEnum();
	virtual const char* className() const { return "IfcWasteTerminalTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcWasteTerminalTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcWasteTerminalTypeEnumEnum m_enum;
};

