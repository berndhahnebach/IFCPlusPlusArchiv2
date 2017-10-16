/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcObjectiveEnum.h"

// TYPE IfcObjectiveEnum = ENUMERATION OF	(CODECOMPLIANCE	,CODEWAIVER	,DESIGNINTENT	,EXTERNAL	,HEALTHANDSAFETY	,MERGECONFLICT	,MODELVIEW	,PARAMETER	,REQUIREMENT	,SPECIFICATION	,TRIGGERCONDITION	,USERDEFINED	,NOTDEFINED);
IfcObjectiveEnum::IfcObjectiveEnum() {}
IfcObjectiveEnum::~IfcObjectiveEnum() {}
shared_ptr<IfcPPObject> IfcObjectiveEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcObjectiveEnum> copy_self( new IfcObjectiveEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcObjectiveEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCOBJECTIVEENUM("; }
	switch( m_enum )
	{
		case ENUM_CODECOMPLIANCE:	stream << ".CODECOMPLIANCE."; break;
		case ENUM_CODEWAIVER:	stream << ".CODEWAIVER."; break;
		case ENUM_DESIGNINTENT:	stream << ".DESIGNINTENT."; break;
		case ENUM_EXTERNAL:	stream << ".EXTERNAL."; break;
		case ENUM_HEALTHANDSAFETY:	stream << ".HEALTHANDSAFETY."; break;
		case ENUM_MERGECONFLICT:	stream << ".MERGECONFLICT."; break;
		case ENUM_MODELVIEW:	stream << ".MODELVIEW."; break;
		case ENUM_PARAMETER:	stream << ".PARAMETER."; break;
		case ENUM_REQUIREMENT:	stream << ".REQUIREMENT."; break;
		case ENUM_SPECIFICATION:	stream << ".SPECIFICATION."; break;
		case ENUM_TRIGGERCONDITION:	stream << ".TRIGGERCONDITION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcObjectiveEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CODECOMPLIANCE:	return L"CODECOMPLIANCE";
		case ENUM_CODEWAIVER:	return L"CODEWAIVER";
		case ENUM_DESIGNINTENT:	return L"DESIGNINTENT";
		case ENUM_EXTERNAL:	return L"EXTERNAL";
		case ENUM_HEALTHANDSAFETY:	return L"HEALTHANDSAFETY";
		case ENUM_MERGECONFLICT:	return L"MERGECONFLICT";
		case ENUM_MODELVIEW:	return L"MODELVIEW";
		case ENUM_PARAMETER:	return L"PARAMETER";
		case ENUM_REQUIREMENT:	return L"REQUIREMENT";
		case ENUM_SPECIFICATION:	return L"SPECIFICATION";
		case ENUM_TRIGGERCONDITION:	return L"TRIGGERCONDITION";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcObjectiveEnum> IfcObjectiveEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcObjectiveEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcObjectiveEnum>(); }
	shared_ptr<IfcObjectiveEnum> type_object( new IfcObjectiveEnum() );
	if( boost::iequals( arg, L".CODECOMPLIANCE." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_CODECOMPLIANCE;
	}
	else if( boost::iequals( arg, L".CODEWAIVER." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_CODEWAIVER;
	}
	else if( boost::iequals( arg, L".DESIGNINTENT." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_DESIGNINTENT;
	}
	else if( boost::iequals( arg, L".EXTERNAL." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_EXTERNAL;
	}
	else if( boost::iequals( arg, L".HEALTHANDSAFETY." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_HEALTHANDSAFETY;
	}
	else if( boost::iequals( arg, L".MERGECONFLICT." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_MERGECONFLICT;
	}
	else if( boost::iequals( arg, L".MODELVIEW." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_MODELVIEW;
	}
	else if( boost::iequals( arg, L".PARAMETER." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_PARAMETER;
	}
	else if( boost::iequals( arg, L".REQUIREMENT." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_REQUIREMENT;
	}
	else if( boost::iequals( arg, L".SPECIFICATION." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_SPECIFICATION;
	}
	else if( boost::iequals( arg, L".TRIGGERCONDITION." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_TRIGGERCONDITION;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcObjectiveEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
