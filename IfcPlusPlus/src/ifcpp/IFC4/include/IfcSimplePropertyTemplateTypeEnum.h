/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcSimplePropertyTemplateTypeEnum = ENUMERATION OF	(P_SINGLEVALUE	,P_ENUMERATEDVALUE	,P_BOUNDEDVALUE	,P_LISTVALUE	,P_TABLEVALUE	,P_REFERENCEVALUE	,Q_LENGTH	,Q_AREA	,Q_VOLUME	,Q_COUNT	,Q_WEIGHT	,Q_TIME);
class IFCPP_EXPORT IfcSimplePropertyTemplateTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcSimplePropertyTemplateTypeEnumEnum
	{
		ENUM_P_SINGLEVALUE,
		ENUM_P_ENUMERATEDVALUE,
		ENUM_P_BOUNDEDVALUE,
		ENUM_P_LISTVALUE,
		ENUM_P_TABLEVALUE,
		ENUM_P_REFERENCEVALUE,
		ENUM_Q_LENGTH,
		ENUM_Q_AREA,
		ENUM_Q_VOLUME,
		ENUM_Q_COUNT,
		ENUM_Q_WEIGHT,
		ENUM_Q_TIME
	};

	IfcSimplePropertyTemplateTypeEnum();
	IfcSimplePropertyTemplateTypeEnum( IfcSimplePropertyTemplateTypeEnumEnum e ) { m_enum = e; }
	~IfcSimplePropertyTemplateTypeEnum();
	virtual const char* className() const { return "IfcSimplePropertyTemplateTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSimplePropertyTemplateTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcSimplePropertyTemplateTypeEnumEnum m_enum;
};

