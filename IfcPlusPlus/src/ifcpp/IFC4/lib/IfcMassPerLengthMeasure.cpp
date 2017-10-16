/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcMassPerLengthMeasure.h"

// TYPE IfcMassPerLengthMeasure = REAL;
IfcMassPerLengthMeasure::IfcMassPerLengthMeasure() {}
IfcMassPerLengthMeasure::IfcMassPerLengthMeasure( double value ) { m_value = value; }
IfcMassPerLengthMeasure::~IfcMassPerLengthMeasure() {}
shared_ptr<IfcPPObject> IfcMassPerLengthMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcMassPerLengthMeasure> copy_self( new IfcMassPerLengthMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcMassPerLengthMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMASSPERLENGTHMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcMassPerLengthMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcMassPerLengthMeasure> IfcMassPerLengthMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcMassPerLengthMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcMassPerLengthMeasure>(); }
	shared_ptr<IfcMassPerLengthMeasure> type_object( new IfcMassPerLengthMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
