/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcLampTypeEnum.h"

// TYPE IfcLampTypeEnum = ENUMERATION OF	(COMPACTFLUORESCENT	,FLUORESCENT	,HALOGEN	,HIGHPRESSUREMERCURY	,HIGHPRESSURESODIUM	,LED	,METALHALIDE	,OLED	,TUNGSTENFILAMENT	,USERDEFINED	,NOTDEFINED);
IfcLampTypeEnum::IfcLampTypeEnum() {}
IfcLampTypeEnum::~IfcLampTypeEnum() {}
shared_ptr<IfcPPObject> IfcLampTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcLampTypeEnum> copy_self( new IfcLampTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcLampTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLAMPTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_COMPACTFLUORESCENT:	stream << ".COMPACTFLUORESCENT."; break;
		case ENUM_FLUORESCENT:	stream << ".FLUORESCENT."; break;
		case ENUM_HALOGEN:	stream << ".HALOGEN."; break;
		case ENUM_HIGHPRESSUREMERCURY:	stream << ".HIGHPRESSUREMERCURY."; break;
		case ENUM_HIGHPRESSURESODIUM:	stream << ".HIGHPRESSURESODIUM."; break;
		case ENUM_LED:	stream << ".LED."; break;
		case ENUM_METALHALIDE:	stream << ".METALHALIDE."; break;
		case ENUM_OLED:	stream << ".OLED."; break;
		case ENUM_TUNGSTENFILAMENT:	stream << ".TUNGSTENFILAMENT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLampTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_COMPACTFLUORESCENT:	return L"COMPACTFLUORESCENT";
		case ENUM_FLUORESCENT:	return L"FLUORESCENT";
		case ENUM_HALOGEN:	return L"HALOGEN";
		case ENUM_HIGHPRESSUREMERCURY:	return L"HIGHPRESSUREMERCURY";
		case ENUM_HIGHPRESSURESODIUM:	return L"HIGHPRESSURESODIUM";
		case ENUM_LED:	return L"LED";
		case ENUM_METALHALIDE:	return L"METALHALIDE";
		case ENUM_OLED:	return L"OLED";
		case ENUM_TUNGSTENFILAMENT:	return L"TUNGSTENFILAMENT";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcLampTypeEnum> IfcLampTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLampTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLampTypeEnum>(); }
	shared_ptr<IfcLampTypeEnum> type_object( new IfcLampTypeEnum() );
	if( boost::iequals( arg, L".COMPACTFLUORESCENT." ) )
	{
		type_object->m_enum = IfcLampTypeEnum::ENUM_COMPACTFLUORESCENT;
	}
	else if( boost::iequals( arg, L".FLUORESCENT." ) )
	{
		type_object->m_enum = IfcLampTypeEnum::ENUM_FLUORESCENT;
	}
	else if( boost::iequals( arg, L".HALOGEN." ) )
	{
		type_object->m_enum = IfcLampTypeEnum::ENUM_HALOGEN;
	}
	else if( boost::iequals( arg, L".HIGHPRESSUREMERCURY." ) )
	{
		type_object->m_enum = IfcLampTypeEnum::ENUM_HIGHPRESSUREMERCURY;
	}
	else if( boost::iequals( arg, L".HIGHPRESSURESODIUM." ) )
	{
		type_object->m_enum = IfcLampTypeEnum::ENUM_HIGHPRESSURESODIUM;
	}
	else if( boost::iequals( arg, L".LED." ) )
	{
		type_object->m_enum = IfcLampTypeEnum::ENUM_LED;
	}
	else if( boost::iequals( arg, L".METALHALIDE." ) )
	{
		type_object->m_enum = IfcLampTypeEnum::ENUM_METALHALIDE;
	}
	else if( boost::iequals( arg, L".OLED." ) )
	{
		type_object->m_enum = IfcLampTypeEnum::ENUM_OLED;
	}
	else if( boost::iequals( arg, L".TUNGSTENFILAMENT." ) )
	{
		type_object->m_enum = IfcLampTypeEnum::ENUM_TUNGSTENFILAMENT;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcLampTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcLampTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
