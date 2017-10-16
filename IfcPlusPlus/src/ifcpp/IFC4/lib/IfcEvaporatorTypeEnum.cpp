/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcEvaporatorTypeEnum.h"

// TYPE IfcEvaporatorTypeEnum = ENUMERATION OF	(DIRECTEXPANSION	,DIRECTEXPANSIONSHELLANDTUBE	,DIRECTEXPANSIONTUBEINTUBE	,DIRECTEXPANSIONBRAZEDPLATE	,FLOODEDSHELLANDTUBE	,SHELLANDCOIL	,USERDEFINED	,NOTDEFINED);
IfcEvaporatorTypeEnum::IfcEvaporatorTypeEnum() {}
IfcEvaporatorTypeEnum::~IfcEvaporatorTypeEnum() {}
shared_ptr<IfcPPObject> IfcEvaporatorTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcEvaporatorTypeEnum> copy_self( new IfcEvaporatorTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcEvaporatorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCEVAPORATORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_DIRECTEXPANSION:	stream << ".DIRECTEXPANSION."; break;
		case ENUM_DIRECTEXPANSIONSHELLANDTUBE:	stream << ".DIRECTEXPANSIONSHELLANDTUBE."; break;
		case ENUM_DIRECTEXPANSIONTUBEINTUBE:	stream << ".DIRECTEXPANSIONTUBEINTUBE."; break;
		case ENUM_DIRECTEXPANSIONBRAZEDPLATE:	stream << ".DIRECTEXPANSIONBRAZEDPLATE."; break;
		case ENUM_FLOODEDSHELLANDTUBE:	stream << ".FLOODEDSHELLANDTUBE."; break;
		case ENUM_SHELLANDCOIL:	stream << ".SHELLANDCOIL."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcEvaporatorTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_DIRECTEXPANSION:	return L"DIRECTEXPANSION";
		case ENUM_DIRECTEXPANSIONSHELLANDTUBE:	return L"DIRECTEXPANSIONSHELLANDTUBE";
		case ENUM_DIRECTEXPANSIONTUBEINTUBE:	return L"DIRECTEXPANSIONTUBEINTUBE";
		case ENUM_DIRECTEXPANSIONBRAZEDPLATE:	return L"DIRECTEXPANSIONBRAZEDPLATE";
		case ENUM_FLOODEDSHELLANDTUBE:	return L"FLOODEDSHELLANDTUBE";
		case ENUM_SHELLANDCOIL:	return L"SHELLANDCOIL";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcEvaporatorTypeEnum> IfcEvaporatorTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcEvaporatorTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcEvaporatorTypeEnum>(); }
	shared_ptr<IfcEvaporatorTypeEnum> type_object( new IfcEvaporatorTypeEnum() );
	if( boost::iequals( arg, L".DIRECTEXPANSION." ) )
	{
		type_object->m_enum = IfcEvaporatorTypeEnum::ENUM_DIRECTEXPANSION;
	}
	else if( boost::iequals( arg, L".DIRECTEXPANSIONSHELLANDTUBE." ) )
	{
		type_object->m_enum = IfcEvaporatorTypeEnum::ENUM_DIRECTEXPANSIONSHELLANDTUBE;
	}
	else if( boost::iequals( arg, L".DIRECTEXPANSIONTUBEINTUBE." ) )
	{
		type_object->m_enum = IfcEvaporatorTypeEnum::ENUM_DIRECTEXPANSIONTUBEINTUBE;
	}
	else if( boost::iequals( arg, L".DIRECTEXPANSIONBRAZEDPLATE." ) )
	{
		type_object->m_enum = IfcEvaporatorTypeEnum::ENUM_DIRECTEXPANSIONBRAZEDPLATE;
	}
	else if( boost::iequals( arg, L".FLOODEDSHELLANDTUBE." ) )
	{
		type_object->m_enum = IfcEvaporatorTypeEnum::ENUM_FLOODEDSHELLANDTUBE;
	}
	else if( boost::iequals( arg, L".SHELLANDCOIL." ) )
	{
		type_object->m_enum = IfcEvaporatorTypeEnum::ENUM_SHELLANDCOIL;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcEvaporatorTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcEvaporatorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
