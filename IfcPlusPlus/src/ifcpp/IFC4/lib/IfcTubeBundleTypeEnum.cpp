/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcTubeBundleTypeEnum.h"

// TYPE IfcTubeBundleTypeEnum = ENUMERATION OF	(FINNED	,USERDEFINED	,NOTDEFINED);
IfcTubeBundleTypeEnum::IfcTubeBundleTypeEnum() {}
IfcTubeBundleTypeEnum::~IfcTubeBundleTypeEnum() {}
shared_ptr<IfcPPObject> IfcTubeBundleTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTubeBundleTypeEnum> copy_self( new IfcTubeBundleTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcTubeBundleTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTUBEBUNDLETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_FINNED:	stream << ".FINNED."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTubeBundleTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_FINNED:	return L"FINNED";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcTubeBundleTypeEnum> IfcTubeBundleTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTubeBundleTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTubeBundleTypeEnum>(); }
	shared_ptr<IfcTubeBundleTypeEnum> type_object( new IfcTubeBundleTypeEnum() );
	if( boost::iequals( arg, L".FINNED." ) )
	{
		type_object->m_enum = IfcTubeBundleTypeEnum::ENUM_FINNED;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcTubeBundleTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcTubeBundleTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
