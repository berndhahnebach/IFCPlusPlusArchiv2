/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcSpecificHeatCapacityMeasure.h"

// TYPE IfcSpecificHeatCapacityMeasure = REAL;
IfcSpecificHeatCapacityMeasure::IfcSpecificHeatCapacityMeasure() {}
IfcSpecificHeatCapacityMeasure::IfcSpecificHeatCapacityMeasure( double value ) { m_value = value; }
IfcSpecificHeatCapacityMeasure::~IfcSpecificHeatCapacityMeasure() {}
shared_ptr<IfcPPObject> IfcSpecificHeatCapacityMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcSpecificHeatCapacityMeasure> copy_self( new IfcSpecificHeatCapacityMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcSpecificHeatCapacityMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSPECIFICHEATCAPACITYMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSpecificHeatCapacityMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcSpecificHeatCapacityMeasure> IfcSpecificHeatCapacityMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSpecificHeatCapacityMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSpecificHeatCapacityMeasure>(); }
	shared_ptr<IfcSpecificHeatCapacityMeasure> type_object( new IfcSpecificHeatCapacityMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
