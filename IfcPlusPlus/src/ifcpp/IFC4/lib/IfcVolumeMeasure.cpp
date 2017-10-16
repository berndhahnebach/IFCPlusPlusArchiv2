/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcVolumeMeasure.h"

// TYPE IfcVolumeMeasure = REAL;
IfcVolumeMeasure::IfcVolumeMeasure() {}
IfcVolumeMeasure::IfcVolumeMeasure( double value ) { m_value = value; }
IfcVolumeMeasure::~IfcVolumeMeasure() {}
shared_ptr<IfcPPObject> IfcVolumeMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcVolumeMeasure> copy_self( new IfcVolumeMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcVolumeMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCVOLUMEMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcVolumeMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcVolumeMeasure> IfcVolumeMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcVolumeMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcVolumeMeasure>(); }
	shared_ptr<IfcVolumeMeasure> type_object( new IfcVolumeMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
