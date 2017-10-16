/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcConstraintEnum.h"

// TYPE IfcConstraintEnum = ENUMERATION OF	(HARD	,SOFT	,ADVISORY	,USERDEFINED	,NOTDEFINED);
IfcConstraintEnum::IfcConstraintEnum() {}
IfcConstraintEnum::~IfcConstraintEnum() {}
shared_ptr<IfcPPObject> IfcConstraintEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcConstraintEnum> copy_self( new IfcConstraintEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcConstraintEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCONSTRAINTENUM("; }
	switch( m_enum )
	{
		case ENUM_HARD:	stream << ".HARD."; break;
		case ENUM_SOFT:	stream << ".SOFT."; break;
		case ENUM_ADVISORY:	stream << ".ADVISORY."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcConstraintEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_HARD:	return L"HARD";
		case ENUM_SOFT:	return L"SOFT";
		case ENUM_ADVISORY:	return L"ADVISORY";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcConstraintEnum> IfcConstraintEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcConstraintEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcConstraintEnum>(); }
	shared_ptr<IfcConstraintEnum> type_object( new IfcConstraintEnum() );
	if( boost::iequals( arg, L".HARD." ) )
	{
		type_object->m_enum = IfcConstraintEnum::ENUM_HARD;
	}
	else if( boost::iequals( arg, L".SOFT." ) )
	{
		type_object->m_enum = IfcConstraintEnum::ENUM_SOFT;
	}
	else if( boost::iequals( arg, L".ADVISORY." ) )
	{
		type_object->m_enum = IfcConstraintEnum::ENUM_ADVISORY;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcConstraintEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcConstraintEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
