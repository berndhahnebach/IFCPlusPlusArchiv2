/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcLightEmissionSourceEnum = ENUMERATION OF	(COMPACTFLUORESCENT	,FLUORESCENT	,HIGHPRESSUREMERCURY	,HIGHPRESSURESODIUM	,LIGHTEMITTINGDIODE	,LOWPRESSURESODIUM	,LOWVOLTAGEHALOGEN	,MAINVOLTAGEHALOGEN	,METALHALIDE	,TUNGSTENFILAMENT	,NOTDEFINED);
class IFCPP_EXPORT IfcLightEmissionSourceEnum : virtual public IfcPPObject
{
public:
	enum IfcLightEmissionSourceEnumEnum
	{
		ENUM_COMPACTFLUORESCENT,
		ENUM_FLUORESCENT,
		ENUM_HIGHPRESSUREMERCURY,
		ENUM_HIGHPRESSURESODIUM,
		ENUM_LIGHTEMITTINGDIODE,
		ENUM_LOWPRESSURESODIUM,
		ENUM_LOWVOLTAGEHALOGEN,
		ENUM_MAINVOLTAGEHALOGEN,
		ENUM_METALHALIDE,
		ENUM_TUNGSTENFILAMENT,
		ENUM_NOTDEFINED
	};

	IfcLightEmissionSourceEnum();
	IfcLightEmissionSourceEnum( IfcLightEmissionSourceEnumEnum e ) { m_enum = e; }
	~IfcLightEmissionSourceEnum();
	virtual const char* className() const { return "IfcLightEmissionSourceEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcLightEmissionSourceEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcLightEmissionSourceEnumEnum m_enum;
};

