/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcTendonTypeEnum.h"

// TYPE IfcTendonTypeEnum = ENUMERATION OF	(BAR	,COATED	,STRAND	,WIRE	,USERDEFINED	,NOTDEFINED);
IfcTendonTypeEnum::IfcTendonTypeEnum() {}
IfcTendonTypeEnum::~IfcTendonTypeEnum() {}
shared_ptr<IfcPPObject> IfcTendonTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTendonTypeEnum> copy_self( new IfcTendonTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcTendonTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTENDONTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BAR:	stream << ".BAR."; break;
		case ENUM_COATED:	stream << ".COATED."; break;
		case ENUM_STRAND:	stream << ".STRAND."; break;
		case ENUM_WIRE:	stream << ".WIRE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTendonTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BAR:	return L"BAR";
		case ENUM_COATED:	return L"COATED";
		case ENUM_STRAND:	return L"STRAND";
		case ENUM_WIRE:	return L"WIRE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcTendonTypeEnum> IfcTendonTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTendonTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTendonTypeEnum>(); }
	shared_ptr<IfcTendonTypeEnum> type_object( new IfcTendonTypeEnum() );
	if( boost::iequals( arg, L".BAR." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_BAR;
	}
	else if( boost::iequals( arg, L".COATED." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_COATED;
	}
	else if( boost::iequals( arg, L".STRAND." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_STRAND;
	}
	else if( boost::iequals( arg, L".WIRE." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_WIRE;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcTendonTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
