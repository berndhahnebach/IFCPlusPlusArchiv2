/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcLightDistributionCurveEnum.h"

// TYPE IfcLightDistributionCurveEnum = ENUMERATION OF	(TYPE_A	,TYPE_B	,TYPE_C	,NOTDEFINED);
IfcLightDistributionCurveEnum::IfcLightDistributionCurveEnum() {}
IfcLightDistributionCurveEnum::~IfcLightDistributionCurveEnum() {}
shared_ptr<IfcPPObject> IfcLightDistributionCurveEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcLightDistributionCurveEnum> copy_self( new IfcLightDistributionCurveEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcLightDistributionCurveEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLIGHTDISTRIBUTIONCURVEENUM("; }
	switch( m_enum )
	{
		case ENUM_TYPE_A:	stream << ".TYPE_A."; break;
		case ENUM_TYPE_B:	stream << ".TYPE_B."; break;
		case ENUM_TYPE_C:	stream << ".TYPE_C."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLightDistributionCurveEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_TYPE_A:	return L"TYPE_A";
		case ENUM_TYPE_B:	return L"TYPE_B";
		case ENUM_TYPE_C:	return L"TYPE_C";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcLightDistributionCurveEnum> IfcLightDistributionCurveEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLightDistributionCurveEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLightDistributionCurveEnum>(); }
	shared_ptr<IfcLightDistributionCurveEnum> type_object( new IfcLightDistributionCurveEnum() );
	if( boost::iequals( arg, L".TYPE_A." ) )
	{
		type_object->m_enum = IfcLightDistributionCurveEnum::ENUM_TYPE_A;
	}
	else if( boost::iequals( arg, L".TYPE_B." ) )
	{
		type_object->m_enum = IfcLightDistributionCurveEnum::ENUM_TYPE_B;
	}
	else if( boost::iequals( arg, L".TYPE_C." ) )
	{
		type_object->m_enum = IfcLightDistributionCurveEnum::ENUM_TYPE_C;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcLightDistributionCurveEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
