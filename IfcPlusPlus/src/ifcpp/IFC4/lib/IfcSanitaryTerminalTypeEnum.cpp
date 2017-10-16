/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcSanitaryTerminalTypeEnum.h"

// TYPE IfcSanitaryTerminalTypeEnum = ENUMERATION OF	(BATH	,BIDET	,CISTERN	,SHOWER	,SINK	,SANITARYFOUNTAIN	,TOILETPAN	,URINAL	,WASHHANDBASIN	,WCSEAT	,USERDEFINED	,NOTDEFINED);
IfcSanitaryTerminalTypeEnum::IfcSanitaryTerminalTypeEnum() {}
IfcSanitaryTerminalTypeEnum::~IfcSanitaryTerminalTypeEnum() {}
shared_ptr<IfcPPObject> IfcSanitaryTerminalTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcSanitaryTerminalTypeEnum> copy_self( new IfcSanitaryTerminalTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcSanitaryTerminalTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSANITARYTERMINALTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BATH:	stream << ".BATH."; break;
		case ENUM_BIDET:	stream << ".BIDET."; break;
		case ENUM_CISTERN:	stream << ".CISTERN."; break;
		case ENUM_SHOWER:	stream << ".SHOWER."; break;
		case ENUM_SINK:	stream << ".SINK."; break;
		case ENUM_SANITARYFOUNTAIN:	stream << ".SANITARYFOUNTAIN."; break;
		case ENUM_TOILETPAN:	stream << ".TOILETPAN."; break;
		case ENUM_URINAL:	stream << ".URINAL."; break;
		case ENUM_WASHHANDBASIN:	stream << ".WASHHANDBASIN."; break;
		case ENUM_WCSEAT:	stream << ".WCSEAT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSanitaryTerminalTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BATH:	return L"BATH";
		case ENUM_BIDET:	return L"BIDET";
		case ENUM_CISTERN:	return L"CISTERN";
		case ENUM_SHOWER:	return L"SHOWER";
		case ENUM_SINK:	return L"SINK";
		case ENUM_SANITARYFOUNTAIN:	return L"SANITARYFOUNTAIN";
		case ENUM_TOILETPAN:	return L"TOILETPAN";
		case ENUM_URINAL:	return L"URINAL";
		case ENUM_WASHHANDBASIN:	return L"WASHHANDBASIN";
		case ENUM_WCSEAT:	return L"WCSEAT";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcSanitaryTerminalTypeEnum> IfcSanitaryTerminalTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSanitaryTerminalTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSanitaryTerminalTypeEnum>(); }
	shared_ptr<IfcSanitaryTerminalTypeEnum> type_object( new IfcSanitaryTerminalTypeEnum() );
	if( boost::iequals( arg, L".BATH." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_BATH;
	}
	else if( boost::iequals( arg, L".BIDET." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_BIDET;
	}
	else if( boost::iequals( arg, L".CISTERN." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_CISTERN;
	}
	else if( boost::iequals( arg, L".SHOWER." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_SHOWER;
	}
	else if( boost::iequals( arg, L".SINK." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_SINK;
	}
	else if( boost::iequals( arg, L".SANITARYFOUNTAIN." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_SANITARYFOUNTAIN;
	}
	else if( boost::iequals( arg, L".TOILETPAN." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_TOILETPAN;
	}
	else if( boost::iequals( arg, L".URINAL." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_URINAL;
	}
	else if( boost::iequals( arg, L".WASHHANDBASIN." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_WASHHANDBASIN;
	}
	else if( boost::iequals( arg, L".WCSEAT." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_WCSEAT;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
