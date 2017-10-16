/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcArithmeticOperatorEnum.h"

// TYPE IfcArithmeticOperatorEnum = ENUMERATION OF	(ADD	,DIVIDE	,MULTIPLY	,SUBTRACT);
IfcArithmeticOperatorEnum::IfcArithmeticOperatorEnum() {}
IfcArithmeticOperatorEnum::~IfcArithmeticOperatorEnum() {}
shared_ptr<IfcPPObject> IfcArithmeticOperatorEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcArithmeticOperatorEnum> copy_self( new IfcArithmeticOperatorEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcArithmeticOperatorEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCARITHMETICOPERATORENUM("; }
	switch( m_enum )
	{
		case ENUM_ADD:	stream << ".ADD."; break;
		case ENUM_DIVIDE:	stream << ".DIVIDE."; break;
		case ENUM_MULTIPLY:	stream << ".MULTIPLY."; break;
		case ENUM_SUBTRACT:	stream << ".SUBTRACT."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcArithmeticOperatorEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ADD:	return L"ADD";
		case ENUM_DIVIDE:	return L"DIVIDE";
		case ENUM_MULTIPLY:	return L"MULTIPLY";
		case ENUM_SUBTRACT:	return L"SUBTRACT";
	}
	return L"";
}
shared_ptr<IfcArithmeticOperatorEnum> IfcArithmeticOperatorEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcArithmeticOperatorEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcArithmeticOperatorEnum>(); }
	shared_ptr<IfcArithmeticOperatorEnum> type_object( new IfcArithmeticOperatorEnum() );
	if( boost::iequals( arg, L".ADD." ) )
	{
		type_object->m_enum = IfcArithmeticOperatorEnum::ENUM_ADD;
	}
	else if( boost::iequals( arg, L".DIVIDE." ) )
	{
		type_object->m_enum = IfcArithmeticOperatorEnum::ENUM_DIVIDE;
	}
	else if( boost::iequals( arg, L".MULTIPLY." ) )
	{
		type_object->m_enum = IfcArithmeticOperatorEnum::ENUM_MULTIPLY;
	}
	else if( boost::iequals( arg, L".SUBTRACT." ) )
	{
		type_object->m_enum = IfcArithmeticOperatorEnum::ENUM_SUBTRACT;
	}
	return type_object;
}
