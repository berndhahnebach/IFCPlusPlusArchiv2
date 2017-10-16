/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcAnalysisTheoryTypeEnum.h"

// TYPE IfcAnalysisTheoryTypeEnum = ENUMERATION OF	(FIRST_ORDER_THEORY	,SECOND_ORDER_THEORY	,THIRD_ORDER_THEORY	,FULL_NONLINEAR_THEORY	,USERDEFINED	,NOTDEFINED);
IfcAnalysisTheoryTypeEnum::IfcAnalysisTheoryTypeEnum() {}
IfcAnalysisTheoryTypeEnum::~IfcAnalysisTheoryTypeEnum() {}
shared_ptr<IfcPPObject> IfcAnalysisTheoryTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcAnalysisTheoryTypeEnum> copy_self( new IfcAnalysisTheoryTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcAnalysisTheoryTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCANALYSISTHEORYTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_FIRST_ORDER_THEORY:	stream << ".FIRST_ORDER_THEORY."; break;
		case ENUM_SECOND_ORDER_THEORY:	stream << ".SECOND_ORDER_THEORY."; break;
		case ENUM_THIRD_ORDER_THEORY:	stream << ".THIRD_ORDER_THEORY."; break;
		case ENUM_FULL_NONLINEAR_THEORY:	stream << ".FULL_NONLINEAR_THEORY."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcAnalysisTheoryTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_FIRST_ORDER_THEORY:	return L"FIRST_ORDER_THEORY";
		case ENUM_SECOND_ORDER_THEORY:	return L"SECOND_ORDER_THEORY";
		case ENUM_THIRD_ORDER_THEORY:	return L"THIRD_ORDER_THEORY";
		case ENUM_FULL_NONLINEAR_THEORY:	return L"FULL_NONLINEAR_THEORY";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcAnalysisTheoryTypeEnum> IfcAnalysisTheoryTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcAnalysisTheoryTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcAnalysisTheoryTypeEnum>(); }
	shared_ptr<IfcAnalysisTheoryTypeEnum> type_object( new IfcAnalysisTheoryTypeEnum() );
	if( boost::iequals( arg, L".FIRST_ORDER_THEORY." ) )
	{
		type_object->m_enum = IfcAnalysisTheoryTypeEnum::ENUM_FIRST_ORDER_THEORY;
	}
	else if( boost::iequals( arg, L".SECOND_ORDER_THEORY." ) )
	{
		type_object->m_enum = IfcAnalysisTheoryTypeEnum::ENUM_SECOND_ORDER_THEORY;
	}
	else if( boost::iequals( arg, L".THIRD_ORDER_THEORY." ) )
	{
		type_object->m_enum = IfcAnalysisTheoryTypeEnum::ENUM_THIRD_ORDER_THEORY;
	}
	else if( boost::iequals( arg, L".FULL_NONLINEAR_THEORY." ) )
	{
		type_object->m_enum = IfcAnalysisTheoryTypeEnum::ENUM_FULL_NONLINEAR_THEORY;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcAnalysisTheoryTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcAnalysisTheoryTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
