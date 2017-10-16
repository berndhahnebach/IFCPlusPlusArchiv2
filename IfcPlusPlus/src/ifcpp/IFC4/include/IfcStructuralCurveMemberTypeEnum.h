/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcStructuralCurveMemberTypeEnum = ENUMERATION OF	(RIGID_JOINED_MEMBER	,PIN_JOINED_MEMBER	,CABLE	,TENSION_MEMBER	,COMPRESSION_MEMBER	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcStructuralCurveMemberTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcStructuralCurveMemberTypeEnumEnum
	{
		ENUM_RIGID_JOINED_MEMBER,
		ENUM_PIN_JOINED_MEMBER,
		ENUM_CABLE,
		ENUM_TENSION_MEMBER,
		ENUM_COMPRESSION_MEMBER,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcStructuralCurveMemberTypeEnum();
	IfcStructuralCurveMemberTypeEnum( IfcStructuralCurveMemberTypeEnumEnum e ) { m_enum = e; }
	~IfcStructuralCurveMemberTypeEnum();
	virtual const char* className() const { return "IfcStructuralCurveMemberTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcStructuralCurveMemberTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcStructuralCurveMemberTypeEnumEnum m_enum;
};

