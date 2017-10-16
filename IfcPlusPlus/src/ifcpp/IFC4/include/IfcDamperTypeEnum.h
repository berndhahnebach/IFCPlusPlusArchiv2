/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcDamperTypeEnum = ENUMERATION OF	(BACKDRAFTDAMPER	,BALANCINGDAMPER	,BLASTDAMPER	,CONTROLDAMPER	,FIREDAMPER	,FIRESMOKEDAMPER	,FUMEHOODEXHAUST	,GRAVITYDAMPER	,GRAVITYRELIEFDAMPER	,RELIEFDAMPER	,SMOKEDAMPER	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcDamperTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcDamperTypeEnumEnum
	{
		ENUM_BACKDRAFTDAMPER,
		ENUM_BALANCINGDAMPER,
		ENUM_BLASTDAMPER,
		ENUM_CONTROLDAMPER,
		ENUM_FIREDAMPER,
		ENUM_FIRESMOKEDAMPER,
		ENUM_FUMEHOODEXHAUST,
		ENUM_GRAVITYDAMPER,
		ENUM_GRAVITYRELIEFDAMPER,
		ENUM_RELIEFDAMPER,
		ENUM_SMOKEDAMPER,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcDamperTypeEnum();
	IfcDamperTypeEnum( IfcDamperTypeEnumEnum e ) { m_enum = e; }
	~IfcDamperTypeEnum();
	virtual const char* className() const { return "IfcDamperTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcDamperTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcDamperTypeEnumEnum m_enum;
};

