/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcElectricTimeControlTypeEnum.h"

// TYPE IfcElectricTimeControlTypeEnum = ENUMERATION OF	(TIMECLOCK	,TIMEDELAY	,RELAY	,USERDEFINED	,NOTDEFINED);
IfcElectricTimeControlTypeEnum::IfcElectricTimeControlTypeEnum() {}
IfcElectricTimeControlTypeEnum::~IfcElectricTimeControlTypeEnum() {}
shared_ptr<IfcPPObject> IfcElectricTimeControlTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcElectricTimeControlTypeEnum> copy_self( new IfcElectricTimeControlTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcElectricTimeControlTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCELECTRICTIMECONTROLTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_TIMECLOCK:	stream << ".TIMECLOCK."; break;
		case ENUM_TIMEDELAY:	stream << ".TIMEDELAY."; break;
		case ENUM_RELAY:	stream << ".RELAY."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcElectricTimeControlTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_TIMECLOCK:	return L"TIMECLOCK";
		case ENUM_TIMEDELAY:	return L"TIMEDELAY";
		case ENUM_RELAY:	return L"RELAY";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcElectricTimeControlTypeEnum> IfcElectricTimeControlTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcElectricTimeControlTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcElectricTimeControlTypeEnum>(); }
	shared_ptr<IfcElectricTimeControlTypeEnum> type_object( new IfcElectricTimeControlTypeEnum() );
	if( boost::iequals( arg, L".TIMECLOCK." ) )
	{
		type_object->m_enum = IfcElectricTimeControlTypeEnum::ENUM_TIMECLOCK;
	}
	else if( boost::iequals( arg, L".TIMEDELAY." ) )
	{
		type_object->m_enum = IfcElectricTimeControlTypeEnum::ENUM_TIMEDELAY;
	}
	else if( boost::iequals( arg, L".RELAY." ) )
	{
		type_object->m_enum = IfcElectricTimeControlTypeEnum::ENUM_RELAY;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcElectricTimeControlTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcElectricTimeControlTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
