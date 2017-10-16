/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcPhysicalOrVirtualEnum.h"

// TYPE IfcPhysicalOrVirtualEnum = ENUMERATION OF	(PHYSICAL	,VIRTUAL	,NOTDEFINED);
IfcPhysicalOrVirtualEnum::IfcPhysicalOrVirtualEnum() {}
IfcPhysicalOrVirtualEnum::~IfcPhysicalOrVirtualEnum() {}
shared_ptr<IfcPPObject> IfcPhysicalOrVirtualEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPhysicalOrVirtualEnum> copy_self( new IfcPhysicalOrVirtualEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcPhysicalOrVirtualEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPHYSICALORVIRTUALENUM("; }
	switch( m_enum )
	{
		case ENUM_PHYSICAL:	stream << ".PHYSICAL."; break;
		case ENUM_VIRTUAL:	stream << ".VIRTUAL."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcPhysicalOrVirtualEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_PHYSICAL:	return L"PHYSICAL";
		case ENUM_VIRTUAL:	return L"VIRTUAL";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcPhysicalOrVirtualEnum> IfcPhysicalOrVirtualEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPhysicalOrVirtualEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPhysicalOrVirtualEnum>(); }
	shared_ptr<IfcPhysicalOrVirtualEnum> type_object( new IfcPhysicalOrVirtualEnum() );
	if( boost::iequals( arg, L".PHYSICAL." ) )
	{
		type_object->m_enum = IfcPhysicalOrVirtualEnum::ENUM_PHYSICAL;
	}
	else if( boost::iequals( arg, L".VIRTUAL." ) )
	{
		type_object->m_enum = IfcPhysicalOrVirtualEnum::ENUM_VIRTUAL;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPhysicalOrVirtualEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
