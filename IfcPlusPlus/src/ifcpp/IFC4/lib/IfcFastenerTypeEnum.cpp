/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcFastenerTypeEnum.h"

// TYPE IfcFastenerTypeEnum = ENUMERATION OF	(GLUE	,MORTAR	,WELD	,USERDEFINED	,NOTDEFINED);
IfcFastenerTypeEnum::IfcFastenerTypeEnum() {}
IfcFastenerTypeEnum::~IfcFastenerTypeEnum() {}
shared_ptr<IfcPPObject> IfcFastenerTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcFastenerTypeEnum> copy_self( new IfcFastenerTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcFastenerTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFASTENERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_GLUE:	stream << ".GLUE."; break;
		case ENUM_MORTAR:	stream << ".MORTAR."; break;
		case ENUM_WELD:	stream << ".WELD."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcFastenerTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_GLUE:	return L"GLUE";
		case ENUM_MORTAR:	return L"MORTAR";
		case ENUM_WELD:	return L"WELD";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcFastenerTypeEnum> IfcFastenerTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFastenerTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFastenerTypeEnum>(); }
	shared_ptr<IfcFastenerTypeEnum> type_object( new IfcFastenerTypeEnum() );
	if( boost::iequals( arg, L".GLUE." ) )
	{
		type_object->m_enum = IfcFastenerTypeEnum::ENUM_GLUE;
	}
	else if( boost::iequals( arg, L".MORTAR." ) )
	{
		type_object->m_enum = IfcFastenerTypeEnum::ENUM_MORTAR;
	}
	else if( boost::iequals( arg, L".WELD." ) )
	{
		type_object->m_enum = IfcFastenerTypeEnum::ENUM_WELD;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcFastenerTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcFastenerTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
