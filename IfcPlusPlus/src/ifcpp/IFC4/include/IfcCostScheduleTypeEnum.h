/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcCostScheduleTypeEnum = ENUMERATION OF	(BUDGET	,COSTPLAN	,ESTIMATE	,TENDER	,PRICEDBILLOFQUANTITIES	,UNPRICEDBILLOFQUANTITIES	,SCHEDULEOFRATES	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcCostScheduleTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcCostScheduleTypeEnumEnum
	{
		ENUM_BUDGET,
		ENUM_COSTPLAN,
		ENUM_ESTIMATE,
		ENUM_TENDER,
		ENUM_PRICEDBILLOFQUANTITIES,
		ENUM_UNPRICEDBILLOFQUANTITIES,
		ENUM_SCHEDULEOFRATES,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcCostScheduleTypeEnum();
	IfcCostScheduleTypeEnum( IfcCostScheduleTypeEnumEnum e ) { m_enum = e; }
	~IfcCostScheduleTypeEnum();
	virtual const char* className() const { return "IfcCostScheduleTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcCostScheduleTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcCostScheduleTypeEnumEnum m_enum;
};

